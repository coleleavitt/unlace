__int64 __fastcall sub_4D6410(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v6; // rax
  size_t v7; // rbp
  __int64 v8; // r15
  unsigned __int64 v9; // r10
  char *v10; // rsi
  __int64 v11; // rax
  size_t v12; // r15
  char *v13; // rbp
  char *v14; // r14
  size_t v15; // rax
  __int64 v16; // r8
  size_t v17; // r15
  unsigned __int64 v18; // r11
  char *v19; // rsi
  __int64 v20; // rax
  unsigned __int64 v21; // [rsp+8h] [rbp-80h]
  unsigned __int64 v22; // [rsp+8h] [rbp-80h]
  unsigned __int64 v23; // [rsp+8h] [rbp-80h]
  unsigned __int64 v24; // [rsp+8h] [rbp-80h]
  __int64 v25; // [rsp+10h] [rbp-78h]
  __int64 v26; // [rsp+10h] [rbp-78h]
  unsigned int v27; // [rsp+1Ch] [rbp-6Ch]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v29; // [rsp+28h] [rbp-60h]
  _BYTE src[10]; // [rsp+3Eh] [rbp-4Ah] BYREF
  unsigned __int64 v31[8]; // [rsp+48h] [rbp-40h] BYREF

  v4 = a1;
  v27 = a3;
  v31[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return 1;
  ptr = nullptr;
  v29 = 0;
  if ( a1 == a2 )
    return 0;
  do
  {
    v12 = *(_QWORD *)(v4 + 40);
    v13 = nullptr;
    v14 = (char *)haystack;
    if ( v12 )
    {
      v14 = (char *)qalloc_or_throw(*(_QWORD *)(v4 + 40));
      v13 = v14;
      memcpy(v14, *(const void **)(v4 + 32), v12);
    }
    if ( !v14 )
    {
      v16 = v29;
      v14 = (char *)&byte_22F0C30;
      v17 = 1;
      v18 = v29 + 1;
      if ( (_QWORD)v29 != -1 )
        goto LABEL_19;
      v16 = -1;
      v14 = (char *)&byte_22F0C30;
      v17 = 1;
LABEL_27:
      *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_7;
    }
    v15 = strlen(v14);
    v16 = v29;
    v17 = v15 + 1;
    v18 = v29 + v15 + 1;
    if ( __CFADD__((_QWORD)v29, v15 + 1) )
    {
      if ( (unsigned __int64)v29 <= 0x7FFFFFFFFFFFFFFELL )
      {
        v18 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_19;
      }
      if ( (_QWORD)v29 == 0x7FFFFFFFFFFFFFFFLL )
        goto LABEL_7;
      goto LABEL_27;
    }
LABEL_19:
    v19 = (char *)ptr;
    v20 = v16;
    if ( *((_QWORD *)&v29 + 1) < v18 )
    {
      v26 = v16;
      v23 = v18;
      ptr = (void *)qvector_reserve(&ptr, ptr, v18, 1);
      v19 = (char *)ptr;
      v16 = v26;
      v20 = v29;
      v18 = v23;
    }
    v25 = v16;
    v22 = v18;
    memset(&v19[v20], 0, v18 - v20);
    v16 = v25;
    *(_QWORD *)&v29 = v22;
LABEL_7:
    memcpy((char *)ptr + v16, v14, v17);
    if ( v13 )
      qfree(v13);
    v6 = pack_dq(src, v31, *(_QWORD *)(v4 + 56)) - (_QWORD)src;
    v7 = v6;
    if ( v6 )
    {
      v8 = v29;
      v9 = v29 + v6;
      if ( __CFADD__((_QWORD)v29, v6) )
      {
        if ( (unsigned __int64)v29 <= 0x7FFFFFFFFFFFFFFELL )
        {
          v10 = (char *)ptr;
          v11 = v29;
          v9 = 0x7FFFFFFFFFFFFFFFLL;
          if ( *((_QWORD *)&v29 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
            goto LABEL_35;
          goto LABEL_12;
        }
        if ( (_QWORD)v29 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v29 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v10 = (char *)ptr;
        v11 = v29;
        if ( *((_QWORD *)&v29 + 1) >= v9 )
          goto LABEL_12;
LABEL_35:
        v24 = v9;
        ptr = (void *)qvector_reserve(&ptr, v10, v9, 1);
        v10 = (char *)ptr;
        v9 = v24;
        v11 = v29;
LABEL_12:
        v21 = v9;
        memset(&v10[v11], 0, v9 - v11);
        *(_QWORD *)&v29 = v21;
      }
      memcpy((char *)ptr + v8, src, v7);
    }
    v4 = std::_Rb_tree_increment(v4);
  }
  while ( v4 != a2 );
  if ( (_QWORD)v29 )
  {
    add_undo_record(v27, ptr, v29);
    if ( ptr )
    {
      *(_QWORD *)&v29 = 0;
      qfree(ptr);
    }
    return 1;
  }
  if ( ptr )
    qfree(ptr);
  return 0;
}

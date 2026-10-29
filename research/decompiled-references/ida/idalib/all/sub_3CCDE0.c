__int64 __fastcall sub_3CCDE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbp
  char *v6; // rsi
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rax
  size_t v10; // r8
  __int64 v11; // r9
  unsigned __int64 v12; // r10
  char *v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  size_t v16; // r13
  size_t v17; // r8
  unsigned __int64 v18; // r9
  char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  size_t v22; // r13
  size_t v23; // r8
  unsigned __int64 v24; // r9
  char *v25; // [rsp+8h] [rbp-90h]
  unsigned __int64 v26; // [rsp+10h] [rbp-88h]
  size_t n; // [rsp+18h] [rbp-80h]
  __int64 v28; // [rsp+20h] [rbp-78h]
  unsigned int v29; // [rsp+2Ch] [rbp-6Ch]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v31; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+4Eh] [rbp-4Ah] BYREF
  char v33; // [rsp+53h] [rbp-45h] BYREF
  _QWORD v34[8]; // [rsp+58h] [rbp-40h] BYREF

  v4 = a1;
  v29 = a3;
  v34[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return 1;
  ptr = nullptr;
  v31 = 0;
  if ( a1 == a2 )
    return 0;
  v25 = &v33;
  do
  {
    v21 = pack_dq(src, v34, *(_QWORD *)(v4 + 32)) - (_QWORD)src;
    v22 = v21;
    if ( v21 )
    {
      v23 = v31;
      v24 = v31 + v21;
      if ( __CFADD__((_QWORD)v31, v21) )
      {
        if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
          memcpy((char *)ptr + v23, src, v22);
          goto LABEL_9;
        }
        v24 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v6 = (char *)ptr;
      v7 = v31;
      if ( *((_QWORD *)&v31 + 1) < v24 )
      {
        n = v31;
        v26 = v24;
        ptr = (void *)qvector_reserve(&ptr, ptr, v24, 1);
        v6 = (char *)ptr;
        v23 = n;
        v7 = v31;
        v24 = v26;
      }
      n = v23;
      v26 = v24;
      memset(&v6[v7], 0, v24 - v7);
      v23 = n;
      *(_QWORD *)&v31 = v26;
      goto LABEL_8;
    }
LABEL_9:
    v8 = *(_DWORD *)(v4 + 48);
    v9 = pack_dq(src, v34, *(_QWORD *)(v4 + 40)) - (_QWORD)src;
    v10 = v9;
    if ( !v9 )
      goto LABEL_15;
    v11 = v31;
    v12 = v31 + v9;
    if ( __CFADD__((_QWORD)v31, v9) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_14;
      }
      v12 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v13 = (char *)ptr;
    v14 = v31;
    if ( *((_QWORD *)&v31 + 1) < v12 )
    {
      v28 = v31;
      n = v10;
      v26 = v12;
      ptr = (void *)qvector_reserve(&ptr, ptr, v12, 1);
      v13 = (char *)ptr;
      v11 = v28;
      v14 = v31;
      v10 = n;
      v12 = v26;
    }
    v28 = v11;
    n = v10;
    v26 = v12;
    memset(&v13[v14], 0, v12 - v14);
    v10 = n;
    v11 = v28;
    *(_QWORD *)&v31 = v26;
LABEL_14:
    memcpy((char *)ptr + v11, src, v10);
LABEL_15:
    v15 = pack_dd(src, v25, v8) - (_QWORD)src;
    v16 = v15;
    if ( !v15 )
      goto LABEL_20;
    v17 = v31;
    v18 = v31 + v15;
    if ( __CFADD__((_QWORD)v31, v15) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_19;
      }
      v19 = (char *)ptr;
      v20 = v31;
      v18 = 0x7FFFFFFFFFFFFFFFLL;
      if ( *((_QWORD *)&v31 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
      {
LABEL_39:
        n = v31;
        v26 = v18;
        ptr = (void *)qvector_reserve(&ptr, v19, v18, 1);
        v19 = (char *)ptr;
        v17 = n;
        v20 = v31;
        v18 = v26;
      }
    }
    else
    {
      v19 = (char *)ptr;
      v20 = v31;
      if ( *((_QWORD *)&v31 + 1) < v18 )
        goto LABEL_39;
    }
    n = v17;
    v26 = v18;
    memset(&v19[v20], 0, v18 - v20);
    v17 = n;
    *(_QWORD *)&v31 = v26;
LABEL_19:
    memcpy((char *)ptr + v17, src, v16);
LABEL_20:
    v4 = std::_Rb_tree_increment(v4);
  }
  while ( v4 != a2 );
  if ( (_QWORD)v31 )
  {
    add_undo_record(v29, ptr, v31);
    if ( ptr )
    {
      *(_QWORD *)&v31 = 0;
      qfree(ptr);
    }
    return 1;
  }
  if ( ptr )
    qfree(ptr);
  return 0;
}

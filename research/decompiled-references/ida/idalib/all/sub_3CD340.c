__int64 __fastcall sub_3CD340(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  char *v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  size_t v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  size_t v16; // r8
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // [rsp+0h] [rbp-88h]
  size_t n; // [rsp+8h] [rbp-80h]
  __int64 v20; // [rsp+10h] [rbp-78h]
  unsigned int v21; // [rsp+1Ch] [rbp-6Ch]
  void *ptr; // [rsp+20h] [rbp-68h] BYREF
  __int128 v23; // [rsp+28h] [rbp-60h]
  _BYTE src[5]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _BYTE v25[5]; // [rsp+43h] [rbp-45h] BYREF
  unsigned __int64 v26[8]; // [rsp+48h] [rbp-40h] BYREF

  v4 = a1;
  v21 = a3;
  v26[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return 1;
  ptr = nullptr;
  v23 = 0;
  if ( a1 == a2 )
    return 0;
  do
  {
    v14 = pack_dq(src, v26, *(_QWORD *)(v4 + 32)) - (_QWORD)src;
    v16 = v14;
    if ( v14 )
    {
      v15 = v23;
      v17 = v23 + v14;
      if ( __CFADD__((_QWORD)v23, v14) )
      {
        if ( (unsigned __int64)v23 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v23 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v23 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
          memcpy((char *)ptr + v15, src, v16);
          goto LABEL_9;
        }
        v17 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v6 = (char *)ptr;
      v7 = v23;
      if ( *((_QWORD *)&v23 + 1) < v17 )
      {
        v20 = v23;
        n = v16;
        v18 = v17;
        ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
        v6 = (char *)ptr;
        v15 = v20;
        v7 = v23;
        v16 = n;
        v17 = v18;
      }
      v20 = v15;
      n = v16;
      v18 = v17;
      memset(&v6[v7], 0, v17 - v7);
      v16 = n;
      v15 = v20;
      *(_QWORD *)&v23 = v18;
      goto LABEL_8;
    }
LABEL_9:
    v8 = pack_dd(src, v25, *(unsigned int *)(v4 + 40)) - (_QWORD)src;
    v9 = v8;
    if ( !v8 )
      goto LABEL_14;
    v10 = v23;
    v11 = v23 + v8;
    if ( __CFADD__((_QWORD)v23, v8) )
    {
      if ( (unsigned __int64)v23 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v23 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v23 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_13;
      }
      v12 = (char *)ptr;
      v13 = v23;
      v11 = 0x7FFFFFFFFFFFFFFFLL;
      if ( *((_QWORD *)&v23 + 1) < 0x7FFFFFFFFFFFFFFFuLL )
      {
LABEL_30:
        v20 = v23;
        n = v9;
        v18 = v11;
        ptr = (void *)qvector_reserve(&ptr, v12, v11, 1);
        v12 = (char *)ptr;
        v10 = v20;
        v13 = v23;
        v9 = n;
        v11 = v18;
      }
    }
    else
    {
      v12 = (char *)ptr;
      v13 = v23;
      if ( *((_QWORD *)&v23 + 1) < v11 )
        goto LABEL_30;
    }
    v20 = v10;
    n = v9;
    v18 = v11;
    memset(&v12[v13], 0, v11 - v13);
    v9 = n;
    v10 = v20;
    *(_QWORD *)&v23 = v18;
LABEL_13:
    memcpy((char *)ptr + v10, src, v9);
LABEL_14:
    v4 = std::_Rb_tree_increment(v4);
  }
  while ( v4 != a2 );
  if ( (_QWORD)v23 )
  {
    add_undo_record(v21, ptr, v23);
    if ( ptr )
    {
      *(_QWORD *)&v23 = 0;
      qfree(ptr);
    }
    return 1;
  }
  if ( ptr )
    qfree(ptr);
  return 0;
}

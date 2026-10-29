unsigned __int64 __fastcall sub_60E260(unsigned int a1, const void *a2, const void *a3, size_t a4)
{
  __int64 v7; // rax
  size_t v8; // rbp
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  __int64 v11; // rax
  _BYTE *v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r14
  __int64 v15; // rbp
  unsigned __int64 v16; // r13
  char *v17; // rsi
  __int64 v18; // rax
  char *v20; // rsi
  __int64 v21; // rax
  char *v22; // rsi
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // [rsp+0h] [rbp-70h]
  void *ptr; // [rsp+8h] [rbp-68h] BYREF
  __int128 v26; // [rsp+10h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Bh] [rbp-45h] BYREF
  unsigned __int64 v28[8]; // [rsp+30h] [rbp-40h] BYREF

  v28[0] = __readfsqword(0x28u);
  ptr = nullptr;
  v26 = 0;
  v7 = pack_dd(src, v28, a1) - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v26;
    v10 = v26 + v7;
    if ( __CFADD__((_QWORD)v26, v7) )
    {
      if ( (unsigned __int64)v26 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v26 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v26 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
        memcpy((char *)ptr + v9, src, v8);
        goto LABEL_7;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v20 = (char *)ptr;
    v21 = v26;
    if ( *((_QWORD *)&v26 + 1) < v10 )
    {
      v24 = v10;
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v20 = (char *)ptr;
      v10 = v24;
      v21 = v26;
    }
    v24 = v10;
    memset(&v20[v21], 0, v10 - v21);
    *(_QWORD *)&v26 = v24;
    goto LABEL_6;
  }
LABEL_7:
  v11 = v26;
  v12 = ptr;
  if ( *((_QWORD *)&v26 + 1) < (unsigned __int64)(v26 + 1) )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v26 + 1, 1);
    v12 = ptr;
    v11 = v26;
  }
  v12[v11] = a4;
  v13 = v26 + 1;
  *(_QWORD *)&v26 = v26 + 1;
  if ( a4 )
  {
    v14 = v13 + a4;
    if ( __CFADD__(v13, a4) )
    {
      if ( v13 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v13 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v26 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_14;
      }
      v14 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v22 = (char *)ptr;
    v23 = v13;
    if ( *((_QWORD *)&v26 + 1) < v14 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v14, 1);
      v22 = (char *)ptr;
      v23 = v26;
    }
    memset(&v22[v23], 0, v14 - v23);
    *(_QWORD *)&v26 = v14;
LABEL_14:
    memcpy((char *)ptr + v13, a2, a4);
    v15 = v26;
    v16 = v26 + a4;
    if ( __CFADD__((_QWORD)v26, a4) )
    {
      if ( (unsigned __int64)v26 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v26 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v26 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_21;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v17 = (char *)ptr;
    v18 = v26;
    if ( *((_QWORD *)&v26 + 1) < v16 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
      v17 = (char *)ptr;
      v18 = v26;
    }
    memset(&v17[v18], 0, v16 - v18);
    *(_QWORD *)&v26 = v16;
LABEL_21:
    memcpy((char *)ptr + v15, a3, a4);
    v13 = v26;
  }
  add_undo_record(164, ptr, v13);
  if ( ptr )
  {
    *(_QWORD *)&v26 = 0;
    qfree(ptr);
  }
  return v28[0] - __readfsqword(0x28u);
}


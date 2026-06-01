unsigned __int64 __fastcall sub_3BAF10(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  size_t v7; // r12
  __int64 v8; // r15
  unsigned __int64 v9; // r8
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  size_t v13; // r12
  __int64 v14; // r13
  unsigned __int64 v15; // r15
  char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  size_t v19; // rbp
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  char *v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v26; // [rsp+18h] [rbp-60h]
  _BYTE src[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _QWORD v28[8]; // [rsp+38h] [rbp-40h] BYREF

  v28[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v28[0] - __readfsqword(0x28u);
  v26 = 0;
  ptr = nullptr;
  v6 = pack_dq(src, v28, a1) - (_QWORD)src;
  v7 = v6;
  if ( v6 )
  {
    v8 = v26;
    v9 = v26 + v6;
    if ( __CFADD__((_QWORD)v26, v6) )
    {
      if ( (unsigned __int64)v26 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v26 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v26 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_8;
      }
      v9 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v10 = (char *)ptr;
    v11 = v26;
    if ( *((_QWORD *)&v26 + 1) < v9 )
    {
      v24 = v9;
      ptr = (void *)qvector_reserve(&ptr, ptr, v9, 1);
      v10 = (char *)ptr;
      v9 = v24;
      v11 = v26;
    }
    v24 = v9;
    memset(&v10[v11], 0, v9 - v11);
    *(_QWORD *)&v26 = v24;
LABEL_8:
    memcpy((char *)ptr + v8, src, v7);
  }
  v12 = pack_dq(src, v28, a2) - (_QWORD)src;
  v13 = v12;
  if ( !v12 )
    goto LABEL_15;
  v14 = v26;
  v15 = v26 + v12;
  if ( __CFADD__((_QWORD)v26, v12) )
  {
    if ( (unsigned __int64)v26 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v26 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v26 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_14;
    }
    v15 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v16 = (char *)ptr;
  v17 = v26;
  if ( *((_QWORD *)&v26 + 1) < v15 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
    v16 = (char *)ptr;
    v17 = v26;
  }
  memset(&v16[v17], 0, v15 - v17);
  *(_QWORD *)&v26 = v15;
LABEL_14:
  memcpy((char *)ptr + v14, src, v13);
LABEL_15:
  v18 = pack_dq(src, v28, a3) - (_QWORD)src;
  v19 = v18;
  if ( !v18 )
    goto LABEL_21;
  v20 = v26;
  v21 = v26 + v18;
  if ( __CFADD__((_QWORD)v26, v18) )
  {
    if ( (unsigned __int64)v26 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v26 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v26 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_20;
    }
    v21 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v22 = (char *)ptr;
  v23 = v26;
  if ( *((_QWORD *)&v26 + 1) < v21 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v21, 1);
    v22 = (char *)ptr;
    v23 = v26;
  }
  memset(&v22[v23], 0, v21 - v23);
  *(_QWORD *)&v26 = v21;
LABEL_20:
  memcpy((char *)ptr + v20, src, v19);
LABEL_21:
  add_undo_record(163, ptr, v26);
  if ( ptr )
  {
    *(_QWORD *)&v26 = 0;
    qfree(ptr);
  }
  return v28[0] - __readfsqword(0x28u);
}

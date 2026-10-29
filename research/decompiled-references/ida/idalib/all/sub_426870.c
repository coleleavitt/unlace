unsigned __int64 __fastcall sub_426870(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r14d
  __int64 v7; // rax
  size_t v8; // r13
  __int64 v9; // r8
  unsigned __int64 v10; // r9
  char *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rax
  size_t v14; // r14
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  char *v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  size_t v20; // rbp
  __int64 v21; // r13
  unsigned __int64 v22; // r14
  char *v23; // rsi
  __int64 v24; // rax
  unsigned __int64 v25; // [rsp+0h] [rbp-78h]
  __int64 v26; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v28; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _BYTE v30[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v31[8]; // [rsp+38h] [rbp-40h] BYREF

  v31[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 160) == -1 )
    return v31[0] - __readfsqword(0x28u);
  v5 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v31[0] - __readfsqword(0x28u);
  v28 = 0;
  ptr = nullptr;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v28) = 11;
  *(_QWORD *)&v28 = v28 + 1;
  v7 = pack_dq(src, v31, a2) - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v28;
    v10 = v28 + v7;
    if ( __CFADD__((_QWORD)v28, v7) )
    {
      if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v11 = (char *)ptr;
    v12 = v28;
    if ( *((_QWORD *)&v28 + 1) < v10 )
    {
      v26 = v28;
      v25 = v10;
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v11 = (char *)ptr;
      v9 = v26;
      v12 = v28;
      v10 = v25;
    }
    v26 = v9;
    v25 = v10;
    memset(&v11[v12], 0, v10 - v12);
    v9 = v26;
    *(_QWORD *)&v28 = v25;
LABEL_9:
    memcpy((char *)ptr + v9, src, v8);
  }
  v13 = pack_dd(src, v30, v5 & 0xFFFFFFFC) - (_QWORD)src;
  v14 = v13;
  if ( !v13 )
    goto LABEL_16;
  v15 = v28;
  v16 = v28 + v13;
  if ( __CFADD__((_QWORD)v28, v13) )
  {
    if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_15;
    }
    v16 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v17 = (char *)ptr;
  v18 = v28;
  if ( *((_QWORD *)&v28 + 1) < v16 )
  {
    v26 = v28;
    v25 = v16;
    ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
    v17 = (char *)ptr;
    v15 = v26;
    v18 = v28;
    v16 = v25;
  }
  v26 = v15;
  v25 = v16;
  memset(&v17[v18], 0, v16 - v18);
  v15 = v26;
  *(_QWORD *)&v28 = v25;
LABEL_15:
  memcpy((char *)ptr + v15, src, v14);
LABEL_16:
  v19 = pack_dd(src, v30, a4 & 0xFFFFFFFC) - (_QWORD)src;
  v20 = v19;
  if ( !v19 )
    goto LABEL_22;
  v21 = v28;
  v22 = v28 + v19;
  if ( __CFADD__((_QWORD)v28, v19) )
  {
    if ( (unsigned __int64)v28 > 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (_QWORD)v28 != 0x7FFFFFFFFFFFFFFFLL )
        *(_QWORD *)&v28 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_21;
    }
    v22 = 0x7FFFFFFFFFFFFFFFLL;
  }
  v23 = (char *)ptr;
  v24 = v28;
  if ( *((_QWORD *)&v28 + 1) < v22 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v22, 1);
    v23 = (char *)ptr;
    v24 = v28;
  }
  memset(&v23[v24], 0, v22 - v24);
  *(_QWORD *)&v28 = v22;
LABEL_21:
  memcpy((char *)ptr + v21, src, v20);
LABEL_22:
  add_undo_record(*(unsigned int *)(a1 + 160), ptr, v28);
  if ( ptr )
  {
    *(_QWORD *)&v28 = 0;
    qfree(ptr);
  }
  return v31[0] - __readfsqword(0x28u);
}

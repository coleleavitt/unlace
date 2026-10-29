unsigned __int64 __fastcall sub_413210(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  size_t v8; // r15
  __int64 v9; // rbp
  unsigned __int64 v10; // r9
  char *v11; // rsi
  __int64 v12; // rax
  const char *v13; // r13
  size_t v14; // rax
  __int64 v15; // rbp
  __int64 v16; // r15
  unsigned __int64 v17; // r14
  size_t v18; // rdx
  const char *v19; // r15
  size_t v20; // rax
  __int64 v21; // rbp
  size_t v22; // r14
  unsigned __int64 v23; // r12
  char *v24; // rsi
  __int64 v25; // rax
  char *v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+8h] [rbp-70h]
  unsigned __int64 v29; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v31; // [rsp+18h] [rbp-60h]
  _BYTE src[5]; // [rsp+33h] [rbp-45h] BYREF
  unsigned __int64 v33[8]; // [rsp+38h] [rbp-40h] BYREF

  v33[0] = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 156) == -1 || !(unsigned __int8)must_journal(a1, a2, a3) )
    return v33[0] - __readfsqword(0x28u);
  ptr = nullptr;
  v31 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  *((_BYTE *)ptr + v31) = 2;
  *(_QWORD *)&v31 = v31 + 1;
  v7 = pack_dd(src, v33, (unsigned int)a2) - (_QWORD)src;
  v8 = v7;
  if ( v7 )
  {
    v9 = v31;
    v10 = v7 + v31;
    if ( __CFADD__(v7, (_QWORD)v31) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_9;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v11 = (char *)ptr;
    v12 = v31;
    if ( *((_QWORD *)&v31 + 1) < v10 )
    {
      v29 = v10;
      ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
      v11 = (char *)ptr;
      v10 = v29;
      v12 = v31;
    }
    v28 = v10;
    memset(&v11[v12], 0, v10 - v12);
    *(_QWORD *)&v31 = v28;
LABEL_9:
    memcpy((char *)ptr + v9, src, v8);
  }
  v13 = haystack;
  if ( *(_QWORD *)(a3 + 8) )
    v13 = *(const char **)a3;
  if ( v13 )
  {
    v14 = strlen(v13);
    v15 = v31;
    v16 = v14 + 1;
    v17 = v14 + 1 + v31;
    if ( __CFADD__(v14 + 1, (_QWORD)v31) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_17;
        goto LABEL_16;
      }
      v17 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v15 = v31;
    v16 = 1;
    v13 = &byte_22CD811;
    v17 = v31 + 1;
    if ( (_QWORD)v31 == -1 )
    {
      v15 = -1;
      v13 = &byte_22CD811;
LABEL_16:
      *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_17;
    }
  }
  v24 = (char *)ptr;
  v25 = v15;
  if ( *((_QWORD *)&v31 + 1) < v17 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v17, 1);
    v24 = (char *)ptr;
    v25 = v31;
  }
  memset(&v24[v25], 0, v17 - v25);
  *(_QWORD *)&v31 = v17;
LABEL_17:
  v18 = v16;
  v19 = haystack;
  memcpy((char *)ptr + v15, v13, v18);
  if ( *(_QWORD *)(a4 + 8) )
    v19 = *(const char **)a4;
  if ( v19 )
  {
    v20 = strlen(v19);
    v21 = v31;
    v22 = v20 + 1;
    v23 = v31 + v20 + 1;
    if ( __CFADD__((_QWORD)v31, v20 + 1) )
    {
      if ( (unsigned __int64)v31 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v31 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_24;
        goto LABEL_23;
      }
      v23 = 0x7FFFFFFFFFFFFFFFLL;
    }
LABEL_31:
    v26 = (char *)ptr;
    v27 = v21;
    if ( *((_QWORD *)&v31 + 1) < v23 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
      v26 = (char *)ptr;
      v27 = v31;
    }
    memset(&v26[v27], 0, v23 - v27);
    *(_QWORD *)&v31 = v23;
    goto LABEL_24;
  }
  v21 = v31;
  v19 = &byte_22CD811;
  v22 = 1;
  v23 = v31 + 1;
  if ( (_QWORD)v31 != -1 )
    goto LABEL_31;
  v21 = -1;
  v19 = &byte_22CD811;
  v22 = 1;
LABEL_23:
  *(_QWORD *)&v31 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_24:
  memcpy((char *)ptr + v21, v19, v22);
  add_undo_record(*(unsigned int *)(a1 + 156), ptr, v31);
  if ( ptr )
  {
    *(_QWORD *)&v31 = 0;
    qfree(ptr);
  }
  return v33[0] - __readfsqword(0x28u);
}


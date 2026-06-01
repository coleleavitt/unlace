unsigned __int64 __fastcall sub_411CC0(__int64 a1, __int64 a2, __int64 a3)
{
  const char *v5; // r13
  __int64 v6; // r12
  bool v7; // zf
  unsigned __int64 v8; // rbp
  size_t v9; // r15
  unsigned __int64 v10; // r12
  size_t v11; // rdx
  const char *v12; // r15
  size_t v13; // rax
  __int64 v14; // rbp
  size_t v15; // r14
  unsigned __int64 v16; // r12
  char *v17; // rsi
  unsigned __int64 v18; // rax
  char *v19; // rsi
  __int64 v20; // rax
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v22; // [rsp+18h] [rbp-50h]
  unsigned __int64 v23; // [rsp+28h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 156) == -1 || !(unsigned __int8)must_journal(a1, a2, a3) )
    return v23 - __readfsqword(0x28u);
  ptr = nullptr;
  v22 = 0;
  ptr = (void *)qvector_reserve(&ptr, 0, 1, 1);
  v5 = haystack;
  *((_BYTE *)ptr + v22) = 7;
  v6 = v22;
  v7 = *(_QWORD *)(a2 + 8) == 0;
  v8 = v22 + 1;
  *(_QWORD *)&v22 = v22 + 1;
  if ( !v7 )
    v5 = *(const char **)a2;
  if ( v5 )
  {
    v9 = strlen(v5) + 1;
    v10 = v9 + v8;
    if ( __CFADD__(v9, v8) )
    {
      if ( v8 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v8 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_11;
        goto LABEL_10;
      }
      v10 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v10 = v6 + 2;
    v9 = 1;
    v5 = &byte_22CD811;
    if ( v10 < v8 )
    {
      v5 = &byte_22CD811;
      v9 = 1;
LABEL_10:
      *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_11;
    }
  }
  v17 = (char *)ptr;
  v18 = v8;
  if ( *((_QWORD *)&v22 + 1) < v10 )
  {
    ptr = (void *)qvector_reserve(&ptr, ptr, v10, 1);
    v17 = (char *)ptr;
    v18 = v22;
  }
  memset(&v17[v18], 0, v10 - v18);
  *(_QWORD *)&v22 = v10;
LABEL_11:
  v11 = v9;
  v12 = haystack;
  memcpy((char *)ptr + v8, v5, v11);
  if ( *(_QWORD *)(a3 + 8) )
    v12 = *(const char **)a3;
  if ( v12 )
  {
    v13 = strlen(v12);
    v14 = v22;
    v15 = v13 + 1;
    v16 = v13 + 1 + v22;
    if ( __CFADD__(v13 + 1, (_QWORD)v22) )
    {
      if ( (unsigned __int64)v22 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v22 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_18;
        goto LABEL_17;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
LABEL_25:
    v19 = (char *)ptr;
    v20 = v14;
    if ( *((_QWORD *)&v22 + 1) < v16 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
      v19 = (char *)ptr;
      v20 = v22;
    }
    memset(&v19[v20], 0, v16 - v20);
    *(_QWORD *)&v22 = v16;
    goto LABEL_18;
  }
  v14 = v22;
  v12 = &byte_22CD811;
  v15 = 1;
  v16 = v22 + 1;
  if ( (_QWORD)v22 != -1 )
    goto LABEL_25;
  v14 = -1;
  v12 = &byte_22CD811;
  v15 = 1;
LABEL_17:
  *(_QWORD *)&v22 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_18:
  memcpy((char *)ptr + v14, v12, v15);
  add_undo_record(*(unsigned int *)(a1 + 156), ptr, v22);
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  return v23 - __readfsqword(0x28u);
}


unsigned __int64 __fastcall sub_638880(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  size_t v6; // r12
  const char *v7; // r15
  void *v8; // r14
  size_t v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  char *v12; // rsi
  const char *v13; // rsi
  size_t v14; // r12
  char *v15; // r14
  char *v16; // r15
  size_t v17; // rax
  __int64 v18; // r12
  size_t v19; // r8
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // r12
  const void *v23; // rbp
  void *v24; // rdi
  char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+0h] [rbp-68h]
  unsigned __int64 v29; // [rsp+0h] [rbp-68h]
  unsigned __int64 v30; // [rsp+0h] [rbp-68h]
  unsigned __int64 v31; // [rsp+0h] [rbp-68h]
  size_t n; // [rsp+8h] [rbp-60h]
  size_t nb; // [rsp+8h] [rbp-60h]
  size_t nc; // [rsp+8h] [rbp-60h]
  size_t na; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v37; // [rsp+18h] [rbp-50h]
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v5 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_26;
  v6 = a1[1];
  ptr = nullptr;
  v37 = 0;
  if ( !v6 )
  {
    v7 = haystack;
    v8 = nullptr;
    if ( !haystack )
    {
      v7 = &byte_22CD811;
      v10 = 1;
      v12 = nullptr;
      v9 = 1;
      goto LABEL_41;
    }
    v9 = 1;
    v10 = 1;
    goto LABEL_5;
  }
  v8 = (void *)qalloc_or_throw(v6, (const char *)a2);
  memcpy(v8, (const void *)*a1, v6);
  v6 = v37;
  if ( v8 )
  {
    v7 = (const char *)v8;
    v9 = strlen((const char *)v8) + 1;
    v10 = v9 + v37;
  }
  else
  {
    v10 = v37 + 1;
    v9 = 1;
    v7 = &byte_22CD811;
  }
  if ( v10 >= (unsigned __int64)v37 )
  {
LABEL_5:
    v11 = *((_QWORD *)&v37 + 1);
    v12 = (char *)ptr;
    goto LABEL_6;
  }
  if ( (unsigned __int64)v37 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = *((_QWORD *)&v37 + 1);
    v12 = (char *)ptr;
    v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
    if ( v11 >= v10 )
    {
LABEL_7:
      n = v9;
      v28 = v10;
      memset(&v12[v37], 0, v10 - v37);
      v9 = n;
      *(_QWORD *)&v37 = v28;
      goto LABEL_14;
    }
LABEL_41:
    v30 = v10;
    nc = v9;
    ptr = (void *)qvector_reserve(&ptr, v12, v10, 1);
    v9 = nc;
    v12 = (char *)ptr;
    v10 = v30;
    goto LABEL_7;
  }
  if ( (_QWORD)v37 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v37 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
  v13 = v7;
  memcpy((char *)ptr + v6, v7, v9);
  if ( v8 )
    qfree(v8);
  v14 = *(_QWORD *)(a2 + 8);
  v15 = nullptr;
  v16 = (char *)haystack;
  if ( !v14 )
  {
    if ( haystack )
      goto LABEL_18;
LABEL_38:
    v18 = v37;
    v19 = 1;
    v16 = (char *)&byte_22CD811;
    v20 = v37 + 1;
    if ( (_QWORD)v37 == -1 )
    {
      v18 = -1;
      v16 = (char *)&byte_22CD811;
      goto LABEL_21;
    }
LABEL_34:
    v25 = (char *)ptr;
    v26 = v18;
    if ( *((_QWORD *)&v37 + 1) < v20 )
    {
      v31 = v20;
      na = v19;
      ptr = (void *)qvector_reserve(&ptr, ptr, v20, 1);
      v25 = (char *)ptr;
      v19 = na;
      v26 = v37;
      v20 = v31;
    }
    nb = v19;
    v29 = v20;
    memset(&v25[v26], 0, v20 - v26);
    v19 = nb;
    *(_QWORD *)&v37 = v29;
    goto LABEL_22;
  }
  v16 = (char *)qalloc_or_throw(*(_QWORD *)(a2 + 8), v13);
  v15 = v16;
  memcpy(v16, *(const void **)a2, v14);
  if ( !v16 )
    goto LABEL_38;
LABEL_18:
  v17 = strlen(v16);
  v18 = v37;
  v19 = v17 + 1;
  v20 = v17 + 1 + v37;
  if ( !__CFADD__(v17 + 1, (_QWORD)v37) )
    goto LABEL_34;
  if ( (unsigned __int64)v37 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v20 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_34;
  }
  if ( (_QWORD)v37 != 0x7FFFFFFFFFFFFFFFLL )
LABEL_21:
    *(_QWORD *)&v37 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_22:
  memcpy((char *)ptr + v18, v16, v19);
  if ( v15 )
    qfree(v15);
  add_undo_record(v5, ptr, v37);
  if ( ptr )
  {
    *(_QWORD *)&v37 = 0;
    qfree(ptr);
  }
LABEL_26:
  if ( a1 != (__int64 *)a2 )
  {
    v21 = *(_QWORD *)(a2 + 8);
    if ( v21 > 1 )
    {
      v23 = *(const void **)a2;
      v24 = (void *)*a1;
      if ( a1[2] < v21 )
      {
        v27 = qvector_reserve(a1, *a1, v21, 1);
        *a1 = v27;
        v24 = (void *)v27;
      }
      a1[1] = v21;
      memmove(v24, v23, v21 - 1);
      *(_BYTE *)(*a1 + v21 - 1) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  return v38 - __readfsqword(0x28u);
}


unsigned __int64 __fastcall sub_655ED0(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r13d
  size_t v6; // r12
  const char *v7; // r15
  void *v8; // r14
  size_t v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rax
  char *v12; // rsi
  size_t v13; // r12
  char *v14; // r14
  char *v15; // r15
  size_t v16; // rax
  __int64 v17; // r12
  size_t v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // r12
  const void *v22; // rbp
  void *v23; // rdi
  char *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+0h] [rbp-68h]
  unsigned __int64 v28; // [rsp+0h] [rbp-68h]
  unsigned __int64 v29; // [rsp+0h] [rbp-68h]
  unsigned __int64 v30; // [rsp+0h] [rbp-68h]
  size_t n; // [rsp+8h] [rbp-60h]
  size_t nb; // [rsp+8h] [rbp-60h]
  size_t nc; // [rsp+8h] [rbp-60h]
  size_t na; // [rsp+8h] [rbp-60h]
  void *ptr; // [rsp+10h] [rbp-58h] BYREF
  __int128 v36; // [rsp+18h] [rbp-50h]
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v5 = a3;
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    goto LABEL_26;
  v6 = a1[1];
  ptr = nullptr;
  v36 = 0;
  if ( !v6 )
  {
    v7 = haystack;
    v8 = nullptr;
    if ( !haystack )
    {
      v7 = &byte_22F0C30;
      v10 = 1;
      v12 = nullptr;
      v9 = 1;
      goto LABEL_41;
    }
    v9 = 1;
    v10 = 1;
    goto LABEL_5;
  }
  v8 = (void *)qalloc_or_throw(v6);
  memcpy(v8, (const void *)*a1, v6);
  v6 = v36;
  if ( v8 )
  {
    v7 = (const char *)v8;
    v9 = strlen((const char *)v8) + 1;
    v10 = v9 + v36;
  }
  else
  {
    v10 = v36 + 1;
    v9 = 1;
    v7 = &byte_22F0C30;
  }
  if ( v10 >= (unsigned __int64)v36 )
  {
LABEL_5:
    v11 = *((_QWORD *)&v36 + 1);
    v12 = (char *)ptr;
    goto LABEL_6;
  }
  if ( (unsigned __int64)v36 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v11 = *((_QWORD *)&v36 + 1);
    v12 = (char *)ptr;
    v10 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_6:
    if ( v11 >= v10 )
    {
LABEL_7:
      n = v9;
      v27 = v10;
      memset(&v12[v36], 0, v10 - v36);
      v9 = n;
      *(_QWORD *)&v36 = v27;
      goto LABEL_14;
    }
LABEL_41:
    v29 = v10;
    nc = v9;
    ptr = (void *)qvector_reserve(&ptr, v12, v10, 1);
    v9 = nc;
    v12 = (char *)ptr;
    v10 = v29;
    goto LABEL_7;
  }
  if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
    *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_14:
  memcpy((char *)ptr + v6, v7, v9);
  if ( v8 )
    qfree(v8);
  v13 = *(_QWORD *)(a2 + 8);
  v14 = nullptr;
  v15 = (char *)haystack;
  if ( !v13 )
  {
    if ( haystack )
      goto LABEL_18;
LABEL_38:
    v17 = v36;
    v18 = 1;
    v15 = (char *)&byte_22F0C30;
    v19 = v36 + 1;
    if ( (_QWORD)v36 == -1 )
    {
      v17 = -1;
      v15 = (char *)&byte_22F0C30;
      goto LABEL_21;
    }
LABEL_34:
    v24 = (char *)ptr;
    v25 = v17;
    if ( *((_QWORD *)&v36 + 1) < v19 )
    {
      v30 = v19;
      na = v18;
      ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
      v24 = (char *)ptr;
      v18 = na;
      v25 = v36;
      v19 = v30;
    }
    nb = v18;
    v28 = v19;
    memset(&v24[v25], 0, v19 - v25);
    v18 = nb;
    *(_QWORD *)&v36 = v28;
    goto LABEL_22;
  }
  v15 = (char *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
  v14 = v15;
  memcpy(v15, *(const void **)a2, v13);
  if ( !v15 )
    goto LABEL_38;
LABEL_18:
  v16 = strlen(v15);
  v17 = v36;
  v18 = v16 + 1;
  v19 = v16 + 1 + v36;
  if ( !__CFADD__(v16 + 1, (_QWORD)v36) )
    goto LABEL_34;
  if ( (unsigned __int64)v36 <= 0x7FFFFFFFFFFFFFFELL )
  {
    v19 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_34;
  }
  if ( (_QWORD)v36 != 0x7FFFFFFFFFFFFFFFLL )
LABEL_21:
    *(_QWORD *)&v36 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_22:
  memcpy((char *)ptr + v17, v15, v18);
  if ( v14 )
    qfree(v14);
  add_undo_record(v5, ptr, v36);
  if ( ptr )
  {
    *(_QWORD *)&v36 = 0;
    qfree(ptr);
  }
LABEL_26:
  if ( a1 != (__int64 *)a2 )
  {
    v20 = *(_QWORD *)(a2 + 8);
    if ( v20 > 1 )
    {
      v22 = *(const void **)a2;
      v23 = (void *)*a1;
      if ( a1[2] < v20 )
      {
        v26 = qvector_reserve(a1, *a1, v20, 1);
        *a1 = v26;
        v23 = (void *)v26;
      }
      a1[1] = v20;
      memmove(v23, v22, v20 - 1);
      *(_BYTE *)(*a1 + v20 - 1) = 0;
    }
    else
    {
      a1[1] = 0;
    }
  }
  return v37 - __readfsqword(0x28u);
}

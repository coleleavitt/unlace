unsigned __int64 __fastcall sub_58F020(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v7; // rcx
  __int64 v8; // r8
  const char *v10; // rsi
  __int64 v11; // rax
  size_t v12; // r13
  size_t v13; // r14
  char *v14; // r13
  char *v15; // r15
  size_t v16; // rax
  __int64 v17; // rbp
  size_t v18; // r14
  unsigned __int64 v19; // r8
  const char *v20; // rsi
  size_t v21; // rbp
  char *v22; // r13
  char *v23; // r15
  size_t v24; // rax
  __int64 v25; // rbx
  size_t v26; // r14
  unsigned __int64 v27; // rbp
  __int64 v28; // r15
  unsigned __int64 v29; // r8
  char *v30; // rsi
  __int64 v31; // rax
  char *v32; // rsi
  __int64 v33; // rax
  char *v34; // rsi
  __int64 v35; // rax
  unsigned __int64 v36; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v38; // [rsp+18h] [rbp-60h]
  _BYTE src[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  _QWORD v40[8]; // [rsp+38h] [rbp-40h] BYREF

  v40[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v40[0] - __readfsqword(0x28u);
  v10 = (const char *)v40;
  v38 = 0;
  ptr = nullptr;
  v11 = pack_dq(src, v40, a1, v7, v8) - (_QWORD)src;
  v12 = v11;
  if ( v11 )
  {
    v28 = v38;
    v29 = v38 + v11;
    if ( __CFADD__((_QWORD)v38, v11) )
    {
      if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v38 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_25;
      }
      v29 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v30 = (char *)ptr;
    v31 = v38;
    if ( *((_QWORD *)&v38 + 1) < v29 )
    {
      v36 = v29;
      ptr = (void *)qvector_reserve(&ptr, ptr, v29, 1);
      v30 = (char *)ptr;
      v29 = v36;
      v31 = v38;
    }
    v36 = v29;
    memset(&v30[v31], 0, v29 - v31);
    *(_QWORD *)&v38 = v36;
LABEL_25:
    v10 = src;
    memcpy((char *)ptr + v28, src, v12);
  }
  v13 = *(_QWORD *)(a2 + 8);
  v14 = nullptr;
  v15 = (char *)haystack;
  if ( v13 )
  {
    v15 = (char *)qalloc_or_throw(*(_QWORD *)(a2 + 8), v10);
    v14 = v15;
    memcpy(v15, *(const void **)a2, v13);
  }
  if ( v15 )
  {
    v16 = strlen(v15);
    v17 = v38;
    v18 = v16 + 1;
    v19 = v38 + v16 + 1;
    if ( __CFADD__((_QWORD)v38, v16 + 1) )
    {
      if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v38 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_11;
        goto LABEL_10;
      }
      v19 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v17 = v38;
    v15 = (char *)&byte_22CD811;
    v18 = 1;
    v19 = v38 + 1;
    if ( (_QWORD)v38 == -1 )
    {
      v17 = -1;
      v15 = (char *)&byte_22CD811;
      v18 = 1;
LABEL_10:
      *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_11;
    }
  }
  v32 = (char *)ptr;
  v33 = v17;
  if ( *((_QWORD *)&v38 + 1) < v19 )
  {
    v36 = v19;
    ptr = (void *)qvector_reserve(&ptr, ptr, v19, 1);
    v32 = (char *)ptr;
    v19 = v36;
    v33 = v38;
  }
  v36 = v19;
  memset(&v32[v33], 0, v19 - v33);
  *(_QWORD *)&v38 = v36;
LABEL_11:
  v20 = v15;
  memcpy((char *)ptr + v17, v15, v18);
  if ( v14 )
    qfree(v14);
  if ( !a3 )
    goto LABEL_36;
  v21 = *(_QWORD *)(a3 + 8);
  v22 = nullptr;
  v23 = (char *)haystack;
  if ( v21 )
  {
    v23 = (char *)qalloc_or_throw(*(_QWORD *)(a3 + 8), v20);
    v22 = v23;
    memcpy(v23, *(const void **)a3, v21);
  }
  if ( v23 )
  {
    v24 = strlen(v23);
    v25 = v38;
    v26 = v24 + 1;
    v27 = v24 + 1 + v38;
    if ( __CFADD__(v24 + 1, (_QWORD)v38) )
    {
      if ( (unsigned __int64)v38 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v38 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_34;
        goto LABEL_20;
      }
      v27 = 0x7FFFFFFFFFFFFFFFLL;
    }
LABEL_31:
    v34 = (char *)ptr;
    v35 = v25;
    if ( *((_QWORD *)&v38 + 1) < v27 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v27, 1);
      v34 = (char *)ptr;
      v35 = v38;
    }
    memset(&v34[v35], 0, v27 - v35);
    *(_QWORD *)&v38 = v27;
    goto LABEL_34;
  }
  v25 = v38;
  v26 = 1;
  v23 = (char *)&byte_22CD811;
  v27 = v38 + 1;
  if ( (_QWORD)v38 != -1 )
    goto LABEL_31;
  v25 = -1;
  v23 = (char *)&byte_22CD811;
LABEL_20:
  *(_QWORD *)&v38 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_34:
  memcpy((char *)ptr + v25, v23, v26);
  if ( v22 )
    qfree(v22);
LABEL_36:
  add_undo_record(a4, ptr, v38);
  if ( ptr )
  {
    *(_QWORD *)&v38 = 0;
    qfree(ptr);
  }
  return v40[0] - __readfsqword(0x28u);
}


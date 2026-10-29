unsigned __int64 __fastcall sub_5A91E0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v8; // rax
  size_t v9; // r13
  size_t v10; // r14
  char *v11; // r13
  char *v12; // r15
  size_t v13; // rax
  __int64 v14; // rbp
  size_t v15; // r14
  unsigned __int64 v16; // r8
  size_t v17; // rbp
  char *v18; // r13
  char *v19; // r15
  size_t v20; // rax
  __int64 v21; // rbx
  size_t v22; // r14
  unsigned __int64 v23; // rbp
  __int64 v24; // r15
  unsigned __int64 v25; // r8
  char *v26; // rsi
  __int64 v27; // rax
  char *v28; // rsi
  __int64 v29; // rax
  char *v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+8h] [rbp-70h]
  void *ptr; // [rsp+10h] [rbp-68h] BYREF
  __int128 v34; // [rsp+18h] [rbp-60h]
  _BYTE src[10]; // [rsp+2Eh] [rbp-4Ah] BYREF
  unsigned __int64 v36[8]; // [rsp+38h] [rbp-40h] BYREF

  v36[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)must_journal(a1, a2, a3) )
    return v36[0] - __readfsqword(0x28u);
  v34 = 0;
  ptr = nullptr;
  v8 = pack_dq(src, v36, a1) - (_QWORD)src;
  v9 = v8;
  if ( v8 )
  {
    v24 = v34;
    v25 = v34 + v8;
    if ( __CFADD__((_QWORD)v34, v8) )
    {
      if ( (unsigned __int64)v34 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v34 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v34 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_25;
      }
      v25 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v26 = (char *)ptr;
    v27 = v34;
    if ( *((_QWORD *)&v34 + 1) < v25 )
    {
      v32 = v25;
      ptr = (void *)qvector_reserve(&ptr, ptr, v25, 1);
      v26 = (char *)ptr;
      v25 = v32;
      v27 = v34;
    }
    v32 = v25;
    memset(&v26[v27], 0, v25 - v27);
    *(_QWORD *)&v34 = v32;
LABEL_25:
    memcpy((char *)ptr + v24, src, v9);
  }
  v10 = *(_QWORD *)(a2 + 8);
  v11 = nullptr;
  v12 = (char *)haystack;
  if ( v10 )
  {
    v12 = (char *)qalloc_or_throw(*(_QWORD *)(a2 + 8));
    v11 = v12;
    memcpy(v12, *(const void **)a2, v10);
  }
  if ( v12 )
  {
    v13 = strlen(v12);
    v14 = v34;
    v15 = v13 + 1;
    v16 = v34 + v13 + 1;
    if ( __CFADD__((_QWORD)v34, v13 + 1) )
    {
      if ( (unsigned __int64)v34 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v34 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_11;
        goto LABEL_10;
      }
      v16 = 0x7FFFFFFFFFFFFFFFLL;
    }
  }
  else
  {
    v14 = v34;
    v12 = (char *)&byte_22F0C30;
    v15 = 1;
    v16 = v34 + 1;
    if ( (_QWORD)v34 == -1 )
    {
      v14 = -1;
      v12 = (char *)&byte_22F0C30;
      v15 = 1;
LABEL_10:
      *(_QWORD *)&v34 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_11;
    }
  }
  v28 = (char *)ptr;
  v29 = v14;
  if ( *((_QWORD *)&v34 + 1) < v16 )
  {
    v32 = v16;
    ptr = (void *)qvector_reserve(&ptr, ptr, v16, 1);
    v28 = (char *)ptr;
    v16 = v32;
    v29 = v34;
  }
  v32 = v16;
  memset(&v28[v29], 0, v16 - v29);
  *(_QWORD *)&v34 = v32;
LABEL_11:
  memcpy((char *)ptr + v14, v12, v15);
  if ( v11 )
    qfree(v11);
  if ( !a3 )
    goto LABEL_36;
  v17 = *(_QWORD *)(a3 + 8);
  v18 = nullptr;
  v19 = (char *)haystack;
  if ( v17 )
  {
    v19 = (char *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
    v18 = v19;
    memcpy(v19, *(const void **)a3, v17);
  }
  if ( v19 )
  {
    v20 = strlen(v19);
    v21 = v34;
    v22 = v20 + 1;
    v23 = v20 + 1 + v34;
    if ( __CFADD__(v20 + 1, (_QWORD)v34) )
    {
      if ( (unsigned __int64)v34 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v34 == 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_34;
        goto LABEL_20;
      }
      v23 = 0x7FFFFFFFFFFFFFFFLL;
    }
LABEL_31:
    v30 = (char *)ptr;
    v31 = v21;
    if ( *((_QWORD *)&v34 + 1) < v23 )
    {
      ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
      v30 = (char *)ptr;
      v31 = v34;
    }
    memset(&v30[v31], 0, v23 - v31);
    *(_QWORD *)&v34 = v23;
    goto LABEL_34;
  }
  v21 = v34;
  v22 = 1;
  v19 = (char *)&byte_22F0C30;
  v23 = v34 + 1;
  if ( (_QWORD)v34 != -1 )
    goto LABEL_31;
  v21 = -1;
  v19 = (char *)&byte_22F0C30;
LABEL_20:
  *(_QWORD *)&v34 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_34:
  memcpy((char *)ptr + v21, v19, v22);
  if ( v18 )
    qfree(v18);
LABEL_36:
  add_undo_record(a4, ptr, v34);
  if ( ptr )
  {
    *(_QWORD *)&v34 = 0;
    qfree(ptr);
  }
  return v36[0] - __readfsqword(0x28u);
}

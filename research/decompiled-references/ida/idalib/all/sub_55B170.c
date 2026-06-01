unsigned __int64 __fastcall sub_55B170(__int64 a1, __int64 a2, unsigned int a3)
{
  const char *v3; // r12
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  __int64 v6; // r13
  size_t v7; // r9
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  char *v11; // rbx
  char *v12; // rsi
  size_t v13; // r10
  char *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rsi
  size_t v17; // rdx
  __int64 v18; // r14
  __int64 v19; // rbx
  const char *v20; // rsi
  char *v21; // rax
  char *v22; // rbx
  const char *v23; // rsi
  char *v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  char *v27; // rax
  void *v28; // rdi
  __int64 v30; // rax
  size_t v32; // [rsp+4h] [rbp-70h]
  size_t v33; // [rsp+4h] [rbp-70h]
  size_t v34; // [rsp+Ch] [rbp-68h]
  size_t v35; // [rsp+14h] [rbp-60h]
  void *ptr; // [rsp+1Ch] [rbp-58h] BYREF
  __int128 v37; // [rsp+24h] [rbp-50h]
  unsigned __int64 v38; // [rsp+34h] [rbp-40h]

  v3 = *(const char **)a2;
  v38 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a2 + 8);
  v37 = 0;
  ptr = nullptr;
  if ( !v4 )
    goto LABEL_2;
  v5 = (unsigned __int64)&v3[v4 - 1];
  if ( (unsigned __int64)v3 >= v5 )
    goto LABEL_2;
  v6 = 0;
  do
  {
    v8 = strchr(v3, 10);
    v11 = v8;
    v7 = v5 - (_QWORD)v3;
    if ( v8 )
    {
      v7 = v8 - v3;
      if ( v8 == v3 )
        goto LABEL_7;
    }
    v12 = (char *)ptr;
    if ( *((_QWORD *)&v37 + 1) < (unsigned __int64)(v6 + 1) )
    {
      v32 = v7;
      ptr = (void *)qvector_reserve(&ptr, ptr, v6 + 1, 24);
      v6 = v37;
      v12 = (char *)ptr;
      v7 = v32;
    }
    v13 = v7;
    v14 = &v12[24 * v6];
    *(_OWORD *)(v14 + 8) = 0;
    *(_QWORD *)v14 = 0;
    *(_QWORD *)&v37 = v37 + 1;
    v15 = *((_QWORD *)v14 + 1);
    if ( v15 )
    {
      --v15;
      v13 = v7 + v15;
    }
    v16 = *(_QWORD *)v14;
    v17 = v13 + 1;
    if ( v13 != -1 )
    {
      v35 = v13;
      v34 = v7;
      v33 = v13 + 1;
      v30 = qvector_reserve(v14, v16, v17, 1);
      *(_QWORD *)v14 = v30;
      v13 = v35;
      v16 = v30;
      v7 = v34;
      v17 = v33;
    }
    *((_QWORD *)v14 + 1) = v17;
    *(_BYTE *)(v16 + v13) = 0;
    memmove((void *)(v15 + *(_QWORD *)v14), v3, v7);
    if ( !v11 )
      break;
    v6 = v37;
LABEL_7:
    v3 = v11 + 1;
  }
  while ( (unsigned __int64)(v11 + 1) < v5 );
  if ( !(_QWORD)v37 )
  {
LABEL_2:
    if ( !under_debugger )
      interr(3014);
    BUG();
  }
  v18 = 0;
  v19 = v37 - 1;
  if ( (_QWORD)v37 != 1 )
  {
    do
    {
      v20 = haystack;
      v21 = (char *)ptr + 24 * v18;
      if ( *((_QWORD *)v21 + 1) )
        v20 = *(const char **)v21;
      (*(void (__fastcall **)(__int64, const char *, _QWORD, _QWORD, __int64, size_t))(*(_QWORD *)a1 + 136LL))(
        a1,
        v20,
        0,
        *(_QWORD *)(*(_QWORD *)a1 + 136LL),
        v10,
        v7);
      ++v18;
    }
    while ( v18 != v19 );
    v19 *= 24;
  }
  v22 = (char *)ptr + v19;
  v23 = haystack;
  if ( *((_QWORD *)v22 + 1) )
    v23 = *(const char **)v22;
  (*(void (__fastcall **)(__int64, const char *, _QWORD, __int64, __int64, size_t))(*(_QWORD *)a1 + 136LL))(
    a1,
    v23,
    a3,
    v9,
    v10,
    v7);
  v24 = (char *)ptr;
  if ( ptr )
  {
    v25 = v37;
    if ( (_QWORD)v37 )
    {
      v26 = 0;
      do
      {
        v27 = &v24[24 * v26];
        v28 = *(void **)v27;
        if ( *(_QWORD *)v27 )
        {
          *((_QWORD *)v27 + 1) = 0;
          qfree(v28);
          v24 = (char *)ptr;
        }
        ++v26;
      }
      while ( v25 != v26 );
    }
    *(_QWORD *)&v37 = 0;
    qfree(v24);
  }
  return v38 - __readfsqword(0x28u);
}

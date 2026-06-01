__int64 __fastcall sub_447440(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r14
  _QWORD *v6; // rax
  __int64 *v7; // rax
  const char *v8; // rdx
  __int64 v9; // rsi
  const char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  size_t v13; // r8
  void *v14; // r15
  __int64 v15; // rdx
  char *v16; // rax
  const char *v17; // rdi
  _QWORD *v18; // rax
  _QWORD *v19; // rbx
  __int64 (__fastcall *v20)(_QWORD *, __int64, unsigned int); // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 (*v23)(); // rax
  const char *v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rdi
  unsigned int v30; // ebp
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 *v35; // rdx
  __int64 v36; // rdi
  void *v38; // r15
  size_t v39; // r8
  __int64 v40; // rdx
  char *v41; // rax
  char v42; // al
  size_t i; // [rsp+0h] [rbp-E0h]
  size_t v44; // [rsp+0h] [rbp-E0h]
  size_t v45; // [rsp+0h] [rbp-E0h]
  unsigned int v46; // [rsp+0h] [rbp-E0h]
  size_t n; // [rsp+8h] [rbp-D8h]
  size_t na; // [rsp+8h] [rbp-D8h]
  __int64 v49; // [rsp+10h] [rbp-D0h]
  __int64 v50; // [rsp+10h] [rbp-D0h]
  size_t v51; // [rsp+18h] [rbp-C8h]
  size_t v53; // [rsp+30h] [rbp-B0h] BYREF
  __int64 v54; // [rsp+38h] [rbp-A8h] BYREF
  __int128 v55; // [rsp+40h] [rbp-A0h]
  const char *v56; // [rsp+58h] [rbp-88h] BYREF
  __int128 v57; // [rsp+60h] [rbp-80h]
  __int64 v58; // [rsp+78h] [rbp-68h] BYREF
  __int128 v59; // [rsp+80h] [rbp-60h]
  int v60; // [rsp+90h] [rbp-50h]
  unsigned __int64 v61; // [rsp+A0h] [rbp-40h]

  v3 = *a2;
  v4 = *a2 + 16 * a2[1];
  v61 = __readfsqword(0x28u);
  v55 = 0;
  v54 = 0;
  if ( v3 == v4 )
    return 0;
  do
  {
    v6 = *(_QWORD **)(a1 + 216);
    if ( !v6 )
      v6 = *(_QWORD **)(a1 + 208);
    v56 = nullptr;
    v57 = 0;
    dirtree_get_abspath_by_cursor(&v56, *v6, v3, 0);
    v7 = *(__int64 **)(a1 + 216);
    if ( !v7 )
      v7 = *(__int64 **)(a1 + 208);
    v8 = &s1;
    if ( (_QWORD)v57 )
      v8 = v56;
    v9 = *v7;
    v58 = -1;
    LOBYTE(v59) = 0;
    dirtree_resolve_path(&v58, v9, v8, 0.0);
    if ( v58 == -1 || !(_BYTE)v59 )
    {
      v10 = (const char *)&v53;
      if ( (unsigned __int8)sub_4463F0(a1, &v53, (__int64)&v56, 0) )
      {
        v38 = nullptr;
        v39 = *(_QWORD *)(v53 + 56);
        if ( v39 )
        {
          na = v53;
          v45 = *(_QWORD *)(v53 + 56);
          v38 = (void *)qalloc_or_throw(v45);
          memcpy(v38, *(const void **)(na + 48), v45);
          v39 = v45;
        }
        v40 = v55;
        v10 = (const char *)v54;
        if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
        {
          v44 = v39;
          v54 = qvector_reserve(&v54, v54, v55 + 1, 24);
          v40 = v55;
          v10 = (const char *)v54;
          v39 = v44;
        }
        v41 = (char *)&v10[24 * v40];
        *(_QWORD *)v41 = v38;
        *(__m128i *)(v41 + 8) = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
        *(_QWORD *)&v55 = v55 + 1;
      }
      v17 = v56;
      if ( v56 )
      {
LABEL_21:
        *(_QWORD *)&v57 = 0;
        qfree(v17, v10);
      }
    }
    else
    {
      v10 = (const char *)&v56;
      v58 = 0;
      v60 = 0;
      v59 = 0;
      if ( (unsigned __int8)sub_442560(&v58, (__int64)&v56) )
      {
        v10 = (const char *)&v58;
        v11 = sub_4462E0(a1 + 424, (__int64)&v58);
        if ( v11 != a1 + 432 )
        {
          v12 = *(_QWORD *)(v11 + 64);
          for ( i = v12 + 88LL * *(_QWORD *)(v11 + 72); v12 != i; *(_QWORD *)&v55 = v55 + 1 )
          {
            v13 = *(_QWORD *)(v12 + 56);
            v14 = nullptr;
            if ( v13 )
            {
              v50 = v12;
              n = *(_QWORD *)(v12 + 56);
              v14 = (void *)qalloc_or_throw(n);
              memcpy(v14, *(const void **)(v50 + 48), n);
              v12 = v50;
              v13 = n;
            }
            v15 = v55;
            v10 = (const char *)v54;
            if ( *((_QWORD *)&v55 + 1) < (unsigned __int64)(v55 + 1) )
            {
              v51 = v13;
              v49 = v12;
              v54 = qvector_reserve(&v54, v54, v55 + 1, 24);
              v15 = v55;
              v10 = (const char *)v54;
              v13 = v51;
              v12 = v49;
            }
            v12 += 88;
            v16 = (char *)&v10[24 * v15];
            *(_QWORD *)v16 = v14;
            *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v13);
          }
        }
      }
      if ( v58 )
      {
        *(_QWORD *)&v59 = 0;
        qfree(v58, v10);
      }
      v17 = v56;
      if ( v56 )
        goto LABEL_21;
    }
    v3 += 16;
  }
  while ( v4 != v3 );
  if ( !(_QWORD)v55 )
  {
    v32 = v54;
    if ( v54 )
    {
      v30 = 0;
      goto LABEL_42;
    }
    return 0;
  }
  v18 = sub_426230(v17, v10);
  v19 = (_QWORD *)sub_417080((__int64)v18);
  v20 = *(__int64 (__fastcall **)(_QWORD *, __int64, unsigned int))(*v19 + 288LL);
  v21 = *(unsigned int *)(a3 + 24);
  if ( v20 == sub_4197C0 )
  {
    v22 = v19[1];
    if ( !v22
      || (v23 = *(__int64 (**)())(*(_QWORD *)v22 + 480LL), v23 != sub_178B60)
      && (v46 = *(_DWORD *)(a3 + 24), v42 = v23(), v21 = v46, v42) )
    {
      LODWORD(v24) = 52;
LABEL_57:
      v10 = "Failed to migrate files";
      sub_416980((unsigned int)v24, (__int64)"Failed to migrate files");
      v30 = 0;
      goto LABEL_36;
    }
    v58 = 0;
    v59 = 0;
    v24 = (const char *)(*(unsigned int (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)v19[1] + 256LL))(
                          v19[1],
                          &v58,
                          &v54,
                          v21);
    (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v19 + 24LL))(v19, v24, &v58);
    v25 = v58;
    if ( v58 )
    {
      v26 = v59;
      if ( (_QWORD)v59 )
      {
        v27 = 0;
        do
        {
          v28 = v25 + 32 * v27;
          v29 = *(_QWORD *)(v28 + 8);
          if ( v29 )
          {
            *(_QWORD *)(v28 + 16) = 0;
            qfree(v29, v24);
            v25 = v58;
          }
          ++v27;
        }
        while ( v26 != v27 );
      }
      *(_QWORD *)&v59 = 0;
      qfree(v25, v24);
    }
  }
  else
  {
    LODWORD(v24) = v20(v19, (__int64)&v54, v21);
  }
  if ( (_DWORD)v24 )
    goto LABEL_57;
  v10 = (const char *)0x8000000000000000LL;
  (*(void (__fastcall **)(_QWORD *, unsigned __int64, __int64, __int64))(QT::QCoreApplication::self[2] + 176LL))(
    QT::QCoreApplication::self + 2,
    0x8000000000000000LL,
    6,
    1);
  v30 = 1;
LABEL_36:
  v31 = v54;
  v32 = v54;
  if ( v54 )
  {
    v33 = v55;
    if ( (_QWORD)v55 )
    {
      v34 = 0;
      do
      {
        v35 = (__int64 *)(v31 + 24 * v34);
        v36 = *v35;
        if ( *v35 )
        {
          v35[1] = 0;
          qfree(v36, v10);
          v31 = v54;
        }
        ++v34;
        v32 = v31;
      }
      while ( v33 != v34 );
    }
LABEL_42:
    *(_QWORD *)&v55 = 0;
    qfree(v32, v10);
  }
  return v30;
}

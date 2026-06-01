__int64 __fastcall sub_43DF00(
        __int64 a1,
        __int64 a2,
        int a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  _QWORD *v17; // r14
  unsigned __int8 (*v18)(void); // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  size_t v21; // r12
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __m128 v26; // xmm0
  __int64 v27; // r9
  __int64 (__fastcall *v28)(_QWORD *, __int64, __int64, __int64, __int64); // rax
  __int64 v29; // rdi
  __int64 (*v30)(void); // rax
  __int64 v31; // rdi
  const char *v32; // r12
  const char *v33; // rsi
  __int64 v34; // r8
  __int64 v35; // r9
  __m128 v36; // xmm4
  __m128 v37; // xmm5
  __int64 v38; // rdx
  __int64 v39; // r15
  __int64 v40; // r14
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rcx
  unsigned int v44; // ebp
  __int64 v45; // rdx
  __int64 v46; // r12
  __int64 v47; // rbx
  __int64 *v48; // rax
  __int64 v49; // rdi
  char v51; // al
  const char *v52; // rdx
  char v53; // [rsp+0h] [rbp-E8h]
  void *v54; // [rsp+8h] [rbp-E0h]
  unsigned int v55; // [rsp+8h] [rbp-E0h]
  __int64 v56; // [rsp+10h] [rbp-D8h] BYREF
  __int128 v57; // [rsp+18h] [rbp-D0h]
  __int64 v58; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v59; // [rsp+38h] [rbp-B0h]
  __int64 v60; // [rsp+50h] [rbp-98h] BYREF
  __int128 v61; // [rsp+58h] [rbp-90h]
  __int64 v62; // [rsp+68h] [rbp-80h]
  __int128 v63; // [rsp+70h] [rbp-78h]
  __int64 v64; // [rsp+80h] [rbp-68h]
  __int128 v65; // [rsp+88h] [rbp-60h]
  __int64 v66; // [rsp+98h] [rbp-50h]
  unsigned __int64 v67; // [rsp+A8h] [rbp-40h]

  v13 = a3;
  v67 = __readfsqword(0x28u);
  v14 = sub_426230(a1, (const char *)a2);
  v15 = sub_417080((__int64)v14);
  v16 = *(_QWORD *)(v15 + 8);
  if ( !v16 )
    return 0;
  v17 = (_QWORD *)v15;
  v18 = *(unsigned __int8 (**)(void))(*(_QWORD *)v16 + 480LL);
  if ( (char *)v18 != (char *)sub_178B60 )
  {
    if ( v18() )
      return 0;
  }
  v56 = 0;
  v19 = *(_QWORD *)(a1 + 232);
  v57 = 0;
  v20 = v19 + 152 * v13;
  v21 = *(_QWORD *)(v20 + 8);
  if ( !v21 )
  {
    v54 = nullptr;
    v22 = 0;
    v23 = 1;
LABEL_5:
    v56 = qvector_reserve(&v56, v22, v23, 24);
    v22 = v56;
    v24 = v57;
    goto LABEL_6;
  }
  v54 = (void *)qalloc_or_throw(*(_QWORD *)(v20 + 8));
  memcpy(v54, *(const void **)v20, v21);
  v24 = v57;
  v22 = v56;
  v23 = v57 + 1;
  if ( *((_QWORD *)&v57 + 1) < (unsigned __int64)(v57 + 1) )
    goto LABEL_5;
LABEL_6:
  v25 = v22 + 24 * v24;
  *(_QWORD *)v25 = v54;
  *(__m128i *)(v25 + 8) = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
  v26 = 0;
  v27 = *(unsigned int *)(v20 + 144);
  *(_QWORD *)&v57 = v57 + 1;
  v60 = 0x7FFFFFFF00000000LL;
  v62 = 0;
  v64 = 0;
  v66 = 0xFFFFFFFFLL;
  v61 = 0;
  v63 = 0;
  v65 = 0;
  v28 = *(__int64 (__fastcall **)(_QWORD *, __int64, __int64, __int64, __int64))(*v17 + 216LL);
  if ( v28 == vault_with_events_t__::vfunc_27 )
  {
    v29 = v17[1];
    if ( !v29 )
    {
LABEL_41:
      LODWORD(v32) = 52;
      goto LABEL_42;
    }
    v30 = *(__int64 (**)(void))(*(_QWORD *)v29 + 480LL);
    if ( v30 != sub_178B60 )
    {
      v55 = v27;
      v51 = v30();
      v27 = v55;
      if ( v51 )
      {
        LODWORD(v27) = *(_DWORD *)(v20 + 144);
        goto LABEL_41;
      }
    }
    v26 = 0;
    v59 = 0;
    v31 = v17[1];
    v58 = 0;
    v32 = (const char *)(*(unsigned int (__fastcall **)(__int64, __int64 *, __int64, __int64 *, __int64 *, __int64))(*(_QWORD *)v31 + 184LL))(
                          v31,
                          &v58,
                          a2,
                          &v56,
                          &v60,
                          v27);
    v33 = v32;
    (*(void (__fastcall **)(_QWORD *, const char *, __int64 *))(*v17 + 24LL))(v17, v32, &v58);
    v38 = v58;
    if ( v58 )
    {
      v39 = v59;
      if ( (_QWORD)v59 )
      {
        v40 = 0;
        do
        {
          v41 = v38 + 32 * v40;
          v42 = *(_QWORD *)(v41 + 8);
          if ( v42 )
          {
            *(_QWORD *)(v41 + 16) = 0;
            qfree(v42, v32);
            v38 = v58;
          }
          ++v40;
        }
        while ( v39 != v40 );
      }
      *(_QWORD *)&v59 = 0;
      *(double *)v26.m128_u64 = qfree(v38, v32);
    }
  }
  else
  {
    v33 = (const char *)a2;
    LODWORD(v32) = v28(v17, a2, (__int64)&v56, (__int64)&v60, (unsigned int)v27);
  }
  if ( !(_DWORD)v32 )
  {
    v43 = *(_QWORD *)(a2 + 8);
    if ( v43 == 1 )
    {
      v44 = 1;
    }
    else
    {
      v33 = &s1;
      if ( *(_QWORD *)(v20 + 8) )
        v33 = *(const char **)v20;
      sub_169700(
        (int)"No single commit for \"%s#%d\" (got %ld)\n",
        (__int64)v33,
        *(unsigned int *)(v20 + 144),
        v43,
        v34,
        v35,
        v26,
        a5,
        a6,
        a7,
        v36,
        v37,
        a10,
        a11,
        v53);
      v44 = 0;
    }
    goto LABEL_19;
  }
  LODWORD(v27) = *(_DWORD *)(v20 + 144);
LABEL_42:
  v52 = &s1;
  if ( *(_QWORD *)(v20 + 8) )
    v52 = *(const char **)v20;
  v33 = "Failed to retrieve commit for \"%s#%d\"";
  sub_416980((unsigned int)v32, (__int64)"Failed to retrieve commit for \"%s#%d\"", v52, v27);
  v44 = 0;
LABEL_19:
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    qfree(v64, v33);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    qfree(v62, v33);
  }
  v45 = v56;
  if ( v56 )
  {
    v46 = v57;
    if ( (_QWORD)v57 )
    {
      v47 = 0;
      do
      {
        v48 = (__int64 *)(v45 + 24 * v47);
        v49 = *v48;
        if ( *v48 )
        {
          v48[1] = 0;
          qfree(v49, v33);
          v45 = v56;
        }
        ++v47;
      }
      while ( v46 != v47 );
    }
    *(_QWORD *)&v57 = 0;
    qfree(v45, v33);
  }
  return v44;
}

unsigned __int64 __fastcall sub_4F65D0(__int64 a1, const void *a2)
{
  size_t v3; // rax
  size_t v4; // r12
  const char *v5; // rsi
  int v6; // ebp
  __int64 v7; // rax
  size_t v8; // rax
  const char *v9; // r12
  size_t v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  __m128 si128; // xmm2
  char *v17; // r12
  __m128i v18; // xmm4
  int *v19; // rax
  __int64 v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __m128 v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rbx
  __int64 *v31; // rdx
  __int64 v32; // rax
  void *v34; // rdi
  size_t v35; // r13
  unsigned __int64 v36; // rdx
  __m128 *v37; // rax
  __m128 v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rax
  __m128 v41; // [rsp+0h] [rbp-B8h] BYREF
  void **v42; // [rsp+10h] [rbp-A8h]
  __int64 *v43; // [rsp+18h] [rbp-A0h]
  __int64 v44; // [rsp+20h] [rbp-98h] BYREF
  __int128 v45; // [rsp+28h] [rbp-90h]
  void *ptr[2]; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v47; // [rsp+50h] [rbp-68h]
  const char *v48; // [rsp+60h] [rbp-58h] BYREF
  void *v49; // [rsp+68h] [rbp-50h] BYREF
  unsigned __int64 v50; // [rsp+70h] [rbp-48h]
  unsigned __int64 v51; // [rsp+78h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  if ( a2 && (v3 = strlen((const char *)a2), (v4 = v3) != 0) )
  {
    v34 = *(void **)a1;
    v35 = v3 + 1;
    if ( *(_QWORD *)(a1 + 16) < v3 + 1 )
    {
      v40 = qvector_reserve(a1, *(_QWORD *)a1, v3 + 1, 1);
      *(_QWORD *)a1 = v40;
      v34 = (void *)v40;
    }
    *(_QWORD *)(a1 + 8) = v35;
    memmove(v34, a2, v4);
    *(_BYTE *)(*(_QWORD *)a1 + v4) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = 0;
  }
  v44 = 0;
  v43 = (__int64 *)&v48;
  v45 = 0;
  sub_4F6450((__int64 *)&v48, (const char *)a2);
  v5 = &s1;
  if ( v49 )
    v5 = v48;
  reg_read_strlist(&v44, v5);
  if ( v48 )
  {
    v49 = nullptr;
    qfree(v48, v5);
  }
  if ( !(_QWORD)v45 )
  {
    v29 = v44;
    if ( v44 )
      goto LABEL_39;
    return v51 - __readfsqword(0x28u);
  }
  v6 = 0;
  v7 = 0;
  v42 = ptr;
  do
  {
    v21 = v44 + 24 * v7;
    v22 = *(_QWORD *)(v21 + 8);
    if ( v22 )
    {
      v8 = v22 - 1;
      v9 = *(const char **)v21;
      v10 = v8 >> 63;
      if ( v9 )
        goto LABEL_11;
    }
    else
    {
      v9 = &s1;
      LOBYTE(v10) = 0;
      v8 = 0;
      if ( &s1 )
      {
LABEL_11:
        if ( !(_BYTE)v10 )
          goto LABEL_12;
      }
    }
    v8 = 0;
    if ( v9 )
      v8 = strlen(v9);
LABEL_12:
    QT::QString::fromUtf8(v42, v8, v9);
    v13 = *(_QWORD *)(a1 + 24);
    v14 = *(_QWORD *)(a1 + 40);
    if ( v13 && *(int *)v13 <= 1 )
    {
      v5 = *(const char **)(a1 + 32);
      v23 = (v13 + 31) & 0xFFFFFFFFFFFFFFF0LL;
      if ( v14 != *(_QWORD *)(v13 + 8) - 0xAAAAAAAAAAAAAAABLL * ((__int64)&v5[-v23] >> 3) )
      {
        v36 = v47;
        v37 = (__m128 *)&v5[24 * v14];
        v38 = _mm_loadh_ps((const double *)&ptr[1]);
        v47 = 0;
        v37[1].m128_u64[0] = v36;
        *v37 = v38;
        v39 = *(_QWORD *)(a1 + 40);
        *(_OWORD *)ptr = 0;
        v27 = v39 + 1;
        goto LABEL_32;
      }
      if ( v14 )
      {
        v15 = v47;
        v47 = 0;
        v49 = ptr[1];
        v50 = v15;
        *(_OWORD *)ptr = 0;
        v41 = _mm_loadh_ps((const double *)&v49);
        goto LABEL_15;
      }
      if ( v5 != (const char *)v23 )
      {
        v24 = v47;
        v47 = 0;
        v25 = _mm_loadh_ps((const double *)&ptr[1]);
        *(_OWORD *)ptr = 0;
        *((_QWORD *)v5 - 1) = v24;
        *(__m128 *)(v5 - 24) = v25;
        v26 = *(_QWORD *)(a1 + 40);
        *(_QWORD *)(a1 + 32) -= 24LL;
        v27 = v26 + 1;
LABEL_32:
        *(_QWORD *)(a1 + 40) = v27;
        goto LABEL_16;
      }
    }
    v15 = v47;
    si128 = (__m128)_mm_load_si128((const __m128i *)ptr);
    v47 = 0;
    *(_OWORD *)ptr = 0;
    v50 = v15;
    v41 = si128;
    _mm_storeh_ps((double *)&v49, si128);
LABEL_15:
    sub_1D50F0((__m128i *)(a1 + 24), 0, 1, nullptr, nullptr, v12);
    v17 = (char *)(*(_QWORD *)(a1 + 32) + 24 * v14);
    v5 = v17;
    memmove(v17 + 24, v17, 24 * (*(_QWORD *)(a1 + 40) - v14));
    v18 = _mm_load_si128((const __m128i *)&v41);
    *((_QWORD *)v17 + 2) = v15;
    *(__m128i *)v17 = v18;
    ++*(_QWORD *)(a1 + 40);
LABEL_16:
    v19 = *(int **)(a1 + 24);
    if ( !v19 || *v19 > 1 )
    {
      v5 = nullptr;
      sub_1B21C0((__m128i *)(a1 + 24), 0, 0, 0, v11, v12);
    }
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    ++v6;
    v20 = v45;
    v7 = v6;
  }
  while ( v6 < (unsigned __int64)v45 );
  v28 = v44;
  v29 = v44;
  if ( v44 )
  {
    if ( (_QWORD)v45 )
    {
      v30 = 0;
      do
      {
        v31 = (__int64 *)(v28 + 24 * v30);
        v32 = *v31;
        if ( *v31 )
        {
          v31[1] = 0;
          qfree(v32, v5);
          v28 = v44;
        }
        ++v30;
        v29 = v28;
      }
      while ( v20 != v30 );
    }
LABEL_39:
    *(_QWORD *)&v45 = 0;
    qfree(v29, v5);
  }
  return v51 - __readfsqword(0x28u);
}

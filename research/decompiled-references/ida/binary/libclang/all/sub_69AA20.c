int __fastcall sub_69AA20(__int64 a1)
{
  __int64 v1; // rax
  pthread_mutex_t *v2; // r12
  unsigned __int64 *v3; // r14
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // rbx
  unsigned int kind; // r15d
  int v8; // esi
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned int v12; // r15d
  __int64 align; // rbp
  __m128 v14; // xmm0
  int v15; // eax
  __int64 v16; // rdi
  int v17; // ecx
  unsigned int i; // eax
  unsigned int v19; // eax
  __int64 v20; // r11
  __int64 v21; // r8
  int v22; // r8d
  unsigned __int64 v23; // r13
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r9
  __int64 v26; // rbp
  __m128 v27; // xmm1
  int v28; // eax
  int v29; // esi
  unsigned int j; // edx
  unsigned int v31; // edx
  pthread_mutex_t *v32; // rcx
  int v33; // ecx
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rbx
  unsigned __int64 v36; // rdx
  unsigned int v37; // r15d
  __int64 v38; // rbp
  __m128 v39; // xmm0
  int v40; // eax
  int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // eax
  int v44; // r8d
  unsigned __int64 *v46; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v47; // [rsp+8h] [rbp-F0h]
  unsigned __int64 v48; // [rsp+8h] [rbp-F0h]
  int v49; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v50; // [rsp+10h] [rbp-E8h]
  int v51; // [rsp+10h] [rbp-E8h]
  unsigned int v52; // [rsp+1Ch] [rbp-DCh]
  __m128 **v53; // [rsp+20h] [rbp-D8h]
  __m128 v54; // [rsp+40h] [rbp-B8h] BYREF
  unsigned __int64 v55; // [rsp+50h] [rbp-A8h]
  int v56; // [rsp+58h] [rbp-A0h]
  _BYTE v57[156]; // [rsp+5Ch] [rbp-9Ch] BYREF

  v1 = *(_QWORD *)(a1 + 176);
  if ( !v1 )
    return v1;
  v2 = *(pthread_mutex_t **)v1;
  v3 = *(unsigned __int64 **)(v1 + 48);
  v4 = *(unsigned int *)(v1 + 56);
  if ( &_pthread_key_create )
  {
    v5 = pthread_mutex_lock(*(pthread_mutex_t **)v1);
    if ( v5 )
      std::__throw_system_error(v5);
  }
  v6 = 4 * v4;
  LODWORD(v1) = (_DWORD)v3 + v6 * 8;
  v53 = (__m128 **)&v2[1];
  v46 = &v3[v6];
  if ( v3 == &v3[v6] )
    goto LABEL_29;
  do
  {
    kind = v2[1].__kind;
    if ( !kind )
    {
      v8 = 0;
LABEL_7:
      sub_69A6A0(v53, v8);
      if ( !v2[1].__kind )
      {
LABEL_78:
        ++v2[1].__owner;
        BUG();
      }
      v9 = v3[1];
      v10 = *v3;
      v49 = v2[1].__kind;
      v11 = v3[2];
      v12 = *((_DWORD *)v3 + 6);
      align = v2[1].__align;
      v47 = v11;
      v14 = _mm_shuffle_ps(
              (__m128)_mm_unpacklo_epi64((__m128i)v9, (__m128i)HIDWORD(v9)),
              (__m128)_mm_unpacklo_epi64((__m128i)*v3, (__m128i)HIDWORD(*v3)),
              136);
      v56 = HIDWORD(v11);
      v54 = v14;
      v55 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(v11)).m128i_u64[0];
      v15 = sub_6999F0(&v54, (__int64)v57);
      v16 = 0;
      v17 = 1;
      for ( i = (v49 - 1) & v15; ; i = (v49 - 1) & v19 )
      {
        v20 = align + 32LL * i;
        v21 = *(_QWORD *)v20;
        if ( *(_QWORD *)v20 != v10 )
          break;
        if ( *(_QWORD *)(v20 + 8) == v9 && *(_DWORD *)(v20 + 24) == v12 && *(_QWORD *)(v20 + 16) == v47 )
          goto LABEL_47;
        if ( !v21 )
          goto LABEL_14;
LABEL_11:
        v19 = v17 + i;
        ++v17;
      }
      if ( v21 )
        goto LABEL_11;
LABEL_14:
      if ( !*(_QWORD *)(v20 + 8) )
      {
        v22 = *(_DWORD *)(v20 + 24);
        if ( v22 == -1 )
        {
          if ( !*(_QWORD *)(v20 + 16) )
            goto LABEL_55;
        }
        else if ( v22 == -2 && !(*(_QWORD *)(v20 + 16) | v16) )
        {
          v16 = align + 32LL * i;
        }
      }
      goto LABEL_11;
    }
    v23 = v3[1];
    v24 = *v3;
    v25 = v3[2];
    v52 = *((_DWORD *)v3 + 6);
    v26 = v2[1].__align;
    v50 = v25;
    v27 = (__m128)_mm_unpacklo_epi64((__m128i)*v3, (__m128i)HIDWORD(*v3));
    v56 = HIDWORD(v25);
    v54 = _mm_shuffle_ps((__m128)_mm_unpacklo_epi64((__m128i)v23, (__m128i)HIDWORD(v23)), v27, 136);
    v55 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v52), _mm_cvtsi32_si128(v25)).m128i_u64[0];
    v28 = sub_6999F0(&v54, (__int64)v57);
    v29 = 1;
    v20 = 0;
    for ( j = (kind - 1) & v28; ; j = (kind - 1) & v31 )
    {
      v1 = v26 + 32LL * j;
      v32 = *(pthread_mutex_t **)v1;
      if ( *(_QWORD *)v1 != v24 || *(_QWORD *)(v1 + 8) != v23 || *(_DWORD *)(v1 + 24) != v52 )
        break;
      if ( *(_QWORD *)(v1 + 16) == v50 )
        goto LABEL_28;
      if ( !v32 )
        goto LABEL_39;
LABEL_33:
      v31 = v29 + j;
      ++v29;
    }
    if ( v32 )
      goto LABEL_33;
LABEL_39:
    if ( *(_QWORD *)(v1 + 8) )
      goto LABEL_33;
    v33 = *(_DWORD *)(v1 + 24);
    if ( v33 != -1 )
    {
      if ( v33 == -2 && !(*(_QWORD *)(v1 + 16) | v20) )
        v20 = v26 + 32LL * j;
      goto LABEL_33;
    }
    if ( *(_QWORD *)(v1 + 16) )
      goto LABEL_33;
    v8 = 2 * kind;
    if ( !v20 )
      v20 = v26 + 32LL * j;
    LODWORD(v1) = v2[1].__owner + 1;
    if ( 4 * (int)v1 >= 3 * kind )
      goto LABEL_7;
    if ( kind >> 3 < kind - v2[1].__nusers - (unsigned int)v1 )
      goto LABEL_25;
    sub_69A6A0(v53, kind);
    v51 = v2[1].__kind;
    if ( !v51 )
      goto LABEL_78;
    v34 = v3[1];
    v35 = *v3;
    v36 = v3[2];
    v37 = *((_DWORD *)v3 + 6);
    v48 = v36;
    v38 = v2[1].__align;
    v39 = _mm_shuffle_ps(
            (__m128)_mm_unpacklo_epi64((__m128i)v34, (__m128i)HIDWORD(v34)),
            (__m128)_mm_unpacklo_epi64((__m128i)*v3, (__m128i)HIDWORD(*v3)),
            136);
    v56 = HIDWORD(v36);
    v54 = v39;
    v55 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), _mm_cvtsi32_si128(v36)).m128i_u64[0];
    v40 = sub_6999F0(&v54, (__int64)v57);
    v16 = 0;
    v41 = 1;
    v42 = (v51 - 1) & v40;
    while ( 2 )
    {
      v20 = v38 + 32LL * v42;
      if ( *(_QWORD *)v20 == v35
        && *(_QWORD *)(v20 + 8) == v34
        && *(_DWORD *)(v20 + 24) == v37
        && *(_QWORD *)(v20 + 16) == v48 )
      {
LABEL_47:
        LODWORD(v1) = v2[1].__owner + 1;
        goto LABEL_25;
      }
      if ( *(_QWORD *)v20 || *(_QWORD *)(v20 + 8) )
        goto LABEL_61;
      v44 = *(_DWORD *)(v20 + 24);
      if ( v44 != -1 )
      {
        if ( v44 == -2 && !(*(_QWORD *)(v20 + 16) | v16) )
          v16 = v38 + 32LL * v42;
        goto LABEL_61;
      }
      if ( *(_QWORD *)(v20 + 16) )
      {
LABEL_61:
        v43 = v41 + v42;
        ++v41;
        v42 = (v51 - 1) & v43;
        continue;
      }
      break;
    }
LABEL_55:
    LODWORD(v1) = v2[1].__owner + 1;
    if ( v16 )
      v20 = v16;
LABEL_25:
    v2[1].__owner = v1;
    if ( *(_QWORD *)v20 || *(_QWORD *)(v20 + 8) || *(_DWORD *)(v20 + 24) != -1 || *(_QWORD *)(v20 + 16) )
      --v2[1].__nusers;
    *(__m128i *)v20 = _mm_loadu_si128((const __m128i *)v3);
    *(__m128i *)(v20 + 12) = _mm_loadu_si128((const __m128i *)((char *)v3 + 12));
LABEL_28:
    v3 += 4;
  }
  while ( v46 != v3 );
LABEL_29:
  if ( &_pthread_key_create )
    LODWORD(v1) = pthread_mutex_unlock(v2);
  return v1;
}


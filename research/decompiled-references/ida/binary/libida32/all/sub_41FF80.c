unsigned __int64 sub_41FF80()
{
  __int64 subindex; // rax
  __int64 v1; // r12
  unsigned int ordinal_limit; // eax
  pthread_rwlock_t *v3; // rbp
  unsigned __int64 v4; // rbx
  double v5; // xmm5_8
  __m128d v6; // xmm0
  __int64 v7; // r15
  __int64 v8; // rax
  __m128d v9; // xmm1
  __m128d v10; // xmm3
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  std::__detail::_Prime_rehash_policy *v13; // rdi
  unsigned __int64 bkt; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // r14
  char *v19; // r15
  void *v20; // r9
  _QWORD *v21; // rsi
  unsigned __int64 v22; // r8
  _QWORD *v23; // rcx
  unsigned __int64 v24; // rdx
  char *v25; // rax
  void *v26; // rdi
  __int64 v27; // rdx
  unsigned int i; // ebp
  unsigned int tinfo_property; // eax
  __int64 idati; // rax
  __m128d v32; // xmm1
  unsigned __int64 v33; // rbx
  __int64 v34; // r15
  char *v35; // rax
  void *v36; // rdi
  char *v37; // r14
  __int64 v38; // [rsp+18h] [rbp-60h] BYREF
  _QWORD v39[2]; // [rsp+20h] [rbp-58h] BYREF
  __int16 v40; // [rsp+30h] [rbp-48h]
  unsigned __int64 v41; // [rsp+38h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  subindex = indexer_get_subindex(2);
  if ( !subindex )
    return v41 - __readfsqword(0x28u);
  v1 = subindex;
  ordinal_limit = get_ordinal_limit(0);
  v3 = *(pthread_rwlock_t **)(v1 + 8);
  v4 = ordinal_limit;
  if ( !v3 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(*(pthread_rwlock_t **)(v1 + 8)) == 35 )
    std::__throw_system_error(35);
  v6 = 0;
  v5 = *(float *)(v1 + 88);
  v6.m128d_f64[0] = (double)(int)v4 / v5;
  if ( fabs(v6.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v7 = *(_QWORD *)(v1 + 96);
    v32.m128d_f64[0] = (double)(int)v6.m128d_f64[0];
    *(_QWORD *)&v6.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                    v32.m128d_f64[0]
                                  + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v6, v32).m128d_f64[0] & 0x3FF0000000000000LL))
                                | *(_QWORD *)&v6.m128d_f64[0] & 0x8000000000000000LL;
    v8 = *(_QWORD *)(v1 + 80) + 1LL;
    if ( v8 >= 0 )
      goto LABEL_7;
LABEL_38:
    v9 = 0;
    v9.m128d_f64[0] = (double)(int)(v8 & 1 | ((unsigned __int64)v8 >> 1))
                    + (double)(int)(v8 & 1 | ((unsigned __int64)v8 >> 1));
    goto LABEL_8;
  }
  v7 = *(_QWORD *)(v1 + 96);
  v8 = *(_QWORD *)(v1 + 80) + 1LL;
  if ( v8 < 0 )
    goto LABEL_38;
LABEL_7:
  v9 = 0;
  v9.m128d_f64[0] = (double)(int)v8;
LABEL_8:
  v9.m128d_f64[0] = v9.m128d_f64[0] / v5;
  if ( fabs(v9.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v10.m128d_f64[0] = (double)(int)v9.m128d_f64[0];
    *(_QWORD *)&v9.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                    v10.m128d_f64[0]
                                  + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v9, v10).m128d_f64[0] & 0x3FF0000000000000LL))
                                | *(_QWORD *)&v9.m128d_f64[0] & 0x8000000000000000LL;
  }
  if ( v6.m128d_f64[0] >= 9.223372036854776e18 )
    v11 = (unsigned int)(int)(v6.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    v11 = (unsigned int)(int)v6.m128d_f64[0];
  if ( v9.m128d_f64[0] >= 9.223372036854776e18 )
    v12 = (unsigned int)(int)(v9.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    v12 = (unsigned int)(int)v9.m128d_f64[0];
  v13 = (std::__detail::_Prime_rehash_policy *)(v1 + 88);
  if ( v11 < v12 )
    v11 = v12;
  bkt = std::__detail::_Prime_rehash_policy::_M_next_bkt(v13, v11);
  v18 = bkt;
  if ( bkt == *(_QWORD *)(v1 + 64) )
  {
    *(_QWORD *)(v1 + 96) = v7;
  }
  else
  {
    if ( bkt == 1 )
    {
      *(_QWORD *)(v1 + 104) = 0;
      v20 = (void *)(v1 + 104);
      v19 = (char *)(v1 + 104);
    }
    else
    {
      if ( bkt >> 60 )
      {
        if ( bkt >> 61 )
          sub_2E883E(v13, v11, v15, v16, v17);
        std::__throw_bad_alloc();
      }
      v19 = (char *)operator new(8 * bkt);
      memset(v19, 0, 8 * v18);
      v20 = (void *)(v1 + 104);
    }
    v21 = *(_QWORD **)(v1 + 72);
    v22 = 0;
    *(_QWORD *)(v1 + 72) = 0;
    while ( v21 )
    {
      while ( 1 )
      {
        v23 = v21;
        v21 = (_QWORD *)*v21;
        v24 = *((unsigned int *)v23 + 2) % v18;
        v25 = &v19[8 * v24];
        if ( !*(_QWORD *)v25 )
          break;
        *v23 = **(_QWORD **)v25;
        **(_QWORD **)v25 = v23;
        if ( !v21 )
          goto LABEL_24;
      }
      *v23 = *(_QWORD *)(v1 + 72);
      *(_QWORD *)(v1 + 72) = v23;
      *(_QWORD *)v25 = v1 + 72;
      if ( *v23 )
        *(_QWORD *)&v19[8 * v22] = v23;
      v22 = v24;
    }
LABEL_24:
    v26 = *(void **)(v1 + 56);
    v11 = *(_QWORD *)(v1 + 64);
    if ( v26 != v20 )
    {
      v11 *= 8LL;
      operator delete(v26, v11);
    }
    *(_QWORD *)(v1 + 64) = v18;
    *(_QWORD *)(v1 + 56) = v19;
  }
  v27 = *(_QWORD *)(v1 + 112);
  if ( (*(_QWORD *)(v1 + 128) - v27) >> 2 < v4 )
  {
    v33 = 4 * v4;
    v34 = *(_QWORD *)(v1 + 120) - v27;
    v35 = (char *)operator new(v33);
    v36 = *(void **)(v1 + 112);
    v37 = v35;
    if ( (__int64)(*(_QWORD *)(v1 + 120) - (_QWORD)v36) > 0 )
    {
      v11 = *(_QWORD *)(v1 + 112);
      memcpy(v35, (const void *)v11, *(_QWORD *)(v1 + 120) - (_QWORD)v36);
      v36 = *(void **)(v1 + 112);
    }
    if ( v36 )
    {
      v11 = *(_QWORD *)(v1 + 128) - (_QWORD)v36;
      operator delete(v36, v11);
    }
    *(_QWORD *)(v1 + 112) = v37;
    *(_QWORD *)(v1 + 120) = &v37[v34];
    *(_QWORD *)(v1 + 128) = &v37[v33];
  }
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(v3);
  for ( i = 1; i < (unsigned int)get_ordinal_limit(0); ++i )
  {
    v38 = 0;
    v40 = 257;
    v39[1] = i;
    idati = get_idati(0, v11);
    v11 = 61;
    v39[0] = idati;
    if ( (unsigned __int8)create_tinfo(&v38, 61, 189, v39) )
    {
      tinfo_property = get_tinfo_property(v38, 7);
      v11 = 0;
      sub_42F500(v1, 0, tinfo_property, &v38);
    }
    clear_tinfo_t(&v38);
  }
  return v41 - __readfsqword(0x28u);
}


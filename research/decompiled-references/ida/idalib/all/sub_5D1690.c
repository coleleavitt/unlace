void __fastcall sub_5D1690(__int64 a1, unsigned __int64 a2)
{
  pthread_rwlock_t *v2; // rbp
  double v5; // xmm5_8
  __m128d v6; // xmm1
  double v7; // xmm1_8
  __m128d v8; // xmm0
  __int64 v9; // r13
  __int64 v10; // rax
  __m128d v11; // xmm0
  double v12; // xmm0_8
  __m128d v13; // xmm3
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  std::__detail::_Prime_rehash_policy *v16; // rdi
  unsigned __int64 bkt; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rdx
  unsigned __int64 v22; // r14
  __int64 v23; // r15
  char *v24; // rax
  void *v25; // rcx
  char *v26; // r13
  const void *v27; // [rsp+8h] [rbp-40h]

  v2 = *(pthread_rwlock_t **)(a1 + 8);
  if ( !v2 )
    std::__throw_system_error(1);
  if ( &_pthread_key_create && pthread_rwlock_wrlock(*(pthread_rwlock_t **)(a1 + 8)) == 35 )
    std::__throw_system_error(35);
  v5 = *(float *)(a1 + 88);
  v6 = 0;
  if ( (a2 & 0x8000000000000000LL) != 0LL )
    v7 = (double)(int)(a2 & 1 | (a2 >> 1)) + (double)(int)(a2 & 1 | (a2 >> 1));
  else
    v7 = (double)(int)a2;
  v6.m128d_f64[0] = v7 / v5;
  if ( fabs(v6.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v8.m128d_f64[0] = (double)(int)v6.m128d_f64[0];
    *(_QWORD *)&v6.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                    v8.m128d_f64[0]
                                  + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v6, v8).m128d_f64[0] & 0x3FF0000000000000LL))
                                | *(_QWORD *)&v6.m128d_f64[0] & 0x8000000000000000LL;
  }
  v9 = *(_QWORD *)(a1 + 96);
  v10 = *(_QWORD *)(a1 + 80) + 1LL;
  v11 = 0;
  if ( v10 < 0 )
    v12 = (double)(int)(v10 & 1 | ((unsigned __int64)v10 >> 1)) + (double)(int)(v10 & 1 | ((unsigned __int64)v10 >> 1));
  else
    v12 = (double)(int)v10;
  v11.m128d_f64[0] = v12 / v5;
  if ( fabs(v11.m128d_f64[0]) < 4.503599627370496e15 )
  {
    v13.m128d_f64[0] = (double)(int)v11.m128d_f64[0];
    *(_QWORD *)&v11.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                     v13.m128d_f64[0]
                                   + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v11, v13).m128d_f64[0] & 0x3FF0000000000000LL))
                                 | *(_QWORD *)&v11.m128d_f64[0] & 0x8000000000000000LL;
  }
  if ( v6.m128d_f64[0] >= 9.223372036854776e18 )
    v14 = (unsigned int)(int)(v6.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    v14 = (unsigned int)(int)v6.m128d_f64[0];
  if ( v11.m128d_f64[0] >= 9.223372036854776e18 )
    v15 = (unsigned int)(int)(v11.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
  else
    v15 = (unsigned int)(int)v11.m128d_f64[0];
  v16 = (std::__detail::_Prime_rehash_policy *)(a1 + 88);
  if ( v14 < v15 )
    v14 = v15;
  bkt = std::__detail::_Prime_rehash_policy::_M_next_bkt(v16, v14);
  if ( bkt == *(_QWORD *)(a1 + 64) )
    *(_QWORD *)(a1 + 96) = v9;
  else
    sub_5C43C0(a1 + 56, bkt, v18, v19, v20);
  if ( a2 >> 60 )
    std::__throw_length_error("vector::reserve");
  v21 = *(_QWORD *)(a1 + 112);
  if ( (*(_QWORD *)(a1 + 128) - v21) >> 3 < a2 )
  {
    v22 = 8 * a2;
    v23 = *(_QWORD *)(a1 + 120) - v21;
    v24 = (char *)operator new(v22);
    v25 = *(void **)(a1 + 112);
    v26 = v24;
    if ( (__int64)(*(_QWORD *)(a1 + 120) - (_QWORD)v25) > 0 )
    {
      v27 = *(const void **)(a1 + 112);
      memcpy(v24, v27, *(_QWORD *)(a1 + 120) - (_QWORD)v25);
      v25 = (void *)v27;
      if ( !v27 )
        goto LABEL_33;
    }
    else if ( !v25 )
    {
LABEL_33:
      *(_QWORD *)(a1 + 112) = v26;
      *(_QWORD *)(a1 + 120) = &v26[v23];
      *(_QWORD *)(a1 + 128) = &v26[v22];
      goto LABEL_22;
    }
    operator delete(v25, *(_QWORD *)(a1 + 128) - (_QWORD)v25);
    goto LABEL_33;
  }
LABEL_22:
  if ( &_pthread_key_create )
    pthread_rwlock_unlock(v2);
}

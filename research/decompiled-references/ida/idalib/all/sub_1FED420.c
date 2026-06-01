__int64 __fastcall sub_1FED420(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // eax
  __int64 result; // rax
  double v4; // [rsp+8h] [rbp-90h] BYREF
  char v5; // [rsp+17h] [rbp-81h] BYREF
  _QWORD v6[2]; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v7[3]; // [rsp+28h] [rbp-70h] BYREF
  __m128 v8; // [rsp+40h] [rbp-58h] BYREF
  __m128 v9; // [rsp+50h] [rbp-48h]
  _OWORD v10[3]; // [rsp+60h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  v5 = 0;
  v6[1] = &v8;
  v4 = (_QWORD *)(v1 + 56);
  v7[0] = &v5;
  v7[1] = sub_439930;
  v8 = _mm_loadh_ps((const double *)&v4);
  v6[0] = v1;
  v7[2] = 0;
  v9 = _mm_loadh_ps((const double *)off_2C78170);
  v4 = v6;
  v10[0] = _mm_loadh_ps((const double *)&v4);
  v4 = v7;
  v10[1] = _mm_loadh_ps((const double *)&v4);
  *(_QWORD *)__tls_get_addr(&std::__once_callable) = v10;
  *(_QWORD *)__tls_get_addr(&std::__once_call) = sub_1FECAB0;
  if ( !&_pthread_key_create )
  {
    v2 = -1;
LABEL_11:
    std::__throw_system_error(v2);
  }
  v2 = pthread_once((pthread_once_t *)(v1 + 24), (void (*)(void))&_once_proxy);
  if ( v2 )
    goto LABEL_11;
  if ( !v5 )
    std::__throw_future_error(2);
  if ( _InterlockedExchange((volatile __int32 *)(v1 + 16), 1) < 0 )
    std::__atomic_futex_unsigned_base::_M_futex_notify_all(
      (std::__atomic_futex_unsigned_base *)(v1 + 16),
      (unsigned int *)&_once_proxy);
  result = v9.m128_u64[0];
  if ( v9.m128_u64[0] )
    return ((__int64 (__fastcall *)(__m128 *, __m128 *, __int64))v9.m128_u64[0])(&v8, &v8, 3);
  return result;
}

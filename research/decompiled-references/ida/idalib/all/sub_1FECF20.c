__int64 __fastcall sub_1FECF20(__int64 a1)
{
  int v2; // eax
  __int64 result; // rax
  std::__atomic_futex_unsigned_base *v4; // rdi
  double v5; // [rsp+8h] [rbp-90h] BYREF
  char v6; // [rsp+17h] [rbp-81h] BYREF
  _QWORD v7[2]; // [rsp+18h] [rbp-80h] BYREF
  _QWORD v8[3]; // [rsp+28h] [rbp-70h] BYREF
  __m128 v9; // [rsp+40h] [rbp-58h] BYREF
  __m128 v10; // [rsp+50h] [rbp-48h]
  _OWORD v11[3]; // [rsp+60h] [rbp-38h] BYREF

  v5 = (_QWORD *)(a1 + 40);
  v8[0] = &v6;
  v8[1] = sub_439930;
  v9 = _mm_loadh_ps((const double *)&v5);
  v7[0] = a1;
  v6 = 0;
  v10 = _mm_loadh_ps((const double *)off_2C78170);
  v5 = v7;
  v7[1] = &v9;
  v8[2] = 0;
  v11[0] = _mm_loadh_ps((const double *)&v5);
  v5 = v8;
  v11[1] = _mm_loadh_ps((const double *)&v5);
  *(_QWORD *)__tls_get_addr(&std::__once_callable) = v11;
  *(_QWORD *)__tls_get_addr(&std::__once_call) = sub_1FECAB0;
  if ( !&_pthread_key_create )
  {
    v2 = -1;
LABEL_10:
    std::__throw_system_error(v2);
  }
  v2 = pthread_once((pthread_once_t *)(a1 + 24), (void (*)(void))&_once_proxy);
  if ( v2 )
    goto LABEL_10;
  if ( v6 )
  {
    v4 = (std::__atomic_futex_unsigned_base *)(a1 + 16);
    if ( _InterlockedExchange((volatile __int32 *)(a1 + 16), 1) < 0 )
      std::__atomic_futex_unsigned_base::_M_futex_notify_all(v4, (unsigned int *)&_once_proxy);
  }
  result = v10.m128_u64[0];
  if ( v10.m128_u64[0] )
    return ((__int64 (__fastcall *)(__m128 *, __m128 *, __int64))v10.m128_u64[0])(&v9, &v9, 3);
  return result;
}

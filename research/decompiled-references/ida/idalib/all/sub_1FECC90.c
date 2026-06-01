int __fastcall sub_1FECC90(__int64 a1)
{
  int result; // eax
  double v2[2]; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v3[3]; // [rsp+18h] [rbp-30h] BYREF
  __m128 v4; // [rsp+30h] [rbp-18h] BYREF

  v3[0] = a1 + 32;
  v3[2] = 0;
  v3[1] = &std::thread::join;
  *(_QWORD *)&v2[0] = v3;
  v4 = _mm_loadh_ps(v2);
  *(_QWORD *)__tls_get_addr(&std::__once_callable) = &v4;
  *(_QWORD *)__tls_get_addr(&std::__once_call) = sub_1FED220;
  if ( !&_pthread_key_create )
  {
    result = -1;
LABEL_5:
    std::__throw_system_error(result);
  }
  result = pthread_once((pthread_once_t *)(a1 + 40), (void (*)(void))&_once_proxy);
  if ( result )
    goto LABEL_5;
  return result;
}

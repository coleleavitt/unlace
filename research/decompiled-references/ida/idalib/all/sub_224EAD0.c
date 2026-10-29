int sub_224EAD0()
{
  __int64 v0; // rbx
  int result; // eax
  __int64 v2; // [rsp+0h] [rbp-18h] BYREF
  __int64 *v3; // [rsp+8h] [rbp-10h] BYREF

  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, sub_224F5D0, (__int64)sub_22522C0);
  v0 = qword_2D0ABB0;
  v3 = &v2;
  v2 = qword_2D0ABB0;
  *(_QWORD *)__tls_get_addr(&std::__once_callable) = &v3;
  *(_QWORD *)__tls_get_addr(&std::__once_call) = sub_2252E20;
  if ( !&_pthread_key_create )
  {
    result = -1;
LABEL_7:
    std::__throw_system_error(result);
  }
  result = pthread_once((pthread_once_t *)(v0 + 784), (void (*)(void))&_once_proxy);
  if ( result )
    goto LABEL_7;
  return result;
}

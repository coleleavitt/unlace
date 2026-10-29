const char *__fastcall sub_7ABA10(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD); // rax
  const char *result; // rax

  v1 = (__int64 (__fastcall *)(_QWORD))dlsym(*(void **)(a1 + 32), "OpenSSL_version");
  if ( !v1 )
  {
    v1 = (__int64 (__fastcall *)(_QWORD))dlsym(*(void **)(a1 + 32), "SSLeay_version");
    if ( !v1 )
      return nullptr;
  }
  result = (const char *)v1(0);
  if ( !result )
    return &byte_22CD811;
  return result;
}


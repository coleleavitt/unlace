__int64 __fastcall sub_2290B30(int fd)
{
  int v1; // r12d
  __int64 result; // rax
  unsigned int v3; // ebx
  sigset_t v4; // [rsp+0h] [rbp-128h] BYREF
  sigset_t set; // [rsp+80h] [rbp-A8h] BYREF

  v1 = sigfillset(&v4);
  std::_V2::generic_category((std::_V2 *)&v4);
  if ( v1 < 0 || sigfillset(&set) < 0 )
    return (unsigned int)*__errno_location();
  LODWORD(result) = pthread_sigmask(2, &v4, &set);
  if ( (_DWORD)result )
    return (unsigned int)result;
  if ( close(fd) >= 0 )
    return (unsigned int)pthread_sigmask(2, &set, nullptr);
  v3 = *__errno_location();
  LODWORD(result) = pthread_sigmask(2, &set, nullptr);
  if ( !v3 )
    return (unsigned int)result;
  return v3;
}

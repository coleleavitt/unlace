bool __fastcall sub_646750(const char **a1)
{
  struct stat v2; // [rsp+0h] [rbp-98h] BYREF

  return __xstat(1, *a1, &v2) == 0;
}


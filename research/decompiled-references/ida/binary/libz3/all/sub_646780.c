_BOOL8 __fastcall sub_646780(const char **a1)
{
  struct stat v2; // [rsp+0h] [rbp-A8h] BYREF

  if ( __xstat(1, *a1, &v2) )
    return 0;
  __xstat(1, *a1, &v2);
  return (v2.st_mode & 0x4000) != 0;
}


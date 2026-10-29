__int64 clang_getClangVersion()
{
  __int64 v0; // r12
  void *src[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+10h] [rbp-28h] BYREF

  sub_D627B0(src);
  v0 = sub_6905C0(src[0], (size_t)src[1]);
  if ( src[0] != &v3 )
    operator delete(src[0], v3 + 1);
  return v0;
}


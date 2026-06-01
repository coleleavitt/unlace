__int64 __fastcall clang_Module_getFullName(__int64 a1)
{
  __int64 v1; // r12
  void *src[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+10h] [rbp-28h] BYREF

  if ( !a1 )
    return sub_690460();
  sub_C92EC0(src, a1, 0);
  v1 = sub_6905C0(src[0], (size_t)src[1]);
  if ( src[0] != &v4 )
    operator delete(src[0], v4 + 1);
  return v1;
}


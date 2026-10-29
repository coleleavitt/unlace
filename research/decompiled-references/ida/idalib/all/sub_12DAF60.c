__int64 __fastcall sub_12DAF60(__int64 a1, const void *a2, void *a3)
{
  unsigned int v4; // r12d
  __int64 *v5; // rbp
  void *s2[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v8; // [rsp+10h] [rbp-38h] BYREF

  v4 = 1;
  sub_10CCE60((__int64)s2);
  v5 = (__int64 *)s2[0];
  if ( s2[1] == a3 )
  {
    v4 = 0;
    if ( a3 )
      LOBYTE(v4) = memcmp(a2, s2[0], (size_t)a3) != 0;
  }
  if ( v5 != &v8 )
    operator delete(v5);
  return v4;
}

void __fastcall sub_FDEEB0(__int64 *a1, __int64 a2)
{
  void *v2[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v3; // [rsp+10h] [rbp-28h] BYREF

  sub_FDEB80((__int64)v2, a1);
  sub_227BF10(a2, v2[0], v2[1]);
  if ( v2[0] != &v3 )
    operator delete(v2[0]);
}

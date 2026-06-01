void __fastcall sub_2278F20(char *a1, __int64 a2, __int64 a3)
{
  void *v4[2]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v5; // [rsp+10h] [rbp-28h] BYREF

  sub_2257830((__int64)v4, a1);
  sub_227BF10(a3, v4[0], v4[1]);
  if ( v4[0] != &v5 )
    operator delete(v4[0]);
}

void __fastcall sub_225C660(__int64 a1, _BYTE *a2, __int64 a3)
{
  void *v3[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+10h] [rbp-28h] BYREF

  v3[0] = v4;
  if ( a2 )
  {
    sub_2259A00(v3, a2, (__int64)&a2[a3]);
  }
  else
  {
    v3[1] = nullptr;
    v4[0] = 0;
  }
  sub_A0AAD0(a1 + 80, v3);
  if ( v3[0] != v4 )
    operator delete(v3[0]);
}

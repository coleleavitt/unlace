void __fastcall sub_12F5C10(std::_V2 *a1, __int64 a2)
{
  void *v2[2]; // [rsp+10h] [rbp-98h] BYREF
  _BYTE v3[16]; // [rsp+20h] [rbp-88h] BYREF
  _BYTE v4[120]; // [rsp+30h] [rbp-78h] BYREF

  std::_V2::system_category(a1);
  if ( a1 )
  {
    v2[0] = v3;
    sub_12E9400(v2, a1, (__int64)a1 + a2);
  }
  else
  {
    v3[0] = 0;
    v2[0] = v3;
    v2[1] = nullptr;
  }
  sub_227D450((std::_V2 *)v4);
  if ( v2[0] != v3 )
    operator delete(v2[0]);
  sub_227B600(v4);
}

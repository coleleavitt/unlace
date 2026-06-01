void __fastcall __noreturn sub_2221CA0(_BYTE *a1)
{
  bool v1; // zf
  _BYTE *v2; // [rsp+0h] [rbp-38h] BYREF
  __int16 v3; // [rsp+20h] [rbp-18h]

  v1 = *a1 == 0;
  v3 = 257;
  if ( !v1 )
  {
    v2 = a1;
    LOBYTE(v3) = 3;
  }
  sub_2221AD0((__int64)&v2, 0);
}

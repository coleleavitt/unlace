__int64 *__fastcall sub_21A2C10(__int64 *a1, _BYTE *a2)
{
  bool v2; // zf
  __int64 v3; // rbp
  _BYTE *v5; // [rsp+0h] [rbp-48h] BYREF
  __int16 v6; // [rsp+20h] [rbp-28h]

  v2 = *a2 == 0;
  v6 = 257;
  if ( !v2 )
  {
    v5 = a2;
    LOBYTE(v6) = 3;
  }
  v3 = operator new(0x38u);
  sub_2195A00(v3, (__int64)&v5, 3);
  *a1 = v3;
  return a1;
}

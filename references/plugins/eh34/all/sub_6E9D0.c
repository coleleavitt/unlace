__int64 __fastcall sub_6E9D0(__int64 a1, __int64 a2)
{
  _QWORD v3[3]; // [rsp+0h] [rbp-48h] BYREF
  char v4; // [rsp+18h] [rbp-30h]
  unsigned __int64 v5; // [rsp+28h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_6E8E0((__int64)v3, a2);
  if ( v4 )
  {
    sub_6E690(a1, (__int64)v3);
    if ( v3[0] )
      qfree(v3[0]);
  }
  else
  {
    *(_BYTE *)(a1 + 8) = 0;
  }
  return a1;
}

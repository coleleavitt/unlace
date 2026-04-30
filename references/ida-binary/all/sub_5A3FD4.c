__int64 __fastcall sub_5A3FD4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  unsigned int v6[46]; // [rsp+20h] [rbp-C0h] BYREF

  sub_5A014E(v6, a1, 0xFFFFFFFF, 0, a2, a3, 0, 0, 0, a4);
  if ( (unsigned __int8)sub_5A0302(v6) != 1 )
    v4 = 0;
  else
    v4 = sub_5A062E((__int64)v6);
  sub_5A044E((__int64)v6);
  return v4;
}

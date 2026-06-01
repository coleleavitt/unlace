__int64 __fastcall sub_20604D0(unsigned int a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  switch ( a1 )
  {
    case 0x1Cu:
      return sub_205FC70(a2, (__int64)a2, a3, a4, a5, a6);
    case 0x1Du:
      return sub_20603A0(a2);
    case 0x11u:
      return sub_205FC70(a2, (__int64)a2, a3, a4, a5, a6);
  }
  if ( (_BYTE)a3 == 1 && a1 <= 0x1B )
  {
    a4 = a1;
    if ( ((1LL << a1) & 0xED80000) != 0 )
      return sub_205FC70(a2, (__int64)a2, a3, a4, a5, a6);
  }
  return 0;
}

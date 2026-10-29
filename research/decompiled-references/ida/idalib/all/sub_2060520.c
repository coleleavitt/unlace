__int64 __fastcall sub_2060520(unsigned int a1, __int64 **a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rax

  if ( a1 > 0x1E )
    return 0;
  v7 = 1LL << a1;
  if ( ((1LL << a1) & 0x70066000) == 0 )
  {
    if ( (_BYTE)a3 == 1 && a1 <= 0x1B )
    {
      if ( (v7 & 0xE018000) != 0 )
        return sub_205FC70(a2, a4, a3, a1, (__int64)a2, a6);
      if ( (v7 & 0x200000) != 0 )
        return sub_205FA20((__int64)a2, a4, 1.0);
      if ( (v7 & 0x180000) != 0 )
        return sub_205FB40((__int64)a2, 1, 0);
    }
    return 0;
  }
  switch ( a1 )
  {
    case 0xDu:
    case 0xFu:
    case 0x10u:
    case 0x13u:
    case 0x14u:
    case 0x15u:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
    case 0x1Bu:
    case 0x1Du:
    case 0x1Eu:
      return sub_205FC70(a2, a4, a3, a1, (__int64)a2, a6);
    case 0xEu:
      result = sub_205F790((__int64)a2, (unsigned __int8)a4 ^ 1u);
      break;
    case 0x11u:
      return sub_205FB40((__int64)a2, 1, 0);
    case 0x12u:
      return sub_205FA20((__int64)a2, a4, 1.0);
    case 0x1Cu:
      result = sub_20603A0(a2);
      break;
  }
  return result;
}

__int64 __fastcall sub_2390C0(int a1, __int64 a2, int a3, int a4)
{
  int v5; // ecx
  int v6; // edx
  __int64 result; // rax
  int v8; // edx
  int v9; // ecx
  unsigned __int64 v10; // rdx

  if ( a1 )
  {
    if ( a1 == 16 || a4 != 1 )
    {
      result = 0x11111101100000LL;
      if ( a1 != 10 )
        return result;
    }
    goto LABEL_18;
  }
  if ( (unsigned __int64)(a2 - 4097) > 0xFFFFFFFFFFFFEFFDLL )
  {
LABEL_14:
    if ( a4 != 1 )
      return 0x11111101100000LL;
LABEL_18:
    result = 0x22222202220000LL;
    if ( a2 >= 0 )
      return 0x22222202200000LL;
    return result;
  }
  v5 = 8 * a3;
  v6 = -1;
  if ( (unsigned __int64)v5 <= 0x3F )
    v6 = (1LL << v5) - 1;
  result = 0x11111101100000LL;
  v8 = a2 & v6;
  if ( (v8 & (v8 - 1)) == 0 || (v8 & (v8 + 1)) == 0 )
    return result;
  if ( (~a2 & 0xFFFFFFFF00000000LL) == 0 )
  {
    result = 0x22222202220000LL;
    if ( a4 == 1 )
      return result;
    return 0x11111101100000LL;
  }
  if ( !HIDWORD(a2) )
  {
    result = 0x22222202200000LL;
    if ( a4 == 1 )
      return result;
    return 0x11111101100000LL;
  }
  v9 = 3;
  v10 = -a2;
  if ( a2 > 0 )
    v10 = a2;
  if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v10, 1) <= 0x1999999999999999uLL )
  {
    while ( 1 )
    {
      v10 /= 0xAu;
      if ( __ROR8__(0xCCCCCCCCCCCCCCCDLL * v10, 1) > 0x1999999999999999uLL )
        return 0x11111101100000LL;
      if ( !--v9 )
        goto LABEL_14;
    }
  }
  return result;
}

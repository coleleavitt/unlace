__int64 __fastcall sub_97E610(unsigned __int16 *a1, unsigned __int64 a2, int *a3)
{
  __int64 result; // rax
  unsigned int v4; // esi
  unsigned int v5; // ecx
  __int64 v6; // rsi
  int v7; // ecx

  result = -72;
  if ( a2 > 2 )
  {
    v4 = *a1 + (*((unsigned __int8 *)a1 + 2) << 16);
    v5 = v4 >> 1;
    v6 = v4 >> 3;
    v7 = v5 & 3;
    a3[1] = *a1 & 1;
    result = 1;
    *a3 = v7;
    a3[2] = v6;
    if ( v7 != 1 )
    {
      result = -20;
      if ( v7 != 3 )
        return v6;
    }
  }
  return result;
}

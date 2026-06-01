unsigned __int64 __fastcall sub_AD430(__int64 a1, int a2)
{
  _QWORD *v2; // rbp
  unsigned __int64 result; // rax
  __int64 v4; // r11
  int v5; // edx

  v2 = *(_QWORD **)(a1 + 184);
  result = sub_A0850(
             (__int64)v2,
             16 * ((v2[15] == 0) + (unsigned int)((__int64)(v2[15] - v2[11]) >> 3) - 1)
           + ((__int64)(v2[10] - v2[8]) >> 5)
           + ((__int64)(v2[12] - v2[13]) >> 5)
           - a2
           - 1);
  if ( *(_DWORD *)(result + 8) )
  {
    if ( dbg )
    {
      v5 = dword_2515A4;
      *(_BYTE *)(a1 + 224) = v4 == 0;
      if ( v5 <= 0 || v4 )
      {
        return sub_AC780((__int64)v2, v4);
      }
      else
      {
        sub_9C1B0(dword_251408, 1);
        sub_153E00();
        return sub_153E30();
      }
    }
    else
    {
      return sub_92120((__int64)"Please select a debugger first!");
    }
  }
  return result;
}


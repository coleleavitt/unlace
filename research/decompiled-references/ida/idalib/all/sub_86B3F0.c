__int64 __fastcall sub_86B3F0(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rsi

  result = 4 * (unsigned int)(a2 != 0x4000);
  if ( !*(_DWORD *)a1 )
  {
    *(_DWORD *)(a1 + 144) = 1;
    if ( (_DWORD)result == 4 )
    {
      v5 = 25711;
      v6 = 1024;
    }
    else
    {
      v5 = 28783;
      v6 = 4096;
    }
    if ( (dword_2CD6FCC & 0x40) != 0 && (*(_BYTE *)(a1 + 6) & 1) != 0 )
    {
      return sub_868680((unsigned int *)a1, v5, a3, 0, 130, a4);
    }
    else
    {
      result = (__int64)sub_867CC0(a1, v6 | 0x6002, a3, 0, 130, a4);
      if ( result )
        *(_WORD *)result = 28431;
    }
  }
  return result;
}

__int64 __fastcall sub_3B7DE0(unsigned __int64 a1, _DWORD *a2, __int64 a3, int a4, int a5, int a6)
{
  int v6; // edx
  int v7; // eax
  __int64 result; // rax

  if ( (a1 & 0x400) != 0 )
    return 1;
  v6 = a2[1];
  if ( (v6 & 0x10) != 0 )
  {
    v7 = a2[2];
    if ( v7 > 999 )
    {
      a2[2] = 0;
      callui(27, (int)a2, (int)&callui, a4, a5, a6);
    }
    a2[2] = v7 + 1;
    if ( (v6 & 4) == 0 )
      goto LABEL_7;
  }
  else if ( (v6 & 4) == 0 )
  {
    goto LABEL_7;
  }
  if ( (a1 & 0xC000) != 0 )
    return 1;
LABEL_7:
  if ( (v6 & 8) != 0 && (a1 & 0x1000) != 0 )
    return 1;
  result = 0;
  if ( (v6 & 2) != 0 && *a2 != -1 )
  {
    LOBYTE(result) = *a2 != 0;
    return (a1 >> 8) & 1 ^ (unsigned int)result;
  }
  return result;
}

__int64 __fastcall sub_966BA0(_DWORD *a1)
{
  __int64 result; // rax
  unsigned int v2; // edx

  if ( a1[24] == 1 )
  {
    v2 = sub_90B6D0(a1[2], a1[7]) + 3;
    result = 21;
    if ( v2 > 0x14 )
    {
      result = (unsigned int)sub_90B6D0(a1[2], a1[7]) + 3;
      if ( (unsigned int)result > 0x1E )
        return 30;
    }
  }
  else
  {
    result = (unsigned int)(a1[1] + 2);
    if ( (unsigned int)result < 0x14 )
      result = 20;
    if ( (unsigned int)result > 0x1E )
      return 30;
  }
  return result;
}

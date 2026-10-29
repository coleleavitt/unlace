__int64 __fastcall sub_69D0(unsigned __int16 *a1)
{
  __int64 result; // rax
  int v2; // eax
  int v3; // edx
  unsigned __int64 v4; // rdx
  void *v5; // rax

  result = 56;
  if ( (a1[1] & 2) == 0 )
  {
    result = 52;
    if ( (a1[1] & 8) == 0 )
    {
      v2 = *a1;
      v3 = 24;
      if ( (((_WORD)v2 - 387) & 0xFFFD) != 0 )
      {
        v3 = 20;
        if ( (_WORD)v2 != 21020 )
        {
          v4 = (unsigned int)(v2 - 487);
          if ( (unsigned __int16)(v2 - 487) > 0x10u )
          {
            v3 = (unsigned __int16)(v2 - 193) < 2u ? 22 : 20;
          }
          else
          {
            v5 = &loc_10101;
            v3 = _bittest64((const __int64 *)&v5, v4) == 0 ? 20 : 24;
          }
        }
      }
      return v3 + (unsigned int)a1[12];
    }
  }
  return result;
}


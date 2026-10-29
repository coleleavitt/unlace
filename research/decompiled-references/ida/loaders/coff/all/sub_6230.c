__int64 __fastcall sub_6230(unsigned __int16 *a1, char a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edx
  void *v4; // rdx

  v2 = *a1;
  v3 = 16;
  if ( (((_WORD)v2 - 387) & 0xFFFD) == 0 )
    return v3;
  v3 = 10;
  if ( (_WORD)v2 == 21020 )
    return v3;
  v3 = 14;
  if ( (_WORD)v2 == 2560 )
    return v3;
  if ( (v2 & 0x7FFF) != 0x500 && (_WORD)v2 != 1360 && (unsigned __int16)(v2 + 32000) > 2u )
  {
    v3 = 10;
    if ( (_WORD)v2 != 147 )
    {
      v3 = 12;
      if ( (unsigned __int16)(v2 - 193) > 1u && (a2 || (unsigned __int16)(v2 - 352) > 1u) )
      {
        LOWORD(v2) = v2 - 487;
        v3 = 10;
        if ( (unsigned __int16)v2 <= 0x10u )
        {
          v4 = &loc_10101;
          return _bittest64((const __int64 *)&v4, v2) == 0 ? 10 : 14;
        }
      }
    }
    return v3;
  }
  return 16;
}


__int16 __fastcall sub_124F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  bool v4; // cf

  LOWORD(v2) = *(_WORD *)(a2 + 24);
  if ( (unsigned __int16)v2 <= 0x1EBu )
  {
    if ( (unsigned __int16)v2 > 0x1E6u )
    {
      v3 = a2 + 120;
    }
    else
    {
      if ( (unsigned __int16)v2 > 0x5Eu )
      {
        if ( (unsigned __int16)v2 > 0x78u )
        {
          v4 = (_WORD)v2 == 375;
          LOWORD(v2) = v2 - 375;
          if ( !v4 && (_WORD)v2 != 1 )
            return v2;
        }
        else if ( (unsigned __int16)v2 <= 0x74u )
        {
          return v2;
        }
      }
      else if ( (unsigned __int16)v2 <= 0x5Cu )
      {
        if ( (unsigned __int16)v2 > 0x12u )
        {
          LOWORD(v2) = v2 - 48;
          if ( (unsigned __int16)v2 > 2u )
            return v2;
        }
        else if ( (unsigned __int16)v2 <= 0xAu )
        {
          return v2;
        }
      }
      v3 = a2 + 80;
    }
    if ( *(_WORD *)(v3 + 6) == 3 )
    {
      v2 = sub_1FA90(a1, *(_QWORD *)(a2 + 16));
      if ( v2 != -1 )
      {
        if ( *(_BYTE *)(v3 + 1) != 3 )
          v2 += *(_QWORD *)(v3 + 16);
        *(_BYTE *)(v3 + 1) = 2;
        v2 &= *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL);
        *(_QWORD *)(v3 + 16) = v2;
      }
    }
  }
  else
  {
    LOWORD(v2) = v2 - 528;
    if ( (unsigned __int16)v2 <= 0xAu )
    {
      v2 = sub_1FA90(a1, *(_QWORD *)(a2 + 16));
      if ( v2 != -1 )
      {
        *(_BYTE *)(a2 + 81) = 2;
        v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*(_QWORD *)(a2 + 88) + v2);
        *(_QWORD *)(a2 + 96) = v2;
      }
    }
  }
  return v2;
}

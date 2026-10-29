char __fastcall sub_6BF150(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // rbx
  char v4; // al
  int v5; // eax

  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 2160) + 89LL) & 1) != 0 )
  {
    LOBYTE(v5) = 0;
  }
  else
  {
    v2 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    v3 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v4 = *(_BYTE *)(v3 + 16);
    if ( v4 == 13 )
    {
      LOWORD(v5) = (*(_WORD *)(v3 + 18) >> 3) & 0x1FF;
      if ( (unsigned __int16)v5 > 0x1BAu )
        LOBYTE(v5) = (((_WORD)v5 + 65) & 0x1FFu) <= 3;
      else
        LOBYTE(v5) = (unsigned __int16)v5 > 0x1B2u;
    }
    else if ( v4 == 46
           && (*(_BYTE *)(*(_QWORD *)v2 + 17LL) & 4) == 0
           && (*(_QWORD *)(sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 8LL) & 0xFFFFFFFFFFFFFFF0LL)) + 136)
             & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
    {
      return (unsigned int)~*(unsigned __int8 *)(sub_B14A40(v3) + 76) >> 7;
    }
    else
    {
      LOBYTE(v5) = 0;
    }
  }
  return v5;
}


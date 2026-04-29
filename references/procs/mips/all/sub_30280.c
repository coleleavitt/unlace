__int64 __fastcall sub_30280(__int64 a1, __int64 *a2)
{
  int v2; // eax
  unsigned __int64 v3; // rax
  unsigned __int8 v4; // r9
  __int64 v5; // rdx
  const __m128i *v7; // rdx
  __int64 v8; // rax

  v2 = *(unsigned __int16 *)(a1 + 40);
  if ( (unsigned __int16)v2 > 0xC3u )
  {
    if ( (_WORD)v2 == 473 )
      goto LABEL_22;
    LODWORD(v5) = 0;
    if ( (_WORD)v2 != 837 )
      return (unsigned int)v5;
    sub_30030(a1, a1 + 56, (const __m128i *)(a1 + 136), a2, 0xAu, 0xAu);
    v7 = (const __m128i *)(a1 + 176);
    goto LABEL_11;
  }
  if ( (unsigned __int16)v2 > 0x89u )
  {
    if ( ((1LL << ((unsigned __int8)v2 + 118)) & 0xC59) == 0 )
    {
      if ( (_WORD)v2 != 195 )
        return 0;
LABEL_22:
      v4 = 10;
      goto LABEL_6;
    }
    v7 = (const __m128i *)(a1 + 56);
LABEL_11:
    sub_30030(a1, a1 + 96, v7, a2, 0xAu, 0xAu);
    goto LABEL_12;
  }
  if ( (_WORD)v2 == 36 )
  {
    LODWORD(v5) = 0;
    if ( *(_BYTE *)(a1 + 137) != 5 )
      return (unsigned int)v5;
    v8 = *(_QWORD *)(a1 + 144);
    switch ( v8 )
    {
      case 0xFFFFLL:
        v4 = 1;
        break;
      case 0xFFFFFFFFLL:
        v4 = 2;
        break;
      case 0xFFLL:
        v4 = 0;
        break;
      default:
        return (unsigned int)v5;
    }
    goto LABEL_6;
  }
  v3 = (unsigned int)(v2 - 120);
  if ( (unsigned __int16)v3 > 0xEu )
    return 0;
  v5 = 30787;
  v4 = 10;
  LOBYTE(v5) = _bittest64(&v5, v3);
  if ( (_BYTE)v5 )
  {
LABEL_6:
    sub_30030(a1, a1 + 56, (const __m128i *)(a1 + 96), a2, 0xAu, v4);
LABEL_12:
    LODWORD(v5) = 1;
  }
  return (unsigned int)v5;
}

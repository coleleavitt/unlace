/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4F538
// Address: 0x000000000004F538

//----- (000000000004F538) ----------------------------------------------------
__int64 __fastcall sub_4F538(__int64 a1)
{
  unsigned int v1; // w8
  unsigned int v3; // w9
  __int64 v4; // x20
  __int64 (__fastcall *v5)(__int64, __int64, __int64); // x10
  __int64 v6; // x2

  v1 = *(unsigned __int16 *)(a1 + 522);
  if ( *(_BYTE *)(a1 + 616) )
  {
    if ( v1 == 15872 )
    {
      v3 = bswap32(*(unsigned __int16 *)(a1 + 520)) >> 16;
      if ( (v3 & 0xFFFE) != 2 )
      {
LABEL_18:
        LODWORD(v4) = 1;
        return (unsigned int)v4;
      }
      v4 = 2;
      goto LABEL_15;
    }
    if ( v1 != 1536 )
    {
      if ( v1 != 768 )
        goto LABEL_18;
      v3 = bswap32(*(unsigned __int16 *)(a1 + 520)) >> 16;
      if ( (v3 & 0xFFFE) != 2 )
        goto LABEL_18;
      v4 = 0;
      goto LABEL_15;
    }
    v4 = 1;
    v3 = bswap32(*(unsigned __int16 *)(a1 + 520)) >> 16;
    if ( (v3 & 0xFFFE) == 2 )
    {
LABEL_15:
      v5 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 496);
      v6 = *(unsigned __int8 *)(a1 + 509);
      *(_WORD *)(a1 + 522) = __rev16(v1);
      *(_WORD *)(a1 + 520) = v3;
      if ( (v5(a1, 3, v6) & 1) == 0 )
      {
        LODWORD(v4) = 0;
        return (unsigned int)v4;
      }
      *(_BYTE *)(a1 + 616) = 0;
      *(_BYTE *)(a1 + 618) = v4 == 2;
      if ( v4 == 2 )
        goto LABEL_18;
LABEL_17:
      *(_BYTE *)(a1 + 617) = 0;
      goto LABEL_18;
    }
  }
  else
  {
    if ( v1 != 62 )
    {
      if ( v1 != 6 && v1 != 3 || (*(_WORD *)(a1 + 520) & 0xFFFE) != 2 )
        goto LABEL_18;
      *(_BYTE *)(a1 + 618) = 0;
      goto LABEL_17;
    }
    LODWORD(v4) = 1;
    if ( (*(_WORD *)(a1 + 520) & 0xFFFE) == 2 )
      *(_BYTE *)(a1 + 618) = 1;
  }
  return (unsigned int)v4;
}

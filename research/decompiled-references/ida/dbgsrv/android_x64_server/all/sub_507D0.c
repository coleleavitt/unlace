/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_507D0
// Address: 0x00000000000507D0

//----- (00000000000507D0) ----------------------------------------------------
__int64 __fastcall sub_507D0(__int64 a1)
{
  unsigned int v1; // ebp
  __int16 v2; // ax
  __int16 v3; // cx
  __int64 v4; // r14

  v2 = *(_WORD *)(a1 + 522);
  if ( *(_BYTE *)(a1 + 616) )
  {
    LOBYTE(v1) = 1;
    switch ( v2 )
    {
      case 15872:
        v3 = __ROL2__(*(_WORD *)(a1 + 520), 8);
        if ( (v3 & 0xFFFE) != 2 )
          return v1;
        v4 = 2;
        break;
      case 1536:
        v3 = __ROL2__(*(_WORD *)(a1 + 520), 8);
        if ( (v3 & 0xFFFE) != 2 )
          return v1;
        v4 = 1;
        break;
      case 768:
        v3 = __ROL2__(*(_WORD *)(a1 + 520), 8);
        if ( (v3 & 0xFFFE) != 2 )
          return v1;
        v4 = 0;
        break;
      default:
        return v1;
    }
    *(_WORD *)(a1 + 522) = __ROL2__(v2, 8);
    *(_WORD *)(a1 + 520) = v3;
    v1 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, _QWORD))(a1 + 496))(a1, 3, *(unsigned __int8 *)(a1 + 509)) )
    {
      *(_BYTE *)(a1 + 616) = 0;
      LOBYTE(v1) = 1;
      *(_BYTE *)(a1 + 618) = v4 == 2;
      if ( v4 != 2 )
        goto LABEL_18;
    }
  }
  else
  {
    LOBYTE(v1) = 1;
    if ( v2 == 62 )
    {
      if ( (*(_WORD *)(a1 + 520) & 0xFFFE) == 2 )
        *(_BYTE *)(a1 + 618) = 1;
    }
    else if ( (v2 == 6 || v2 == 3) && (*(_WORD *)(a1 + 520) & 0xFFFE) == 2 )
    {
      *(_BYTE *)(a1 + 618) = 0;
LABEL_18:
      *(_BYTE *)(a1 + 617) = 0;
      LOBYTE(v1) = 1;
    }
  }
  return v1;
}
// 50914: variable 'v1' is possibly undefined

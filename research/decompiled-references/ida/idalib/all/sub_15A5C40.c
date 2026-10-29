void __fastcall sub_15A5C40(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned __int64 *a5, __int64 a6)
{
  __int64 v6; // rcx
  __int64 v7; // rdx

  v6 = *(_BYTE *)(a2 + 8) & 0x7F;
  if ( (*(_BYTE *)(a2 + 8) & 0x7F) != 0 )
  {
    if ( (unsigned __int8)v6 > 0x12u )
    {
      if ( (((_BYTE)v6 + 94) & 0x7Fu) <= 5 || (unsigned int)(unsigned __int8)v6 - 18 > 0x3F )
        return;
LABEL_8:
      *(_QWORD *)(a1 + 24) = sub_15A5000(*(__int64 ***)(a1 + 8), a2, a3, v6, a5, a6);
      *(_QWORD *)(a1 + 32) = v7;
      return;
    }
    a3 = 1LL << v6;
    if ( ((1LL << v6) & 0x40182) == 0 && (unsigned int)(unsigned __int8)v6 - 18 <= 0x3F )
      goto LABEL_8;
  }
}

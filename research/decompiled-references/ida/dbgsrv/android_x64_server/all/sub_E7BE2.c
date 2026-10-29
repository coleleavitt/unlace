/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7BE2
// Address: 0x00000000000E7BE2

//----- (00000000000E7BE2) ----------------------------------------------------
__int64 __fastcall sub_E7BE2(char a1, __int64 a2)
{
  unsigned __int8 v2; // al

  if ( a1 == -1 )
    return 0;
  v2 = a1 & 0x70;
  if ( (a1 & 0x70) == 0x20 )
    return Unwind_GetTextRelBase(a2);
  if ( v2 <= 0x20u )
  {
    if ( !v2 || v2 == 16 )
      return 0;
LABEL_13:
    abort();
  }
  if ( v2 == 64 )
    return Unwind_GetRegionStart(a2);
  if ( v2 != 80 )
  {
    if ( v2 == 48 )
      return Unwind_GetDataRelBase(a2);
    goto LABEL_13;
  }
  return 0;
}

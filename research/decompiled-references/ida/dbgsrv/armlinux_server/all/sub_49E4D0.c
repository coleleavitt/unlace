/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49E4D0
// Address: 0x000000000049E4D0

//----- (000000000049E4D0) ----------------------------------------------------
__int64 __fastcall sub_49E4D0(char a1, struct _Unwind_Context *a2)
{
  unsigned int v2; // w0

  v2 = a1 & 0x70;
  if ( v2 == 32 )
    return _Unwind_GetTextRelBase(a2);
  if ( v2 <= 0x20 )
  {
    if ( v2 && v2 != 16 )
      goto LABEL_12;
  }
  else
  {
    if ( v2 == 64 )
      return _Unwind_GetRegionStart(a2);
    if ( v2 != 80 )
    {
      if ( v2 == 48 )
        return _Unwind_GetDataRelBase(a2);
LABEL_12:
      abort();
    }
  }
  return 0;
}

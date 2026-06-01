/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100056080
// Address: 0x0000000100056080

//----- (0000000100056080) ----------------------------------------------------
__int64 __fastcall sub_100056080(__int64 a1, __int64 a2, char *a3, va_list a4)
{
  if ( a2 && *(_BYTE *)(a2 + 68) != 1 )
    return sub_10005E6DC(a1, a2);
  else
    return sub_100060F44(a1, a3, a4);
}

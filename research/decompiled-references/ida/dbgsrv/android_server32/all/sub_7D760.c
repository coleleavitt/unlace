/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7D760
// Address: 0x0007D760

//----- (0007D760) --------------------------------------------------------
bool __fastcall sub_7D760(unsigned __int8 *a1, _BYTE *a2)
{
  int v2; // r2

  if ( *a2 != 42 )
    return sub_7D77A(a1, a2);
  v2 = 1;
  if ( a2[1] )
    return sub_7D77A(a1, a2);
  return v2;
}

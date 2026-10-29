/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_450D98
// Address: 0x0000000000450D98

//----- (0000000000450D98) ----------------------------------------------------
bool __fastcall sub_450D98(unsigned __int8 a1)
{
  int v1; // w19
  int v2; // w0
  _BOOL4 v3; // w1

  v1 = a1;
  if ( (a1 & 0x80) != 0 || (v2 = isalnum(a1), v3 = 1, !v2) )
  {
    v3 = v1 == 95;
    if ( v1 == 36 )
      return 1;
  }
  return v3;
}

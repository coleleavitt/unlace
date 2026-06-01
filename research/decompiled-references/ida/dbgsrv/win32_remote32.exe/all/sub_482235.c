/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_482235
// Address: 0x00482235

//----- (00482235) --------------------------------------------------------
double __fastcall sub_482235(int a1, _DWORD *a2)
{
  double result; // st7

  if ( (a2[1] & 0x7FF00000) != 0x7FF00000 )
    return *(double *)a2;
  *(_QWORD *)&result = *(_QWORD *)a2 << 11;
  return result;
}

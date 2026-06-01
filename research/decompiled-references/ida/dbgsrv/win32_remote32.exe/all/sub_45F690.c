/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45F690
// Address: 0x0045F690

//----- (0045F690) --------------------------------------------------------
int __stdcall sub_45F690(_WORD *a1, _WORD *a2)
{
  __int16 v2; // cx
  int result; // eax

  v2 = a1[1] | 0x8000;
  if ( !*a1 )
    v2 = a1[1];
  a2[7] = v2;
  a2[6] = a1[3];
  a2[5] = a1[4];
  a2[4] = a1[5];
  a2[3] = a1[6];
  a2[2] = a1[7];
  a2[1] = a1[8];
  result = (unsigned __int16)a1[9];
  *a2 = result;
  return result;
}

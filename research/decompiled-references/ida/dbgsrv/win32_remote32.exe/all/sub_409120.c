/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_409120
// Address: 0x00409120

//----- (00409120) --------------------------------------------------------
char __cdecl sub_409120(int a1, int *a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // eax

  LOBYTE(v8) = sub_408E60(*a2, a1, a2, a3, a5, a6, a7, a8);
  if ( !(_BYTE)v8 )
  {
    v8 = sub_404420(1);
    if ( v8 != 1 )
      sub_414580(0);
  }
  return v8;
}

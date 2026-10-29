/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44FDB0
// Address: 0x0044FDB0

//----- (0044FDB0) --------------------------------------------------------
void __stdcall sub_44FDB0(LPVOID *a1)
{
  LPVOID *v1; // esi
  LPVOID *i; // edi

  v1 = a1;
  for ( i = a1; v1; i = v1 )
  {
    if ( v1[5] )
      sub_46C918(v1[5]);
    if ( v1[6] )
      sub_46C918(v1[6]);
    v1 = (LPVOID *)v1[7];
    sub_46C918(i);
  }
}

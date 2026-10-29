/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3D17C
// Address: 0x0003D17C

//----- (0003D17C) --------------------------------------------------------
int __fastcall sub_3D17C(_DWORD *a1)
{
  const char *v2; // r0

  if ( a1[7] )
    v2 = (const char *)a1[6];
  else
    v2 = &byte_B3CBE;
  a1[26] = add_idc_class(v2, 0);
  return 0;
}
// B3CBE: using guessed type char byte_B3CBE;

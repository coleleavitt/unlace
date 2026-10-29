/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_64D78
// Address: 0x0000000000064D78

//----- (0000000000064D78) ----------------------------------------------------
__int64 __fastcall sub_64D78(_QWORD *a1)
{
  const char *v2; // x0

  if ( a1[6] )
    v2 = (const char *)a1[5];
  else
    v2 = &byte_F154B;
  a1[23] = add_idc_class(v2, 0);
  return 0;
}
// F154B: using guessed type char byte_F154B;

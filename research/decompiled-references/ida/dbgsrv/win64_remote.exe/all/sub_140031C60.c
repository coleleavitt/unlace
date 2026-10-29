/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140031C60
// Address: 0x0000000140031C60

//----- (0000000140031C60) ----------------------------------------------------
__int64 __fastcall sub_140031C60(_QWORD *a1)
{
  char *v1; // rdx

  v1 = (char *)Str1;
  if ( a1[5] )
    v1 = (char *)a1[4];
  return sub_140033DD0(a1, v1);
}

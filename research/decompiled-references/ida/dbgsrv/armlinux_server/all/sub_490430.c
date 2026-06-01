/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490430
// Address: 0x0000000000490430

//----- (0000000000490430) ----------------------------------------------------
__off64_t __fastcall sub_490430(int a1)
{
  __off64_t v2; // x19
  __off64_t v3; // x21

  v2 = sub_48FEE8(a1);
  v3 = v2;
  if ( v2 != -1 )
  {
    v3 = sub_48FF28(a1, 0, 2);
    sub_48FF28(a1, v2, 0);
  }
  return v3;
}

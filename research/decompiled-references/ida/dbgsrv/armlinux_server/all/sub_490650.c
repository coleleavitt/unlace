/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_490650
// Address: 0x0000000000490650

//----- (0000000000490650) ----------------------------------------------------
__int64 __fastcall sub_490650(FILE *a1, __off64_t a2, int a3)
{
  unsigned int v3; // w19

  if ( a1 )
  {
    v3 = fseeko64(a1, a2, a3);
    if ( v3 )
      sub_4869C8(1);
  }
  else
  {
    sub_4869C8(1);
    v3 = -1;
    *__errno_location() = 9;
    sub_4869C8(1);
  }
  return v3;
}

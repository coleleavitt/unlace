/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4906A0
// Address: 0x00000000004906A0

//----- (00000000004906A0) ----------------------------------------------------
__int64 __fastcall sub_4906A0(FILE *a1)
{
  unsigned int v1; // w19

  if ( a1 )
  {
    v1 = fclose(a1);
    if ( v1 )
      sub_4869C8(1);
  }
  else
  {
    sub_4869C8(1);
    v1 = -1;
    *__errno_location() = 9;
    sub_4869C8(1);
  }
  return v1;
}

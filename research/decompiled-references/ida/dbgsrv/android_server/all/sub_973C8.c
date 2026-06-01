/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_973C8
// Address: 0x00000000000973C8

//----- (00000000000973C8) ----------------------------------------------------
void __fastcall sub_973C8(__int64 *a1)
{
  if ( *a1 )
  {
    sub_97494(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}

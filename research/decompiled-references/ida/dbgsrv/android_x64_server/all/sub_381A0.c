/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_381A0
// Address: 0x00000000000381A0

//----- (00000000000381A0) ----------------------------------------------------
void __fastcall sub_381A0(__int64 *a1)
{
  if ( *a1 )
  {
    sub_385C0(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}

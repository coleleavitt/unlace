/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_394A8
// Address: 0x00000000000394A8

//----- (00000000000394A8) ----------------------------------------------------
void __fastcall sub_394A8(__int64 *a1)
{
  if ( *a1 )
  {
    sub_39B38(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}

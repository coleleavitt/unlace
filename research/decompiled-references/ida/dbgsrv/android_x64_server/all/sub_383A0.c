/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_383A0
// Address: 0x00000000000383A0

//----- (00000000000383A0) ----------------------------------------------------
void __fastcall sub_383A0(__int64 *a1)
{
  if ( *a1 )
  {
    sub_38B70(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39314
// Address: 0x0000000000039314

//----- (0000000000039314) ----------------------------------------------------
void __fastcall sub_39314(__int64 *a1)
{
  if ( *a1 )
  {
    sub_3967C(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}

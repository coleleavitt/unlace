/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_39384
// Address: 0x0000000000039384

//----- (0000000000039384) ----------------------------------------------------
void __fastcall sub_39384(__int64 *a1)
{
  if ( *a1 )
  {
    sub_39980(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}

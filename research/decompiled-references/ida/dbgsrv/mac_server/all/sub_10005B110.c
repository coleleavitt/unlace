/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B110
// Address: 0x000000010005B110

//----- (000000010005B110) ----------------------------------------------------
void __fastcall sub_10005B110(__int64 *a1)
{
  if ( *a1 )
  {
    sub_10005EB30(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}

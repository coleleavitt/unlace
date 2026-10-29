/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9CD10
// Address: 0x000000000009CD10

//----- (000000000009CD10) ----------------------------------------------------
void __fastcall sub_9CD10(__int64 *a1)
{
  if ( *a1 )
  {
    sub_9CE00(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
}

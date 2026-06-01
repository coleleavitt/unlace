/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100053F08
// Address: 0x0000000100053F08

//----- (0000000100053F08) ----------------------------------------------------
__int64 *__fastcall sub_100053F08(__int64 *a1)
{
  if ( *a1 )
  {
    sub_100057478(a1, 0);
    qfree((void *)*a1);
    *a1 = 0;
    a1[2] = 0;
  }
  return a1;
}

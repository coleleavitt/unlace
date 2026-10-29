/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006374
// Address: 0x0000000100006374

//----- (0000000100006374) ----------------------------------------------------
const void ***__fastcall sub_100006374(const void ***a1)
{
  const void *v2; // x0

  v2 = **a1;
  if ( v2 )
    CFRelease(v2);
  return a1;
}

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005F30
// Address: 0x0000000100005F30

//----- (0000000100005F30) ----------------------------------------------------
const void ***__fastcall sub_100005F30(const void ***a1)
{
  const void *v2; // x0

  v2 = **a1;
  if ( v2 )
    CFRelease(v2);
  return a1;
}

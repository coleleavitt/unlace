/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100006A90
// Address: 0x0000000100006A90

//----- (0000000100006A90) ----------------------------------------------------
void __fastcall sub_100006A90(const void ***a1)
{
  const void *v1; // rdi

  v1 = **a1;
  if ( v1 )
    CFRelease(v1);
}

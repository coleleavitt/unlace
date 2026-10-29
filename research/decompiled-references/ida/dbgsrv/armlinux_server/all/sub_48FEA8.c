/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_48FEA8
// Address: 0x000000000048FEA8

//----- (000000000048FEA8) ----------------------------------------------------
__int64 __fastcall sub_48FEA8(int a1, const void *a2, size_t a3)
{
  unsigned int v4; // w0
  unsigned int v5; // w19

  v4 = write(a1, a2, a3);
  v5 = v4;
  if ( a3 != v4 )
    sub_4869C8((unsigned int)(v4 != -1) + 1);
  return v5;
}

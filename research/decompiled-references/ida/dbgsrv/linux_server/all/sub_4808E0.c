/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4808E0
// Address: 0x00000000004808E0

//----- (00000000004808E0) ----------------------------------------------------
__int64 __fastcall sub_4808E0(int a1)
{
  unsigned int v1; // ebx

  v1 = close(a1);
  if ( v1 != -1 )
    return v1;
  sub_479EB0(1u);
  return 0xFFFFFFFFLL;
}

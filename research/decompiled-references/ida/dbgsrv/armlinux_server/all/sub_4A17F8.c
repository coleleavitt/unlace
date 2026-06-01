/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A17F8
// Address: 0x00000000004A17F8

//----- (00000000004A17F8) ----------------------------------------------------
bool __fastcall sub_4A17F8(__int64 a1)
{
  signed int v1; // w0

  v1 = atomic_load((unsigned int *)(a1 + 16));
  return v1 > 0;
}

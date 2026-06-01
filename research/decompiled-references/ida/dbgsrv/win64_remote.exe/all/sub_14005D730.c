/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D730
// Address: 0x000000014005D730

//----- (000000014005D730) ----------------------------------------------------
bool __fastcall sub_14005D730(void *a1)
{
  return ReleaseSemaphore(a1, 1, nullptr);
}

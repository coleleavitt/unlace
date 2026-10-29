/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D920
// Address: 0x000000014005D920

//----- (000000014005D920) ----------------------------------------------------
bool __fastcall sub_14005D920(HANDLE *a1)
{
  return WaitForSingleObject(*a1, 0xFFFFFFFF) == 0;
}

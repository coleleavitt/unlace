/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D6F0
// Address: 0x000000014005D6F0

//----- (000000014005D6F0) ----------------------------------------------------
HANDLE __fastcall sub_14005D6F0(const CHAR *a1, LONG a2)
{
  return CreateSemaphoreA(nullptr, a2, 0x7FFFFFFF, a1);
}

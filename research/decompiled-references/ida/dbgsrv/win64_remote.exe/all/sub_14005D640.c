/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D640
// Address: 0x000000014005D640

//----- (000000014005D640) ----------------------------------------------------
struct _RTL_CRITICAL_SECTION *sub_14005D640()
{
  struct _RTL_CRITICAL_SECTION *v0; // rbx

  v0 = (struct _RTL_CRITICAL_SECTION *)operator new(0x28u);
  InitializeCriticalSection(v0);
  return v0;
}

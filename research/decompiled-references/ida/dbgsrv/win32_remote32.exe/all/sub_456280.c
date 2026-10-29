/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456280
// Address: 0x00456280

//----- (00456280) --------------------------------------------------------
struct _RTL_CRITICAL_SECTION *sub_456280()
{
  struct _RTL_CRITICAL_SECTION *v0; // esi

  v0 = (struct _RTL_CRITICAL_SECTION *)sub_4627C2(0x18u);
  InitializeCriticalSection(v0);
  return v0;
}

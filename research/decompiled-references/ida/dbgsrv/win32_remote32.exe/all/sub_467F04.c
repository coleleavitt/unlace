/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467F04
// Address: 0x00467F04

//----- (00467F04) --------------------------------------------------------
BOOL __usercall sub_467F04@<eax>(int a1@<ebx>, int a2@<edi>)
{
  HANDLE CurrentProcess; // eax

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(5u);
  sub_467D48(a1, a2, -1073740777, 2, 0x1C0000417LL);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000417);
}

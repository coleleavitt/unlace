/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BB54
// Address: 0x0046BB54

//----- (0046BB54) --------------------------------------------------------
void __cdecl __noreturn sub_46BB54(UINT uExitCode)
{
  HANDLE CurrentProcess; // eax

  if ( sub_47A7EA() != 1 && (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0 )
  {
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, uExitCode);
  }
  sub_46BBD9(uExitCode);
  ExitProcess(uExitCode);
}

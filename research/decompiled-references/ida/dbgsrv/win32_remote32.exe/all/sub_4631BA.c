/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4631BA
// Address: 0x004631BA

//----- (004631BA) --------------------------------------------------------
BOOL __cdecl sub_4631BA(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  HANDLE CurrentProcess; // eax

  SetUnhandledExceptionFilter(nullptr);
  UnhandledExceptionFilter(ExceptionInfo);
  CurrentProcess = GetCurrentProcess();
  return TerminateProcess(CurrentProcess, 0xC0000409);
}

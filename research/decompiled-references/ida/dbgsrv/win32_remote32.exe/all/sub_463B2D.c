/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_463B2D
// Address: 0x00463B2D

//----- (00463B2D) --------------------------------------------------------
LONG __userpurge TopLevelExceptionFilter@<eax>(int a1@<ebx>, struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  PEXCEPTION_RECORD ExceptionRecord; // esi
  ULONG_PTR v3; // eax
  PCONTEXT ContextRecord; // esi

  ExceptionRecord = ExceptionInfo->ExceptionRecord;
  if ( ExceptionInfo->ExceptionRecord->ExceptionCode == -529697949 && ExceptionRecord->NumberParameters == 3 )
  {
    v3 = ExceptionRecord->ExceptionInformation[0];
    if ( v3 == 429065504 || v3 == 429065505 || v3 == 429065506 || v3 == 26820608 )
    {
      *(_DWORD *)sub_463F0B(a1, (int *)ExceptionInfo, (int)ExceptionRecord) = ExceptionRecord;
      ContextRecord = ExceptionInfo->ContextRecord;
      *(_DWORD *)sub_463F14(a1, (int *)ExceptionInfo, (int)ContextRecord) = ContextRecord;
      sub_477B21(a1, (int *)ExceptionInfo);
    }
  }
  return 0;
}

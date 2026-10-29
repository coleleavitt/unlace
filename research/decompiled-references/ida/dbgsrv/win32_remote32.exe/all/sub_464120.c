/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_464120
// Address: 0x00464120

//----- (00464120) --------------------------------------------------------
int __userpurge sub_464120@<eax>(
        struct _EXCEPTION_REGISTRATION_RECORD **a1@<ebx>,
        PVOID TargetFrame,
        PEXCEPTION_RECORD ExceptionRecord)
{
  int result; // eax

  RtlUnwind(TargetFrame, &loc_46414B, ExceptionRecord, nullptr);
  result = ExceptionRecord->ExceptionFlags & 0xFFFFFFFD;
  ExceptionRecord->ExceptionFlags = result;
  *a1 = NtCurrentTeb()->NtTib.ExceptionList;
  return result;
}

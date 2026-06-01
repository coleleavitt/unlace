/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140001530
// Address: 0x0000000140001530

//----- (0000000140001530) ----------------------------------------------------
void sub_140001530()
{
  _DWORD *v0; // rbx
  DWORD CurrentThreadId; // eax
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  if ( !qword_1400CB638 )
  {
    v0 = operator new(0x10u);
    CurrentThreadId = GetCurrentThreadId();
    *(_QWORD *)v0 = -1;
    v0[2] = CurrentThreadId;
    qword_1400CB638 = (__int64)v0;
    v2 = (struct _RTL_CRITICAL_SECTION *)operator new(0x28u);
    InitializeCriticalSection(v2);
    lpCriticalSection = v2;
  }
}
// 1400CB638: using guessed type __int64 qword_1400CB638;

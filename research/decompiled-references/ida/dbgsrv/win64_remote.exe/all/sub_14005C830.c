/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005C830
// Address: 0x000000014005C830

//----- (000000014005C830) ----------------------------------------------------
bool sub_14005C830()
{
  __int64 v0; // rbx
  _DWORD *v1; // rbx
  DWORD CurrentThreadId; // eax
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  bool result; // al

  v0 = qword_1400CB638;
  result = (qword_1400CB638
         || (v1 = operator new(0x10u),
             CurrentThreadId = GetCurrentThreadId(),
             *(_QWORD *)v1 = -1,
             v1[2] = CurrentThreadId,
             qword_1400CB638 = (__int64)v1,
             v3 = (struct _RTL_CRITICAL_SECTION *)operator new(0x28u),
             InitializeCriticalSection(v3),
             lpCriticalSection = v3,
             (v0 = qword_1400CB638) != 0))
        && *(_DWORD *)(v0 + 8) == GetCurrentThreadId();
  return result;
}
// 1400CB638: using guessed type __int64 qword_1400CB638;

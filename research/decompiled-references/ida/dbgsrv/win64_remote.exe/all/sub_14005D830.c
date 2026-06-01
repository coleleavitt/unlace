/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D830
// Address: 0x000000014005D830

//----- (000000014005D830) ----------------------------------------------------
_QWORD *__fastcall sub_14005D830(LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter)
{
  _DWORD *v4; // rbx
  DWORD CurrentThreadId; // eax
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  _QWORD *result; // rax
  HANDLE v8; // rbx
  DWORD v9; // ecx
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  if ( !qword_1400CB638 )
  {
    v4 = operator new(0x10u);
    CurrentThreadId = GetCurrentThreadId();
    *(_QWORD *)v4 = -1;
    v4[2] = CurrentThreadId;
    qword_1400CB638 = (__int64)v4;
    v6 = (struct _RTL_CRITICAL_SECTION *)operator new(0x28u);
    InitializeCriticalSection(v6);
    lpCriticalSection = v6;
  }
  result = CreateThread(nullptr, 0, lpStartAddress, lpParameter, 0, &ThreadId);
  v8 = result;
  if ( result )
  {
    result = operator new(0x10u);
    v9 = ThreadId;
    *result = v8;
    *((_DWORD *)result + 2) = v9;
  }
  return result;
}
// 1400CB638: using guessed type __int64 qword_1400CB638;

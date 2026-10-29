/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_456450
// Address: 0x00456450

//----- (00456450) --------------------------------------------------------
_DWORD *__stdcall sub_456450(LPTHREAD_START_ROUTINE lpStartAddress, LPVOID lpParameter)
{
  _DWORD *v2; // esi
  struct _RTL_CRITICAL_SECTION *v3; // esi
  _DWORD *result; // eax
  _DWORD *v5; // esi
  DWORD v6; // ecx
  DWORD ThreadId; // [esp+4h] [ebp-4h] BYREF

  if ( !dword_4B7120 )
  {
    v2 = sub_4627C2(8u);
    v2[1] = GetCurrentThreadId();
    *v2 = -1;
    dword_4B7120 = (int)v2;
    v3 = (struct _RTL_CRITICAL_SECTION *)sub_4627C2(0x18u);
    InitializeCriticalSection(v3);
    lpCriticalSection = v3;
  }
  result = CreateThread(nullptr, 0, lpStartAddress, lpParameter, 0, &ThreadId);
  v5 = result;
  if ( result )
  {
    result = sub_4627C2(8u);
    v6 = ThreadId;
    *result = v5;
    result[1] = v6;
  }
  return result;
}
// 4B7120: using guessed type int dword_4B7120;

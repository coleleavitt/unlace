/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_455100
// Address: 0x00455100

//----- (00455100) --------------------------------------------------------
bool sub_455100()
{
  int v0; // esi
  _DWORD *v1; // esi
  struct _RTL_CRITICAL_SECTION *v2; // esi
  bool result; // al

  v0 = dword_4B7120;
  result = (dword_4B7120
         || (v1 = sub_4627C2(8u),
             v1[1] = GetCurrentThreadId(),
             *v1 = -1,
             dword_4B7120 = (int)v1,
             v2 = (struct _RTL_CRITICAL_SECTION *)sub_4627C2(0x18u),
             InitializeCriticalSection(v2),
             lpCriticalSection = v2,
             (v0 = dword_4B7120) != 0))
        && *(_DWORD *)(v0 + 4) == GetCurrentThreadId();
  return result;
}
// 4B7120: using guessed type int dword_4B7120;

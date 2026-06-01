/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005D770
// Address: 0x000000014005D770

//----- (000000014005D770) ----------------------------------------------------
_BOOL8 __fastcall sub_14005D770(char *Name, char *Value)
{
  _DWORD *v4; // rbx
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  bool v6; // di

  if ( qword_1400CB638 )
  {
    v5 = lpCriticalSection;
  }
  else
  {
    v4 = operator new(0x10u);
    v4[2] = GetCurrentThreadId();
    *(_QWORD *)v4 = -1;
    qword_1400CB638 = (__int64)v4;
    v5 = (struct _RTL_CRITICAL_SECTION *)operator new(0x28u);
    InitializeCriticalSection(v5);
    lpCriticalSection = v5;
  }
  if ( v5 )
    EnterCriticalSection(v5);
  v6 = putenv_s(Name, Value) == 0;
  if ( v5 )
    LeaveCriticalSection(v5);
  return v6;
}
// 1400CB638: using guessed type __int64 qword_1400CB638;

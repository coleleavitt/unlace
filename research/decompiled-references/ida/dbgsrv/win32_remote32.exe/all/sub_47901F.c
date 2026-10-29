/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47901F
// Address: 0x0047901F

//----- (0047901F) --------------------------------------------------------
int __stdcall sub_47901F(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC v3; // eax

  v3 = sub_478DE1(18, "InitializeCriticalSectionEx", dword_4A798C, dword_4A7994);
  if ( v3 )
    return ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))v3)(v3, lpCriticalSection, dwSpinCount, a3);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A798C: using guessed type int dword_4A798C[2];
// 4A7994: using guessed type int dword_4A7994[2];

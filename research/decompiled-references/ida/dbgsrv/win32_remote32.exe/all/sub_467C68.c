/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467C68
// Address: 0x00467C68

//----- (00467C68) --------------------------------------------------------
int __cdecl sub_467C68(LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount, int a3)
{
  FARPROC v3; // eax

  v3 = sub_467A8E(4, "InitializeCriticalSectionEx", dword_4A4F68, (int *)&xmmword_4A4F70);
  if ( v3 )
    return ((int (__thiscall *)(FARPROC, LPCRITICAL_SECTION, DWORD, int))v3)(v3, lpCriticalSection, dwSpinCount, a3);
  else
    return InitializeCriticalSectionAndSpinCount(lpCriticalSection, dwSpinCount);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A4F68: using guessed type int dword_4A4F68[2];
// 4A4F70: using guessed type __int128 xmmword_4A4F70;

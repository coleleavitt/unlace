/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478F9E
// Address: 0x00478F9E

//----- (00478F9E) --------------------------------------------------------
LPVOID __stdcall sub_478F9E(DWORD a1)
{
  FARPROC v1; // eax

  v1 = sub_478DE1(5, "FlsGetValue", dword_4A797C, dword_4A7984);
  if ( v1 )
    return ((LPVOID (__thiscall *)(FARPROC, DWORD))v1)(v1, a1);
  else
    return TlsGetValue(a1);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A797C: using guessed type int dword_4A797C[2];
// 4A7984: using guessed type int dword_4A7984[2];

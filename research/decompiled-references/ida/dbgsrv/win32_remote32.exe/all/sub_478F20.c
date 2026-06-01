/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478F20
// Address: 0x00478F20

//----- (00478F20) --------------------------------------------------------
DWORD __stdcall sub_478F20(int a1)
{
  FARPROC v1; // eax

  v1 = sub_478DE1(3, "FlsAlloc", dword_4A796C, dword_4A7974);
  if ( v1 )
    return ((int (__thiscall *)(FARPROC, int))v1)(v1, a1);
  else
    return TlsAlloc();
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A796C: using guessed type int dword_4A796C[2];
// 4A7974: using guessed type int dword_4A7974[2];

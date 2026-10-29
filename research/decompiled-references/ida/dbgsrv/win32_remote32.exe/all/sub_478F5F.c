/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478F5F
// Address: 0x00478F5F

//----- (00478F5F) --------------------------------------------------------
int __stdcall sub_478F5F(DWORD a1)
{
  FARPROC v1; // eax

  v1 = sub_478DE1(4, "FlsFree", dword_4A7974, dword_4A797C);
  if ( v1 )
    return ((int (__thiscall *)(FARPROC, DWORD))v1)(v1, a1);
  else
    return TlsFree(a1);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A7974: using guessed type int dword_4A7974[2];
// 4A797C: using guessed type int dword_4A797C[2];

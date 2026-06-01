/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478E64
// Address: 0x00478E64

//----- (00478E64) --------------------------------------------------------
int __stdcall sub_478E64(int a1)
{
  FARPROC v1; // eax

  v1 = sub_478DE1(28, "AppPolicyGetProcessTerminationMethod", &dword_4A79C8, "AppPolicyGetProcessTerminationMethod");
  if ( v1 )
    return ((int (__thiscall *)(FARPROC, int, int))v1)(v1, -6, a1);
  else
    return -1073741275;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A79C8: using guessed type int dword_4A79C8;

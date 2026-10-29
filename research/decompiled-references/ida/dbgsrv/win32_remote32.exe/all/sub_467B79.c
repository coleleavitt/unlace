/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467B79
// Address: 0x00467B79

//----- (00467B79) --------------------------------------------------------
DWORD __cdecl sub_467B79(int a1)
{
  FARPROC v1; // eax

  v1 = sub_467A8E(0, "FlsAlloc", &dword_4A4F48, &dword_4A4F50);
  if ( v1 )
    return ((int (__thiscall *)(FARPROC, int))v1)(v1, a1);
  else
    return TlsAlloc();
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A4F48: using guessed type int dword_4A4F48;
// 4A4F50: using guessed type int dword_4A4F50;

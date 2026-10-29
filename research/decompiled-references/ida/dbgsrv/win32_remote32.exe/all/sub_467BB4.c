/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467BB4
// Address: 0x00467BB4

//----- (00467BB4) --------------------------------------------------------
int __cdecl sub_467BB4(DWORD dwTlsIndex)
{
  FARPROC v1; // eax

  v1 = sub_467A8E(1, "FlsFree", &dword_4A4F50, &dword_4A4F58);
  if ( v1 )
    return ((int (__thiscall *)(FARPROC, DWORD))v1)(v1, dwTlsIndex);
  else
    return TlsFree(dwTlsIndex);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A4F50: using guessed type int dword_4A4F50;
// 4A4F58: using guessed type int dword_4A4F58;

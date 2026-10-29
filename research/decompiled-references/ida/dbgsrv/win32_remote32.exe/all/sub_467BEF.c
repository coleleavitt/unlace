/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467BEF
// Address: 0x00467BEF

//----- (00467BEF) --------------------------------------------------------
LPVOID __cdecl sub_467BEF(DWORD dwTlsIndex)
{
  FARPROC v1; // eax

  v1 = sub_467A8E(2, "FlsGetValue", &dword_4A4F58, &dword_4A4F60);
  if ( v1 )
    return ((LPVOID (__thiscall *)(FARPROC, DWORD))v1)(v1, dwTlsIndex);
  else
    return TlsGetValue(dwTlsIndex);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A4F58: using guessed type int dword_4A4F58;
// 4A4F60: using guessed type int dword_4A4F60;

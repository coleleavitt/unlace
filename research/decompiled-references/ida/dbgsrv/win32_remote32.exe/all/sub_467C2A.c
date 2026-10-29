/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467C2A
// Address: 0x00467C2A

//----- (00467C2A) --------------------------------------------------------
int __cdecl sub_467C2A(DWORD dwTlsIndex, LPVOID lpTlsValue)
{
  FARPROC v2; // eax

  v2 = sub_467A8E(3, "FlsSetValue", &dword_4A4F60, dword_4A4F68);
  if ( v2 )
    return ((int (__thiscall *)(FARPROC, DWORD, LPVOID))v2)(v2, dwTlsIndex, lpTlsValue);
  else
    return TlsSetValue(dwTlsIndex, lpTlsValue);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A4F60: using guessed type int dword_4A4F60;
// 4A4F68: using guessed type int dword_4A4F68[2];

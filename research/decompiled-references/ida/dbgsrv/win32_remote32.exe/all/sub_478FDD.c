/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478FDD
// Address: 0x00478FDD

//----- (00478FDD) --------------------------------------------------------
int __stdcall sub_478FDD(DWORD a1, void *a2)
{
  FARPROC v2; // eax

  v2 = sub_478DE1(6, "FlsSetValue", dword_4A7984, dword_4A798C);
  if ( v2 )
    return ((int (__thiscall *)(FARPROC, DWORD, void *))v2)(v2, a1, a2);
  else
    return TlsSetValue(a1, a2);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4A7984: using guessed type int dword_4A7984[2];
// 4A798C: using guessed type int dword_4A798C[2];

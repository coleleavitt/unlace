/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_478EA4
// Address: 0x00478EA4

//----- (00478EA4) --------------------------------------------------------
int sub_478EA4()
{
  FARPROC v0; // eax

  v0 = sub_478CB2();
  if ( v0 )
    return ((int (__thiscall *)(FARPROC))v0)(v0);
  else
    return 1;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);

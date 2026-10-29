/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4790C7
// Address: 0x004790C7

//----- (004790C7) --------------------------------------------------------
int __stdcall sub_4790C7(unsigned __int16 *a1, int a2)
{
  FARPROC v2; // eax

  v2 = sub_478D00();
  if ( v2 )
    return ((int (__thiscall *)(FARPROC, unsigned __int16 *, int))v2)(v2, a1, a2);
  else
    return sub_47F01F(a1);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);

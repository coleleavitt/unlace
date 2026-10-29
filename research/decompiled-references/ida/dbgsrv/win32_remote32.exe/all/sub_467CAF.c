/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_467CAF
// Address: 0x00467CAF

//----- (00467CAF) --------------------------------------------------------
void __usercall __noreturn sub_467CAF(int a1@<ebx>, int *a2@<edi>, int a3@<esi>)
{
  _DWORD *v3; // eax
  void (__thiscall *v4)(_DWORD); // esi

  v3 = sub_4667C5(a1, a2, a3);
  v4 = (void (__thiscall *)(_DWORD))v3[1];
  if ( v4 )
    v4(v3[1]);
  sub_477B21(a1, a2);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);

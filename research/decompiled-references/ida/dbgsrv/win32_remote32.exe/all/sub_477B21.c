/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477B21
// Address: 0x00477B21

//----- (00477B21) --------------------------------------------------------
void __usercall __noreturn sub_477B21(int a1@<ebx>, int *a2@<edi>)
{
  void (__thiscall *v2)(_DWORD); // esi

  v2 = *(void (__thiscall **)(_DWORD))(sub_4782C6() + 12);
  if ( v2 )
    v2(v2);
  sub_467F38(a1, a2, (int)v2);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);

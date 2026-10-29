/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4649F1
// Address: 0x004649F1

//----- (004649F1) --------------------------------------------------------
void __usercall __noreturn sub_4649F1(int a1@<ebx>, int *a2@<edi>)
{
  void (__thiscall *v2)(_DWORD); // eax
  int v3; // esi

  v2 = (void (__thiscall *)(_DWORD))sub_4649EA();
  v3 = (int)v2;
  if ( v2 )
    v2(v2);
  sub_467F38(a1, a2, v3);
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);

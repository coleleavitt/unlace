/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462E11
// Address: 0x00462E11

//----- (00462E11) --------------------------------------------------------
int __stdcall sub_462E11(int a1, int a2, int a3, int (__thiscall *a4)(int))
{
  int i; // esi
  int result; // eax

  for ( i = 0; i != a3; ++i )
  {
    a1 -= a2;
    result = a4(a1);
  }
  return result;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);

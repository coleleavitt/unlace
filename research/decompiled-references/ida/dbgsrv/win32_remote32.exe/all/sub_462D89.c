/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_462D89
// Address: 0x00462D89

//----- (00462D89) --------------------------------------------------------
int __stdcall sub_462D89(int a1, int a2, int a3, void (__thiscall *a4)(int))
{
  int v4; // edi
  int i; // esi

  v4 = a3;
  for ( i = a3 * a2 + a1; v4--; a4(i) )
    i -= a2;
  return 1;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);

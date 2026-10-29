/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46312F
// Address: 0x0046312F

//----- (0046312F) --------------------------------------------------------
char __stdcall sub_46312F(int a1, int a2, int a3, void (__thiscall *a4)(int), int a5)
{
  int i; // ebx

  for ( i = 0; i != a3; ++i )
  {
    a4(a1);
    a1 += a2;
  }
  return 1;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);

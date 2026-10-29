/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8EC90
// Address: 0x0008EC90

//----- (0008EC90) --------------------------------------------------------
unsigned int __cdecl sub_8EC90(int a1, _DWORD *a2, char a3)
{
  unsigned int result; // eax

  sub_939E0(a1, a2, a3);
  result = cliopts_t_add(a2, (__int64 *)&off_1386E8, 1);
  if ( *(_BYTE *)(a1 + 72) )
    return cliopts_t_add(a2, (__int64 *)&dword_1386FC, 2);
  return result;
}
// 1386E8: using guessed type int off_1386E8;
// 1386FC: using guessed type int dword_1386FC;

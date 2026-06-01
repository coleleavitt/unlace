/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9A9F0
// Address: 0x0009A9F0

//----- (0009A9F0) --------------------------------------------------------
unsigned int __cdecl sub_9A9F0(int a1, _DWORD *a2, unsigned int a3)
{
  unsigned int result; // eax

  sub_939E0(a1, a2, a3);
  cliopts_t_add(a2, (__int64 *)&dword_138C1C, 6);
  result = a3;
  if ( (a3 & 2) != 0 )
    return cliopts_t_add(a2, (__int64 *)&dword_138C94, 1);
  return result;
}
// 138C1C: using guessed type int dword_138C1C;
// 138C94: using guessed type int dword_138C94;

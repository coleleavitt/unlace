/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_939E0
// Address: 0x000939E0

//----- (000939E0) --------------------------------------------------------
unsigned int __cdecl sub_939E0(int a1, _DWORD *a2, char a3)
{
  unsigned int result; // eax

  result = cliopts_t_add(a2, (__int64 *)&off_138A90, 5);
  if ( (a3 & 1) != 0 )
    return cliopts_t_add(a2, (__int64 *)&off_138AF4, 1);
  return result;
}
// 138A90: using guessed type int off_138A90;
// 138AF4: using guessed type int off_138AF4;

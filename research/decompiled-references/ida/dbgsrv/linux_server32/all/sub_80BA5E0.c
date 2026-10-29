/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BA5E0
// Address: 0x080BA5E0

//----- (080BA5E0) --------------------------------------------------------
int __cdecl sub_80BA5E0(int a1, char **a2, char a3)
{
  int result; // eax

  result = sub_80C53B0(a2, (char *)&dword_811C660, 5);
  if ( (a3 & 1) != 0 )
    return sub_80C53B0(a2, (char *)&dword_811C64C, 1);
  return result;
}
// 811C64C: using guessed type int dword_811C64C;
// 811C660: using guessed type int dword_811C660;

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A4DE0
// Address: 0x080A4DE0

//----- (080A4DE0) --------------------------------------------------------
int __cdecl sub_80A4DE0(int a1, char **a2, char a3)
{
  int result; // eax

  sub_80BA5E0(a1, a2, a3);
  result = sub_80C53B0(a2, (char *)&dword_811C168, 1);
  if ( *(_BYTE *)(a1 + 72) )
    return sub_80C53B0(a2, (char *)&dword_811C140, 2);
  return result;
}
// 811C140: using guessed type int dword_811C140;
// 811C168: using guessed type int dword_811C168;

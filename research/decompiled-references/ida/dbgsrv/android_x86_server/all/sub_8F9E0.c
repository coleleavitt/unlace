/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F9E0
// Address: 0x0008F9E0

//----- (0008F9E0) --------------------------------------------------------
int (__cdecl **__cdecl sub_8F9E0(int a1, char a2, int a3))(int)
{
  sub_95AB0(a1, a2, a3, 0, 0);
  *(_DWORD *)a1 = &off_13872C;
  *(_WORD *)(a1 + 52) = 0;
  return &off_13872C;
}
// 13872C: using guessed type int (__cdecl *off_13872C)(int);

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96C00
// Address: 0x00096C00

//----- (00096C00) --------------------------------------------------------
int __cdecl sub_96C00(_DWORD *a1, int a2)
{
  int result; // eax
  char v3; // al

  result = (int)a1;
  a1[11] = a2;
  if ( (debug & 0x100000) != 0 )
  {
    v3 = (*(int (__cdecl **)(_DWORD *))(*a1 + 44))(a1);
    return sub_96C50((int)"%s", v3);
  }
  return result;
}
// 13E340: using guessed type int debug;

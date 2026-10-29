/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2B520
// Address: 0x0002B520

//----- (0002B520) --------------------------------------------------------
char sub_2B520()
{
  int (__cdecl **v1[7])(_DWORD, int); // [esp+8h] [ebp-1Ch] BYREF

  v1[2] = (int (__cdecl **)(_DWORD, int))__readgsdword(0x14u);
  v1[0] = &off_134710;
  sub_8EB50(v1);
  return 1;
}
// 134710: using guessed type int (__cdecl *off_134710)(int, int);

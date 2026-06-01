/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_805D780
// Address: 0x0805D780

//----- (0805D780) --------------------------------------------------------
int sub_805D780()
{
  int (__cdecl **v1)(int, int); // [esp+0h] [ebp-14h] BYREF
  unsigned int v2; // [esp+4h] [ebp-10h]

  v2 = __readgsdword(0x14u);
  v1 = &off_811B870;
  sub_80A4C60(&v1);
  if ( v2 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return 1;
}
// 811B870: using guessed type int (__cdecl *off_811B870)(int, int);

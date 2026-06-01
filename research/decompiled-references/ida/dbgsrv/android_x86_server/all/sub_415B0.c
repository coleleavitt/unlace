/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_415B0
// Address: 0x000415B0

//----- (000415B0) --------------------------------------------------------
void __cdecl sub_415B0(void *ptr)
{
  *(_DWORD *)ptr = &off_1347FC;
  sub_2B6C0((int)ptr + 16, *((void ***)ptr + 5));
  sub_437F0((int)ptr + 4, *((void **)ptr + 2));
  operator delete(ptr);
}
// 1347FC: using guessed type int (__cdecl *off_1347FC)(int);

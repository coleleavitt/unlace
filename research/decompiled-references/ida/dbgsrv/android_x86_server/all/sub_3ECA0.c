/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3ECA0
// Address: 0x0003ECA0

//----- (0003ECA0) --------------------------------------------------------
unsigned int __cdecl sub_3ECA0(int a1, char a2)
{
  _DWORD v3[6]; // [esp+0h] [ebp-18h] BYREF

  v3[3] = __readgsdword(0x14u);
  v3[2] = &a2;
  callui((int)v3);
  return __readgsdword(0x14u);
}
// 13BC20: using guessed type int (__stdcall *callui)(int);

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_67810
// Address: 0x00067810

//----- (00067810) --------------------------------------------------------
unsigned int sub_67810()
{
  _DWORD v1[4]; // [esp+8h] [ebp-10h] BYREF

  v1[1] = __readgsdword(0x14u);
  callui((int)v1);
  return __readgsdword(0x14u);
}
// 13BC20: using guessed type int (__stdcall *callui)(int);

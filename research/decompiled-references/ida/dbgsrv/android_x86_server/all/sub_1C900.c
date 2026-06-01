/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1C900
// Address: 0x0001C900

//----- (0001C900) --------------------------------------------------------
int sub_1C900()
{
  _DWORD v1[4]; // [esp+8h] [ebp-10h] BYREF

  v1[1] = __readgsdword(0x14u);
  callui((int)v1);
  return v1[0];
}
// 13BC20: using guessed type int (__stdcall *callui)(int);

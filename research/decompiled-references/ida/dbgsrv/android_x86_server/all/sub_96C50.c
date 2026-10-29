/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_96C50
// Address: 0x00096C50

//----- (00096C50) --------------------------------------------------------
int __cdecl sub_96C50(int a1, char a2)
{
  _DWORD v3[7]; // [esp+8h] [ebp-1Ch] BYREF

  v3[2] = __readgsdword(0x14u);
  v3[1] = &a2;
  callui((int)v3);
  return v3[0];
}
// 13BC20: using guessed type int (__stdcall *callui)(int);

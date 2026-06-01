/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44030
// Address: 0x00044030

//----- (00044030) --------------------------------------------------------
int sub_44030()
{
  _DWORD v1[7]; // [esp+10h] [ebp-1Ch] BYREF

  v1[2] = __readgsdword(0x14u);
  callui((int)v1);
  return v1[0];
}
// 13BC20: using guessed type int (__stdcall *callui)(int);

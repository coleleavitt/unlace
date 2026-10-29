/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_780B0
// Address: 0x000780B0

//----- (000780B0) --------------------------------------------------------
int sub_780B0()
{
  _BYTE v1[8]; // [esp+8h] [ebp-1Ch] BYREF
  unsigned int v2; // [esp+10h] [ebp-14h]

  v2 = __readgsdword(0x14u);
  callui((int)v1);
  return v1[0];
}
// 13BC20: using guessed type int (__stdcall *callui)(int);

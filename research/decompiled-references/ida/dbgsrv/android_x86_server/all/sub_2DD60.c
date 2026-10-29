/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2DD60
// Address: 0x0002DD60

//----- (0002DD60) --------------------------------------------------------
unsigned int sub_2DD60()
{
  _DWORD v1[4]; // [esp+8h] [ebp-10h] BYREF

  v1[1] = __readgsdword(0x14u);
  if ( (debug & 0x10000) != 0 )
    callui((int)v1);
  return __readgsdword(0x14u);
}
// 13BC20: using guessed type int (__stdcall *callui)(int);
// 13E340: using guessed type int debug;

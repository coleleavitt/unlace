/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065148
// Address: 0x0000000100065148

//----- (0000000100065148) ----------------------------------------------------
_QWORD *sub_100065148()
{
  _QWORD *result; // x0

  result = operator new(0x68u);
  result[1] = 0;
  result[2] = 0;
  *((_DWORD *)result + 6) = -1;
  *result = &off_10009FBE8;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = -1;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = &byte_1000931E5;
  *((_DWORD *)result + 24) = 0;
  *((_BYTE *)result + 100) = 0;
  return result;
}
// 1000931E5: using guessed type char byte_1000931E5;
// 10009FBE8: using guessed type __int64 (__fastcall *off_10009FBE8)();

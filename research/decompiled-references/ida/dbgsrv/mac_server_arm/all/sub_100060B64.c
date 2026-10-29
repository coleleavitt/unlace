/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100060B64
// Address: 0x0000000100060B64

//----- (0000000100060B64) ----------------------------------------------------
_QWORD *sub_100060B64()
{
  _QWORD *result; // x0

  result = operator new(0x68u);
  result[1] = 0;
  result[2] = 0;
  *((_DWORD *)result + 6) = -1;
  *result = &off_10009BBA8;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = -1;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = &byte_10008E2F5;
  *((_DWORD *)result + 24) = 0;
  *((_BYTE *)result + 100) = 0;
  return result;
}
// 10008E2F5: using guessed type char byte_10008E2F5;
// 10009BBA8: using guessed type __int64 (__fastcall *off_10009BBA8)();

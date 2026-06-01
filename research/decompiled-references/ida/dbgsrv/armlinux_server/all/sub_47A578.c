/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A578
// Address: 0x000000000047A578

//----- (000000000047A578) ----------------------------------------------------
_QWORD *sub_47A578()
{
  _QWORD *result; // x0

  result = sub_49E050(0x68u);
  result[1] = 0;
  result[2] = 0;
  *((_DWORD *)result + 6) = -1;
  *result = off_51BA78;
  result[4] = 0;
  result[5] = 0;
  result[6] = 0;
  result[7] = -1;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = &byte_4B31F0;
  *((_DWORD *)result + 24) = 0;
  *((_BYTE *)result + 100) = 0;
  return result;
}
// 4B31F0: using guessed type char byte_4B31F0;
// 51BA78: using guessed type __int64 (__fastcall *off_51BA78[7])();

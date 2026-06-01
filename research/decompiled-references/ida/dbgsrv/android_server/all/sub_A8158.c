/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A8158
// Address: 0x00000000000A8158

//----- (00000000000A8158) ----------------------------------------------------
_DWORD *sub_A8158()
{
  _DWORD *result; // x0

  result = operator new(0x68u);
  result[6] = -1;
  *((_QWORD *)result + 6) = 0;
  *((_QWORD *)result + 7) = -1;
  *((_QWORD *)result + 1) = 0;
  *((_QWORD *)result + 2) = 0;
  *((_QWORD *)result + 4) = 0;
  *((_QWORD *)result + 5) = 0;
  *((_QWORD *)result + 8) = 0;
  *((_QWORD *)result + 9) = 0;
  result[24] = 0;
  *(_QWORD *)result = off_15F2D8;
  *((_QWORD *)result + 10) = 0;
  *((_QWORD *)result + 11) = "";
  *((_BYTE *)result + 100) = 0;
  return result;
}
// 15F2D8: using guessed type __int64 (__fastcall *off_15F2D8[7])();

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_474F10
// Address: 0x0000000000474F10

//----- (0000000000474F10) ----------------------------------------------------
__int64 sub_474F10()
{
  __int64 result; // rax

  result = operator new(0x68u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = -1;
  *(_QWORD *)result = &off_4C40A0;
  *(_QWORD *)(result + 96) = 0;
  *(_QWORD *)(result + 64) = "";
  *(_QWORD *)(result + 72) = 0xFFFFFFFF00000000LL;
  *(_OWORD *)(result + 48) = 0;
  *(_OWORD *)(result + 32) = 0;
  *(_OWORD *)(result + 80) = 0;
  return result;
}
// 4C40A0: using guessed type _UNKNOWN *off_4C40A0;

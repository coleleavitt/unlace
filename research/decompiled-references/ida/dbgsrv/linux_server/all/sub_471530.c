/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_471530
// Address: 0x0000000000471530

//----- (0000000000471530) ----------------------------------------------------
__int64 sub_471530()
{
  __int64 result; // rax

  result = operator new(0x68u);
  *(_QWORD *)(result + 8) = 0;
  *(_QWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 24) = -1;
  *(_QWORD *)result = &off_4C3E18;
  *(_QWORD *)(result + 32) = 0;
  *(_QWORD *)(result + 56) = -1;
  *(_QWORD *)(result + 64) = 0;
  *(_QWORD *)(result + 88) = "";
  *(_DWORD *)(result + 96) = 0;
  *(_BYTE *)(result + 100) = 0;
  *(_OWORD *)(result + 40) = 0;
  *(_OWORD *)(result + 72) = 0;
  return result;
}
// 4C3E18: using guessed type _UNKNOWN *off_4C3E18;

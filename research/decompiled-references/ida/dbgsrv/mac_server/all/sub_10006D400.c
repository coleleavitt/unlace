/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006D400
// Address: 0x000000010006D400

//----- (000000010006D400) ----------------------------------------------------
char *sub_10006D400()
{
  char *result; // rax

  result = (char *)operator new(0x68u);
  *(_OWORD *)(result + 8) = 0;
  *((_DWORD *)result + 6) = -1;
  *(_QWORD *)result = &off_1000AA700;
  *((_OWORD *)result + 2) = 0;
  *((_QWORD *)result + 6) = 0;
  *((_QWORD *)result + 7) = -1;
  *((_OWORD *)result + 4) = 0;
  *((_QWORD *)result + 10) = 0;
  *((_QWORD *)result + 11) = &_s;
  *((_DWORD *)result + 24) = 0;
  result[100] = 0;
  return result;
}
// 1000AA700: using guessed type __int64 (__fastcall *off_1000AA700)();

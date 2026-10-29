/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006F2C0
// Address: 0x000000010006F2C0

//----- (000000010006F2C0) ----------------------------------------------------
char *sub_10006F2C0()
{
  char *result; // rax

  result = (char *)operator new(0x68u);
  *(_OWORD *)(result + 8) = 0;
  *((_DWORD *)result + 6) = -1;
  *(_QWORD *)result = &off_1000AA818;
  *((_QWORD *)result + 12) = 0;
  *((_OWORD *)result + 2) = 0;
  *((_OWORD *)result + 3) = 0;
  *((_QWORD *)result + 8) = &_s;
  *((_QWORD *)result + 9) = 0xFFFFFFFF00000000LL;
  *((_OWORD *)result + 5) = 0;
  return result;
}
// 1000AA818: using guessed type __int64 (__fastcall *off_1000AA818)();

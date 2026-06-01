/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AD070
// Address: 0x00000000000AD070

//----- (00000000000AD070) ----------------------------------------------------
char *sub_AD070()
{
  char *result; // rax

  result = (char *)operator new(0x68u);
  *(_OWORD *)(result + 8) = 0;
  *((_DWORD *)result + 6) = -1;
  *(_QWORD *)result = &off_14F6D8;
  *((_OWORD *)result + 2) = 0;
  *((_QWORD *)result + 6) = 0;
  *((_QWORD *)result + 7) = -1;
  *((_OWORD *)result + 4) = 0;
  *((_QWORD *)result + 10) = 0;
  *((_QWORD *)result + 11) = &byte_EB522;
  *((_DWORD *)result + 24) = 0;
  result[100] = 0;
  return result;
}
// 14F6D8: using guessed type __int64 (__fastcall *off_14F6D8)();

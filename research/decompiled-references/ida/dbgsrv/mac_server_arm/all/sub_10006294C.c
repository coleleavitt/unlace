/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006294C
// Address: 0x000000010006294C

//----- (000000010006294C) ----------------------------------------------------
double sub_10006294C()
{
  char *v0; // x0

  v0 = (char *)operator new(0x68u);
  *(_OWORD *)(v0 + 8) = 0u;
  *((_DWORD *)v0 + 6) = -1;
  *(_QWORD *)v0 = off_10009BCB8;
  *((_QWORD *)v0 + 11) = 0;
  *((_QWORD *)v0 + 12) = 0;
  *((_OWORD *)v0 + 2) = 0u;
  *((_OWORD *)v0 + 3) = 0u;
  *((_QWORD *)v0 + 8) = &byte_10008E2F5;
  *((_QWORD *)v0 + 10) = 0;
  *((_QWORD *)v0 + 9) = 0xFFFFFFFF00000000LL;
  return NAN;
}
// 10008E2F5: using guessed type char byte_10008E2F5;
// 10009BCB8: using guessed type __int64 (__fastcall *off_10009BCB8[20])();

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40E770
// Address: 0x000000000040E770

//----- (000000000040E770) ----------------------------------------------------
int *__fastcall sub_40E770(int *result)
{
  int *v1; // x20

  if ( *((_QWORD *)result + 207) )
  {
    v1 = result;
    off_522070(*((_QWORD *)result + 207));
    *((_QWORD *)v1 + 207) = 0;
    sub_40E718((__int64)&qword_522040, (_QWORD *)qword_522050);
    qword_522050 = 0;
    qword_522058 = (__int64)&dword_522048;
    qword_522060 = (__int64)&dword_522048;
    qword_522068 = 0;
    return &dword_522048;
  }
  return result;
}
// 522040: using guessed type __int64 qword_522040;
// 522048: using guessed type int dword_522048;
// 522050: using guessed type __int64 qword_522050;
// 522058: using guessed type __int64 qword_522058;
// 522060: using guessed type __int64 qword_522060;
// 522068: using guessed type __int64 qword_522068;
// 522070: using guessed type __int64 (__fastcall *off_522070)(_QWORD);

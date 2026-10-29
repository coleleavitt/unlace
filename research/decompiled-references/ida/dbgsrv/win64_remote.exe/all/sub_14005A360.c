/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A360
// Address: 0x000000014005A360

//----- (000000014005A360) ----------------------------------------------------
int sub_14005A360()
{
  unsigned __int64 v0; // rax
  double LowPart; // xmm1_8
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  if ( !byte_1400CB608 )
  {
    LODWORD(v0) = QueryPerformanceFrequency(&Frequency);
    if ( Frequency.QuadPart < 0 )
    {
      v0 = Frequency.LowPart & 1 | ((unsigned __int64)Frequency.QuadPart >> 1);
      LowPart = (double)(int)v0 + (double)(int)v0;
    }
    else
    {
      LowPart = (double)(int)Frequency.LowPart;
    }
    byte_1400CB608 = 1;
    *(double *)&qword_1400CB610 = 1000000000.0 / LowPart;
  }
  return v0;
}
// 14005A3BC: variable 'v0' is possibly undefined
// 1400CB608: using guessed type char byte_1400CB608;
// 1400CB610: using guessed type __int64 qword_1400CB610;

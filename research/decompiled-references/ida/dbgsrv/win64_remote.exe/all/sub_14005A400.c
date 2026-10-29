/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14005A400
// Address: 0x000000014005A400

//----- (000000014005A400) ----------------------------------------------------
unsigned __int64 sub_14005A400()
{
  double LowPart; // xmm0_8
  double v1; // xmm0_8
  unsigned __int64 v2; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  sub_14005A360();
  QueryPerformanceCounter(&PerformanceCount);
  if ( PerformanceCount.QuadPart < 0 )
    LowPart = (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1))
            + (double)(int)(PerformanceCount.LowPart & 1 | ((unsigned __int64)PerformanceCount.QuadPart >> 1));
  else
    LowPart = (double)(int)PerformanceCount.LowPart;
  v1 = LowPart * *(double *)&qword_1400CB610;
  v2 = 0;
  if ( v1 >= 9.223372036854776e18 )
  {
    v1 = v1 - 9.223372036854776e18;
    if ( v1 < 9.223372036854776e18 )
      v2 = 0x8000000000000000uLL;
  }
  return v2 + (unsigned int)(int)v1;
}
// 1400CB610: using guessed type __int64 qword_1400CB610;

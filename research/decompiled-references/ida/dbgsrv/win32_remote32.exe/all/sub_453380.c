/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_453380
// Address: 0x00453380

//----- (00453380) --------------------------------------------------------
int __usercall sub_453380@<eax>(__int128 a1@<xmm0>)
{
  double v1; // xmm0_8
  LARGE_INTEGER Frequency; // [esp+0h] [ebp-10h] BYREF
  LARGE_INTEGER PerformanceCount; // [esp+8h] [ebp-8h] BYREF

  if ( !byte_4B70FD )
  {
    QueryPerformanceFrequency(&Frequency);
    v1 = COERCE_DOUBLE(sub_462D40(Frequency.LowPart, Frequency.HighPart));
    byte_4B70FD = 1;
    *(double *)&qword_4B7100 = 1000000000.0 / v1;
  }
  QueryPerformanceCounter(&PerformanceCount);
  *(double *)&a1 = COERCE_DOUBLE(sub_462D40(PerformanceCount.LowPart, PerformanceCount.HighPart))
                 * *(double *)&qword_4B7100;
  return sub_462C60(a1);
}
// 4B70FD: using guessed type char byte_4B70FD;
// 4B7100: using guessed type __int64 qword_4B7100;

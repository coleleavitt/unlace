__int64 __fastcall sub_230980(const double *a1, unsigned __int64 a2, int a3)
{
  double v3; // rax
  unsigned int v4; // ebx
  __m128 v6; // [rsp+0h] [rbp-38h] BYREF
  double v7; // [rsp+10h] [rbp-28h]
  unsigned __int64 v8; // [rsp+18h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v3 = *a1;
  v6 = _mm_loadh_ps(a1);
  v7 = v3;
  v4 = sub_227740((__int64)&v6, a2, a3);
  if ( (_BYTE)v4 )
    sub_2304B0((__int64)&v6, 0xFFFFFFFFFFFFFFFFLL, 0);
  return v4;
}

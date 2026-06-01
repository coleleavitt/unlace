unsigned __int64 __fastcall sub_10045F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  double v4[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = a2;
  if ( (a2 & 2) != 0 )
    v2 = a2 | 1;
  if ( (v2 & 4) != 0 )
    v2 |= 1uLL;
  if ( (v2 & 0x10) != 0 )
    v2 |= 9uLL;
  if ( (v2 & 0x20) != 0 )
    v2 |= 1uLL;
  if ( (v2 & 0x100) != 0 )
    LOBYTE(v2) = v2 | 0x80;
  if ( (v2 & 0x400) != 0 )
    v2 = -1;
  *(_QWORD *)&v4[0] = v2;
  return _mm_loadh_ps(v4).m128_u64[0];
}

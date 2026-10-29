unsigned __int64 __fastcall sub_12959D0(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax
  double v3; // rdx
  double v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_DWORD *)(a1 + 48);
  v2 = sub_112B370(a1);
  *(_QWORD *)&v5[0] = v2;
  if ( (unsigned int)(v1 - 37) <= 1 )
  {
    BYTE1(v3) |= 2u;
    *(_QWORD *)&v5[0] |= 0x20090000004BC3FuLL;
    if ( v1 != 38 )
      *(_QWORD *)&v5[0] = v2 | 0x200100000040007LL;
  }
  v5[0] = v3;
  return _mm_loadh_ps(v5).m128_u64[0];
}

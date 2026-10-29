unsigned __int64 __fastcall sub_F6E530(__int64 a1)
{
  __int64 v1; // rax
  double v2; // rdx
  double v4[2]; // [rsp+18h] [rbp-20h] BYREF
  _BYTE v5[9]; // [rsp+2Fh] [rbp-9h] BYREF

  v1 = sub_F6BC10((__int64)v5, *(_QWORD *)a1, *(_QWORD *)(a1 + 8));
  if ( !v1 )
    return 0;
  if ( v1 & 7 | (v1 >> 3) & 1 )
  {
    v4[0] = 0.0;
  }
  else
  {
    if ( *(_BYTE *)(*(_QWORD *)(v1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 16 )
      v2 = 0.0;
    v4[0] = v2;
  }
  return _mm_loadh_ps(v4).m128_u64[0];
}

unsigned __int64 __fastcall sub_F6D010(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  double v6[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( !(a1 & 7 | (a1 >> 3) & 1) && *(_BYTE *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40 && a1 )
  {
    do
    {
      a1 = *(_QWORD *)(a1 + 32);
      v4 = a2 + 8;
      v5 = 1;
      if ( (a1 & 0xFFFFFFFFFFFFFFF0LL) != 0 && (a1 & 0xF) == 0 )
        v5 = byte_2400320[*(unsigned __int8 *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL)];
      a2 = v5 * ((v4 != 0) + (v4 - (v4 != 0)) / v5);
    }
    while ( (a1 & 0xF) == 0 && *(_BYTE *)(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 40 && a1 );
  }
  *(_QWORD *)&v6[0] = a2;
  return _mm_loadh_ps(v6).m128_u64[0];
}

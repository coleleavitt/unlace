unsigned __int64 __fastcall sub_F490E0(__int64 *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r11
  __int64 v4; // rsi
  __int64 v5; // r10
  __int64 v6; // rdx
  __m128 v7; // xmm0
  __m128 v9; // [rsp+0h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = 0;
  v4 = a1[1];
  v5 = 0;
  while ( 1 )
  {
    if ( (v2 & 0xF) == 0 )
    {
      switch ( *(_BYTE *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL) )
      {
        case 2:
        case 4:
        case 5:
        case 6:
        case 0xB:
        case 0x18:
        case 0x19:
        case 0x1A:
        case 0x21:
        case 0x22:
        case 0x26:
        case 0x28:
        case 0x2A:
        case 0x2B:
        case 0x2C:
        case 0x3B:
          break;
        default:
          v9.m128_u64[0] = v3;
          v7 = _mm_loadh_ps((const double *)v9.m128_u64);
          v9 = v7;
          if ( v5 )
            return sub_F47980(v9.m128_i64[0], (unsigned int *)v9.m128_u64[1], *(double *)v7.m128_u64) >> 32;
          v9.m128_u64[0] = v4;
          v9 = _mm_loadh_ps((const double *)v9.m128_u64);
          if ( v2 )
            return sub_F47980(v9.m128_i64[0], (unsigned int *)v9.m128_u64[1], *(double *)v7.m128_u64) >> 32;
          else
            return 0;
      }
    }
    v2 = sub_F47650(v2);
    v4 = v6;
  }
}


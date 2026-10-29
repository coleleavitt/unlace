unsigned __int64 __fastcall sub_F6CCB0(__int64 *a1, __m128 a2)
{
  __int64 v2; // rbx
  unsigned int *v3; // rdx
  __int64 v4; // rbp
  unsigned int *v5; // r12
  unsigned int v6; // ecx
  __int64 v7; // rax
  unsigned __int64 result; // rax
  __m128 v9; // [rsp+0h] [rbp-48h] BYREF
  unsigned int *v10; // [rsp+18h] [rbp-30h]

  v2 = *a1;
  v3 = (unsigned int *)a1[1];
  v4 = *a1;
  v5 = v3;
  do
  {
    while ( 1 )
    {
      if ( (v2 & 0xF) == 0 )
      {
        v6 = *(unsigned __int8 *)(*(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
        if ( v6 > 0x3B )
          goto LABEL_7;
        v7 = 1LL << v6;
        if ( ((1LL << v6) & 0x800000002000074LL) == 0 )
          break;
      }
LABEL_16:
      v2 = sub_F6B390(v2);
    }
    if ( (v7 & 0x4000000) != 0 )
    {
      if ( (*(_BYTE *)(v2 + 20) & 1) != 0 )
      {
        v9.m128_u64[0] = (unsigned __int64)v3;
        v9 = _mm_loadh_ps((const double *)v9.m128_u64);
        return sub_F6B6C0(v9.m128_i64[0], (unsigned int *)v9.m128_u64[1], *(double *)a2.m128_u64);
      }
      goto LABEL_16;
    }
    if ( (v7 & 0x1000000) == 0 )
    {
LABEL_7:
      v9.m128_u64[0] = (unsigned __int64)v3;
      a2 = _mm_loadh_ps((const double *)v9.m128_u64);
      v9 = a2;
      if ( v2 )
      {
        v10 = v3;
        if ( (unsigned int)sub_F6B6C0(v2, v3, *(double *)a2.m128_u64) )
        {
          v5 = v10;
          v4 = v2;
        }
      }
      goto LABEL_10;
    }
    v9.m128_u64[0] = (unsigned __int64)v3;
    v9 = _mm_loadh_ps((const double *)v9.m128_u64);
    if ( v2 && (unsigned int)sub_F6B6C0(v2, v3, *(double *)a2.m128_u64) )
      return sub_F6B6C0(v9.m128_i64[0], (unsigned int *)v9.m128_u64[1], *(double *)a2.m128_u64);
LABEL_10:
    v2 = sub_F6B390(v9.m128_i64[0]);
  }
  while ( v2 );
  result = 0;
  v9.m128_u64[0] = (unsigned __int64)v5;
  v9 = _mm_loadh_ps((const double *)v9.m128_u64);
  if ( !v4 )
    return result;
  return sub_F6B6C0(v9.m128_i64[0], (unsigned int *)v9.m128_u64[1], *(double *)a2.m128_u64);
}

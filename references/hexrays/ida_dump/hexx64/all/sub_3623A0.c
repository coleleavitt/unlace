unsigned __int64 __fastcall sub_3623A0(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v6; // r13
  unsigned int v7; // eax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rsi
  int v10; // eax
  __int64 v11; // rdi
  __m128 v12; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 v13; // [rsp+10h] [rbp-58h]
  unsigned __int64 v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h]
  int v16; // [rsp+28h] [rbp-40h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]

  v3 = 0;
  v17 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(*a1 + 1337LL) & 0x10) != 0 )
  {
    v13 = *(_QWORD *)(a3 + 40) + *(_QWORD *)(a3 + 32);
    v16 = 0;
    v14 = 0;
    v15 = 0;
    v12 = _mm_loadh_ps((const double *)(a3 + 32));
    do
    {
      v16 = unpack_dd(&v12.m128_u16[4]);
      if ( !v16
        || (v6 = v13,
            v7 = unpack_dd(&v12.m128_u16[4]),
            v8 = v12.m128_u64[1],
            v9 = v7 + v12.m128_u64[1],
            __CFADD__(v7, v12.m128_u64[1]))
        || v6 < v9
        || (v12.m128_u64[1] += v7, (v14 = v8) == 0) )
      {
        v3 = 0;
        goto LABEL_10;
      }
      v15 = v7;
    }
    while ( v16 != 2 );
    v12.m128_u64[0] = v8;
    v3 = unpack_dq(&v12, v9);
LABEL_10:
    v10 = sub_3605F0((__int64)(a1 + 1), a2);
    if ( v10 < 0 )
      sub_35D910();
    v11 = a1[23] + 120LL * v10;
    *(_DWORD *)(v11 + 100) = 3;
    sub_6B870(
      (__int64 *)(v11 + 8),
      (__int64)"// skipped because of lumina (saved %u.%03u seconds)\n",
      v3 / 0x3B9ACA00,
      v3 / 0xF4240 - 1000 * ((unsigned __int64)((v3 / 0x7A1200 * (unsigned __int128)0x20C49BA5E353F7CFuLL) >> 64) >> 4));
  }
  return v3;
}

void __fastcall sub_1AAA380(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __m128 v8; // xmm0
  __int64 v9; // [rsp+8h] [rbp-70h] BYREF
  __int64 v10; // [rsp+10h] [rbp-68h] BYREF
  unsigned int v11; // [rsp+18h] [rbp-60h]
  char v12; // [rsp+1Ch] [rbp-5Ch]
  __int128 v13; // [rsp+20h] [rbp-58h]
  __int64 v14; // [rsp+30h] [rbp-48h]
  __int64 v15; // [rsp+38h] [rbp-40h]
  __m128 v16; // [rsp+40h] [rbp-38h]
  char v17; // [rsp+50h] [rbp-28h]
  char v18; // [rsp+58h] [rbp-20h]

  v9 = a5;
  if ( (*(_BYTE *)(sub_168B6E0(a1) + 97) & 4) != 0 )
  {
    v15 = a3;
    v13 = 0;
    v10 = a1;
    v8 = _mm_loadh_ps((const double *)&v9);
    v11 = a2;
    v12 = 0;
    v14 = 0;
    v16 = v8;
    v17 = 1;
    v18 = 0;
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 && *(_BYTE *)(a1 + 288) != 20 )
    {
      v18 = 1;
      sub_1AA9DF0((__int64)&v10, *(double *)v8.m128_u64);
    }
    sub_1AA9FD0(a1, (void **)a2, (__int64)&v10, v6, v7, *(double *)v8.m128_u64);
  }
}

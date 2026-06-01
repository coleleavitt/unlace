void __fastcall sub_1AAA420(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // rcx
  __int64 v9; // r8
  __m128 v10; // xmm0
  __m128 v11; // xmm0
  __m128 v12; // xmm0
  __int64 v13; // [rsp+8h] [rbp-80h] BYREF
  double v14[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v15; // [rsp+20h] [rbp-68h] BYREF
  unsigned int v16; // [rsp+28h] [rbp-60h]
  char v17; // [rsp+2Ch] [rbp-5Ch]
  __m128 v18; // [rsp+30h] [rbp-58h]
  __m128 v19; // [rsp+40h] [rbp-48h]
  __m128 v20; // [rsp+50h] [rbp-38h]
  char v21; // [rsp+60h] [rbp-28h]
  char v22; // [rsp+68h] [rbp-20h]

  v13 = a4;
  *(_QWORD *)&v14[0] = a5;
  *(_QWORD *)&v14[1] = a6;
  if ( (*(_BYTE *)(sub_168B6E0(a1) + 97) & 4) != 0 )
  {
    v15 = a1;
    v16 = a2;
    v10 = _mm_loadh_ps(v14);
    v17 = 1;
    v18 = v10;
    v21 = 1;
    v11 = _mm_loadh_ps((const double *)&v13);
    v22 = 0;
    v19 = v11;
    v12 = _mm_loadh_ps((const double *)&a8);
    v20 = v12;
    if ( (*(_BYTE *)(a1 + 32) & 1) == 0 && *(_BYTE *)(a1 + 288) != 20 )
    {
      v22 = 1;
      sub_1AA9DF0((__int64)&v15, *(double *)v12.m128_u64);
    }
    sub_1AA9FD0(a1, (void **)a2, (__int64)&v15, v8, v9, *(double *)v12.m128_u64);
  }
}

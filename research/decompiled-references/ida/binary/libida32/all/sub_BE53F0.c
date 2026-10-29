__int64 __fastcall sub_BE53F0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        char a6,
        int a7,
        __int64 a8,
        char a9,
        __int64 a10,
        __int64 a11,
        char a12)
{
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  _BOOL8 v19; // rdx
  _BOOL8 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rsi
  unsigned __int64 v23; // rax
  __int64 v24; // rbx
  __m128 v27; // [rsp+0h] [rbp-78h]
  __int64 v28; // [rsp+18h] [rbp-60h] BYREF
  __int64 v29; // [rsp+20h] [rbp-58h] BYREF
  int v30; // [rsp+28h] [rbp-50h]
  _QWORD v31[9]; // [rsp+30h] [rbp-48h] BYREF

  v15 = *(_QWORD *)(a5 + 40);
  v28 = a3;
  v29 = v15;
  v30 = a7;
  sub_B61B50(v31, v15);
  if ( a5 == a10 )
  {
    v18 = 32;
    a10 = 0;
    if ( a11 )
      goto LABEL_3;
LABEL_9:
    v19 = a4 != 0;
    goto LABEL_4;
  }
  v18 = 8LL * (a10 != 0) + 32;
  if ( !a11 )
    goto LABEL_9;
LABEL_3:
  v19 = 1;
  v18 += 32LL * *(unsigned int *)(a11 + 8);
LABEL_4:
  v20 = v19 + (a2 != 0);
  v21 = a1[294];
  v22 = 16 * v20 + v18;
  a1[304] += v22;
  v23 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= v22 + v23 && v21 )
  {
    a1[294] = v22 + v23;
    v24 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v24 = sub_962430((__int64)(a1 + 294), v22, v22, 3, v16, v17);
  }
  v27 = _mm_loadh_ps((const double *)&v28);
  sub_BD3F90(v24, (__int64)a1, v27.m128_i64[0], v27.m128_i64[1], a4, a5, a6, (__int64)&v29, a10, a11, a8, a9, a12);
  return v24;
}


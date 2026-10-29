__m128 *__fastcall sub_B76620(
        _QWORD *a1,
        __int64 a2,
        __int32 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int8 a7)
{
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r15
  __m128 *v11; // rbx
  __m128 v12; // xmm0
  unsigned __int64 v13; // rax
  double v15[8]; // [rsp+8h] [rbp-40h] BYREF

  *(_QWORD *)&v15[0] = a5;
  v9 = sub_B6C590(88, a1, a2, 0);
  v10 = *(_QWORD *)a6;
  v11 = (__m128 *)v9;
  sub_B4E870(v9, 0x51u, a2, *(_DWORD *)(a6 + 8));
  v11[3].m128_u64[0] = 0;
  v11[2].m128_u64[1] = v10;
  v12 = _mm_loadh_ps(v15);
  v11[3].m128_i32[2] = a3;
  v11->m128_u64[0] = (unsigned __int64)&off_2BD9258;
  v11[4] = v12;
  v13 = *(_QWORD *)(a6 + 16);
  v11[3].m128_u64[0] = 4LL * a7;
  v11[5].m128_u64[0] = v13;
  return v11;
}


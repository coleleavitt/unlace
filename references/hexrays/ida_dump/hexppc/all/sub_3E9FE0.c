unsigned __int64 __fastcall sub_3E9FE0(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __m128i v3; // xmm1
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v7; // rsi
  unsigned int v8; // r9d
  unsigned __int64 v9; // xmm0_8
  _QWORD v11[2]; // [rsp-50h] [rbp-58h] BYREF
  int v12; // [rsp-40h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp-3Ch] [rbp-44h]
  unsigned __int64 v14; // [rsp-28h] [rbp-30h]

  v3 = _mm_cvtsi32_si128(a3);
  v4 = a1[104];
  v5 = a1[5];
  v14 = __readfsqword(0x28u);
  v7 = a1[100];
  v11[1] = 0;
  v8 = *(_DWORD *)(v4 + 84);
  v11[0] = 0xFFFFFFFF00000000LL;
  v9 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v8), v3).m128i_u64[0];
  sub_11D1B0((__int64)v11, v7, v5, (unsigned __int8 *)a2, *(_QWORD *)(a2 + 8) << 16, v8, 1, -1);
  v12 = 1;
  v13 = v9;
  sub_1D2850((__int64)a1, 4, (unsigned __int8 *)v11, nullptr, (unsigned __int8 *)&v12);
  sub_119360((__int64)&v12);
  sub_119360((__int64)v11);
  return v14 - __readfsqword(0x28u);
}

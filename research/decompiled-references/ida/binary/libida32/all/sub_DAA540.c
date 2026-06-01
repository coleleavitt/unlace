__int64 __fastcall sub_DAA540(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __m128i v6; // xmm0
  __m128i v8; // [rsp+0h] [rbp-28h] BYREF
  __int64 v9; // [rsp+18h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 176);
  v8.m128i_i64[0] = a4;
  v9 = a3;
  v8 = (__m128i)_mm_loadh_ps((const double *)v8.m128i_i64);
  v5 = sub_DFD980(v4, 48);
  v6 = _mm_load_si128(&v8);
  *(_QWORD *)v5 = 0;
  *(_OWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 24) = 3;
  *(__m128i *)(v5 + 32) = v6;
  return 1;
}


__int64 __fastcall sub_823B90(__int64 a1, unsigned __int64 a2, __int64 a3, __m128i *a4)
{
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __m128i v12; // [rsp+0h] [rbp-A8h] BYREF
  __m128i v13; // [rsp+10h] [rbp-98h] BYREF
  __int64 v14; // [rsp+20h] [rbp-88h]

  sub_69F1F0(
    (__int64)&v12,
    a2,
    *(_DWORD *)(a1 + 176),
    *(_DWORD *)(*(_QWORD *)(a1 + 184) + 4LL * *(unsigned int *)(a1 + 192) - 4));
  v7 = _mm_load_si128(&v12);
  a4[8].m128i_i8[0] &= ~2u;
  a4[1].m128i_i64[0] = 0;
  *a4 = v7;
  v13 = v7;
  v8 = sub_69F240(v13.m128i_i64);
  v9 = v12.m128i_i64[0];
  a4[1].m128i_i32[2] = 0;
  v10 = v12.m128i_i64[1];
  a4[8].m128i_i16[0] &= 0xFEu;
  a4[2].m128i_i64[0] = 0;
  a4[2].m128i_i64[1] = v8;
  a4[3].m128i_i32[2] = 0;
  v14 = v8;
  return sub_823990(a1, v9, v10, a2, a3, 1);
}


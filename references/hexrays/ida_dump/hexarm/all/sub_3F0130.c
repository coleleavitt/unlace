__int64 __fastcall sub_3F0130(__int64 a1, unsigned int a2, int a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned __int8 *v8; // r15
  __int64 v9; // r14
  __m128i v10; // xmm0
  __int64 v11; // rax

  v5 = (_QWORD *)j__qalloc_or_throw(80);
  v6 = *(_QWORD *)(a1 + 40);
  v7 = (__int64)v5;
  v8 = (unsigned __int8 *)(v5 + 4);
  v9 = (__int64)(v5 + 8);
  v5[4] = 0xFFFFFFFF00000000LL;
  v5[5] = 0;
  v5[6] = 0xFFFFFFFF00000000LL;
  v5[7] = 0;
  v5[8] = 0xFFFFFFFF00000000LL;
  v5[9] = 0;
  sub_330C90((__int64)v5, v6);
  *(_DWORD *)v7 = 14;
  v10 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(a1 + 832) + 84LL));
  *(_BYTE *)(v7 + 32) = 1;
  *(_QWORD *)(v7 + 36) = _mm_unpacklo_epi32(v10, _mm_cvtsi32_si128(a2)).m128i_u64[0];
  v11 = sub_3F0090((__int64 *)a1, a3);
  *(_BYTE *)(v7 + 48) = 4;
  *(_QWORD *)(v7 + 56) = v11;
  *(_DWORD *)(v7 + 52) = *(_DWORD *)(v7 + 36);
  sub_124BC0(v9, v8);
  return sub_B4CD0(*(_QWORD **)(a1 + 16), v7);
}

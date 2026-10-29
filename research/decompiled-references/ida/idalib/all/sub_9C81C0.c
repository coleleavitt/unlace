_QWORD *__fastcall sub_9C81C0(_QWORD *a1, const __m128i *a2, char a3, int *a4)
{
  int v5; // r12d
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx

  v5 = *a4;
  v6 = operator new(0x30u);
  v7 = _mm_loadu_si128(a2);
  v8 = a2[1].m128i_i64[0];
  *(_BYTE *)(v6 + 32) = 0;
  *(__m128i *)(v6 + 8) = v7;
  *(_QWORD *)(v6 + 24) = v8;
  *(_BYTE *)(v6 + 33) = a3;
  *(_BYTE *)(v6 + 34) = 0;
  *(_DWORD *)(v6 + 36) = v5;
  *(_QWORD *)v6 = off_2B405A0;
  *(_DWORD *)(v6 + 40) = 0;
  *a1 = v6;
  return a1;
}

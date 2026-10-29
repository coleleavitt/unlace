__m128i *__fastcall sub_1837B20(__int64 a1, unsigned __int8 a2, __m128 a3, __m128i a4)
{
  __m128i *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rdi
  __int16 v12[13]; // [rsp+16h] [rbp-1Ah] BYREF

  v5 = (__m128i *)sub_B9A360(
                    *(_QWORD **)(*(_QWORD *)a1 + 248LL),
                    *(_QWORD *)(*(_QWORD *)a1 + 544LL),
                    **(_DWORD **)(a1 + 8),
                    **(_QWORD **)(a1 + 16),
                    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL),
                    *(_QWORD *)(a1 + 24),
                    **(_BYTE **)(a1 + 32));
  v6 = 32 * (**(_DWORD **)(a1 + 40) & 3u);
  v5[1].m128i_i8[13] = (32 * (**(_BYTE **)(a1 + 40) & 3)) | v5[1].m128i_i8[13] & 0x9F;
  sub_B94AD0(*(__m128i **)(*(_QWORD *)a1 + 544LL), (__int64)v5, v6, v7, v8, v9);
  v10 = *(__int64 **)a1;
  v12[0] = 1;
  sub_1836B60(v10, **(_QWORD **)(a1 + 48), v5, *(_QWORD *)(a1 + 56), v12, a3, a4);
  sub_B88650((__int64)v5, a2);
  return v5;
}

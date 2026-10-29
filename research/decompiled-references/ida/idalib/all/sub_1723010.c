void __fastcall sub_1723010(__int64 a1, const char *a2, __m128i a3, double a4)
{
  __int64 v6; // rdx
  __m128i *v7; // rax
  char ***v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8

  sub_1702F80(
    *(_QWORD **)a1,
    *(__m128i **)(a1 + 8),
    (__int64)a2,
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL),
    *(char ****)(a1 + 24));
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(__m128i **)(a1 + 8);
  v8 = *(char ****)(a1 + 24);
  v9 = *(_QWORD *)(v6 + 72);
  if ( v9 )
  {
    sub_16FF7A0(v8, v9, (*(_BYTE *)(v6 + 64) & 4) != 0, *(const __m128i **)(a1 + 8));
    v8 = *(char ****)(a1 + 24);
    v7 = *(__m128i **)(a1 + 8);
  }
  sub_171ACE0(*(_QWORD *)a1, v7, **(_QWORD **)(a1 + 40), (const __m128i *)v8);
  sub_15A3210(*(_QWORD *)(a1 + 24), 7, (char *)&byte_22F0C30);
  sub_1722CF0(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 8), (__int64)a2, *(const __m128i **)(a1 + 24), 0, 0, a3, a4);
  sub_15A3210(*(_QWORD *)(a1 + 24), 8, (char *)&byte_22F0C30);
  sub_17132B0(*(char ****)(a1 + 24), a2, v10, v11, v12);
}

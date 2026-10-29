__int64 __fastcall sub_1D69F60(__int64 a1, __m128 a2, __m128 a3)
{
  __int64 v3; // rdx
  _DWORD *v4; // rbp
  __int64 result; // rax
  __int128 v6; // [rsp-18h] [rbp-38h]

  v3 = *(_QWORD *)(a1 + 40);
  v4 = *(_DWORD **)a1;
  *((_QWORD *)&v6 + 1) = *(unsigned int *)(v3 + 8);
  *(_QWORD *)&v6 = *(_QWORD *)v3;
  result = sub_1D69D80(
             *(_QWORD *)(a1 + 8),
             **(__int64 ***)(a1 + 16),
             *(_QWORD *)(**(_QWORD **)(a1 + 16) + 56LL),
             **(_QWORD **)(a1 + 16),
             **(_BYTE **)(a1 + 24),
             *(const __m128i **)(a1 + 48),
             a2,
             a3,
             **(const __m128i ***)(a1 + 32),
             *(unsigned int *)(*(_QWORD *)(a1 + 32) + 8LL),
             v6,
             *(__m128 **)(a1 + 56));
  *v4 = result;
  return result;
}

__int64 __fastcall sub_1D6A010(__int64 a1, __m128 a2, __m128 a3)
{
  _DWORD *v3; // rbx
  __int64 result; // rax

  v3 = *(_DWORD **)a1;
  result = sub_1D69D80(
             *(_QWORD *)(a1 + 8),
             **(__int64 ***)(a1 + 56),
             *(_QWORD *)(**(_QWORD **)(a1 + 56) + 144LL),
             **(_QWORD **)(a1 + 16),
             1u,
             *(const __m128i **)(a1 + 40),
             a2,
             a3,
             **(const __m128i ***)(a1 + 24),
             *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL),
             *(_OWORD *)*(_QWORD *)(a1 + 32),
             *(__m128 **)(a1 + 48));
  *v3 = result;
  return result;
}

__int64 __fastcall sub_1D6A310(__int64 a1, __m128 a2, __m128 a3)
{
  _DWORD *v3; // rbx
  __int64 result; // rax

  v3 = *(_DWORD **)a1;
  result = sub_1D6A120(
             *(_QWORD *)(a1 + 8),
             **(_QWORD **)(a1 + 16),
             *(const __m128i **)(a1 + 24),
             *(__m128 **)(a1 + 32),
             a2,
             a3);
  *v3 = result;
  return result;
}

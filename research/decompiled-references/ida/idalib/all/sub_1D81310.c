__int64 __fastcall sub_1D81310(__int64 a1, __m128 a2, __m128 a3)
{
  _DWORD *v3; // rbx
  __int64 result; // rax
  _BYTE v5[9]; // [rsp+Fh] [rbp-9h] BYREF

  v3 = *(_DWORD **)a1;
  result = sub_1D7FC00(
             *(_QWORD *)(a1 + 48),
             **(_QWORD **)(a1 + 8),
             *(const __m128i **)(a1 + 16),
             0,
             *(__int64 **)(a1 + 24),
             *(__m128 **)(a1 + 32),
             a2,
             a3,
             *(_QWORD *)(a1 + 40),
             0,
             0,
             0,
             (void **)sub_1D367F0,
             (unsigned __int64)v5);
  *v3 = result;
  return result;
}

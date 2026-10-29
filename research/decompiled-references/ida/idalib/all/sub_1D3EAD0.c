__int64 __fastcall sub_1D3EAD0(__int64 a1, __m128 a2, __m128 a3)
{
  _DWORD *v3; // rbx
  __int64 v5; // [rsp-8h] [rbp-18h]

  v3 = *(_DWORD **)a1;
  *v3 = sub_1D3DD90(
          *(_QWORD *)(a1 + 48),
          **(__int64 ***)(a1 + 8),
          **(_QWORD **)(a1 + 16),
          *(_QWORD *)(a1 + 24),
          *(_QWORD *)(a1 + 32),
          nullptr,
          a2,
          a3,
          *(__m128 **)(a1 + 40));
  return v5;
}

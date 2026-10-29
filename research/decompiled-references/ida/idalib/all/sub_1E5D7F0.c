__int64 __fastcall sub_1E5D7F0(__int64 a1, __m128i a2, __m128 a3, __m128i a4)
{
  _BYTE *v4; // rbx
  __int64 result; // rax

  v4 = *(_BYTE **)a1;
  result = sub_1DFD9C0(
             *(_QWORD *)(a1 + 32),
             **(_DWORD **)(a1 + 8),
             **(__int64 ***)(a1 + 16),
             1u,
             **(_QWORD **)(a1 + 24) != 0,
             (*(_BYTE *)(**(_QWORD **)(a1 + 16) + 180LL) & 8) != 0,
             a2,
             a3,
             a4);
  *v4 = result;
  return result;
}

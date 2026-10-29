__int64 __fastcall sub_69E580(__int64 a1, double a2, __m128 a3, __m128 a4)
{
  _DWORD *v4; // rbx
  __int64 result; // rax

  v4 = *(_DWORD **)a1;
  result = sub_69C170(
             *(__int64 **)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             *(_DWORD **)(a1 + 24),
             *(_DWORD *)(a1 + 32),
             *(_DWORD *)(a1 + 36),
             *(_QWORD *)(a1 + 40),
             a2,
             a3,
             a4,
             *(_QWORD **)(a1 + 48),
             *(_DWORD *)(a1 + 56),
             *(_QWORD *)(a1 + 64),
             *(unsigned int *)(a1 + 72),
             *(__int64 **)(a1 + 80),
             *(_DWORD *)(a1 + 88));
  *v4 = result;
  return result;
}


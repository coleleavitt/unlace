__int64 __fastcall sub_627A40(__int64 a1, double a2, __m128 a3)
{
  double v3; // xmm0_8
  _DWORD *v4; // rbp
  __int64 result; // rax

  v3 = sub_CB4600();
  v4 = *(_DWORD **)a1;
  result = sub_626040(
             *(unsigned __int8 **)(a1 + 8),
             *(_QWORD *)(a1 + 16),
             *(const char ***)(a1 + 24),
             *(_DWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 40),
             *(unsigned int *)(a1 + 48),
             v3,
             a3,
             *(_DWORD *)(a1 + 52),
             *(__int64 **)(a1 + 56));
  *v4 = result;
  return result;
}


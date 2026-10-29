__int64 __fastcall sub_1D813C0(__int64 a1)
{
  _DWORD *v1; // rbx
  unsigned int *v2; // rcx
  __int64 *v3; // r11
  __m128 *v4; // r9
  __int64 *v5; // r8
  const __m128i *v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+8h] [rbp-30h] BYREF
  __m128 v9; // [rsp+10h] [rbp-28h] BYREF
  __m128 v10; // [rsp+20h] [rbp-18h]

  v1 = *(_DWORD **)a1;
  v2 = *(unsigned int **)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 88);
  v3 = *(__int64 **)(a1 + 8);
  v4 = *(__m128 **)(a1 + 40);
  v10 = _mm_loadh_ps((const double *)(a1 + 104));
  v5 = *(__int64 **)(a1 + 32);
  v6 = *(const __m128i **)(a1 + 16);
  v9 = _mm_loadh_ps((const double *)&v8);
  result = sub_1D7FC00(
             v8,
             *v3,
             v6,
             *v2,
             v5,
             v4,
             v10,
             v9,
             *(_QWORD *)(a1 + 48),
             **(_BYTE **)(a1 + 56),
             **(unsigned __int8 **)(a1 + 64),
             **(_BYTE **)(a1 + 72),
             (void **)sub_1D36730,
             (unsigned __int64)&v9);
  *v1 = result;
  return result;
}

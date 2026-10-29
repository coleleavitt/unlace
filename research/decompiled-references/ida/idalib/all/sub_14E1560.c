__int64 __fastcall sub_14E1560(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  double v6[2]; // [rsp+0h] [rbp-10h] BYREF

  *(_QWORD *)&v6[0] = a4;
  *(_DWORD *)a1 = a2;
  *(__m128 *)(a1 + 8) = _mm_loadh_ps(v6);
  result = *(_DWORD *)(a4 + 16) * ((*(_WORD *)(a4 + 2) >> 6) & 7u);
  *(_QWORD *)(a1 + 24) = a4 + 4LL * *(unsigned int *)(a4 + 4) + 20;
  *(_DWORD *)(a1 + 40) = 0;
  *(_BYTE *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 32) = result;
  *(_QWORD *)(a1 + 80) = a5;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  return result;
}

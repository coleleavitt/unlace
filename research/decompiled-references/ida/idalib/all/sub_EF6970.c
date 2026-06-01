unsigned __int64 __fastcall sub_EF6970(__int64 a1, int a2, int a3, __int64 a4, int a5, __int64 a6)
{
  unsigned __int64 v9; // rbx
  unsigned int *v10; // r14
  __int16 v11; // dx
  bool v12; // zf
  __m128 v13; // xmm0
  __int64 v14; // rax
  double v16[6]; // [rsp+8h] [rbp-30h] BYREF

  *(_QWORD *)&v16[0] = a6;
  v9 = sub_EF5E70(
         (__int64 *)(a1 + 2352),
         8 * ((8 * (unsigned __int64)((unsigned int)(a4 != 0) + 2) + 15) >> 3) + 48,
         3u);
  v10 = (unsigned int *)sub_EF5330(v9 + 40, nullptr, 0, a4, 2u);
  v11 = *(_WORD *)v9 & 0xFE00;
  LOBYTE(v11) = -66;
  v12 = unk_2CD7484 == 0;
  *(_WORD *)v9 = v11;
  if ( !v12 )
    sub_EE9B50(190);
  *(_DWORD *)(v9 + 12) = a2;
  *(_DWORD *)(v9 + 16) = a3;
  *(_DWORD *)(v9 + 32) = a5;
  v13 = _mm_loadh_ps(v16);
  *(_DWORD *)(v9 + 36) = a5;
  v14 = *v10;
  *(_DWORD *)(v9 + 8) = 62;
  *(_QWORD *)(v9 + 24) = v10;
  *(__m128 *)&v10[2 * v14 + 4] = v13;
  return v9;
}

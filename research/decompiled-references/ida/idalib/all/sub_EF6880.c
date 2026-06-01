unsigned __int64 __fastcall sub_EF6880(
        __int64 a1,
        int a2,
        int a3,
        const void *a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned __int64 v12; // rbx
  unsigned int *v13; // r13
  __int16 v14; // dx
  bool v15; // zf
  __m128 v16; // xmm0
  __int64 v17; // rax

  v12 = sub_EF5E70(
          (__int64 *)(a1 + 2352),
          8 * ((8 * ((unsigned int)a5 + (unsigned __int64)((unsigned int)(a6 != 0) + 2)) + 15) >> 3) + 48,
          3u);
  v13 = (unsigned int *)sub_EF5330(v12 + 40, a4, a5, a6, 2u);
  v14 = *(_WORD *)v12 & 0xFE00;
  LOBYTE(v14) = -69;
  v15 = unk_2CD7484 == 0;
  *(_WORD *)v12 = v14;
  if ( !v15 )
    sub_EE9B50(187);
  *(_DWORD *)(v12 + 12) = a2;
  *(_DWORD *)(v12 + 16) = a3;
  *(_DWORD *)(v12 + 32) = 1;
  v16 = _mm_loadh_ps((const double *)&a8);
  *(_DWORD *)(v12 + 36) = a7;
  v17 = *v13;
  *(_DWORD *)(v12 + 8) = 104;
  *(_QWORD *)(v12 + 24) = v13;
  *(__m128 *)&v13[2 * v17 + 4] = v16;
  return v12;
}

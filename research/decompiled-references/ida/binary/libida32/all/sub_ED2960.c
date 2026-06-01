unsigned __int64 __fastcall sub_ED2960(
        __int64 a1,
        int a2,
        int a3,
        const void *a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8)
{
  unsigned __int64 v12; // rbx
  unsigned int *v13; // rbp
  __int16 v14; // dx
  bool v15; // zf
  __m128 v16; // xmm0
  __int64 v17; // rax

  v12 = sub_ED2130(
          (__int64 *)(a1 + 2352),
          8 * ((8 * ((unsigned int)a5 + (unsigned __int64)((unsigned int)(a7 != 0) + 2)) + 15) >> 3) + 48,
          3u);
  v13 = (unsigned int *)sub_ED15F0(v12 + 40, a4, a5, a7, 2u);
  v14 = *(_WORD *)v12 & 0xFE00;
  LOBYTE(v14) = -68;
  v15 = unk_2CAD564 == 0;
  *(_WORD *)v12 = v14;
  if ( !v15 )
    sub_EC5E10(188);
  *(_DWORD *)(v12 + 12) = a2;
  *(_DWORD *)(v12 + 16) = a3;
  *(_DWORD *)(v12 + 32) = a6;
  v16 = _mm_loadh_ps((const double *)&a8);
  *(_DWORD *)(v12 + 36) = 2 * a6;
  v17 = *v13;
  *(_DWORD *)(v12 + 8) = 102;
  *(_QWORD *)(v12 + 24) = v13;
  *(__m128 *)&v13[2 * v17 + 4] = v16;
  return v12;
}


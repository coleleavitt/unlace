__int64 __fastcall sub_2012D50(__int64 a1, const char *a2, _BYTE *a3, double **a4, _QWORD *a5, __int64 *a6)
{
  __int64 v10; // rax
  __int64 v11; // rcx
  __m128 v12; // xmm0
  size_t v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v17; // [rsp+8h] [rbp-40h]

  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = &off_2C758B0;
  *(_QWORD *)(a1 + 8) &= 0x80000000uLL;
  *(_QWORD *)(a1 + 72) = 0x100000000LL;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 88) = a1 + 112;
  *(_QWORD *)(a1 + 96) = 1;
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 108) = 1;
  v10 = sub_2210FF0((const char *)a1);
  v11 = *(unsigned int *)(a1 + 72);
  if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
  {
    v17 = v10;
    sub_2237220(a1 + 64, a1 + 80, v11 + 1, 8);
    v11 = *(unsigned int *)(a1 + 72);
    v10 = v17;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v11) = v10;
  v12 = _mm_loadh_ps((const double *)off_2C780C0);
  ++*(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = off_2C719C8;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(_QWORD *)a1 = off_2C719E8;
  *(__m128 *)(a1 + 168) = v12;
  *(_QWORD *)(a1 + 144) = off_2BEAC28;
  v13 = strlen(a2);
  sub_2217250(a1, a2, v13);
  *(_BYTE *)(a1 + 10) = *a3 & 7 | *(_BYTE *)(a1 + 10) & 0xF8;
  v14 = *a6;
  v12.m128_f32[0] = **a4;
  v15 = a5[1];
  *(_QWORD *)(a1 + 32) = *a5;
  *(_BYTE *)(a1 + 140) = 1;
  *(_QWORD *)(a1 + 40) = v15;
  *(_DWORD *)(a1 + 120) = v12.m128_i32[0];
  *(_DWORD *)(a1 + 136) = v12.m128_i32[0];
  sub_22107D0(a1, v14);
  return sub_2218140(a1);
}

__int64 __fastcall sub_21EC820(__int64 a1, const char *a2, _BYTE *a3, _QWORD *a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128 v8; // xmm0
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v12; // [rsp+8h] [rbp-30h]

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
  v6 = sub_2210FF0((const char *)a1);
  v7 = *(unsigned int *)(a1 + 72);
  if ( v7 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
  {
    v12 = v6;
    sub_2237220(a1 + 64, a1 + 80, v7 + 1, 8);
    v7 = *(unsigned int *)(a1 + 72);
    v6 = v12;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v7) = v6;
  v8 = _mm_loadh_ps((const double *)off_2C784F8);
  ++*(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = off_2C712D0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(_QWORD *)a1 = off_2C75710;
  *(__m128 *)(a1 + 168) = v8;
  *(_QWORD *)(a1 + 144) = off_2BEAB98;
  v9 = strlen(a2);
  sub_2217250(a1, a2, v9);
  *(_BYTE *)(a1 + 10) = (32 * (*a3 & 3)) | *(_BYTE *)(a1 + 10) & 0x9F;
  v10 = a4[1];
  *(_QWORD *)(a1 + 32) = *a4;
  *(_QWORD *)(a1 + 40) = v10;
  return sub_2218140(a1);
}

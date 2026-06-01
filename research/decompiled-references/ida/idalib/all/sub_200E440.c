__int64 __fastcall sub_200E440(__int64 a1, const char *a2, _BYTE *a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __m128 v6; // xmm0
  size_t v7; // rax
  __int64 v9; // [rsp+8h] [rbp-30h]

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
  v4 = sub_2210FF0((const char *)a1);
  v5 = *(unsigned int *)(a1 + 72);
  if ( v5 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
  {
    v9 = v4;
    sub_2237220(a1 + 64, a1 + 80, v5 + 1, 8);
    v5 = *(unsigned int *)(a1 + 72);
    v4 = v9;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v5) = v4;
  v6 = _mm_loadh_ps((const double *)off_2C78368);
  *(_WORD *)(a1 + 136) = 0;
  ++*(_DWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = off_2C714E8;
  *(__m128 *)(a1 + 168) = v6;
  *(_QWORD *)a1 = off_2C75848;
  *(_QWORD *)(a1 + 144) = off_2BEAB08;
  v7 = strlen(a2);
  sub_2217250(a1, a2, v7);
  *(_BYTE *)(a1 + 10) = (32 * (*a3 & 3)) | *(_BYTE *)(a1 + 10) & 0x9F;
  return sub_2218140(a1);
}

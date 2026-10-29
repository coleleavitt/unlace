unsigned __int64 __fastcall sub_22C8360(__int64 a1, char *a2, __int64 *a3, _DWORD *a4)
{
  __int64 *v6; // rax
  __int64 v7; // rcx
  __m128 v8; // xmm0
  size_t v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  __int64 *v13; // [rsp+8h] [rbp-30h]

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
    v13 = v6;
    sub_2237220(a1 + 64, (const void *)(a1 + 80), v7 + 1, 8);
    v7 = *(unsigned int *)(a1 + 72);
    v6 = v13;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v7) = v6;
  v8 = _mm_loadh_ps((const double *)off_2C77938);
  *(_QWORD *)(a1 + 120) = a1 + 136;
  *(_QWORD *)(a1 + 160) = a1 + 176;
  ++*(_DWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 152) = off_2BEAAE8;
  *(_BYTE *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 176) = 0;
  *(_QWORD *)a1 = off_2C757E0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 192) = 0;
  *(_QWORD *)(a1 + 200) = off_2BEAC58;
  *(__m128 *)(a1 + 224) = v8;
  v9 = strlen(a2);
  sub_2217250(a1, (__int64 *)a2, v9);
  v10 = *a3;
  v11 = *a4 & 3;
  *(_QWORD *)(a1 + 40) = a3[1];
  *(_QWORD *)(a1 + 32) = v10;
  *(_BYTE *)(a1 + 10) = (32 * v11) | *(_BYTE *)(a1 + 10) & 0x9F;
  return sub_2218140(a1);
}

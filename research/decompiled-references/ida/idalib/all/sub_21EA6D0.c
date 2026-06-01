__int64 __fastcall sub_21EA6D0(__int64 a1, const char *a2, _BYTE *a3, __int64 *a4, _BYTE **a5)
{
  __int64 v8; // rax
  __int64 v9; // rcx
  __m128 v10; // xmm0
  size_t v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rax
  __int64 v15; // [rsp+8h] [rbp-40h]

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
  v8 = sub_2210FF0((const char *)a1);
  v9 = *(unsigned int *)(a1 + 72);
  if ( v9 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
  {
    v15 = v8;
    sub_2237220(a1 + 64, a1 + 80, v9 + 1, 8);
    v9 = *(unsigned int *)(a1 + 72);
    v8 = v15;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v9) = v8;
  v10 = _mm_loadh_ps((const double *)off_2C78368);
  *(_WORD *)(a1 + 136) = 0;
  ++*(_DWORD *)(a1 + 72);
  *(_BYTE *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = off_2C714E8;
  *(__m128 *)(a1 + 168) = v10;
  *(_QWORD *)a1 = off_2C75848;
  *(_QWORD *)(a1 + 144) = off_2BEAB08;
  v11 = strlen(a2);
  sub_2217250(a1, a2, v11);
  *(_BYTE *)(a1 + 10) = (32 * (*a3 & 3)) | *(_BYTE *)(a1 + 10) & 0x9F;
  v12 = *a4;
  *(_QWORD *)(a1 + 40) = a4[1];
  v13 = *a5;
  *(_QWORD *)(a1 + 32) = v12;
  LOBYTE(v12) = *v13;
  *(_BYTE *)(a1 + 137) = 1;
  *(_BYTE *)(a1 + 120) = v12;
  *(_BYTE *)(a1 + 136) = *v13;
  return sub_2218140(a1);
}

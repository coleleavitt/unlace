__int64 sub_2254550()
{
  __int64 v0; // rbx
  __int64 *v1; // rax
  __int64 v2; // rcx
  __m128 v3; // xmm0
  char v4; // al
  __int64 *v6; // [rsp+8h] [rbp-20h]

  v0 = operator new(0xB8u);
  *(_QWORD *)(v0 + 16) = 0;
  *(_QWORD *)(v0 + 24) = 0;
  *(_QWORD *)v0 = &off_2C758B0;
  *(_QWORD *)(v0 + 8) &= 0x80000000uLL;
  *(_QWORD *)(v0 + 72) = 0x100000000LL;
  *(_QWORD *)(v0 + 32) = 0;
  *(_QWORD *)(v0 + 40) = 0;
  *(_QWORD *)(v0 + 48) = 0;
  *(_QWORD *)(v0 + 56) = 0;
  *(_QWORD *)(v0 + 64) = v0 + 80;
  *(_QWORD *)(v0 + 88) = v0 + 112;
  *(_QWORD *)(v0 + 96) = 1;
  *(_DWORD *)(v0 + 104) = 0;
  *(_BYTE *)(v0 + 108) = 1;
  v1 = sub_2210FF0((const char *)&qword_B8);
  v2 = *(unsigned int *)(v0 + 72);
  if ( v2 + 1 > (unsigned __int64)*(unsigned int *)(v0 + 76) )
  {
    v6 = v1;
    sub_2237220(v0 + 64, (const void *)(v0 + 80), v2 + 1, 8);
    v2 = *(unsigned int *)(v0 + 72);
    v1 = v6;
  }
  *(_QWORD *)(*(_QWORD *)(v0 + 64) + 8 * v2) = v1;
  v3 = _mm_loadh_ps((const double *)off_2C78368);
  *(_WORD *)(v0 + 136) = 0;
  *(__m128 *)(v0 + 168) = v3;
  ++*(_DWORD *)(v0 + 72);
  *(_QWORD *)(v0 + 128) = off_2C714E8;
  *(_BYTE *)(v0 + 120) = 0;
  *(_QWORD *)v0 = off_2C75848;
  *(_QWORD *)(v0 + 144) = off_2BEAB08;
  sub_2217250(v0, (__int64 *)"treat-scalable-fixed-error-as-warning", 0x25u);
  v4 = *(_BYTE *)(v0 + 10);
  *(_QWORD *)(v0 + 40) = 109;
  *(_BYTE *)(v0 + 10) = v4 & 0x9F | 0x20;
  *(_QWORD *)(v0 + 32) = "Treat issues where a fixed-width property is requested from a scalable type as a warning, instead of an error";
  sub_2218140(v0);
  return v0;
}

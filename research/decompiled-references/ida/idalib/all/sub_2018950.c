__int64 __fastcall sub_2018950(__int64 a1, const char *a2, _QWORD *a3, char **a4, char **a5, _DWORD *a6)
{
  __int64 v9; // rax
  __int64 v10; // rcx
  __m128 v11; // xmm0
  size_t v12; // rax
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rax
  char *v16; // rcx
  char *v17; // rdx
  int v18; // eax
  char v20; // al
  __int64 v22; // [rsp+8h] [rbp-70h]
  const char *v23; // [rsp+10h] [rbp-68h] BYREF
  __int16 v24; // [rsp+30h] [rbp-48h]

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
  v9 = sub_2210FF0((const char *)a1);
  v10 = *(unsigned int *)(a1 + 72);
  if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
  {
    v22 = v9;
    sub_2237220(a1 + 64, a1 + 80, v10 + 1, 8);
    v10 = *(unsigned int *)(a1 + 72);
    v9 = v22;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v10) = v9;
  v11 = _mm_loadh_ps((const double *)off_2C778E8);
  ++*(_DWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = off_2C714E8;
  *(_BYTE *)(a1 + 137) = 0;
  *(__m128 *)(a1 + 168) = v11;
  *(_QWORD *)a1 = off_2C71D10;
  *(_QWORD *)(a1 + 144) = off_2BEAB08;
  v12 = strlen(a2);
  sub_2217250(a1, a2, v12);
  v13 = a3[1];
  v14 = *(_QWORD *)(a1 + 120) == 0;
  *(_QWORD *)(a1 + 32) = *a3;
  *(_QWORD *)(a1 + 40) = v13;
  if ( v14 )
  {
    v16 = *a4;
    *(_BYTE *)(a1 + 137) = 1;
    v20 = *v16;
    *(_QWORD *)(a1 + 120) = v16;
    *(_BYTE *)(a1 + 136) = v20;
  }
  else
  {
    v15 = sub_227D6D0(a1, a2);
    v23 = "cl::location(x) specified more than once!";
    v24 = 259;
    sub_22116C0(a1, &v23, 0, 0, v15);
    v16 = *(char **)(a1 + 120);
  }
  v17 = *a5;
  v18 = 32 * (*a6 & 3);
  *v16 = **a5;
  *(_BYTE *)(a1 + 137) = 1;
  *(_BYTE *)(a1 + 136) = *v17;
  *(_BYTE *)(a1 + 10) = v18 | *(_BYTE *)(a1 + 10) & 0x9F;
  return sub_2218140(a1);
}

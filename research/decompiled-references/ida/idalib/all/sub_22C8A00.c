unsigned __int64 __fastcall sub_22C8A00(__int64 a1, char *a2, int **a3, __int64 *a4, _QWORD *a5)
{
  __int64 *v8; // rax
  __int64 v9; // rcx
  __m128 v10; // xmm0
  size_t v11; // rax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 *v17; // [rsp+8h] [rbp-40h]

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
    v17 = v8;
    sub_2237220(a1 + 64, (const void *)(a1 + 80), v9 + 1, 8);
    v9 = *(unsigned int *)(a1 + 72);
    v8 = v17;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v9) = v8;
  v10 = _mm_loadh_ps((const double *)off_2C784F8);
  ++*(_DWORD *)(a1 + 72);
  *(_DWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = off_2C712D0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(_QWORD *)a1 = off_2C75710;
  *(__m128 *)(a1 + 168) = v10;
  *(_QWORD *)(a1 + 144) = off_2BEAB98;
  v11 = strlen(a2);
  sub_2217250(a1, (__int64 *)a2, v11);
  v12 = *a4;
  v13 = **a3;
  *(_BYTE *)(a1 + 140) = 1;
  *(_DWORD *)(a1 + 120) = v13;
  *(_DWORD *)(a1 + 136) = v13;
  v14 = a4[1];
  *(_QWORD *)(a1 + 48) = v12;
  *(_QWORD *)(a1 + 56) = v14;
  v15 = a5[1];
  *(_QWORD *)(a1 + 32) = *a5;
  *(_QWORD *)(a1 + 40) = v15;
  return sub_2218140(a1);
}

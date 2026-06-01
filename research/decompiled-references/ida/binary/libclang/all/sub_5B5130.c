__int64 __fastcall sub_5B5130(__int64 a1, const char *a2, _BYTE *a3, int **a4, __int64 *a5)
{
  __int64 v8; // r15
  __int64 v9; // rax
  __m128i v10; // xmm0
  size_t v11; // rax
  __int64 v12; // rdx
  int v13; // eax

  *(_QWORD *)(a1 + 64) = a1 + 80;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = &off_4A6E058;
  *(_QWORD *)(a1 + 8) &= 0x80000000uLL;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 72) = 0x100000000LL;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 88) = a1 + 112;
  *(_QWORD *)(a1 + 96) = 1;
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 108) = 1;
  v8 = sub_259AC30(a1, a1 + 80);
  v9 = *(unsigned int *)(a1 + 72);
  if ( *(unsigned int *)(a1 + 76) < (unsigned __int64)(v9 + 1) )
  {
    sub_25D6060(a1 + 64, a1 + 80, v9 + 1, 8);
    v9 = *(unsigned int *)(a1 + 72);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v9) = v8;
  ++*(_DWORD *)(a1 + 72);
  *(_OWORD *)(a1 + 152) = 0;
  v10 = _mm_loadl_epi64((const __m128i *)&off_49EBBF8);
  *(_QWORD *)(a1 + 128) = &off_4A64710;
  *(_QWORD *)a1 = off_4A83D50;
  *(_QWORD *)(a1 + 144) = off_4A83D20;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_BYTE *)(a1 + 140) = 0;
  *(__m128i *)(a1 + 168) = _mm_unpacklo_epi64(v10, (__m128i)(unsigned __int64)nullsub_605);
  v11 = strlen(a2);
  sub_259F400(a1, a2, v11);
  v12 = *a5;
  *(_BYTE *)(a1 + 10) = (32 * (*a3 & 3)) | *(_BYTE *)(a1 + 10) & 0x9F;
  v13 = **a4;
  *(_BYTE *)(a1 + 140) = 1;
  *(_QWORD *)(a1 + 32) = v12;
  *(_DWORD *)(a1 + 120) = v13;
  *(_DWORD *)(a1 + 136) = v13;
  *(_QWORD *)(a1 + 40) = a5[1];
  return sub_259EC40(a1);
}


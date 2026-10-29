__int64 __fastcall sub_573440(__int64 a1, const char *a2, _QWORD *a3, __int64 *a4, _DWORD *a5, _QWORD *a6, _BYTE *a7)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __m128i v12; // xmm0
  size_t v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v23; // [rsp+0h] [rbp-78h]
  const char *v25; // [rsp+10h] [rbp-68h] BYREF
  __int16 v26; // [rsp+30h] [rbp-48h]

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
  v10 = sub_259AC30(a1, a1 + 80);
  v11 = *(unsigned int *)(a1 + 72);
  if ( *(unsigned int *)(a1 + 76) < (unsigned __int64)(v11 + 1) )
  {
    v23 = v10;
    sub_25D6060(a1 + 64, a1 + 80, v11 + 1, 8);
    v11 = *(unsigned int *)(a1 + 72);
    v10 = v23;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 64) + 8 * v11) = v10;
  *(_QWORD *)(a1 + 128) = off_4A6DC20;
  *(_QWORD *)a1 = &off_4A6DC40;
  ++*(_DWORD *)(a1 + 72);
  *(_OWORD *)(a1 + 144) = 0;
  v12 = _mm_loadl_epi64((const __m128i *)&off_49D8ED8);
  *(_QWORD *)(a1 + 136) = off_49D92E8;
  *(_QWORD *)(a1 + 120) = 0;
  *(__m128i *)(a1 + 160) = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)nullsub_356);
  v13 = strlen(a2);
  sub_259F400(a1, a2, v13);
  v15 = a3[1];
  *(_QWORD *)(a1 + 48) = *a3;
  v16 = *a4;
  *(_QWORD *)(a1 + 56) = v15;
  v17 = a4[1];
  *(_QWORD *)(a1 + 32) = v16;
  LODWORD(v16) = *a5;
  *(_QWORD *)(a1 + 40) = v17;
  v18 = 32 * (unsigned int)(v16 & 3);
  v19 = *(_QWORD *)(a1 + 120) == 0;
  *(_BYTE *)(a1 + 10) = v18 | *(_BYTE *)(a1 + 10) & 0x9F;
  if ( v19 )
  {
    *(_QWORD *)(a1 + 120) = *a6;
  }
  else
  {
    v20 = sub_26260E0(a1, a2, v18, v14);
    v26 = 259;
    v25 = "cl::location(x) specified more than once!";
    sub_2598800(a1, &v25, 0, 0, v20, v21);
  }
  *(_BYTE *)(a1 + 10) = (8 * (*a7 & 3)) | *(_BYTE *)(a1 + 10) & 0xE7;
  return sub_259EC40(a1);
}


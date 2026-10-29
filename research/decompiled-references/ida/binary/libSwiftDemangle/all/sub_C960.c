unsigned __int64 __fastcall sub_C960(__int64 a1, __int64 a2, __int64 a3, __int64 a4, const __m128i *a5)
{
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  int v10; // edx
  __m128i v11; // xmm3
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __m128i v15; // xmm5
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __m128i v22; // xmm6
  __m128i v23; // xmm0
  __m128i v24; // xmm4
  void (__fastcall *v25)(_QWORD, _QWORD, _QWORD); // rax
  __int64 v26; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rbp
  _QWORD *v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rbp
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __m128i v36; // [rsp+0h] [rbp-58h] BYREF
  void (__fastcall *v37)(_QWORD, _QWORD, _QWORD); // [rsp+10h] [rbp-48h]
  __int64 v38; // [rsp+18h] [rbp-40h]
  unsigned __int64 v39; // [rsp+28h] [rbp-30h]

  v8 = _mm_loadu_si128((const __m128i *)(a2 + 88));
  v9 = _mm_loadu_si128((const __m128i *)(a2 + 104));
  v39 = __readfsqword(0x28u);
  v10 = *(_DWORD *)(a2 + 536);
  v11 = _mm_loadu_si128((const __m128i *)(a2 + 56));
  *(_QWORD *)a1 = a2;
  *(__m128i *)(a1 + 8) = v8;
  *(_DWORD *)(a1 + 40) = v10;
  v12 = *(_QWORD *)(a2 + 72);
  *(__m128i *)(a1 + 24) = v9;
  *(_QWORD *)(a1 + 64) = v12;
  *(__m128i *)(a1 + 48) = v11;
  v13 = *(_QWORD *)(a2 + 568);
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = v13;
  v14 = *(_QWORD *)(a2 + 560);
  *(_OWORD *)(a1 + 72) = 0;
  if ( v14 )
  {
    v15 = _mm_loadu_si128((const __m128i *)(a2 + 544));
    *(_QWORD *)(a1 + 88) = v14;
    *(_QWORD *)(a2 + 560) = 0;
    *(_QWORD *)(a2 + 568) = 0;
    *(__m128i *)(a1 + 72) = v15;
  }
  v16 = (*(_QWORD *)(a2 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a2 + 8) = v16;
  if ( !v16 || (v17 = v16 + 128, v16 + 128 > *(_QWORD *)(a2 + 16)) )
  {
    v32 = 2LL * *(_QWORD *)(a2 + 32);
    if ( v32 < 0x88 )
      v32 = 136;
    *(_QWORD *)(a2 + 32) = v32;
    v33 = v32 + 8;
    v34 = malloc(v32 + 8);
    v35 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = v34;
    *v34 = v35;
    v16 = ((unsigned __int64)v34 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a2 + 16) = (char *)v34 + v33;
    v17 = v16 + 128;
  }
  *(_QWORD *)(a2 + 88) = v16;
  v18 = v17;
  *(_QWORD *)(a2 + 96) = 0x1000000000LL;
  *(_QWORD *)(a2 + 8) = v17;
  if ( !v17 || (v19 = v17 + 128, v19 > *(_QWORD *)(a2 + 16)) )
  {
    v28 = 2LL * *(_QWORD *)(a2 + 32);
    if ( v28 < 0x88 )
      v28 = 136;
    *(_QWORD *)(a2 + 32) = v28;
    v29 = v28 + 8;
    v30 = malloc(v28 + 8);
    v31 = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = v30;
    *v30 = v31;
    v18 = ((unsigned __int64)v30 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a2 + 16) = (char *)v30 + v29;
    v19 = v18 + 128;
  }
  *(_QWORD *)(a2 + 8) = v19;
  *(_QWORD *)(a2 + 104) = v18;
  *(_QWORD *)(a2 + 112) = 0x1000000000LL;
  *(_DWORD *)(a2 + 536) = 0;
  *(_QWORD *)(a2 + 56) = a3;
  *(_QWORD *)(a2 + 64) = a4;
  *(_QWORD *)(a2 + 72) = 0;
  v20 = a5[1].m128i_i64[0];
  v21 = a5[1].m128i_i64[1];
  v36 = 0;
  if ( v20 )
  {
    v22 = _mm_loadu_si128(a5);
    a5[1].m128i_i64[0] = 0;
    a5[1].m128i_i64[1] = 0;
    v36 = v22;
  }
  v23 = _mm_load_si128(&v36);
  v24 = _mm_loadu_si128((const __m128i *)(a2 + 544));
  v25 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(a2 + 560);
  *(_QWORD *)(a2 + 560) = v20;
  v26 = *(_QWORD *)(a2 + 568);
  v36 = v24;
  v37 = v25;
  v38 = v26;
  *(_QWORD *)(a2 + 568) = v21;
  *(__m128i *)(a2 + 544) = v23;
  if ( v25 )
    v25(&v36, &v36, 3);
  return v39 - __readfsqword(0x28u);
}


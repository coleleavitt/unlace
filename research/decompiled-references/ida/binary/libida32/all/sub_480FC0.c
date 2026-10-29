__int64 __fastcall sub_480FC0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rdx
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // rdx
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rdx
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rdx
  __int64 v18; // rax
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rdx
  __int64 v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __int64 v27; // rax
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __int64 v30; // rax
  __m128i v31; // xmm0
  int v32; // eax
  char v33; // dl
  char v34; // dl
  int v35; // edx
  __int64 result; // rax

  v3 = a1 + 240;
  v5 = a2 + 240;
  v6 = *(_QWORD *)(v3 - 240);
  v7 = _mm_loadu_si128((const __m128i *)(v3 - 232));
  *(_QWORD *)(v3 - 240) = *(_QWORD *)(v5 - 240);
  *(_QWORD *)(v3 - 232) = *(_QWORD *)(v5 - 232);
  *(_QWORD *)(v3 - 224) = *(_QWORD *)(v5 - 224);
  v8 = *(_QWORD *)(v5 - 216);
  *(_QWORD *)(v5 - 240) = v6;
  *(__m128i *)(v5 - 232) = v7;
  v9 = *(_QWORD *)(v3 - 216);
  v10 = _mm_loadu_si128((const __m128i *)(v3 - 208));
  *(_QWORD *)(v3 - 216) = v8;
  *(_QWORD *)(v3 - 208) = *(_QWORD *)(v5 - 208);
  *(_QWORD *)(v3 - 200) = *(_QWORD *)(v5 - 200);
  v11 = *(_QWORD *)(v5 - 192);
  *(_QWORD *)(v5 - 216) = v9;
  *(__m128i *)(v5 - 208) = v10;
  v12 = *(_QWORD *)(v3 - 192);
  v13 = _mm_loadu_si128((const __m128i *)(v3 - 184));
  *(_QWORD *)(v3 - 192) = v11;
  *(_QWORD *)(v3 - 184) = *(_QWORD *)(v5 - 184);
  *(_QWORD *)(v3 - 176) = *(_QWORD *)(v5 - 176);
  v14 = *(_QWORD *)(v5 - 168);
  *(_QWORD *)(v5 - 192) = v12;
  *(__m128i *)(v5 - 184) = v13;
  v15 = *(_QWORD *)(v3 - 168);
  v16 = _mm_loadu_si128((const __m128i *)(v3 - 160));
  *(_QWORD *)(v3 - 168) = v14;
  *(_QWORD *)(v3 - 160) = *(_QWORD *)(v5 - 160);
  *(_QWORD *)(v3 - 152) = *(_QWORD *)(v5 - 152);
  v17 = *(_QWORD *)(v5 - 144);
  *(_QWORD *)(v5 - 168) = v15;
  *(__m128i *)(v5 - 160) = v16;
  v18 = *(_QWORD *)(v3 - 144);
  v19 = _mm_loadu_si128((const __m128i *)(v3 - 136));
  *(_QWORD *)(v3 - 144) = v17;
  *(_QWORD *)(v3 - 136) = *(_QWORD *)(v5 - 136);
  *(_QWORD *)(v3 - 128) = *(_QWORD *)(v5 - 128);
  LODWORD(v17) = *(_DWORD *)(v5 - 120);
  *(_QWORD *)(v5 - 144) = v18;
  *(__m128i *)(v5 - 136) = v19;
  LODWORD(v18) = *(_DWORD *)(v3 - 120);
  *(_DWORD *)(v3 - 120) = v17;
  v20 = *(_QWORD *)(v5 - 112);
  *(_DWORD *)(v5 - 120) = v18;
  v21 = *(_QWORD *)(v3 - 112);
  v22 = _mm_loadu_si128((const __m128i *)(v3 - 104));
  *(_QWORD *)(v3 - 112) = v20;
  *(_QWORD *)(v3 - 104) = *(_QWORD *)(v5 - 104);
  *(_QWORD *)(v3 - 96) = *(_QWORD *)(v5 - 96);
  v23 = *(_QWORD *)(v5 - 88);
  *(_QWORD *)(v5 - 112) = v21;
  *(__m128i *)(v5 - 104) = v22;
  v24 = *(_QWORD *)(v3 - 88);
  v25 = _mm_loadu_si128((const __m128i *)(v3 - 80));
  *(_QWORD *)(v3 - 88) = v23;
  *(_QWORD *)(v3 - 80) = *(_QWORD *)(v5 - 80);
  *(_QWORD *)(v3 - 72) = *(_QWORD *)(v5 - 72);
  LODWORD(v23) = *(_DWORD *)(v5 - 64);
  *(_QWORD *)(v5 - 88) = v24;
  *(__m128i *)(v5 - 80) = v25;
  LODWORD(v24) = *(_DWORD *)(v3 - 64);
  *(_DWORD *)(v3 - 64) = v23;
  LODWORD(v23) = *(_DWORD *)(v5 - 60);
  *(_DWORD *)(v5 - 64) = v24;
  LODWORD(v24) = *(_DWORD *)(v3 - 60);
  *(_DWORD *)(v3 - 60) = v23;
  LOBYTE(v23) = *(_BYTE *)(v5 - 56);
  *(_DWORD *)(v5 - 60) = v24;
  LOBYTE(v24) = *(_BYTE *)(v3 - 56);
  *(_BYTE *)(v3 - 56) = v23;
  v26 = *(_QWORD *)(v5 - 48);
  *(_BYTE *)(v5 - 56) = v24;
  v27 = *(_QWORD *)(v3 - 48);
  v28 = _mm_loadu_si128((const __m128i *)(v3 - 40));
  *(_QWORD *)(v3 - 48) = v26;
  *(_QWORD *)(v3 - 40) = *(_QWORD *)(v5 - 40);
  *(_QWORD *)(v3 - 32) = *(_QWORD *)(v5 - 32);
  v29 = *(_QWORD *)(v5 - 24);
  *(_QWORD *)(v5 - 48) = v27;
  *(__m128i *)(v5 - 40) = v28;
  v30 = *(_QWORD *)(v3 - 24);
  v31 = _mm_loadu_si128((const __m128i *)(v3 - 16));
  *(_QWORD *)(v3 - 24) = v29;
  *(_QWORD *)(v3 - 16) = *(_QWORD *)(v5 - 16);
  *(_QWORD *)(v3 - 8) = *(_QWORD *)(v5 - 8);
  *(_QWORD *)(v5 - 24) = v30;
  *(__m128i *)(v5 - 16) = v31;
  sub_698710();
  v32 = *(_DWORD *)(a1 + 404);
  *(_DWORD *)(a1 + 404) = *(_DWORD *)(a2 + 404);
  v33 = *(_BYTE *)(a2 + 408);
  *(_DWORD *)(a2 + 404) = v32;
  LOBYTE(v32) = *(_BYTE *)(a1 + 408);
  *(_BYTE *)(a1 + 408) = v33;
  v34 = *(_BYTE *)(a2 + 409);
  *(_BYTE *)(a2 + 408) = v32;
  LOBYTE(v32) = *(_BYTE *)(a1 + 409);
  *(_BYTE *)(a1 + 409) = v34;
  v35 = *(_DWORD *)(a2 + 400);
  *(_BYTE *)(a2 + 409) = v32;
  result = *(unsigned int *)(a1 + 400);
  *(_DWORD *)(a1 + 400) = v35;
  *(_DWORD *)(a2 + 400) = result;
  return result;
}


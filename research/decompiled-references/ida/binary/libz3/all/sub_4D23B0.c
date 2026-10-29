__int64 __fastcall sub_4D23B0(__int64 a1, const __m128i *a2)
{
  __m128i v2; // xmm0
  __m128 v3; // xmm0
  _QWORD *v4; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _OWORD *v7; // rax
  _OWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // r12
  __m128i *v19; // r12
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v26; // [rsp+0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+8h] [rbp-48h] BYREF
  __m128i v28[4]; // [rsp+10h] [rbp-40h] BYREF

  v2 = _mm_loadl_epi64(a2);
  *(_QWORD *)a1 = &off_1C4F320;
  strcpy((char *)(a1 + 32), "datalog");
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)(a1 + 32));
  *(_QWORD *)(a1 + 24) = 7;
  v3 = _mm_loadh_ps((const double *)a2->m128i_i64);
  *(_QWORD *)(a1 + 64) = &off_1C4ED10;
  *(_QWORD *)(a1 + 72) = a2;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0;
  *(__m128 *)(a1 + 48) = v3;
  v4 = (_QWORD *)sub_186B270(0xC0u);
  *v4 = 0;
  v4[3] = 0;
  v4[6] = 0;
  v4[9] = 0;
  v4[12] = 0;
  v4[15] = 0;
  v4[18] = 0;
  v4[21] = 0;
  *(_QWORD *)(a1 + 96) = v4;
  *(_QWORD *)(a1 + 104) = 8;
  *(_DWORD *)(a1 + 112) = 0;
  v5 = (_QWORD *)sub_186B270(0xC0u);
  *v5 = 0;
  v5[3] = 0;
  v5[6] = 0;
  v5[9] = 0;
  v5[12] = 0;
  v5[15] = 0;
  v5[18] = 0;
  v5[21] = 0;
  *(_QWORD *)(a1 + 120) = v5;
  *(_QWORD *)(a1 + 128) = 8;
  *(_DWORD *)(a1 + 136) = 0;
  v6 = (_QWORD *)sub_186B270(0xC0u);
  *v6 = 0;
  v6[3] = 0;
  v6[6] = 0;
  v6[9] = 0;
  v6[12] = 0;
  v6[15] = 0;
  v6[18] = 0;
  v6[21] = 0;
  *(_QWORD *)(a1 + 144) = v6;
  *(_QWORD *)(a1 + 152) = 8;
  *(_DWORD *)(a1 + 160) = 0;
  *(_OWORD *)(a1 + 168) = 0;
  v7 = (_OWORD *)sub_186B270(0x80u);
  *(_QWORD *)(a1 + 184) = v7;
  *(_QWORD *)(a1 + 192) = 8;
  *(_DWORD *)(a1 + 200) = 0;
  *v7 = 0;
  v7[1] = 0;
  v7[2] = 0;
  v7[3] = 0;
  v7[4] = 0;
  v7[5] = 0;
  v7[6] = 0;
  v7[7] = 0;
  v8 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)(a1 + 208) = v8;
  *(_QWORD *)(a1 + 216) = 8;
  *(_DWORD *)(a1 + 224) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v9 = sub_186B270(0x80u);
  *(_QWORD *)v9 = 0;
  *(_DWORD *)(v9 + 8) = 0;
  *(_QWORD *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = 0;
  *(_DWORD *)(v9 + 40) = 0;
  *(_QWORD *)(v9 + 48) = 0;
  *(_DWORD *)(v9 + 56) = 0;
  *(_QWORD *)(v9 + 64) = 0;
  *(_DWORD *)(v9 + 72) = 0;
  *(_QWORD *)(v9 + 80) = 0;
  *(_DWORD *)(v9 + 88) = 0;
  *(_QWORD *)(v9 + 96) = 0;
  *(_DWORD *)(v9 + 104) = 0;
  *(_QWORD *)(v9 + 112) = 0;
  *(_DWORD *)(v9 + 120) = 0;
  *(_QWORD *)(a1 + 240) = v9;
  v10 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 248) = 8;
  *(_DWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 264) = 0;
  *(_QWORD *)(a1 + 272) = v10;
  *(_QWORD *)(a1 + 280) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  sub_4D9E90(a1 + 296, a2);
  *(_QWORD *)(a1 + 424) = 0;
  *(_OWORD *)(a1 + 408) = 0;
  v11 = sub_186B270(0x38u);
  sub_569EA0(v11, a1 + 64);
  sub_4C8AE0(a1 + 64, v11);
  v12 = sub_186B270(0x20u);
  sub_180C5A0(&v26, "hashtable");
  v13 = v26;
  *(_QWORD *)(v12 + 24) = a1 + 64;
  *(_DWORD *)(v12 + 8) = -1;
  *(_QWORD *)(v12 + 16) = v13;
  *(_QWORD *)v12 = off_1C51A88;
  sub_4C8AE0(a1 + 64, v12);
  v14 = sub_186B270(0x20u);
  sub_180C5A0(&v27, "bitvector");
  v15 = v27;
  *(_QWORD *)(v14 + 24) = a1 + 64;
  *(_DWORD *)(v14 + 8) = -1;
  *(_QWORD *)(v14 + 16) = v15;
  *(_QWORD *)v14 = off_1C51BD8;
  sub_4C8AE0(a1 + 64, v14);
  v16 = sub_55DCD0(a1 + 64);
  sub_4C8AE0(a1 + 64, v16);
  v17 = sub_186B270(0x110u);
  sub_4FFD30(v17, a1 + 64);
  sub_4C8680(a1 + 64, v17);
  v18 = sub_186B270(0xF0u);
  sub_50C370(v18, a1 + 64);
  sub_4C8680(a1 + 64, v18);
  if ( (unsigned __int8)sub_64B370(*(_QWORD *)(a1 + 48)) )
  {
    v19 = (__m128i *)sub_186B270(0xB8u);
    sub_180C5A0(v28, "karr_relation");
    v20 = _mm_loadl_epi64(v28);
    v19->m128i_i32[2] = -1;
    v19[2].m128i_i32[0] = 0;
    v19->m128i_i64[0] = (__int64)&off_1C50660;
    v19[1] = _mm_unpacklo_epi64(v20, (__m128i)(unsigned __int64)(a1 + 64));
    v21 = sub_4D6490(a1 + 64);
    sub_17299A0(&v19[2].m128i_u64[1], v21);
    v22 = sub_4D6490(v19[1].m128i_i64[1]);
    sub_16669D0(&v19[10].m128i_u64[1], v22);
    sub_4C8680(a1 + 64, (__int64)v19);
  }
  v23 = sub_186B270(0x88u);
  sub_4EC4E0(v23, a1 + 64);
  sub_4C8680(a1 + 64, v23);
  v24 = sub_186B270(0x38u);
  sub_5874C0(v24, a1 + 64);
  return sub_4C8680(a1 + 64, v24);
}


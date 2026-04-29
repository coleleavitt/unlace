unsigned __int64 __fastcall sub_28A410(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rdx
  int v5; // esi
  int v6; // ecx
  int v7; // esi
  int v8; // ecx
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __m128i v14; // xmm1
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __m128i v19; // xmm0
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v23; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+10h] [rbp-48h]
  __m128i v26; // [rsp+18h] [rbp-40h] BYREF
  __int64 v27; // [rsp+28h] [rbp-30h]
  __int64 v28; // [rsp+30h] [rbp-28h] BYREF
  int v29; // [rsp+38h] [rbp-20h]
  unsigned __int64 v30; // [rsp+48h] [rbp-10h]

  v3 = *a3;
  v30 = __readfsqword(0x28u);
  v24 = 0xFFFFFFFF00000000LL;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v25 = 0xFFFFFFFFLL;
  v5 = *(_DWORD *)(v3 + 8);
  v23 = -1;
  v23 = *(_QWORD *)v3;
  *(_QWORD *)v3 = -1;
  v6 = v24;
  LODWORD(v24) = v5;
  v7 = *(_DWORD *)(v3 + 12);
  *(_DWORD *)(v3 + 8) = v6;
  v8 = HIDWORD(v24);
  HIDWORD(v24) = v7;
  v9 = *(_QWORD *)(v3 + 24);
  *(_DWORD *)(v3 + 12) = v8;
  v10 = v26.m128i_i64[0];
  v26.m128i_i64[0] = v9;
  v11 = *(_QWORD *)(v3 + 32);
  *(_QWORD *)(v3 + 24) = v10;
  v12 = v26.m128i_i64[1];
  v26.m128i_i64[1] = v11;
  *(_QWORD *)(v3 + 32) = v12;
  v13 = v27;
  v14 = _mm_loadu_si128(&v26);
  v27 = *(_QWORD *)(v3 + 40);
  v15 = *(_QWORD *)(v3 + 48);
  *(_QWORD *)(v3 + 40) = v13;
  v16 = v28;
  v28 = v15;
  LODWORD(v15) = *(_DWORD *)(v3 + 56);
  *(_QWORD *)(v3 + 48) = v16;
  LODWORD(v16) = v29;
  v29 = v15;
  *(_DWORD *)(v3 + 56) = v16;
  v17 = v23;
  v18 = *(_QWORD *)a2;
  v19 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(__m128i *)(a2 + 24) = v14;
  *(_QWORD *)a2 = v17;
  v23 = v18;
  LODWORD(v18) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(a2 + 8) = v24;
  LODWORD(v24) = v18;
  LODWORD(v18) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(a2 + 12) = HIDWORD(v24);
  HIDWORD(v24) = v18;
  v20 = *(_QWORD *)(a2 + 40);
  v26 = v19;
  *(_QWORD *)(a2 + 40) = v27;
  v27 = v20;
  v21 = v28;
  v28 = *(_QWORD *)(a2 + 48);
  LODWORD(v20) = *(_DWORD *)(a2 + 56);
  *(_QWORD *)(a2 + 48) = v21;
  LODWORD(v21) = v29;
  v29 = v20;
  *(_DWORD *)(a2 + 56) = v21;
  sub_250A30((__int64)&v23);
  clear_tinfo_t(&v28);
  return v30 - __readfsqword(0x28u);
}

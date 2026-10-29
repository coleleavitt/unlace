void __fastcall sub_1256720(_QWORD *a1)
{
  char *v1; // rsi
  char v2; // al
  int v3; // eax
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm1
  __m128i v16; // xmm2
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __m128i v28; // xmm3
  __m128i si128; // xmm4
  __int64 v30; // rdx
  __m128i v31; // rax
  __m128i v32; // xmm0
  __m128i v33[2]; // [rsp+8h] [rbp-1B0h] BYREF
  __m128i v34; // [rsp+30h] [rbp-188h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+40h] [rbp-178h]
  bool (__fastcall *v36)(_QWORD *, _BYTE *); // [rsp+48h] [rbp-170h]
  __int64 v37; // [rsp+50h] [rbp-168h] BYREF
  __int64 v38; // [rsp+58h] [rbp-160h]
  __int64 v39; // [rsp+60h] [rbp-158h]
  __int64 v40; // [rsp+68h] [rbp-150h]
  __int64 v41; // [rsp+70h] [rbp-148h]
  __int64 v42; // [rsp+78h] [rbp-140h]
  __int64 v43; // [rsp+80h] [rbp-138h]
  __int64 v44; // [rsp+88h] [rbp-130h]
  __int64 v45; // [rsp+90h] [rbp-128h]
  __int64 v46; // [rsp+98h] [rbp-120h]
  __int64 v47; // [rsp+A0h] [rbp-118h]
  __int64 v48; // [rsp+A8h] [rbp-110h]
  int v49; // [rsp+B0h] [rbp-108h]
  __int64 v50; // [rsp+B8h] [rbp-100h]
  __int64 v51; // [rsp+C0h] [rbp-F8h]
  char v52; // [rsp+C8h] [rbp-F0h]
  __m128i v53; // [rsp+D0h] [rbp-E8h] BYREF
  __m128i v54; // [rsp+E0h] [rbp-D8h] BYREF
  __int64 v55; // [rsp+F0h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+F8h] [rbp-C0h]
  __int64 v57; // [rsp+100h] [rbp-B8h]
  __int64 v58; // [rsp+108h] [rbp-B0h]
  __int64 v59; // [rsp+110h] [rbp-A8h]
  __int64 v60; // [rsp+118h] [rbp-A0h]
  __int64 v61; // [rsp+120h] [rbp-98h]
  __int64 v62; // [rsp+128h] [rbp-90h]
  __int64 v63; // [rsp+130h] [rbp-88h]
  __int64 v64; // [rsp+138h] [rbp-80h]
  __int64 v65; // [rsp+140h] [rbp-78h]
  __int64 v66; // [rsp+148h] [rbp-70h]
  int v67; // [rsp+150h] [rbp-68h]
  __int64 v68; // [rsp+158h] [rbp-60h]
  __int64 v69; // [rsp+160h] [rbp-58h]
  char v70; // [rsp+168h] [rbp-50h]
  __m128i v71; // [rsp+170h] [rbp-48h] BYREF
  __m128i v72[3]; // [rsp+180h] [rbp-38h] BYREF

  v1 = (char *)a1[34];
  v2 = *(_BYTE *)(*(_QWORD *)(a1[49] + 48LL) + 2LL * (unsigned __int8)*v1 + 1);
  v50 = a1[48];
  v51 = v50;
  v37 = 0;
  v52 = v2 & 1;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  LOWORD(v49) = 0;
  BYTE2(v49) = 0;
  v53 = 0u;
  v54 = 0u;
  v3 = sub_1252DD0(v50, v1, &v1[a1[35]], 1);
  if ( !(_WORD)v3 && (v3 & 0x10000) == 0 )
    abort();
  BYTE2(v49) |= BYTE2(v3);
  LOWORD(v49) = v3 | v49;
  sub_1253D90(&v37);
  v4 = v37;
  v5 = a1[32];
  v37 = 0;
  v55 = v4;
  v6 = v38;
  v38 = 0;
  v56 = v6;
  v7 = v39;
  v39 = 0;
  v57 = v7;
  v8 = v40;
  v40 = 0;
  v58 = v8;
  v9 = v41;
  v41 = 0;
  v59 = v9;
  v10 = v42;
  v42 = 0;
  v60 = v10;
  v11 = v43;
  v43 = 0;
  v61 = v11;
  v12 = v44;
  v44 = 0;
  v62 = v12;
  v13 = v45;
  v45 = 0;
  v63 = v13;
  v14 = v46;
  v46 = 0;
  v64 = v14;
  v65 = v47;
  v15 = _mm_load_si128(&v53);
  v16 = _mm_load_si128(&v54);
  v47 = 0;
  v66 = v48;
  v71 = v15;
  v67 = v49;
  v72[0] = v16;
  v68 = v50;
  v48 = 0;
  v69 = v51;
  v35 = nullptr;
  v70 = v52;
  v17 = operator new(0xA0u);
  v18 = v55;
  v55 = 0;
  *(_QWORD *)v17 = v18;
  v19 = v56;
  v56 = 0;
  *(_QWORD *)(v17 + 8) = v19;
  v20 = v57;
  v57 = 0;
  *(_QWORD *)(v17 + 16) = v20;
  v21 = v58;
  v58 = 0;
  *(_QWORD *)(v17 + 24) = v21;
  v22 = v59;
  v59 = 0;
  *(_QWORD *)(v17 + 32) = v22;
  v23 = v60;
  v60 = 0;
  *(_QWORD *)(v17 + 40) = v23;
  v24 = v61;
  v61 = 0;
  *(_QWORD *)(v17 + 48) = v24;
  v25 = v62;
  v62 = 0;
  *(_QWORD *)(v17 + 56) = v25;
  v26 = v63;
  v63 = 0;
  *(_QWORD *)(v17 + 64) = v26;
  v27 = v64;
  v64 = 0;
  *(_QWORD *)(v17 + 72) = v27;
  *(_QWORD *)(v17 + 80) = v65;
  v65 = 0;
  v28 = _mm_load_si128(&v71);
  si128 = _mm_load_si128(v72);
  v34.m128i_i64[0] = v17;
  *(_QWORD *)(v17 + 88) = v66;
  LODWORD(v27) = v67;
  *(__m128i *)(v17 + 128) = v28;
  *(_DWORD *)(v17 + 96) = v27;
  v30 = v68;
  *(__m128i *)(v17 + 144) = si128;
  *(_QWORD *)(v17 + 104) = v30;
  v66 = 0;
  *(_QWORD *)(v17 + 112) = v69;
  *(_BYTE *)(v17 + 120) = v70;
  v36 = sub_124D9C0;
  v35 = sub_1258040;
  v31.m128i_i64[0] = sub_1252B20(v5, &v34);
  v31.m128i_i64[1] = a1[32];
  v33[0] = v31;
  v32 = _mm_loadl_epi64(v33);
  v33[1] = _mm_unpacklo_epi64(v32, v32);
  sub_1253440(a1 + 38, (const __m128i *)&v33[0].m128i_u64[1]);
  if ( v35 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v35)(&v34, &v34, 3);
  sub_1251710((__int64)&v55);
  sub_1251710((__int64)&v37);
}

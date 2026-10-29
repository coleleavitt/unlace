void __fastcall sub_1257190(_QWORD *a1)
{
  char *v1; // rsi
  char v2; // al
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // r11
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rdx
  __m128i v10; // xmm1
  __m128i si128; // xmm2
  char v12; // r12
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r11
  __int64 v18; // r10
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r8
  __m128i v22; // xmm3
  __int64 v23; // rsi
  __int64 v24; // rcx
  __m128i v25; // xmm4
  __int64 v26; // rdx
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  __m128i v30; // [rsp+8h] [rbp-210h] BYREF
  __int64 v31; // [rsp+18h] [rbp-200h]
  __int64 v32; // [rsp+20h] [rbp-1F8h]
  __int64 v33; // [rsp+28h] [rbp-1F0h]
  __int64 v34; // [rsp+30h] [rbp-1E8h]
  __int64 v35; // [rsp+38h] [rbp-1E0h]
  __int64 v36; // [rsp+40h] [rbp-1D8h]
  __int64 v37; // [rsp+48h] [rbp-1D0h]
  __int64 v38; // [rsp+50h] [rbp-1C8h]
  __int64 v39; // [rsp+58h] [rbp-1C0h]
  __int64 v40; // [rsp+60h] [rbp-1B8h] BYREF
  __m128i v41; // [rsp+68h] [rbp-1B0h]
  __m128i v42; // [rsp+80h] [rbp-198h] BYREF
  __int64 (__fastcall *v43)(); // [rsp+90h] [rbp-188h]
  bool (__fastcall *v44)(_QWORD *, _BYTE *); // [rsp+98h] [rbp-180h]
  __int64 v45; // [rsp+A0h] [rbp-178h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-170h]
  __int64 v47; // [rsp+B0h] [rbp-168h]
  __int64 v48; // [rsp+B8h] [rbp-160h]
  __int64 v49; // [rsp+C0h] [rbp-158h]
  __int64 v50; // [rsp+C8h] [rbp-150h]
  __int64 v51; // [rsp+D0h] [rbp-148h]
  __int64 v52; // [rsp+D8h] [rbp-140h]
  __int64 v53; // [rsp+E0h] [rbp-138h]
  __int64 v54; // [rsp+E8h] [rbp-130h]
  __int64 v55; // [rsp+F0h] [rbp-128h]
  __int64 v56; // [rsp+F8h] [rbp-120h]
  int v57; // [rsp+100h] [rbp-118h]
  __int64 v58; // [rsp+108h] [rbp-110h]
  __int64 v59; // [rsp+110h] [rbp-108h]
  char v60; // [rsp+118h] [rbp-100h]
  __m128i v61; // [rsp+120h] [rbp-F8h] BYREF
  __m128i v62[7]; // [rsp+130h] [rbp-E8h] BYREF
  int v63; // [rsp+1A0h] [rbp-78h]
  __int64 v64; // [rsp+1A8h] [rbp-70h]
  __m128i v65; // [rsp+1C0h] [rbp-58h] BYREF
  __m128i v66[4]; // [rsp+1D0h] [rbp-48h] BYREF

  v1 = (char *)a1[34];
  v2 = *(_BYTE *)(*(_QWORD *)(a1[49] + 48LL) + 2LL * (unsigned __int8)*v1 + 1);
  v58 = a1[48];
  LOWORD(v57) = 0;
  v59 = v58;
  v60 = v2 & 1;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v56 = 0;
  BYTE2(v57) = 0;
  v61 = 0u;
  v62[0] = 0u;
  v3 = sub_1252DD0(v58, v1, &v1[a1[35]], 0);
  if ( !(_WORD)v3 && (v3 & 0x10000) == 0 )
    abort();
  LOWORD(v57) = v3 | v57;
  BYTE2(v57) |= BYTE2(v3);
  sub_1253730(&v45);
  v4 = v49;
  v49 = 0;
  v5 = v45;
  v45 = 0;
  v35 = v4;
  v34 = v50;
  v6 = a1[32];
  v39 = v5;
  v38 = v46;
  v7 = v52;
  v37 = v47;
  v8 = v53;
  v36 = v48;
  v30.m128i_i64[1] = v54;
  v31 = v55;
  v30.m128i_i64[0] = v6;
  v33 = v51;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  v9 = v56;
  v10 = _mm_load_si128(&v61);
  v56 = 0;
  si128 = _mm_load_si128(v62);
  v63 = v57;
  v65 = v10;
  v12 = v60;
  v66[0] = si128;
  v13 = v59;
  v32 = v9;
  v64 = v58;
  v43 = nullptr;
  v14 = operator new(0xA0u);
  v15 = v33;
  v16 = v34;
  v17 = v39;
  *(_BYTE *)(v14 + 120) = v12;
  v18 = v38;
  v19 = v37;
  *(_QWORD *)(v14 + 48) = v15;
  v20 = v32;
  v21 = v36;
  *(_QWORD *)(v14 + 32) = v4;
  v22 = _mm_load_si128(&v65);
  v23 = v31;
  *(_QWORD *)(v14 + 40) = v16;
  *(_QWORD *)(v14 + 88) = v20;
  LODWORD(v20) = v63;
  v24 = v30.m128i_i64[1];
  *(_QWORD *)v14 = v17;
  v25 = _mm_load_si128(v66);
  *(_DWORD *)(v14 + 96) = v20;
  v26 = v64;
  *(_QWORD *)(v14 + 8) = v18;
  *(_QWORD *)(v14 + 16) = v19;
  *(_QWORD *)(v14 + 24) = v21;
  *(_QWORD *)(v14 + 72) = v24;
  *(_QWORD *)(v14 + 104) = v26;
  *(__m128i *)(v14 + 128) = v22;
  *(__m128i *)(v14 + 144) = v25;
  *(_QWORD *)(v14 + 80) = v23;
  *(_QWORD *)(v14 + 56) = v7;
  *(_QWORD *)(v14 + 64) = v8;
  *(_QWORD *)(v14 + 112) = v13;
  v42.m128i_i64[0] = v14;
  v44 = sub_124D960;
  v43 = sub_1257AB0;
  v27 = sub_1252B20(v30.m128i_i64[0], &v42);
  v28 = a1[32];
  v30.m128i_i64[0] = v27;
  v29 = _mm_loadl_epi64(&v30);
  v40 = v28;
  v41 = _mm_unpacklo_epi64(v29, v29);
  sub_1253440(a1 + 38, (const __m128i *)&v40);
  if ( v43 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v43)(&v42, &v42, 3);
  sub_1251590((__int64)&v45);
}

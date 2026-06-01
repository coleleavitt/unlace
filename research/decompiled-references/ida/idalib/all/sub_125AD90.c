void __fastcall sub_125AD90(__int64 a1, char a2)
{
  __m128i v2; // xmm0
  char v3; // al
  unsigned __int64 v4; // rax
  __int64 v5; // r14
  unsigned __int64 v6; // rax
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
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
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
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm0
  unsigned int v34; // r12d
  __int64 v35; // rax
  __m128i v36; // [rsp+8h] [rbp-1C0h] BYREF
  __int16 v37; // [rsp+1Eh] [rbp-1AAh] BYREF
  __int64 v38; // [rsp+20h] [rbp-1A8h] BYREF
  __m128i v39; // [rsp+28h] [rbp-1A0h]
  __m128i v40; // [rsp+40h] [rbp-188h] BYREF
  __int64 (__fastcall *v41)(__int64 *, __int64 *, int); // [rsp+50h] [rbp-178h]
  bool (__fastcall *v42)(_QWORD *, _BYTE *); // [rsp+58h] [rbp-170h]
  __m128 v43; // [rsp+60h] [rbp-168h] BYREF
  __int64 v44; // [rsp+70h] [rbp-158h]
  __int64 v45; // [rsp+78h] [rbp-150h]
  __int64 v46; // [rsp+80h] [rbp-148h]
  __int64 v47; // [rsp+88h] [rbp-140h]
  __int64 v48; // [rsp+90h] [rbp-138h]
  __int64 v49; // [rsp+98h] [rbp-130h]
  __int64 v50; // [rsp+A0h] [rbp-128h]
  __int64 v51; // [rsp+A8h] [rbp-120h]
  __int64 v52; // [rsp+B0h] [rbp-118h]
  __int64 v53; // [rsp+B8h] [rbp-110h]
  int v54; // [rsp+C0h] [rbp-108h]
  __m128i v55; // [rsp+C8h] [rbp-100h]
  char v56; // [rsp+D8h] [rbp-F0h]
  __m128i v57; // [rsp+E0h] [rbp-E8h] BYREF
  __m128i v58; // [rsp+F0h] [rbp-D8h] BYREF
  unsigned __int64 v59; // [rsp+100h] [rbp-C8h] BYREF
  unsigned __int64 v60; // [rsp+108h] [rbp-C0h]
  __int64 v61; // [rsp+110h] [rbp-B8h]
  __int64 v62; // [rsp+118h] [rbp-B0h]
  __int64 v63; // [rsp+120h] [rbp-A8h]
  __int64 v64; // [rsp+128h] [rbp-A0h]
  __int64 v65; // [rsp+130h] [rbp-98h]
  __int64 v66; // [rsp+138h] [rbp-90h]
  __int64 v67; // [rsp+140h] [rbp-88h]
  __int64 v68; // [rsp+148h] [rbp-80h]
  __int64 v69; // [rsp+150h] [rbp-78h]
  __int64 v70; // [rsp+158h] [rbp-70h]
  int v71; // [rsp+160h] [rbp-68h]
  __m128i v72; // [rsp+168h] [rbp-60h]
  char v73; // [rsp+178h] [rbp-50h]
  __m128i v74; // [rsp+180h] [rbp-48h] BYREF
  __m128i v75[3]; // [rsp+190h] [rbp-38h] BYREF

  v2 = _mm_loadl_epi64((const __m128i *)(a1 + 384));
  v43 = 0u;
  LOBYTE(v37) = 0;
  v55 = _mm_unpacklo_epi64(v2, v2);
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v52 = 0;
  v53 = 0;
  LOWORD(v54) = 0;
  BYTE2(v54) = 0;
  v56 = a2;
  v57 = 0;
  v58 = 0;
  if ( (unsigned __int8)sub_1251410(a1) )
  {
    v3 = **(_BYTE **)(a1 + 272);
    LOBYTE(v37) = 1;
    HIBYTE(v37) = v3;
  }
  else if ( *(_DWORD *)(a1 + 152) == 28 )
  {
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    v37 = 11521;
  }
  while ( (unsigned __int8)sub_125A8E0(a1, &v37, &v43) )
    ;
  if ( (_BYTE)v37 == 1 )
  {
    v34 = SHIBYTE(v37);
    v35 = std::use_facet<std::ctype<char>>(v55.m128i_i64[0]);
    LOBYTE(v59) = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v35 + 32LL))(v35, v34);
    sub_1258740((__int64)&v43, &v59);
  }
  sub_1252110((__int64 *)&v43);
  v4 = v43.m128_u64[0];
  v5 = *(_QWORD *)(a1 + 256);
  v43.m128_u64[0] = 0;
  v59 = v4;
  v6 = v43.m128_u64[1];
  v43.m128_u64[1] = 0;
  v60 = v6;
  v7 = v44;
  v44 = 0;
  v61 = v7;
  v8 = v45;
  v45 = 0;
  v62 = v8;
  v9 = v46;
  v46 = 0;
  v63 = v9;
  v10 = v47;
  v47 = 0;
  v64 = v10;
  v11 = v48;
  v48 = 0;
  v65 = v11;
  v12 = v49;
  v49 = 0;
  v66 = v12;
  v13 = v50;
  v50 = 0;
  v67 = v13;
  v14 = v51;
  v51 = 0;
  v68 = v14;
  v69 = v52;
  v15 = _mm_load_si128(&v57);
  v16 = _mm_load_si128(&v58);
  v52 = 0;
  v70 = v53;
  v74 = v15;
  v71 = v54;
  v75[0] = v16;
  v72 = v55;
  v53 = 0;
  v41 = nullptr;
  v73 = v56;
  v17 = operator new(0xA0u);
  v18 = v59;
  v59 = 0;
  *(_QWORD *)v17 = v18;
  v19 = v60;
  v60 = 0;
  *(_QWORD *)(v17 + 8) = v19;
  v20 = v61;
  v61 = 0;
  *(_QWORD *)(v17 + 16) = v20;
  v21 = v62;
  v62 = 0;
  *(_QWORD *)(v17 + 24) = v21;
  v22 = v63;
  v63 = 0;
  *(_QWORD *)(v17 + 32) = v22;
  v23 = v64;
  v64 = 0;
  *(_QWORD *)(v17 + 40) = v23;
  v24 = v65;
  v65 = 0;
  *(_QWORD *)(v17 + 48) = v24;
  v25 = v66;
  v66 = 0;
  *(_QWORD *)(v17 + 56) = v25;
  v26 = v67;
  v67 = 0;
  *(_QWORD *)(v17 + 64) = v26;
  v27 = v68;
  v68 = 0;
  *(_QWORD *)(v17 + 72) = v27;
  *(_QWORD *)(v17 + 80) = v69;
  v69 = 0;
  v28 = _mm_load_si128(&v74);
  si128 = _mm_load_si128(v75);
  v40.m128i_i64[0] = v17;
  *(_QWORD *)(v17 + 88) = v70;
  LODWORD(v27) = v71;
  *(__m128i *)(v17 + 128) = v28;
  *(_DWORD *)(v17 + 96) = v27;
  v30 = v72.m128i_i64[0];
  *(__m128i *)(v17 + 144) = si128;
  *(_QWORD *)(v17 + 104) = v30;
  v70 = 0;
  *(_QWORD *)(v17 + 112) = v72.m128i_i64[1];
  *(_BYTE *)(v17 + 120) = v73;
  v42 = sub_124D990;
  v41 = sub_1257D30;
  v31 = sub_1252B20(v5, &v40);
  v32 = *(_QWORD *)(a1 + 256);
  v36.m128i_i64[0] = v31;
  v33 = _mm_loadl_epi64(&v36);
  v38 = v32;
  v39 = _mm_unpacklo_epi64(v33, v33);
  sub_1253440((_QWORD *)(a1 + 304), (const __m128i *)&v38);
  if ( v41 )
    v41(v40.m128i_i64, v40.m128i_i64, 3);
  sub_1251680((__int64)&v59);
  sub_1251680((__int64)&v43);
}

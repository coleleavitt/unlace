void __fastcall sub_125A3B0(__int64 a1, char a2)
{
  __int64 v2; // rax
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
  __m128i v29; // xmm4
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __m128i v33; // xmm0
  __m128i v34; // [rsp+0h] [rbp-1C0h] BYREF
  __int16 v35; // [rsp+16h] [rbp-1AAh] BYREF
  __int64 v36; // [rsp+18h] [rbp-1A8h] BYREF
  __m128i v37; // [rsp+20h] [rbp-1A0h]
  __m128i v38; // [rsp+38h] [rbp-188h] BYREF
  __int64 (__fastcall *v39)(__int64 *, __int64 *, int); // [rsp+48h] [rbp-178h]
  bool (__fastcall *v40)(_QWORD *, _BYTE *); // [rsp+50h] [rbp-170h]
  __m128 v41; // [rsp+58h] [rbp-168h] BYREF
  __int64 v42; // [rsp+68h] [rbp-158h]
  __int64 v43; // [rsp+70h] [rbp-150h]
  __int64 v44; // [rsp+78h] [rbp-148h]
  __int64 v45; // [rsp+80h] [rbp-140h]
  __int64 v46; // [rsp+88h] [rbp-138h]
  __int64 v47; // [rsp+90h] [rbp-130h]
  __int64 v48; // [rsp+98h] [rbp-128h]
  __int64 v49; // [rsp+A0h] [rbp-120h]
  __int64 v50; // [rsp+A8h] [rbp-118h]
  __int64 v51; // [rsp+B0h] [rbp-110h]
  int v52; // [rsp+B8h] [rbp-108h]
  __int64 v53; // [rsp+C0h] [rbp-100h]
  char v54; // [rsp+C8h] [rbp-F8h]
  __m128i v55; // [rsp+D0h] [rbp-F0h] BYREF
  __m128i v56; // [rsp+E0h] [rbp-E0h] BYREF
  unsigned __int64 v57; // [rsp+F8h] [rbp-C8h] BYREF
  unsigned __int64 v58; // [rsp+100h] [rbp-C0h]
  __int64 v59; // [rsp+108h] [rbp-B8h]
  __int64 v60; // [rsp+110h] [rbp-B0h]
  __int64 v61; // [rsp+118h] [rbp-A8h]
  __int64 v62; // [rsp+120h] [rbp-A0h]
  __int64 v63; // [rsp+128h] [rbp-98h]
  __int64 v64; // [rsp+130h] [rbp-90h]
  __int64 v65; // [rsp+138h] [rbp-88h]
  __int64 v66; // [rsp+140h] [rbp-80h]
  __int64 v67; // [rsp+148h] [rbp-78h]
  __int64 v68; // [rsp+150h] [rbp-70h]
  int v69; // [rsp+158h] [rbp-68h]
  __int64 v70; // [rsp+160h] [rbp-60h]
  char v71; // [rsp+168h] [rbp-58h]
  __m128i v72; // [rsp+170h] [rbp-50h] BYREF
  __m128i v73[4]; // [rsp+180h] [rbp-40h] BYREF

  v2 = *(_QWORD *)(a1 + 384);
  v41 = 0u;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  LOWORD(v52) = 0;
  BYTE2(v52) = 0;
  v53 = v2;
  v54 = a2;
  v55 = 0;
  v56 = 0;
  LOBYTE(v35) = 0;
  if ( (unsigned __int8)sub_1251410(a1) )
  {
    v3 = **(_BYTE **)(a1 + 272);
    LOBYTE(v35) = 1;
    HIBYTE(v35) = v3;
  }
  else if ( *(_DWORD *)(a1 + 152) == 28 )
  {
    sub_9EE8A0(a1 + 272, a1 + 208);
    sub_12510C0((unsigned __int8 *)(a1 + 8));
    v35 = 11521;
  }
  while ( (unsigned __int8)sub_1259EC0(a1, &v35, &v41) )
    ;
  if ( (_BYTE)v35 == 1 )
  {
    LOBYTE(v57) = HIBYTE(v35);
    sub_1258740((__int64)&v41, &v57);
  }
  sub_1251BE0((__int64 *)&v41);
  v4 = v41.m128_u64[0];
  v5 = *(_QWORD *)(a1 + 256);
  v41.m128_u64[0] = 0;
  v57 = v4;
  v6 = v41.m128_u64[1];
  v41.m128_u64[1] = 0;
  v58 = v6;
  v7 = v42;
  v42 = 0;
  v59 = v7;
  v8 = v43;
  v43 = 0;
  v60 = v8;
  v9 = v44;
  v44 = 0;
  v61 = v9;
  v10 = v45;
  v45 = 0;
  v62 = v10;
  v11 = v46;
  v46 = 0;
  v63 = v11;
  v12 = v47;
  v47 = 0;
  v64 = v12;
  v13 = v48;
  v48 = 0;
  v65 = v13;
  v14 = v49;
  v49 = 0;
  v66 = v14;
  v67 = v50;
  v15 = _mm_loadu_si128(&v55);
  v16 = _mm_loadu_si128(&v56);
  v50 = 0;
  v68 = v51;
  v72 = v15;
  v69 = v52;
  v73[0] = v16;
  v70 = v53;
  v51 = 0;
  v71 = v54;
  v39 = nullptr;
  v17 = operator new(0x98u);
  v18 = v57;
  v57 = 0;
  *(_QWORD *)v17 = v18;
  v19 = v58;
  v58 = 0;
  *(_QWORD *)(v17 + 8) = v19;
  v20 = v59;
  v59 = 0;
  *(_QWORD *)(v17 + 16) = v20;
  v21 = v60;
  v60 = 0;
  *(_QWORD *)(v17 + 24) = v21;
  v22 = v61;
  v61 = 0;
  *(_QWORD *)(v17 + 32) = v22;
  v23 = v62;
  v62 = 0;
  *(_QWORD *)(v17 + 40) = v23;
  v24 = v63;
  v63 = 0;
  *(_QWORD *)(v17 + 48) = v24;
  v25 = v64;
  v64 = 0;
  *(_QWORD *)(v17 + 56) = v25;
  v26 = v65;
  v65 = 0;
  *(_QWORD *)(v17 + 64) = v26;
  v27 = v66;
  v66 = 0;
  *(_QWORD *)(v17 + 72) = v27;
  *(_QWORD *)(v17 + 80) = v67;
  v67 = 0;
  v28 = _mm_loadu_si128(&v72);
  v29 = _mm_loadu_si128(v73);
  v38.m128i_i64[0] = v17;
  *(_QWORD *)(v17 + 88) = v68;
  LODWORD(v27) = v69;
  *(__m128i *)(v17 + 120) = v28;
  *(_DWORD *)(v17 + 96) = v27;
  v30 = v70;
  *(__m128i *)(v17 + 136) = v29;
  *(_QWORD *)(v17 + 104) = v30;
  v68 = 0;
  *(_BYTE *)(v17 + 112) = v71;
  v40 = sub_124D940;
  v39 = sub_12577B0;
  v31 = sub_1252B20(v5, &v38);
  v32 = *(_QWORD *)(a1 + 256);
  v34.m128i_i64[0] = v31;
  v33 = _mm_loadl_epi64(&v34);
  v36 = v32;
  v37 = _mm_unpacklo_epi64(v33, v33);
  sub_1253440((_QWORD *)(a1 + 304), (const __m128i *)&v36);
  if ( v39 )
    v39(v38.m128i_i64, v38.m128i_i64, 3);
  sub_1251500((__int64)&v57);
  sub_1251500((__int64)&v41);
}

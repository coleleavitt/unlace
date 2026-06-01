void __fastcall sub_1256C20(_QWORD *a1)
{
  char *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  void *v7; // rax
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  void *v11; // rax
  void *v12; // rax
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  void *v17; // rax
  __m128i v18; // xmm1
  __m128i v19; // xmm2
  __int64 v20; // rax
  void *v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  void *v24; // rdx
  void *v25; // rdx
  __int64 v26; // rdx
  void *v27; // rdx
  __int64 v28; // rdx
  __int64 v29; // rdx
  void *v30; // rdx
  __m128i v31; // xmm3
  __m128i si128; // xmm4
  __int64 v33; // rdx
  __m128i v34; // rax
  __m128i v35; // xmm0
  void **v36; // rbp
  void **v37; // rbx
  __m128i v38[2]; // [rsp+8h] [rbp-1A0h] BYREF
  __m128i v39; // [rsp+30h] [rbp-178h] BYREF
  __int64 (__fastcall *v40)(); // [rsp+40h] [rbp-168h]
  bool (__fastcall *v41)(_QWORD *, _BYTE *); // [rsp+48h] [rbp-160h]
  void *v42; // [rsp+50h] [rbp-158h] BYREF
  __int64 v43; // [rsp+58h] [rbp-150h]
  __int64 v44; // [rsp+60h] [rbp-148h]
  void *v45; // [rsp+68h] [rbp-140h]
  void *v46; // [rsp+70h] [rbp-138h]
  __int64 v47; // [rsp+78h] [rbp-130h]
  void *v48; // [rsp+80h] [rbp-128h]
  __int64 v49; // [rsp+88h] [rbp-120h]
  __int64 v50; // [rsp+90h] [rbp-118h]
  void *v51; // [rsp+98h] [rbp-110h]
  __int64 v52; // [rsp+A0h] [rbp-108h]
  __int64 v53; // [rsp+A8h] [rbp-100h]
  int v54; // [rsp+B0h] [rbp-F8h]
  __int64 v55; // [rsp+B8h] [rbp-F0h]
  __int64 v56; // [rsp+C0h] [rbp-E8h]
  char v57; // [rsp+C8h] [rbp-E0h]
  __m128i v58; // [rsp+D0h] [rbp-D8h] BYREF
  __m128i v59; // [rsp+E0h] [rbp-C8h] BYREF
  void *v60; // [rsp+F0h] [rbp-B8h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-B0h]
  __int64 v62; // [rsp+100h] [rbp-A8h]
  void *v63; // [rsp+108h] [rbp-A0h]
  void *v64; // [rsp+110h] [rbp-98h]
  __int64 v65; // [rsp+118h] [rbp-90h]
  void *v66; // [rsp+120h] [rbp-88h]
  __int64 v67; // [rsp+128h] [rbp-80h]
  __int64 v68; // [rsp+130h] [rbp-78h]
  void *v69; // [rsp+138h] [rbp-70h]
  __int64 v70; // [rsp+140h] [rbp-68h]
  __int64 v71; // [rsp+148h] [rbp-60h]
  int v72; // [rsp+150h] [rbp-58h]
  __int64 v73; // [rsp+158h] [rbp-50h]
  __int64 v74; // [rsp+160h] [rbp-48h]
  char v75; // [rsp+168h] [rbp-40h]
  __m128i v76; // [rsp+170h] [rbp-38h] BYREF
  __m128i v77[2]; // [rsp+180h] [rbp-28h] BYREF

  v2 = (char *)a1[34];
  v3 = a1[49];
  v4 = a1[48];
  LOBYTE(v3) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + 2LL * (unsigned __int8)*v2 + 1);
  v42 = nullptr;
  LOWORD(v54) = 0;
  v5 = a1[35];
  v43 = 0;
  v57 = v3 & 1;
  v44 = 0;
  v45 = nullptr;
  v46 = nullptr;
  v47 = 0;
  v48 = nullptr;
  v49 = 0;
  v50 = 0;
  v51 = nullptr;
  v52 = 0;
  v53 = 0;
  BYTE2(v54) = 0;
  v55 = v4;
  v56 = v4;
  v58 = 0u;
  v59 = 0u;
  v6 = sub_1252DD0(v4, v2, &v2[v5], 1);
  if ( !(_WORD)v6 && (v6 & 0x10000) == 0 )
    abort();
  BYTE2(v54) |= BYTE2(v6);
  LOWORD(v54) = v6 | v54;
  sub_1252110((__int64 *)&v42);
  v7 = v42;
  v8 = a1[32];
  v42 = nullptr;
  v60 = v7;
  v9 = v43;
  v43 = 0;
  v61 = v9;
  v10 = v44;
  v44 = 0;
  v62 = v10;
  v11 = v45;
  v45 = nullptr;
  v63 = v11;
  v12 = v46;
  v46 = nullptr;
  v64 = v12;
  v13 = v47;
  v47 = 0;
  v65 = v13;
  v14 = v48;
  v48 = nullptr;
  v66 = v14;
  v15 = v49;
  v49 = 0;
  v67 = v15;
  v16 = v50;
  v50 = 0;
  v68 = v16;
  v17 = v51;
  v51 = nullptr;
  v69 = v17;
  v70 = v52;
  v18 = _mm_load_si128(&v58);
  v19 = _mm_load_si128(&v59);
  v52 = 0;
  v71 = v53;
  v76 = v18;
  v72 = v54;
  v77[0] = v19;
  v73 = v55;
  v53 = 0;
  v74 = v56;
  v40 = nullptr;
  v75 = v57;
  v20 = operator new(0xA0u);
  v21 = v60;
  v60 = nullptr;
  *(_QWORD *)v20 = v21;
  v22 = v61;
  v61 = 0;
  *(_QWORD *)(v20 + 8) = v22;
  v23 = v62;
  v62 = 0;
  *(_QWORD *)(v20 + 16) = v23;
  v24 = v63;
  v63 = nullptr;
  *(_QWORD *)(v20 + 24) = v24;
  v25 = v64;
  v64 = nullptr;
  *(_QWORD *)(v20 + 32) = v25;
  v26 = v65;
  v65 = 0;
  *(_QWORD *)(v20 + 40) = v26;
  v27 = v66;
  v66 = nullptr;
  *(_QWORD *)(v20 + 48) = v27;
  v28 = v67;
  v67 = 0;
  *(_QWORD *)(v20 + 56) = v28;
  v29 = v68;
  v68 = 0;
  *(_QWORD *)(v20 + 64) = v29;
  v30 = v69;
  v69 = nullptr;
  *(_QWORD *)(v20 + 72) = v30;
  *(_QWORD *)(v20 + 80) = v70;
  v70 = 0;
  v31 = _mm_load_si128(&v76);
  si128 = _mm_load_si128(v77);
  v39.m128i_i64[0] = v20;
  *(_QWORD *)(v20 + 88) = v71;
  LODWORD(v30) = v72;
  *(__m128i *)(v20 + 128) = v31;
  *(_DWORD *)(v20 + 96) = (_DWORD)v30;
  v33 = v73;
  *(__m128i *)(v20 + 144) = si128;
  *(_QWORD *)(v20 + 104) = v33;
  v71 = 0;
  *(_QWORD *)(v20 + 112) = v74;
  *(_BYTE *)(v20 + 120) = v75;
  v41 = sub_124D990;
  v40 = sub_1257D30;
  v34.m128i_i64[0] = sub_1252B20(v8, &v39);
  v34.m128i_i64[1] = a1[32];
  v38[0] = v34;
  v35 = _mm_loadl_epi64(v38);
  v38[1] = _mm_unpacklo_epi64(v35, v35);
  sub_1253440(a1 + 38, (const __m128i *)&v38[0].m128i_u64[1]);
  if ( v40 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v40)(&v39, &v39, 3);
  sub_1251680((__int64)&v60);
  if ( v51 )
    operator delete(v51);
  if ( v48 )
    operator delete(v48);
  v36 = (void **)v46;
  v37 = (void **)v45;
  if ( v46 != v45 )
  {
    do
    {
      while ( *v37 != v37 + 2 )
      {
        operator delete(*v37);
        v37 += 4;
        if ( v36 == v37 )
          goto LABEL_12;
      }
      v37 += 4;
    }
    while ( v36 != v37 );
LABEL_12:
    v37 = (void **)v45;
  }
  if ( v37 )
    operator delete(v37);
  if ( v42 )
    operator delete(v42);
}

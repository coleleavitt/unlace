void __fastcall sub_12562B0(_QWORD *a1)
{
  char *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  int v6; // eax
  void *v7; // r11
  __int64 v8; // r10
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r14
  void *v12; // r13
  __int64 v13; // r12
  __int64 v14; // rbp
  __m128i v15; // xmm2
  __int64 v16; // rax
  void *v17; // rsi
  __int64 v18; // rcx
  void *v19; // rdx
  void *v20; // r11
  __int64 v21; // r10
  __int64 v22; // r9
  void *v23; // r8
  __m128i v24; // xmm3
  __int64 v25; // rcx
  __m128i v26; // xmm4
  unsigned __int64 v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm0
  void **v30; // rbp
  void **v31; // rbx
  __m128i v32; // [rsp+0h] [rbp-208h] BYREF
  char v33; // [rsp+17h] [rbp-1F1h]
  void *v34; // [rsp+18h] [rbp-1F0h]
  __int64 v35; // [rsp+20h] [rbp-1E8h]
  void *v36; // [rsp+28h] [rbp-1E0h]
  void *v37; // [rsp+30h] [rbp-1D8h]
  __int64 v38; // [rsp+38h] [rbp-1D0h]
  __int64 v39; // [rsp+40h] [rbp-1C8h]
  void *v40; // [rsp+48h] [rbp-1C0h]
  __int64 v41; // [rsp+50h] [rbp-1B8h] BYREF
  __m128i v42; // [rsp+58h] [rbp-1B0h]
  __m128i v43; // [rsp+70h] [rbp-198h] BYREF
  __int64 (__fastcall *v44)(); // [rsp+80h] [rbp-188h]
  bool (__fastcall *v45)(_QWORD *, _BYTE *); // [rsp+88h] [rbp-180h]
  void *v46; // [rsp+90h] [rbp-178h] BYREF
  __int64 v47; // [rsp+98h] [rbp-170h]
  __int64 v48; // [rsp+A0h] [rbp-168h]
  void *v49; // [rsp+A8h] [rbp-160h]
  void *v50; // [rsp+B0h] [rbp-158h]
  __int64 v51; // [rsp+B8h] [rbp-150h]
  void *v52; // [rsp+C0h] [rbp-148h]
  __int64 v53; // [rsp+C8h] [rbp-140h]
  __int64 v54; // [rsp+D0h] [rbp-138h]
  void *v55; // [rsp+D8h] [rbp-130h]
  __int64 v56; // [rsp+E0h] [rbp-128h]
  __int64 v57; // [rsp+E8h] [rbp-120h]
  int v58; // [rsp+F0h] [rbp-118h]
  __int64 v59; // [rsp+F8h] [rbp-110h]
  char v60; // [rsp+100h] [rbp-108h]
  __m128i v61; // [rsp+108h] [rbp-100h] BYREF
  __m128i v62[7]; // [rsp+118h] [rbp-F0h] BYREF
  int v63; // [rsp+190h] [rbp-78h]
  __m128i v64; // [rsp+1A8h] [rbp-60h] BYREF
  __m128i v65[5]; // [rsp+1B8h] [rbp-50h] BYREF

  v2 = (char *)a1[34];
  v3 = a1[49];
  v4 = a1[48];
  LOBYTE(v3) = *(_BYTE *)(*(_QWORD *)(v3 + 48) + 2LL * (unsigned __int8)*v2 + 1);
  v46 = nullptr;
  LOWORD(v58) = 0;
  v5 = a1[35];
  v47 = 0;
  v48 = 0;
  v49 = nullptr;
  v50 = nullptr;
  v51 = 0;
  v52 = nullptr;
  v53 = 0;
  v54 = 0;
  v55 = nullptr;
  v56 = 0;
  v57 = 0;
  BYTE2(v58) = 0;
  v59 = v4;
  v60 = v3 & 1;
  v61 = 0;
  v62[0] = 0;
  v6 = sub_1252DD0(v4, v2, &v2[v5], 0);
  if ( !(_WORD)v6 && (v6 & 0x10000) == 0 )
    abort();
  LOWORD(v58) = v6 | v58;
  BYTE2(v58) |= BYTE2(v6);
  sub_1251BE0((__int64 *)&v46);
  v7 = v46;
  v8 = v47;
  v46 = nullptr;
  v47 = 0;
  v40 = v7;
  v9 = a1[32];
  v39 = v8;
  v38 = v48;
  v10 = v53;
  v37 = v49;
  v11 = v54;
  v34 = v52;
  v12 = v55;
  v13 = v56;
  v14 = v57;
  v32.m128i_i64[0] = v9;
  v36 = v50;
  v35 = v51;
  v48 = 0;
  v49 = nullptr;
  v50 = nullptr;
  v51 = 0;
  v52 = nullptr;
  v53 = 0;
  v54 = 0;
  v55 = nullptr;
  v56 = 0;
  v57 = 0;
  v15 = _mm_loadu_si128(v62);
  v44 = nullptr;
  v64 = _mm_loadu_si128(&v61);
  v65[0] = v15;
  v32.m128i_i64[1] = v59;
  v33 = v60;
  v63 = v58;
  v16 = operator new(0x98u);
  v17 = v36;
  v18 = v35;
  v19 = v34;
  v20 = v40;
  *(_QWORD *)(v16 + 88) = v14;
  v21 = v39;
  v22 = v38;
  *(_QWORD *)(v16 + 32) = v17;
  v23 = v37;
  LOBYTE(v17) = v33;
  *(_QWORD *)(v16 + 40) = v18;
  v24 = _mm_loadu_si128(&v64);
  v25 = v32.m128i_i64[1];
  *(_QWORD *)(v16 + 48) = v19;
  v26 = _mm_loadu_si128(v65);
  LODWORD(v19) = v63;
  *(_QWORD *)v16 = v20;
  *(_QWORD *)(v16 + 8) = v21;
  *(_QWORD *)(v16 + 16) = v22;
  *(_QWORD *)(v16 + 24) = v23;
  *(_DWORD *)(v16 + 96) = (_DWORD)v19;
  *(_QWORD *)(v16 + 104) = v25;
  *(__m128i *)(v16 + 120) = v24;
  *(__m128i *)(v16 + 136) = v26;
  *(_BYTE *)(v16 + 112) = (_BYTE)v17;
  *(_QWORD *)(v16 + 56) = v10;
  *(_QWORD *)(v16 + 64) = v11;
  *(_QWORD *)(v16 + 72) = v12;
  *(_QWORD *)(v16 + 80) = v13;
  v43.m128i_i64[0] = v16;
  v45 = sub_124D940;
  v44 = sub_12577B0;
  v27 = sub_1252B20(v32.m128i_i64[0], &v43);
  v28 = a1[32];
  v32.m128i_i64[0] = v27;
  v29 = _mm_loadl_epi64(&v32);
  v41 = v28;
  v42 = _mm_unpacklo_epi64(v29, v29);
  sub_1253440(a1 + 38, (const __m128i *)&v41);
  if ( v44 )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v44)(&v43, &v43, 3);
  if ( v55 )
    operator delete(v55);
  if ( v52 )
    operator delete(v52);
  v30 = (void **)v50;
  v31 = (void **)v49;
  if ( v50 != v49 )
  {
    do
    {
      while ( *v31 != v31 + 2 )
      {
        operator delete(*v31);
        v31 += 4;
        if ( v30 == v31 )
          goto LABEL_12;
      }
      v31 += 4;
    }
    while ( v30 != v31 );
LABEL_12:
    v31 = (void **)v49;
  }
  if ( v31 )
    operator delete(v31);
  if ( v46 )
    operator delete(v46);
}

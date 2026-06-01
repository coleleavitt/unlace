int __fastcall sub_5BF3C0(__int64 a1)
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __m128i v11; // xmm2
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 *v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  __m128i *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rbp
  char v22; // si
  __int64 v23; // r9
  __int32 v24; // r10d
  int v25; // edx
  __m128i *v26; // rax
  __int64 v27; // rdi
  __m128i v28; // xmm0
  __int64 v29; // r12
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v36; // rax
  __int64 *v37; // rdi
  char *v38; // r8
  const __m128i *v39; // rdx
  const __m128i *v40; // rcx
  __m128i v41; // xmm0
  __int32 v42; // r11d
  __m128i v43; // xmm0
  int v44; // eax
  __m128i v45; // [rsp+0h] [rbp-1B8h] BYREF
  char *v46; // [rsp+18h] [rbp-1A0h]
  char v47; // [rsp+27h] [rbp-191h]
  unsigned __int64 v48; // [rsp+28h] [rbp-190h]
  __int64 v49; // [rsp+30h] [rbp-188h]
  __int64 v50; // [rsp+38h] [rbp-180h]
  __int64 v51; // [rsp+48h] [rbp-170h] BYREF
  __m128i v52; // [rsp+50h] [rbp-168h] BYREF
  __m128i v53; // [rsp+60h] [rbp-158h] BYREF
  __m128i v54; // [rsp+70h] [rbp-148h] BYREF
  __m128i v55; // [rsp+80h] [rbp-138h] BYREF
  __m128i v56; // [rsp+90h] [rbp-128h] BYREF
  __m128i v57; // [rsp+A0h] [rbp-118h] BYREF
  __m128i v58; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v59; // [rsp+C0h] [rbp-F8h]
  _QWORD v60[2]; // [rsp+D0h] [rbp-E8h] BYREF
  _OWORD v61[6]; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i v62; // [rsp+140h] [rbp-78h] BYREF
  __int64 v63; // [rsp+150h] [rbp-68h]

  v52.m128i_i64[1] = 4;
  v53.m128i_i32[0] = 0;
  v54.m128i_i64[0] = 5;
  v52.m128i_i64[0] = (__int64)"none";
  v53.m128i_i64[1] = (__int64)"None.";
  v54.m128i_i64[1] = (__int64)"all-non-critical";
  v56.m128i_i64[0] = (__int64)"All non-critical edges.";
  v57.m128i_i64[0] = (__int64)"all";
  v58.m128i_i64[1] = (__int64)"All edges.";
  v45 = (__m128i)_mm_loadh_ps((const double *)&off_49EC358);
  v55.m128i_i64[0] = 16;
  v55.m128i_i32[2] = 1;
  v56.m128i_i64[1] = 23;
  v57.m128i_i64[1] = 3;
  v58.m128i_i32[0] = 2;
  v59 = 10;
  v60[0] = v61;
  v1 = _mm_load_si128(&v52);
  v60[1] = 0x400000003LL;
  v61[0] = v1;
  v2 = _mm_load_si128(&v53);
  qword_4B0DD40 = (__int64)&qword_4B0DD50;
  v61[1] = v2;
  v3 = _mm_load_si128(&v54);
  qword_4B0DD00 = (__int64)&off_4A6E058;
  v61[2] = v3;
  v4 = _mm_load_si128(&v55);
  qword_4B0DD08 = (unsigned int)qword_4B0DD08 & 0x80000000;
  v61[3] = v4;
  v5 = _mm_load_si128(&v56);
  qword_4B0DD48 = 0x100000000LL;
  v61[4] = v5;
  v6 = _mm_load_si128(&v57);
  qword_4B0DD58 = (__int64)&qword_4B0DD70;
  v61[5] = v6;
  v7 = _mm_load_si128(&v58);
  v63 = 10;
  v62 = v7;
  qword_4B0DD10 = 0;
  qword_4B0DD18 = 0;
  qword_4B0DD20 = 0;
  qword_4B0DD28 = 0;
  qword_4B0DD30 = 0;
  qword_4B0DD38 = 0;
  qword_4B0DD60 = 1;
  dword_4B0DD68 = 0;
  byte_4B0DD6C = 1;
  v8 = sub_259AC30(a1, &qword_4B0DD50);
  v9 = (unsigned int)qword_4B0DD48;
  v10 = (unsigned int)qword_4B0DD48 + 1LL;
  if ( HIDWORD(qword_4B0DD48) < v10 )
  {
    sub_25D6060(&qword_4B0DD50 - 2, &qword_4B0DD50, v10, 8);
    v9 = (unsigned int)qword_4B0DD48;
  }
  v11 = _mm_load_si128(&v45);
  *(_QWORD *)(qword_4B0DD40 + 8 * v9) = v8;
  xmmword_4B0DF30 = 0;
  LODWORD(qword_4B0DD48) = qword_4B0DD48 + 1;
  qword_4B0DD80 = (__int64)off_4A84DD8;
  qword_4B0DD78 = 0;
  byte_4B0DD8C = 0;
  qword_4B0DD00 = (__int64)&off_4A84E48;
  qword_4B0DDA0 = qword_4B0DDB0;
  xmmword_4B0DD90 = (__int128)v11;
  qword_4B0DDA8 = 0x800000000LL;
  xmmword_4B0DF40 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC360),
                                (__m128i)(unsigned __int64)nullsub_622);
  sub_259F400(&qword_4B0DD00, "force-summary-edges-cold", 24);
  BYTE2(qword_4B0DD08) = BYTE2(qword_4B0DD08) & 0x9F | 0x20;
  if ( qword_4B0DD78 )
  {
    v14 = sub_26260E0(&qword_4B0DD00, "force-summary-edges-cold", v12, v13);
    v54.m128i_i16[0] = 259;
    v52.m128i_i64[0] = (__int64)"cl::location(x) specified more than once!";
    sub_2598800(&qword_4B0DD00, &v52, 0, 0, v14, v15);
  }
  else
  {
    byte_4B0DD8C = 1;
    qword_4B0DD78 = (__int64)qword_4B0DF50;
    dword_4B0DD88 = qword_4B0DF50[0];
  }
  v16 = v60;
  qword_4B0DD28 = 47;
  qword_4B0DD20 = (__int64)"Force all edges in the function summary to cold";
  do
  {
    v17 = v16[6];
    v18 = v16[5];
    v54.m128i_i64[0] = (__int64)off_4A84DD8;
    v19 = &v52;
    v20 = (unsigned int)qword_4B0DDA8;
    v21 = v16[2];
    v54.m128i_i8[12] = 1;
    v22 = 1;
    v23 = v16[3];
    v24 = *((_DWORD *)v16 + 8);
    v53.m128i_i64[1] = v17;
    v53.m128i_i64[0] = v18;
    v25 = qword_4B0DDA8;
    v52.m128i_i64[0] = v21;
    v52.m128i_i64[1] = v23;
    v54.m128i_i32[2] = v24;
    if ( HIDWORD(qword_4B0DDA8) < (unsigned __int64)(unsigned int)qword_4B0DDA8 + 1 )
    {
      if ( &v52 < qword_4B0DDA0 || &v52 >= (__m128i *)((char *)qword_4B0DDA0 + 48 * (unsigned int)qword_4B0DDA8) )
      {
        v48 = -1;
        v47 = 0;
      }
      else
      {
        v47 = 1;
        v48 = 0xAAAAAAAAAAAAAAABLL * (((char *)&v52 - (_BYTE *)qword_4B0DDA0) >> 4);
      }
      v46 = (char *)v23;
      v45.m128i_i32[0] = v24;
      v36 = sub_25D5F70(&qword_4B0DDB0[-2], qword_4B0DDB0, (unsigned int)qword_4B0DDA8 + 1LL, 48, &v51);
      v37 = (__int64 *)qword_4B0DDA0;
      v24 = v45.m128i_i32[0];
      v38 = (char *)v36;
      v23 = (__int64)v46;
      v39 = (const __m128i *)qword_4B0DDA0;
      v40 = (const __m128i *)((char *)qword_4B0DDA0 + 48 * (unsigned int)qword_4B0DDA8);
      if ( qword_4B0DDA0 != v40 )
      {
        do
        {
          v41 = _mm_loadu_si128(v39);
          v42 = v39[2].m128i_i32[2];
          v39 += 3;
          v36 += 48;
          *(__m128i *)(v36 - 48) = v41;
          v43 = _mm_loadu_si128(v39 - 2);
          *(_DWORD *)(v36 - 8) = v42;
          LOBYTE(v42) = v39[-1].m128i_i8[12];
          *(__m128i *)(v36 - 32) = v43;
          *(_BYTE *)(v36 - 4) = v42;
          *(_QWORD *)(v36 - 16) = off_4A84DD8;
        }
        while ( v40 != v39 );
      }
      v44 = v51;
      if ( v37 != qword_4B0DDB0 )
      {
        v50 = v23;
        v49 = v51;
        v46 = v38;
        v45.m128i_i32[0] = v24;
        free(v37);
        v23 = v50;
        v44 = v49;
        v38 = v46;
        v24 = v45.m128i_i32[0];
      }
      v20 = (unsigned int)qword_4B0DDA8;
      qword_4B0DDA0 = v38;
      HIDWORD(qword_4B0DDA8) = v44;
      v25 = qword_4B0DDA8;
      if ( v47 )
      {
        v19 = (__m128i *)&v38[48 * v48];
        v24 = v19[2].m128i_i32[2];
        v22 = v19[2].m128i_i8[12];
      }
      else
      {
        v22 = 1;
        v19 = &v52;
      }
    }
    v16 += 5;
    v26 = (__m128i *)((char *)qword_4B0DDA0 + 48 * v20);
    v27 = *((_QWORD *)&xmmword_4B0DD90 + 1);
    *v26 = _mm_loadu_si128(v19);
    v28 = _mm_loadu_si128(v19 + 1);
    v26[2].m128i_i8[12] = v22;
    v26[2].m128i_i32[2] = v24;
    v26[2].m128i_i64[0] = (__int64)off_4A84DD8;
    v26[1] = v28;
    LODWORD(qword_4B0DDA8) = v25 + 1;
    sub_259ED10(v27, v21, v23);
  }
  while ( &v62.m128i_u64[1] != v16 );
  sub_259EC40(&qword_4B0DD00);
  __cxa_atexit(sub_37D2340, &qword_4B0DD00, &off_47CFE00);
  qword_4B0DC10 = 0;
  qword_4B0DC40 = (__int64)&qword_4B0DC50;
  qword_4B0DC18 = 0;
  qword_4B0DC00 = (__int64)&off_4A6E058;
  qword_4B0DC08 = (unsigned int)qword_4B0DC08 & 0x80000000;
  qword_4B0DC20 = 0;
  qword_4B0DC48 = 0x100000000LL;
  qword_4B0DC28 = 0;
  qword_4B0DC30 = 0;
  qword_4B0DC38 = 0;
  qword_4B0DC58 = (__int64)&qword_4B0DC70;
  qword_4B0DC60 = 1;
  dword_4B0DC68 = 0;
  byte_4B0DC6C = 1;
  v29 = sub_259AC30(sub_37D2340, &qword_4B0DC50);
  v30 = (unsigned int)qword_4B0DC48;
  v31 = (unsigned int)qword_4B0DC48 + 1LL;
  if ( HIDWORD(qword_4B0DC48) < v31 )
  {
    sub_25D6060(&qword_4B0DC50 - 2, &qword_4B0DC50, v31, 8);
    v30 = (unsigned int)qword_4B0DC48;
  }
  *(_QWORD *)(qword_4B0DC40 + 8 * v30) = v29;
  qword_4B0DC78 = (__int64)&byte_4B0DC88;
  LODWORD(qword_4B0DC48) = qword_4B0DC48 + 1;
  qword_4B0DC80 = 0;
  qword_4B0DC00 = (__int64)&off_4A6DF88;
  xmmword_4B0DC98 = (__int128)_mm_unpacklo_epi64(
                                (__m128i)(unsigned __int64)&off_49D9118,
                                (__m128i)(unsigned __int64)&byte_4B0DCB0);
  xmmword_4B0DCD0 = 0;
  qword_4B0DCC8 = (__int64)off_49D92E8;
  byte_4B0DC88 = 0;
  byte_4B0DCB0 = 0;
  xmmword_4B0DCE0 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC368),
                                (__m128i)(unsigned __int64)nullsub_294);
  qword_4B0DCA8 = 0;
  byte_4B0DCC0 = 0;
  sub_259F400(&qword_4B0DC00, "module-summary-dot-file", 23);
  qword_4B0DC38 = 8;
  qword_4B0DC28 = 42;
  BYTE2(qword_4B0DC08) = BYTE2(qword_4B0DC08) & 0x9F | 0x20;
  qword_4B0DC30 = (__int64)"filename";
  qword_4B0DC20 = (__int64)"File to emit dot graph of new summary into";
  sub_259EC40(&qword_4B0DC00);
  __cxa_atexit(sub_2283FB0, &qword_4B0DC00, &off_47CFE00);
  qword_4B0DB50 = 0;
  qword_4B0DB80 = (__int64)&qword_4B0DB90;
  qword_4B0DB58 = 0;
  qword_4B0DB40 = (__int64)&off_4A6E058;
  qword_4B0DB48 = (unsigned int)qword_4B0DB48 & 0x80000000;
  qword_4B0DB60 = 0;
  qword_4B0DB88 = 0x100000000LL;
  qword_4B0DB68 = 0;
  qword_4B0DB70 = 0;
  qword_4B0DB78 = 0;
  qword_4B0DB98 = (__int64)&qword_4B0DBB0;
  qword_4B0DBA0 = 1;
  dword_4B0DBA8 = 0;
  byte_4B0DBAC = 1;
  v32 = sub_259AC30(sub_2283FB0, &qword_4B0DB90);
  v33 = (unsigned int)qword_4B0DB88;
  v34 = (unsigned int)qword_4B0DB88 + 1LL;
  if ( HIDWORD(qword_4B0DB88) < v34 )
  {
    sub_25D6060(&qword_4B0DB90 - 2, &qword_4B0DB90, v34, 8);
    v33 = (unsigned int)qword_4B0DB88;
  }
  *(_QWORD *)(qword_4B0DB80 + 8 * v33) = v32;
  word_4B0DBC8 = 0;
  xmmword_4B0DBD8 = 0;
  LODWORD(qword_4B0DB88) = qword_4B0DB88 + 1;
  qword_4B0DBC0 = (__int64)&off_4A64730;
  byte_4B0DBB8 = 0;
  qword_4B0DB40 = (__int64)off_4A6DFF0;
  qword_4B0DBD0 = (__int64)off_49D9168;
  xmmword_4B0DBE8 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49EC370),
                                (__m128i)(unsigned __int64)nullsub_266);
  sub_259F400(&qword_4B0DB40, "enable-memprof-indirect-call-support", 36);
  word_4B0DBC8 = 256;
  byte_4B0DBB8 = 0;
  qword_4B0DB68 = 65;
  BYTE2(qword_4B0DB48) = BYTE2(qword_4B0DB48) & 0x9F | 0x20;
  qword_4B0DB60 = (__int64)"Enable MemProf support for summarizing and cloning indirect calls";
  sub_259EC40(&qword_4B0DB40);
  return __cxa_atexit(sub_1F6C9D0, &qword_4B0DB40, &off_47CFE00);
}


int __fastcall sub_5F5580(__int64 a1)
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
  unsigned __int64 *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __m128i *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rbp
  char v18; // si
  __int64 v19; // r9
  __int32 v20; // r10d
  int v21; // edx
  __m128i *v22; // rax
  __int64 v23; // rdi
  __m128i v24; // xmm0
  __int64 v25; // r12
  __int64 v26; // rax
  __m128i v27; // xmm0
  char v28; // al
  __int64 v30; // rax
  __int64 *v31; // r8
  char *v32; // rcx
  const __m128i *v33; // rdx
  const __m128i *v34; // rdi
  __m128i v35; // xmm0
  __int32 v36; // esi
  __m128i v37; // xmm0
  int v38; // eax
  __m128i v39; // [rsp+0h] [rbp-1B8h] BYREF
  char *v40; // [rsp+18h] [rbp-1A0h]
  char v41; // [rsp+27h] [rbp-191h]
  unsigned __int64 v42; // [rsp+28h] [rbp-190h]
  __int64 v43; // [rsp+30h] [rbp-188h]
  __int64 v44; // [rsp+38h] [rbp-180h]
  __int64 v45; // [rsp+48h] [rbp-170h] BYREF
  __m128i v46; // [rsp+50h] [rbp-168h] BYREF
  __m128i v47; // [rsp+60h] [rbp-158h] BYREF
  __m128i v48; // [rsp+70h] [rbp-148h] BYREF
  __m128i v49; // [rsp+80h] [rbp-138h] BYREF
  __m128i v50; // [rsp+90h] [rbp-128h] BYREF
  __m128i v51; // [rsp+A0h] [rbp-118h] BYREF
  __m128i v52; // [rsp+B0h] [rbp-108h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-F8h]
  _QWORD v54[2]; // [rsp+D0h] [rbp-E8h] BYREF
  _OWORD v55[6]; // [rsp+E0h] [rbp-D8h] BYREF
  __m128i v56; // [rsp+140h] [rbp-78h] BYREF
  __int64 v57; // [rsp+150h] [rbp-68h]

  v46.m128i_i64[0] = (__int64)"Default";
  v47.m128i_i64[1] = (__int64)"Default for platform";
  v48.m128i_i64[1] = (__int64)"Enable";
  v50.m128i_i64[0] = (__int64)"Enabled";
  v51.m128i_i64[0] = (__int64)"Disable";
  v52.m128i_i64[1] = (__int64)"Disabled";
  v39 = (__m128i)_mm_loadh_ps((const double *)&off_49F2CC8);
  v46.m128i_i64[1] = 7;
  v47.m128i_i32[0] = 0;
  v48.m128i_i64[0] = 20;
  v49.m128i_i64[0] = 6;
  v49.m128i_i32[2] = 1;
  v50.m128i_i64[1] = 7;
  v51.m128i_i64[1] = 7;
  v52.m128i_i32[0] = 2;
  v53 = 8;
  v54[0] = v55;
  v1 = _mm_load_si128(&v46);
  v54[1] = 0x400000003LL;
  v55[0] = v1;
  v2 = _mm_load_si128(&v47);
  qword_4B33660 = (__int64)&qword_4B33670;
  v55[1] = v2;
  v3 = _mm_load_si128(&v48);
  qword_4B33620 = (__int64)&off_4A6E058;
  v55[2] = v3;
  v4 = _mm_load_si128(&v49);
  qword_4B33628 = (unsigned int)qword_4B33628 & 0x80000000;
  v55[3] = v4;
  v5 = _mm_load_si128(&v50);
  qword_4B33668 = 0x100000000LL;
  v55[4] = v5;
  v6 = _mm_load_si128(&v51);
  qword_4B33678 = (__int64)&qword_4B33690;
  v55[5] = v6;
  v7 = _mm_load_si128(&v52);
  qword_4B33680 = 1;
  v56 = v7;
  v57 = 8;
  qword_4B33630 = 0;
  qword_4B33638 = 0;
  qword_4B33640 = 0;
  qword_4B33648 = 0;
  qword_4B33650 = 0;
  qword_4B33658 = 0;
  dword_4B33688 = 0;
  byte_4B3368C = 1;
  v8 = sub_259AC30(a1, &qword_4B33670);
  v9 = (unsigned int)qword_4B33668;
  v10 = (unsigned int)qword_4B33668 + 1LL;
  if ( HIDWORD(qword_4B33668) < v10 )
  {
    sub_25D6060(&qword_4B33670 - 2, &qword_4B33670, v10, 8);
    v9 = (unsigned int)qword_4B33668;
  }
  v11 = _mm_load_si128(&v39);
  *(_QWORD *)(qword_4B33660 + 8 * v9) = v8;
  qword_4B33620 = (__int64)&off_4A87DB0;
  v12 = v54;
  xmmword_4B33850 = 0;
  qword_4B336C8 = 0x800000000LL;
  LODWORD(qword_4B33668) = qword_4B33668 + 1;
  byte_4B336AC = 0;
  dword_4B33698 = 0;
  dword_4B336A8 = 0;
  qword_4B336A0 = (__int64)&off_4A87D40;
  qword_4B336C0 = qword_4B336D0;
  xmmword_4B336B0 = (__int128)v11;
  xmmword_4B33860 = (__int128)_mm_unpacklo_epi64(
                                _mm_loadl_epi64((const __m128i *)&off_49F2CD0),
                                (__m128i)(unsigned __int64)nullsub_640);
  sub_259F400(&qword_4B336D0[-22], "dwarf-extended-loc", 18);
  qword_4B33648 = 58;
  BYTE2(qword_4B33628) = BYTE2(qword_4B33628) & 0x9F | 0x20;
  qword_4B33640 = (__int64)"Disable emission of the extended flags in .loc directives.";
  do
  {
    v13 = v12[6];
    v14 = v12[5];
    v48.m128i_i64[0] = (__int64)&off_4A87D40;
    v15 = &v46;
    v16 = (unsigned int)qword_4B336C8;
    v17 = v12[2];
    v48.m128i_i8[12] = 1;
    v18 = 1;
    v19 = v12[3];
    v20 = *((_DWORD *)v12 + 8);
    v47.m128i_i64[1] = v13;
    v47.m128i_i64[0] = v14;
    v21 = qword_4B336C8;
    v46.m128i_i64[0] = v17;
    v46.m128i_i64[1] = v19;
    v48.m128i_i32[2] = v20;
    if ( HIDWORD(qword_4B336C8) < (unsigned __int64)(unsigned int)qword_4B336C8 + 1 )
    {
      if ( &v46 < qword_4B336C0 || &v46 >= (__m128i *)((char *)qword_4B336C0 + 48 * (unsigned int)qword_4B336C8) )
      {
        v42 = -1;
        v41 = 0;
      }
      else
      {
        v41 = 1;
        v42 = 0xAAAAAAAAAAAAAAABLL * (((char *)&v46 - (_BYTE *)qword_4B336C0) >> 4);
      }
      v40 = (char *)v19;
      v39.m128i_i32[0] = v20;
      v30 = sub_25D5F70(&qword_4B336D0[-2], qword_4B336D0, (unsigned int)qword_4B336C8 + 1LL, 48, &v45);
      v31 = (__int64 *)qword_4B336C0;
      v20 = v39.m128i_i32[0];
      v32 = (char *)v30;
      v19 = (__int64)v40;
      v33 = (const __m128i *)qword_4B336C0;
      v34 = (const __m128i *)((char *)qword_4B336C0 + 48 * (unsigned int)qword_4B336C8);
      if ( qword_4B336C0 != v34 )
      {
        do
        {
          v35 = _mm_loadu_si128(v33);
          v36 = v33[2].m128i_i32[2];
          v33 += 3;
          v30 += 48;
          *(__m128i *)(v30 - 48) = v35;
          v37 = _mm_loadu_si128(v33 - 2);
          *(_DWORD *)(v30 - 8) = v36;
          LOBYTE(v36) = v33[-1].m128i_i8[12];
          *(__m128i *)(v30 - 32) = v37;
          *(_BYTE *)(v30 - 4) = v36;
          *(_QWORD *)(v30 - 16) = &off_4A87D40;
        }
        while ( v34 != v33 );
      }
      v38 = v45;
      if ( v31 != qword_4B336D0 )
      {
        v44 = v19;
        v43 = v45;
        v40 = v32;
        v39.m128i_i32[0] = v20;
        free(v31);
        v19 = v44;
        v38 = v43;
        v32 = v40;
        v20 = v39.m128i_i32[0];
      }
      v16 = (unsigned int)qword_4B336C8;
      qword_4B336C0 = v32;
      HIDWORD(qword_4B336C8) = v38;
      v21 = qword_4B336C8;
      if ( v41 )
      {
        v15 = (__m128i *)&v32[48 * v42];
        v20 = v15[2].m128i_i32[2];
        v18 = v15[2].m128i_i8[12];
      }
      else
      {
        v18 = 1;
        v15 = &v46;
      }
    }
    v12 += 5;
    v22 = (__m128i *)((char *)qword_4B336C0 + 48 * v16);
    v23 = *((_QWORD *)&xmmword_4B336B0 + 1);
    *v22 = _mm_loadu_si128(v15);
    v24 = _mm_loadu_si128(v15 + 1);
    v22[2].m128i_i8[12] = v18;
    v22[2].m128i_i32[2] = v20;
    v22[2].m128i_i64[0] = (__int64)&off_4A87D40;
    v22[1] = v24;
    LODWORD(qword_4B336C8) = v21 + 1;
    sub_259ED10(v23, v17, v19);
  }
  while ( &v56.m128i_u64[1] != v12 );
  dword_4B33698 = 0;
  byte_4B336AC = 1;
  dword_4B336A8 = 0;
  sub_259EC40(&qword_4B33620);
  __cxa_atexit(sub_39C4660, &qword_4B33620, &off_47CFE00);
  qword_4B33560[2] = 0;
  qword_4B33560[0] = (__int64)&off_4A6E058;
  qword_4B33560[1] &= 0x80000000uLL;
  qword_4B33560[3] = 0;
  qword_4B33560[9] = 0x100000000LL;
  qword_4B33560[11] = (__int64)&qword_4B33560[14];
  qword_4B33560[4] = 0;
  qword_4B33560[5] = 0;
  qword_4B33560[6] = 0;
  qword_4B33560[7] = 0;
  qword_4B33560[8] = (__int64)&qword_4B33560[10];
  qword_4B33560[12] = 1;
  LODWORD(qword_4B33560[13]) = 0;
  BYTE4(qword_4B33560[13]) = 1;
  v25 = sub_259AC30(sub_39C4660, &qword_4B33620);
  v26 = LODWORD(qword_4B33560[9]);
  if ( HIDWORD(qword_4B33560[9]) < (unsigned __int64)(v26 + 1) )
  {
    sub_25D6060(&qword_4B33560[8], &qword_4B33560[10], v26 + 1, 8);
    v26 = LODWORD(qword_4B33560[9]);
  }
  *(_QWORD *)(qword_4B33560[8] + 8 * v26) = v25;
  *(_OWORD *)&qword_4B33560[19] = 0;
  v27 = _mm_loadl_epi64((const __m128i *)&off_49F2CD8);
  ++LODWORD(qword_4B33560[9]);
  qword_4B33560[16] = (__int64)off_49D90F8;
  LODWORD(qword_4B33560[15]) = 0;
  BYTE4(qword_4B33560[17]) = 0;
  qword_4B33560[0] = (__int64)off_4A6D1F8;
  LODWORD(qword_4B33560[17]) = 0;
  qword_4B33560[18] = (__int64)off_49D9198;
  *(__m128i *)&qword_4B33560[21] = _mm_unpacklo_epi64(v27, (__m128i)(unsigned __int64)nullsub_328);
  sub_259F400(qword_4B33560, "use-leb128-directives", 21);
  v28 = BYTE2(qword_4B33560[1]);
  qword_4B33560[5] = 67;
  LODWORD(qword_4B33560[15]) = 0;
  BYTE4(qword_4B33560[17]) = 1;
  LODWORD(qword_4B33560[17]) = 0;
  BYTE2(qword_4B33560[1]) = v28 & 0x9F | 0x20;
  qword_4B33560[4] = (__int64)"Disable the usage of LEB128 directives, and generate .byte instead.";
  sub_259EC40(qword_4B33560);
  return __cxa_atexit(sub_23D2630, qword_4B33560, &off_47CFE00);
}


void __fastcall sub_22512F0(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  double v6; // xmm0_8
  __int64 v7; // rcx
  double v8; // xmm2_8
  __int64 v9; // rdx
  double v10; // xmm1_8
  __int64 v11; // rdx
  __int64 v12; // r14
  __m128i *v13; // rax
  __m128i si128; // xmm0
  __int64 v15; // rax
  _DWORD *v16; // rcx
  unsigned __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE *v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r14
  __m128i *v23; // rax
  __m128i v24; // xmm0
  __int64 v25; // rax
  _DWORD *v26; // rcx
  _BYTE *v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  double v30; // xmm0_8
  char *v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // r14
  unsigned __int64 *v35; // r13
  unsigned __int64 *v36; // rax
  __int64 v37; // rax
  _BYTE *v38; // rdx
  __m128i *v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rax
  _QWORD *v45; // r13
  _QWORD *v46; // rbp
  _QWORD *v47; // rbx
  _QWORD *v48; // rdi
  _QWORD *v49; // rdi
  __m128i *v50; // rcx
  const __m128i *v51; // r14
  __m128i *v52; // r15
  __int64 v53; // rbp
  unsigned __int64 v54; // rax
  _BYTE *v55; // rsi
  __int64 v56; // r14
  __m128i v57; // xmm0
  __m128i v58; // xmm0
  __m128i v59; // xmm0
  __m128i v60; // xmm0
  _BYTE *v61; // rax
  _BYTE *v62; // r13
  __int64 v63; // r14
  _QWORD *v64; // rax
  const __m128i *v65; // rdi
  __int8 *v66; // r13
  __m128i v67; // xmm4
  char *v68; // r14
  __int64 v69; // rax
  char *v70; // r15
  __int64 v71; // rdi
  __m128i *src; // [rsp+0h] [rbp-F8h]
  __m128i *v73; // [rsp+18h] [rbp-E0h] BYREF
  _QWORD *v74; // [rsp+20h] [rbp-D8h]
  const __m128i *v75; // [rsp+28h] [rbp-D0h]
  void *v76[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD v77[2]; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v78; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v79; // [rsp+60h] [rbp-98h] BYREF
  __int64 v80; // [rsp+70h] [rbp-88h]
  void *v81[2]; // [rsp+78h] [rbp-80h] BYREF
  _QWORD v82[2]; // [rsp+88h] [rbp-70h] BYREF
  void *v83[2]; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v84[10]; // [rsp+A8h] [rbp-50h] BYREF

  if ( qword_2D0ABB0 )
  {
    if ( !*(_BYTE *)(qword_2D0ABB0 + 552) )
    {
LABEL_3:
      v4 = a1[9];
      v5 = a1[10];
      goto LABEL_4;
    }
  }
  else
  {
    sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
    if ( !*(_BYTE *)(qword_2D0ABB0 + 552) )
      goto LABEL_3;
  }
  v50 = (__m128i *)a1[10];
  v51 = (const __m128i *)a1[9];
  v75 = v50;
  if ( v51 == v50 )
  {
    v79 = 0u;
    v78 = 0;
    v80 = 0;
    goto LABEL_7;
  }
  v52 = v50;
  v53 = (char *)v50 - (char *)v51;
  _BitScanReverse64(&v54, 0x4EC4EC4EC4EC4EC5LL * (((char *)v50 - (char *)v51) >> 3));
  sub_22506E0((__int64)v51, v50, 2LL * (int)(63 - (v54 ^ 0x3F)));
  if ( v53 <= 1664 )
  {
    sub_224FE20((__int64)v51, v75);
  }
  else
  {
    v73 = (__m128i *)&v51[104];
    sub_224FE20((__int64)v51, v51 + 104);
    if ( v52 != &v51[104] )
    {
      v78 = _mm_loadu_si128(v51 + 104);
      v79 = _mm_loadu_si128(v51 + 105);
      v80 = v51[106].m128i_i64[0];
      v81[0] = v82;
      v55 = (_BYTE *)v51[106].m128i_i64[1];
      v56 = v51[107].m128i_i64[0];
      if ( &v55[v56] && !v55 )
LABEL_64:
        std::__throw_logic_error("basic_string::_M_construct null not valid");
      v74 = v82;
LABEL_96:
      if ( (unsigned __int64)v56 > 0xF )
        goto LABEL_114;
      do
      {
        if ( v56 == 1 )
        {
          LOBYTE(v82[0]) = *v55;
          v61 = v81[0];
          goto LABEL_99;
        }
        v61 = v74;
        if ( v56 )
          goto LABEL_116;
LABEL_99:
        v81[1] = (void *)v56;
        v61[v56] = 0;
        v83[0] = v84;
        v62 = (_BYTE *)v73[4].m128i_i64[1];
        v63 = v73[5].m128i_i64[0];
        if ( &v62[v63] && !v62 )
          goto LABEL_64;
        if ( (unsigned __int64)v63 > 0xF )
        {
          if ( v63 < 0 )
LABEL_127:
            std::__throw_length_error("basic_string::_M_create");
          v64 = (_QWORD *)operator new(v63 + 1);
          v84[0] = v63;
          v83[0] = v64;
LABEL_123:
          memcpy(v64, v62, v63);
          v64 = v83[0];
          goto LABEL_104;
        }
        if ( v63 == 1 )
        {
          LOBYTE(v84[0]) = *v62;
          v64 = v84;
          goto LABEL_104;
        }
        v64 = v84;
        if ( v63 )
          goto LABEL_123;
LABEL_104:
        v83[1] = (void *)v63;
        *((_BYTE *)v64 + v63) = 0;
        v65 = (__m128i *)((char *)v73 + 40);
        v66 = &v73[4].m128i_i8[8];
        if ( *(double *)&v73[-7].m128i_i64[1] <= *(double *)v78.m128i_i64 )
        {
          v70 = &v73[4].m128i_i8[8];
          v68 = &v73[2].m128i_i8[8];
          src = v73;
        }
        else
        {
          do
          {
            v67 = _mm_loadu_si128(v65 - 8);
            v68 = &v65[-7].m128i_i8[8];
            src = (__m128i *)&v65[-9];
            v69 = v65[-7].m128i_i64[0];
            v70 = v66 - 104;
            *(const __m128i *)((char *)&v65[-3] + 8) = _mm_loadu_si128(v65 - 9);
            v65[-1].m128i_i64[1] = v69;
            *(__m128i *)((char *)v65 - 24) = v67;
            sub_9EE8A0((__int64)v65, (__int64)&v65[-7].m128i_i64[1]);
            v71 = (__int64)v66;
            v66 -= 104;
            sub_9EE8A0(v71, (__int64)v66);
            v65 = (const __m128i *)v68;
          }
          while ( *((double *)v68 - 18) > *(double *)v78.m128i_i64 );
        }
        *src = _mm_load_si128(&v78);
        src[1] = _mm_load_si128(&v79);
        src[2].m128i_i64[0] = v80;
        sub_9EE8A0((__int64)v68, (__int64)v81);
        sub_9EE8A0((__int64)v70, (__int64)v83);
        if ( v83[0] != v84 )
          operator delete(v83[0]);
        if ( v81[0] != v74 )
          operator delete(v81[0]);
        v73 = (__m128i *)((char *)v73 + 104);
        if ( v75 == v73 )
          goto LABEL_125;
        v78 = _mm_loadu_si128(v73);
        v79 = _mm_loadu_si128(v73 + 1);
        v80 = v73[2].m128i_i64[0];
        v81[0] = v74;
        v55 = (_BYTE *)v73[2].m128i_i64[1];
        v56 = v73[3].m128i_i64[0];
        if ( !&v55[v56] )
          goto LABEL_96;
        if ( !v55 )
          goto LABEL_64;
      }
      while ( (unsigned __int64)v56 <= 0xF );
LABEL_114:
      if ( v56 < 0 )
        goto LABEL_127;
      v61 = (_BYTE *)operator new(v56 + 1);
      v82[0] = v56;
      v81[0] = v61;
LABEL_116:
      memcpy(v61, v55, v56);
      v61 = v81[0];
      goto LABEL_99;
    }
  }
LABEL_125:
  v4 = a1[9];
  v5 = a1[10];
LABEL_4:
  v79 = 0u;
  v78 = 0;
  v80 = 0;
  if ( v4 != v5 )
  {
    v6 = 0.0;
    v7 = 0;
    v8 = 0.0;
    v9 = 0;
    v10 = 0.0;
    do
    {
      v10 = v10 + *(double *)v4;
      v9 += *(_QWORD *)(v4 + 24);
      v4 += 104;
      *(double *)v78.m128i_i64 = v10;
      v6 = v6 + *(double *)(v4 - 96);
      *(double *)&v78.m128i_i64[1] = v6;
      v8 = v8 + *(double *)(v4 - 88);
      v79.m128i_i64[1] = v9;
      v7 += *(_QWORD *)(v4 - 72);
      v80 = v7;
      *(double *)v79.m128i_i64 = v8;
    }
    while ( v5 != v4 );
  }
LABEL_7:
  v11 = a2[4];
  if ( (unsigned __int64)(a2[3] - v11) > 2 )
  {
    *(_BYTE *)(v11 + 2) = 61;
    v12 = (__int64)a2;
    *(_WORD *)v11 = 15677;
    a2[4] += 3LL;
  }
  else
  {
    v12 = sub_227BF10(a2, "===", 3);
  }
  v13 = (__m128i *)operator new(0x4Au);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23ABB80);
  strcpy(v13[4].m128i_i8, "---------");
  *v13 = si128;
  v13[1] = si128;
  v13[2] = si128;
  v13[3] = si128;
  v76[0] = v13;
  v77[0] = 73;
  v76[1] = &qword_48 + 1;
  v15 = sub_227BF10(v12, v13, 73);
  v16 = *(_DWORD **)(v15 + 32);
  if ( *(_QWORD *)(v15 + 24) - (_QWORD)v16 > 3u )
  {
    *v16 = 171785533;
    *(_QWORD *)(v15 + 32) += 4LL;
  }
  else
  {
    sub_227BF10(v15, "===\n", 4);
  }
  if ( v76[0] != v77 )
    operator delete(v76[0]);
  v17 = (unsigned __int64)(80LL - a1[5]) >> 1;
  if ( (unsigned int)v17 >= 0x51 )
    v17 = 0;
  v18 = sub_227D090(a2, v17);
  v19 = sub_227BF10(v18, a1[4], a1[5]);
  v20 = *(_BYTE **)(v19 + 32);
  if ( (unsigned __int64)v20 >= *(_QWORD *)(v19 + 24) )
  {
    sub_227BA10(v19, 10);
  }
  else
  {
    *(_QWORD *)(v19 + 32) = v20 + 1;
    *v20 = 10;
  }
  v21 = a2[4];
  if ( (unsigned __int64)(a2[3] - v21) > 2 )
  {
    *(_BYTE *)(v21 + 2) = 61;
    v22 = (__int64)a2;
    *(_WORD *)v21 = 15677;
    a2[4] += 3LL;
  }
  else
  {
    v22 = sub_227BF10(a2, "===", 3);
  }
  v23 = (__m128i *)operator new(0x4Au);
  v24 = _mm_load_si128((const __m128i *)&xmmword_23ABB80);
  strcpy(v23[4].m128i_i8, "---------");
  *v23 = v24;
  v23[1] = v24;
  v23[2] = v24;
  v23[3] = v24;
  v76[0] = v23;
  v77[0] = 73;
  v76[1] = &qword_48 + 1;
  v25 = sub_227BF10(v22, v23, 73);
  v26 = *(_DWORD **)(v25 + 32);
  if ( *(_QWORD *)(v25 + 24) - (_QWORD)v26 > 3u )
  {
    *v26 = 171785533;
    *(_QWORD *)(v25 + 32) += 4LL;
  }
  else
  {
    sub_227BF10(v25, "===\n", 4);
  }
  if ( v76[0] != v77 )
    operator delete(v76[0]);
  if ( !qword_2D0ABB0 )
    sub_2230020(&qword_2D0ABB0, (__int64 (*)(void))sub_224F5D0, (__int64)sub_22522C0);
  if ( a1 != (_QWORD *)(qword_2D0ABB0 + 664) )
  {
    v73 = (__m128i *)"  Total Execution Time: %5.4f seconds (%5.4f wall clock)\n";
    *(double *)&v77[1] = *(double *)&v78.m128i_i64[1] + *(double *)v79.m128i_i64;
    *(__m128 *)v76 = _mm_loadh_ps((const double *)&v73);
    v77[0] = v78.m128i_i64[0];
    sub_227C560(a2, v76);
  }
  v27 = (_BYTE *)a2[4];
  if ( (unsigned __int64)v27 >= a2[3] )
  {
    sub_227BA10(a2, 10);
  }
  else
  {
    a2[4] = v27 + 1;
    *v27 = 10;
  }
  v28 = a2[4];
  v29 = a2[3] - v28;
  if ( *(double *)&v78.m128i_i64[1] != 0.0 )
  {
    if ( v29 > 0x11 )
    {
      v58 = _mm_load_si128((const __m128i *)&xmmword_23ABC40);
      *(_WORD *)(v28 + 16) = 11565;
      *(__m128i *)v28 = v58;
      v28 = a2[4] + 18LL;
      a2[4] = v28;
    }
    else
    {
      sub_227BF10(a2, "   ---User Time---", 18);
      v28 = a2[4];
    }
    v29 = a2[3] - v28;
  }
  v30 = *(double *)v79.m128i_i64;
  if ( *(double *)v79.m128i_i64 != 0.0 )
  {
    if ( v29 > 0x11 )
    {
      v59 = _mm_load_si128((const __m128i *)&xmmword_23ABC50);
      *(_WORD *)(v28 + 16) = 11565;
      *(__m128i *)v28 = v59;
      v28 = a2[4] + 18LL;
      a2[4] = v28;
    }
    else
    {
      sub_227BF10(a2, "   --System Time--", 18);
      v28 = a2[4];
    }
    v30 = *(double *)v79.m128i_i64;
    v29 = a2[3] - v28;
  }
  if ( v30 + *(double *)&v78.m128i_i64[1] == 0.0 )
  {
    if ( v29 <= 0x11 )
    {
LABEL_33:
      sub_227BF10(a2, "   ---Wall Time---", 18);
      v31 = (char *)a2[4];
      goto LABEL_34;
    }
  }
  else
  {
    if ( v29 > 0x11 )
    {
      v60 = _mm_load_si128((const __m128i *)&xmmword_23ABC60);
      *(_WORD *)(v28 + 16) = 11565;
      *(__m128i *)v28 = v60;
      v28 = a2[4] + 18LL;
      a2[4] = v28;
    }
    else
    {
      sub_227BF10(a2, "   --User+System--", 18);
      v28 = a2[4];
    }
    if ( (unsigned __int64)(a2[3] - v28) <= 0x11 )
      goto LABEL_33;
  }
  v57 = _mm_load_si128((const __m128i *)&xmmword_23ABC70);
  *(_WORD *)(v28 + 16) = 11565;
  *(__m128i *)v28 = v57;
  v31 = (char *)(a2[4] + 18LL);
  a2[4] = v31;
LABEL_34:
  v32 = a2[3] - (_QWORD)v31;
  if ( v79.m128i_i64[1] )
  {
    if ( v32 > 0xA )
    {
      qmemcpy(v31, "  ---Mem---", 11);
      v31 = (char *)(a2[4] + 11LL);
      a2[4] = v31;
    }
    else
    {
      sub_227BF10(a2, "  ---Mem---", 11);
      v31 = (char *)a2[4];
    }
    v32 = a2[3] - (_QWORD)v31;
  }
  if ( v80 )
  {
    if ( v32 > 0xC )
    {
      qmemcpy(v31, "  ---Instr---", 13);
      v31 = (char *)(a2[4] + 13LL);
      a2[4] = v31;
    }
    else
    {
      sub_227BF10(a2, "  ---Instr---", 13);
      v31 = (char *)a2[4];
    }
    if ( a2[3] - (_QWORD)v31 <= 0xEu )
      goto LABEL_37;
  }
  else if ( v32 <= 0xE )
  {
LABEL_37:
    sub_227BF10(a2, "  --- Name ---\n", 15);
    goto LABEL_38;
  }
  qmemcpy(v31, "  --- Name ---\n", 15);
  a2[4] += 15LL;
LABEL_38:
  v33 = (unsigned __int64 *)a1[10];
  v34 = (unsigned __int64 *)a1[9];
  v35 = v33 - 13;
  if ( v34 != v33 )
  {
    while ( 1 )
    {
      sub_224E160(v35, (__int64)&v78, (__int64)a2);
      v37 = sub_227BF10(a2, v35[9], v35[10]);
      v38 = *(_BYTE **)(v37 + 32);
      if ( (unsigned __int64)v38 < *(_QWORD *)(v37 + 24) )
      {
        *(_QWORD *)(v37 + 32) = v38 + 1;
        v36 = v35 - 13;
        *v38 = 10;
        if ( v34 == v35 )
          break;
      }
      else
      {
        sub_227BA10(v37, 10);
        v36 = v35 - 13;
        if ( v34 == v35 )
          break;
      }
      v35 = v36;
    }
  }
  v39 = &v78;
  sub_224E160((unsigned __int64 *)&v78, (__int64)&v78, (__int64)a2);
  v43 = a2[4];
  if ( (unsigned __int64)(a2[3] - v43) > 6 )
  {
    *(_DWORD *)v43 = 1635020628;
    *(_WORD *)(v43 + 4) = 2668;
    *(_BYTE *)(v43 + 6) = 10;
    v44 = a2[4] + 7LL;
    a2[4] = v44;
  }
  else
  {
    v39 = (__m128i *)"Total\n\n";
    sub_227BF10(a2, "Total\n\n", 7);
    v44 = a2[4];
  }
  if ( a2[2] != v44 )
    sub_227B9F0(a2, v39, v43, v40, v41, v42, 0);
  v45 = (_QWORD *)a1[9];
  v46 = (_QWORD *)a1[10];
  if ( v45 != v46 )
  {
    v47 = (_QWORD *)a1[9];
    do
    {
      while ( 1 )
      {
        v48 = (_QWORD *)v47[9];
        if ( v48 != v47 + 11 )
          operator delete(v48);
        v49 = (_QWORD *)v47[5];
        if ( v49 == v47 + 7 )
          break;
        operator delete(v49);
        v47 += 13;
        if ( v46 == v47 )
          goto LABEL_54;
      }
      v47 += 13;
    }
    while ( v46 != v47 );
LABEL_54:
    a1[10] = v45;
  }
}

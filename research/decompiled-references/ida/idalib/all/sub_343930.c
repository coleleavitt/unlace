int sub_343930()
{
  size_t v0; // rbx
  size_t v1; // rax
  size_t v2; // rbx
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // r15
  __m128 v7; // xmm0
  size_t v8; // rax
  __int64 *v9; // rbp
  __int64 v10; // rsi
  char *v11; // r13
  int v12; // r9d
  char *v13; // r13
  char *v14; // rsi
  char *v15; // r8
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r12
  __int64 (__fastcall *v18)(); // rax
  char *v19; // r8
  char *v20; // r8
  __int64 (__fastcall *v21)(); // rdi
  int v22; // r9d
  unsigned __int64 v23; // r13
  __int64 (__fastcall *v24)(); // r13
  unsigned __int64 v25; // r12
  void **v26; // rbp
  __int64 (__fastcall *v27)(); // r15
  int v28; // eax
  const __m128i *v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rbp
  int v33; // edi
  unsigned __int64 v34; // rdx
  __m128i *v35; // rcx
  __int32 v36; // eax
  __m128i v37; // xmm4
  unsigned __int64 v39; // r13
  __m128i *v40; // rax
  void *v41; // rdi
  const __m128i *v42; // rcx
  __m128i *v43; // rdx
  const __m128i *v44; // rsi
  __m128i v45; // xmm1
  __int32 v46; // r8d
  __m128i v47; // xmm2
  int v48; // edx
  __int64 (__fastcall *v49)(); // [rsp+0h] [rbp-168h] BYREF
  _QWORD *v50; // [rsp+8h] [rbp-160h]
  void **p_ptr; // [rsp+10h] [rbp-158h]
  void *v52; // [rsp+18h] [rbp-150h]
  char *v53; // [rsp+20h] [rbp-148h]
  __int64 v54; // [rsp+28h] [rbp-140h]
  __int64 v55; // [rsp+38h] [rbp-130h] BYREF
  __int64 v56; // [rsp+44h] [rbp-124h] BYREF
  int v57; // [rsp+4Ch] [rbp-11Ch]
  _QWORD v58[5]; // [rsp+50h] [rbp-118h] BYREF
  int v59; // [rsp+78h] [rbp-F0h]
  char v60; // [rsp+7Ch] [rbp-ECh]
  void *ptr; // [rsp+80h] [rbp-E8h] BYREF
  __int64 v62; // [rsp+88h] [rbp-E0h]
  _QWORD v63[2]; // [rsp+90h] [rbp-D8h] BYREF
  int v64; // [rsp+A0h] [rbp-C8h]
  const char *v65; // [rsp+A8h] [rbp-C0h]
  __int64 v66; // [rsp+B0h] [rbp-B8h]
  const char *v67; // [rsp+B8h] [rbp-B0h]
  __int64 v68; // [rsp+C0h] [rbp-A8h]
  int v69; // [rsp+C8h] [rbp-A0h]
  const char *v70; // [rsp+D0h] [rbp-98h]
  __int64 v71; // [rsp+D8h] [rbp-90h]
  const char *v72; // [rsp+E0h] [rbp-88h]
  __int64 v73; // [rsp+E8h] [rbp-80h]
  int v74; // [rsp+F0h] [rbp-78h]
  const char *v75; // [rsp+F8h] [rbp-70h]
  __int64 v76; // [rsp+100h] [rbp-68h]

  v0 = j__strlen("Interchange if you gain more than this number");
  sub_200F820(&qword_2D05240, 0, 0);
  dword_2D052B8 = 0;
  dword_2D052C8 = 0;
  qword_2D052C0 = (__int64)off_2C71BB0;
  xmmword_2D052E8 = (__int128)_mm_loadh_ps((const double *)&off_2C77900);
  byte_2D052CC = 0;
  qword_2D05240 = (__int64)off_2C75778;
  qword_2D052D0 = (__int64)off_2BEAB68;
  v1 = j__strlen("loop-interchange-threshold");
  sub_2217250(&qword_2D05240, "loop-interchange-threshold", v1);
  qword_2D05268 = v0;
  dword_2D052B8 = 0;
  byte_2D052CC = 1;
  dword_2D052C8 = 0;
  byte_2D0524A = byte_2D0524A & 0x9F | 0x20;
  qword_2D05260 = (__int64)"Interchange if you gain more than this number";
  sub_2218140(&qword_2D05240);
  __cxa_atexit(sub_20141D0, &qword_2D05240, &off_2B25620);
  v2 = j__strlen(
         "Maximum number of load-store instructions that should be handled in the dependency matrix. Higher value may lea"
         "d to more interchanges at the cost of compile-time");
  sub_200F820(&qword_2D05180, 0, 0);
  dword_2D051F8 = 0;
  dword_2D05208 = 0;
  qword_2D05200 = (__int64)off_2C712D0;
  xmmword_2D05228 = (__int128)_mm_loadh_ps((const double *)off_2C784F8);
  byte_2D0520C = 0;
  qword_2D05180 = (__int64)off_2C75710;
  qword_2D05210 = (__int64)off_2BEAB98;
  v3 = j__strlen("loop-interchange-max-meminstr-count");
  sub_2217250(&qword_2D05180, "loop-interchange-max-meminstr-count", v3);
  qword_2D051A8 = v2;
  byte_2D0520C = 1;
  dword_2D051F8 = 64;
  dword_2D05208 = 64;
  byte_2D0518A = byte_2D0518A & 0x9F | 0x20;
  qword_2D051A0 = (__int64)"Maximum number of load-store instructions that should be handled in the dependency matrix. Hi"
                           "gher value may lead to more interchanges at the cost of compile-time";
  sub_2218140(&qword_2D05180);
  __cxa_atexit(sub_1FED260, &qword_2D05180, &off_2B25620);
  v4 = j__strlen("Minimum depth of loop nest considered for the transform");
  ptr = (void *)"Minimum depth of loop nest considered for the transform";
  v62 = v4;
  LODWORD(v56) = 1;
  LODWORD(v55) = 2;
  v58[0] = &v55;
  sub_21EB9F0(&unk_2D050C0, "loop-interchange-min-loop-nest-depth", v58, &v56, &ptr);
  __cxa_atexit(sub_1FED260, &unk_2D050C0, &off_2B25620);
  v5 = j__strlen("Maximum depth of loop nest considered for the transform");
  ptr = (void *)"Maximum depth of loop nest considered for the transform";
  v62 = v5;
  LODWORD(v56) = 1;
  LODWORD(v55) = 10;
  v58[0] = &v55;
  sub_21EB9F0(&unk_2D05000, "loop-interchange-max-loop-nest-depth", v58, &v56, &ptr);
  __cxa_atexit(sub_1FED260, &unk_2D05000, &off_2B25620);
  v63[1] = 5;
  ptr = v63;
  v63[0] = "cache";
  v65 = "Prioritize loop cache cost";
  v67 = "instorder";
  v70 = "Prioritize the IVs order of each instruction";
  v72 = "vectorize";
  v75 = "Prioritize vectorization";
  v62 = 0x400000003LL;
  v64 = 0;
  v66 = 26;
  v68 = 9;
  v69 = 1;
  v71 = 44;
  v73 = 9;
  v74 = 2;
  v76 = 24;
  v56 = 0x100000000LL;
  v57 = 2;
  v6 = j__strlen("List of profitability heuristics to be used. They are applied in the given order");
  sub_200F820(&qword_2D04D60, 1, 0);
  qword_2D04D60 = (__int64)&off_2C75070;
  qword_2D04E28 = (__int64)&off_2C75020;
  qword_2D04E38 = &unk_2D04E48;
  qword_2D04E40 = 0x800000000LL;
  xmmword_2D04E10 = 0;
  v49 = nullsub_1474;
  qword_2D04E30 = (__int64)&qword_2D04D60;
  qword_2D04DD8 = 0;
  v7 = _mm_loadh_ps((const double *)&v49);
  qword_2D04DE0 = 0;
  xmmword_2D04FD8 = (__int128)v7;
  qword_2D04DE8 = 0;
  xmmword_2D04DF0 = 0u;
  qword_2D04E00 = 0;
  byte_2D04E08 = 0;
  qword_2D04E20 = 0;
  v8 = j__strlen("loop-interchange-profitabilities");
  sub_2217250(&qword_2D04D60, "loop-interchange-profitabilities", v8);
  qword_2D04D88 = v6;
  p_ptr = &ptr;
  v9 = &v56;
  byte_2D04D6B |= 2u;
  byte_2D04E08 = 1;
  byte_2D04D6A = byte_2D04D6A & 0x98 | 0x21;
  qword_2D04D80 = (__int64)"List of profitability heuristics to be used. They are applied in the given order";
  v50 = v58;
  do
  {
    while ( 1 )
    {
      if ( qword_2D04DE0 == qword_2D04DE8 )
      {
        sub_21EB580(&qword_2D04DD8, qword_2D04DE0, v9);
      }
      else
      {
        v10 = qword_2D04DE0 + 4;
        *(_DWORD *)qword_2D04DE0 = *(_DWORD *)v9;
        qword_2D04DE0 = v10;
      }
      v11 = *((char **)&xmmword_2D04DF0 + 1);
      v12 = *(_DWORD *)v9;
      if ( *((_QWORD *)&xmmword_2D04DF0 + 1) == qword_2D04E00 )
        break;
      *(_DWORD *)(*((_QWORD *)&xmmword_2D04DF0 + 1) + 8LL) = v12;
      v9 = (__int64 *)((char *)v9 + 4);
      v13 = v11 + 16;
      *(v13 - 4) = 1;
      *((_QWORD *)v13 - 2) = &off_2C75000;
      *((_QWORD *)&xmmword_2D04DF0 + 1) = v13;
      if ( v9 == v58 )
        goto LABEL_18;
    }
    v14 = (char *)xmmword_2D04DF0;
    v15 = (char *)(*((_QWORD *)&xmmword_2D04DF0 + 1) - xmmword_2D04DF0);
    v16 = (__int64)(*((_QWORD *)&xmmword_2D04DF0 + 1) - xmmword_2D04DF0) >> 4;
    if ( !v16 )
    {
      v17 = 1;
      goto LABEL_10;
    }
    v17 = 2 * v16;
    if ( v16 > 2 * v16 || v17 > 0xFFFFFFFFFFFFFFFLL )
    {
      v17 = 0xFFFFFFFFFFFFFFFLL;
LABEL_10:
      v17 *= 16LL;
      v53 = (char *)(*((_QWORD *)&xmmword_2D04DF0 + 1) - xmmword_2D04DF0);
      v52 = (void *)xmmword_2D04DF0;
      LODWORD(v49) = v12;
      v18 = (__int64 (__fastcall *)())operator new(v17);
      v15 = v53;
      v14 = (char *)v52;
      v12 = (int)v49;
      goto LABEL_11;
    }
    v18 = nullptr;
    if ( v17 )
      goto LABEL_10;
LABEL_11:
    v19 = &v15[(_QWORD)v18];
    *((_DWORD *)v19 + 2) = v12;
    v19[12] = 1;
    *(_QWORD *)v19 = &off_2C75000;
    if ( v11 == v14 )
    {
      v23 = (unsigned __int64)v18;
    }
    else
    {
      v20 = v14;
      v21 = v18;
      do
      {
        v22 = *((_DWORD *)v20 + 2);
        v20 += 16;
        v21 = (__int64 (__fastcall *)())((char *)v21 + 16);
        *((_DWORD *)v21 - 2) = v22;
        LOBYTE(v22) = *(v20 - 4);
        *((_QWORD *)v21 - 2) = &off_2C75000;
        *((_BYTE *)v21 - 4) = v22;
      }
      while ( v11 != v20 );
      v23 = (unsigned __int64)v18 + ((v11 - 16 - v14) & 0xFFFFFFFFFFFFFFF0LL) + 16;
    }
    v24 = (__int64 (__fastcall *)())(v23 + 16);
    if ( v14 )
    {
      v49 = v18;
      operator delete(v14);
      v18 = v49;
    }
    v9 = (__int64 *)((char *)v9 + 4);
    v49 = v24;
    qword_2D04E00 = (__int64)v18 + v17;
    xmmword_2D04DF0 = (__int128)_mm_loadh_ps((const double *)&v49);
  }
  while ( v9 != v58 );
LABEL_18:
  v25 = (unsigned __int64)v50;
  v26 = p_ptr;
  v27 = (__int64 (__fastcall *)())ptr;
  v49 = (__int64 (__fastcall *)())((char *)ptr + 40 * (unsigned int)v62);
  if ( ptr != v49 )
  {
    v52 = &v55;
    do
    {
      v28 = *((_DWORD *)v27 + 4);
      v29 = (const __m128i *)v25;
      v30 = *((_QWORD *)v27 + 4);
      v31 = *(_QWORD *)v27;
      v32 = *((_QWORD *)v27 + 1);
      v58[2] = *((_QWORD *)v27 + 3);
      v58[3] = v30;
      v59 = v28;
      v33 = qword_2D04E40;
      v34 = (unsigned int)qword_2D04E40 + 1LL;
      v58[0] = v31;
      v58[1] = v32;
      v58[4] = &off_2C75000;
      v35 = (__m128i *)((char *)qword_2D04E38 + 48 * (unsigned int)qword_2D04E40);
      v60 = 1;
      if ( v34 > HIDWORD(qword_2D04E40) )
      {
        v39 = -1;
        LOBYTE(v50) = 0;
        if ( (unsigned __int64)qword_2D04E38 <= v25 && (unsigned __int64)v35 > v25 )
        {
          LOBYTE(v50) = 1;
          v39 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v25 - (_QWORD)qword_2D04E38) >> 4);
        }
        v40 = (__m128i *)sub_2237400((char *)&unk_2D04E48 - 16, &unk_2D04E48, v34, 48, v52);
        v41 = qword_2D04E38;
        v42 = (const __m128i *)qword_2D04E38;
        v43 = v40;
        v44 = (const __m128i *)((char *)qword_2D04E38 + 48 * (unsigned int)qword_2D04E40);
        if ( qword_2D04E38 != v44 )
        {
          do
          {
            v45 = _mm_loadu_si128(v42);
            v46 = v42[2].m128i_i32[2];
            v42 += 3;
            v43 += 3;
            v43[-3] = v45;
            v47 = _mm_loadu_si128(v42 - 2);
            v43[-1].m128i_i32[2] = v46;
            LOBYTE(v46) = v42[-1].m128i_i8[12];
            v43[-2] = v47;
            v43[-1].m128i_i8[12] = v46;
            v43[-1].m128i_i64[0] = (__int64)&off_2C75000;
          }
          while ( v44 != v42 );
        }
        v48 = v55;
        if ( v41 != &unk_2D04E48 )
        {
          v54 = v55;
          v53 = (char *)v40;
          free(v41);
          v48 = v54;
          v40 = (__m128i *)v53;
        }
        HIDWORD(qword_2D04E40) = v48;
        v29 = (const __m128i *)v25;
        qword_2D04E38 = v40;
        v33 = qword_2D04E40;
        v35 = &v40[3 * (unsigned int)qword_2D04E40];
        if ( (_BYTE)v50 )
          v29 = &v40[3 * v39];
      }
      v36 = v29[2].m128i_i32[2];
      v27 = (__int64 (__fastcall *)())((char *)v27 + 40);
      *v35 = _mm_loadu_si128(v29);
      v37 = _mm_loadu_si128(v29 + 1);
      v35[2].m128i_i32[2] = v36;
      LOBYTE(v36) = v29[2].m128i_i8[12];
      v35[2].m128i_i64[0] = (__int64)&off_2C75000;
      v35[2].m128i_i8[12] = v36;
      v35[1] = v37;
      LODWORD(qword_2D04E40) = v33 + 1;
      sub_2216D40(qword_2D04E30, v31, v32);
    }
    while ( v49 != v27 );
    v26 = p_ptr;
  }
  sub_2218140(&qword_2D04D60);
  if ( ptr != v26 + 2 )
    free(ptr);
  return __cxa_atexit(sub_21EB850, &qword_2D04D60, &off_2B25620);
}

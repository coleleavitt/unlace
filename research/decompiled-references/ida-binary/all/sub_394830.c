__int64 __fastcall sub_394830(
        __int64 *a1,
        const char *a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        const char **a6,
        __int64 a7,
        unsigned __int8 (__fastcall *a8)(unsigned __int64, __int64))
{
  __int64 v8; // rax
  const char **v9; // r11
  __int64 *v10; // r15
  __int64 v11; // r14
  __int64 v12; // r13
  __int64 v13; // rbp
  unsigned __int8 (__fastcall *v14)(const char **, __int64, double, double); // r10
  __int64 v15; // r15
  const char *v16; // r13
  __int64 v17; // rbx
  unsigned __int64 v18; // r12
  __int64 v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r12
  const char *v24; // rax
  __int64 v25; // rdx
  const char **v27; // rdx
  __int128 v28; // xmm1
  const char *v29; // rsi
  unsigned __int64 v30; // rbx
  __int64 v31; // r12
  const char **v32; // rbp
  const char *v33; // r13
  __m128i v34; // xmm0
  const char *v35; // rdi
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rax
  const char *v40; // rdx
  unsigned __int64 v41; // rcx
  __int128 v42; // xmm1
  unsigned __int64 v43; // rbx
  const char *v44; // r12
  __int64 v45; // r13
  __m128i v46; // xmm0
  __int64 v47; // rdi
  unsigned __int64 v48; // rcx
  __int128 v49; // xmm1
  unsigned __int64 v50; // rbx
  char *v51; // rbp
  __int64 v52; // r13
  __int64 v53; // r12
  __m128i v54; // xmm0
  __int64 v55; // rdi
  unsigned __int64 v56; // rax
  const char **v57; // rdx
  __int128 v58; // xmm1
  const char *v59; // rsi
  const char *v60; // rbx
  unsigned __int64 v61; // r12
  const char **v62; // rbp
  const char *v63; // r13
  __m128i v64; // xmm0
  const char *v65; // rdi
  unsigned __int64 v66; // rsi
  __int64 v67; // rsi
  unsigned __int64 v68; // rdx
  __int128 v69; // xmm1
  char *v70; // rbx
  const char *v71; // r12
  unsigned __int64 v72; // rbp
  __int64 v73; // r13
  __m128i v74; // xmm0
  __int64 v75; // rdi
  unsigned __int64 v76; // rcx
  const char **v77; // r13
  __int128 v78; // xmm1
  __int64 *v79; // rbx
  unsigned __int64 v80; // rbp
  const char *v81; // r12
  __m128i v82; // xmm0
  __int64 v83; // rdi
  unsigned __int64 v84; // rax
  __int64 v85; // [rsp+0h] [rbp-A8h]
  const char *v86; // [rsp+8h] [rbp-A0h]
  __m128i v87; // [rsp+20h] [rbp-88h] BYREF
  const char **v88; // [rsp+30h] [rbp-78h]
  __int64 *v89; // [rsp+38h] [rbp-70h]
  unsigned __int64 v90; // [rsp+40h] [rbp-68h]
  __int64 v91; // [rsp+48h] [rbp-60h]
  __int64 v92; // [rsp+50h] [rbp-58h]
  __int64 v93; // [rsp+58h] [rbp-50h]
  unsigned __int64 v94; // [rsp+60h] [rbp-48h]
  __int64 v95; // [rsp+68h] [rbp-40h]

  v8 = a4;
  v9 = a6;
  v10 = a1;
  v11 = a5;
  v12 = a4;
  v13 = (__int64)a2;
  if ( a5 <= a4 )
    v8 = a5;
  v85 = (__int64)a1;
  v89 = a3;
  v14 = (unsigned __int8 (__fastcall *)(const char **, __int64, double, double))a8;
  if ( a7 < v8 )
  {
    v15 = a4;
    v16 = a2;
    v88 = a6;
    if ( a5 >= a4 )
      goto LABEL_13;
LABEL_5:
    v17 = v15 / 2;
    v18 = v15 / 2 + ((v15 + ((unsigned __int64)v15 >> 63)) & 0xFFFFFFFFFFFFFFFELL);
    v15 -= v15 / 2;
    v19 = v85 + 16 * v18;
    v86 = (const char *)sub_3943D0((__int64)v16, (__int64)v89, v19, a8);
    v22 = (v86 - v16) >> 4;
    v23 = 0xAAAAAAAAAAAAAAABLL * v22;
    if ( v15 <= (__int64)(0xAAAAAAAAAAAAAAABLL * v22) )
      goto LABEL_14;
LABEL_6:
    if ( v23 <= a7 )
    {
      if ( !v23 )
        goto LABEL_8;
      v57 = v88;
      v58 = 0;
      v59 = (const char *)(0xAAAAAAAAAAAAAAABLL * ((v86 - v16) >> 4));
      if ( v86 - v16 <= 0 )
      {
        v90 = 0;
        v67 = 0;
        v68 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&v16[-v19] >> 4);
        if ( (__int64)&v16[-v19] <= 0 )
          goto LABEL_8;
      }
      else
      {
        v93 = (__int64)v16;
        v94 = 0xAAAAAAAAAAAAAAABLL * ((v86 - v16) >> 4);
        v90 = v17;
        v60 = v16;
        v91 = v23;
        v61 = v94;
        v92 = v19;
        v62 = v88;
        do
        {
          v63 = *(const char **)v60;
          v64 = _mm_loadu_si128((const __m128i *)(v60 + 8));
          *(_QWORD *)v60 = 0;
          *(_OWORD *)(v60 + 8) = v58;
          v65 = *v62;
          if ( *v62 )
          {
            v62[1] = nullptr;
            v87 = v64;
            qfree(v65, v59, v57);
            v64 = _mm_load_si128(&v87);
            v58 = 0;
          }
          *v62 = v63;
          v60 += 48;
          v62 += 6;
          *(__m128i *)(v62 - 5) = v64;
          *(v62 - 3) = *((const char **)v60 - 3);
          *(v62 - 2) = *((const char **)v60 - 2);
          v59 = *((const char **)v60 - 1);
          *(v62 - 1) = v59;
          --v61;
        }
        while ( v61 );
        v16 = (const char *)v93;
        v20 = 0xAAAAAAAAAAAAAAABLL;
        v19 = v92;
        v17 = v90;
        v66 = v94 - 1;
        v23 = v91;
        if ( (__int64)(v94 - 1) < 0 )
          v66 = 0;
        v67 = 48 * v66 + 48;
        v90 = 0xAAAAAAAAAAAAAAABLL * (v67 >> 4);
        v68 = 0xAAAAAAAAAAAAAAABLL * ((v93 - v92) >> 4);
        if ( v93 - v92 <= 0 )
        {
LABEL_53:
          v76 = v90;
          v77 = v88;
          v78 = 0;
          if ( v67 > 0 )
          {
            v92 = v23;
            v91 = v17;
            v79 = (__int64 *)v19;
            v93 = v19;
            v80 = v90;
            do
            {
              v81 = *v77;
              v82 = _mm_loadu_si128((const __m128i *)(v77 + 1));
              *v77 = nullptr;
              *(_OWORD *)(v77 + 1) = v78;
              v83 = *v79;
              if ( *v79 )
              {
                v79[1] = 0;
                v87 = v82;
                qfree(v83, (const char *)v67, v68, v76);
                v82 = _mm_load_si128(&v87);
                v78 = 0;
              }
              *v79 = (__int64)v81;
              v77 += 6;
              v79 += 6;
              *(__m128i *)(v79 - 5) = v82;
              *(v79 - 3) = (__int64)*(v77 - 3);
              *(v79 - 2) = (__int64)*(v77 - 2);
              *(v79 - 1) = (__int64)*(v77 - 1);
              --v80;
            }
            while ( v80 );
            LODWORD(v19) = v93;
            LODWORD(v17) = v91;
            v23 = v92;
            v84 = v90 - 1;
            if ( (__int64)(v90 - 1) < 0 )
              v84 = 0;
            v24 = (const char *)(v93 + 48 * v84 + 48);
            goto LABEL_9;
          }
LABEL_8:
          v24 = (const char *)v19;
          goto LABEL_9;
        }
      }
      v94 = v67;
      v69 = 0;
      v91 = v17;
      v92 = v23;
      v70 = (char *)v86;
      v71 = v16;
      v93 = v19;
      v72 = v68;
      do
      {
        v70 -= 48;
        v73 = *((_QWORD *)v71 - 6);
        v74 = _mm_loadu_si128((const __m128i *)(v71 - 40));
        v71 -= 48;
        *(_QWORD *)v71 = 0;
        *(_OWORD *)(v71 + 8) = v69;
        v75 = *(_QWORD *)v70;
        if ( *(_QWORD *)v70 )
        {
          *((_QWORD *)v70 + 1) = 0;
          v87 = v74;
          qfree(v75, (const char *)v67, v68, v20);
          v74 = _mm_load_si128(&v87);
          v69 = 0;
        }
        *(_QWORD *)v70 = v73;
        *(__m128i *)(v70 + 8) = v74;
        *((_QWORD *)v70 + 3) = *((_QWORD *)v71 + 3);
        *((_QWORD *)v70 + 4) = *((_QWORD *)v71 + 4);
        v67 = *((_QWORD *)v71 + 5);
        *((_QWORD *)v70 + 5) = v67;
        --v72;
      }
      while ( v72 );
      v17 = v91;
      v23 = v92;
      v19 = v93;
      v67 = v94;
      goto LABEL_53;
    }
    while ( 1 )
    {
LABEL_14:
      if ( v15 > a7 )
      {
        v24 = sub_389FB0((const char *)v19, v16, v86, v20, v22, v21);
        goto LABEL_9;
      }
      if ( !v15 )
        goto LABEL_16;
      v27 = v88;
      v28 = 0;
      v29 = (const char *)(0xAAAAAAAAAAAAAAABLL * ((__int64)&v16[-v19] >> 4));
      if ( (__int64)&v16[-v19] <= 0 )
      {
        v39 = (__int64)v88;
        v38 = 0;
        v90 = 0;
        v40 = (const char *)(v86 - v16);
        v41 = 0xAAAAAAAAAAAAAAABLL * ((v86 - v16) >> 4);
        if ( v86 - v16 <= 0 )
        {
LABEL_16:
          v24 = v86;
          goto LABEL_9;
        }
      }
      else
      {
        v93 = (__int64)v16;
        v94 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&v16[-v19] >> 4);
        v90 = v17;
        v30 = v94;
        v91 = v23;
        v31 = v19;
        v92 = v19;
        v32 = v88;
        do
        {
          v33 = *(const char **)v31;
          v34 = _mm_loadu_si128((const __m128i *)(v31 + 8));
          *(_QWORD *)v31 = 0;
          *(_OWORD *)(v31 + 8) = v28;
          v35 = *v32;
          if ( *v32 )
          {
            v32[1] = nullptr;
            v87 = v34;
            qfree(v35, v29, v27);
            v34 = _mm_load_si128(&v87);
            v28 = 0;
          }
          *v32 = v33;
          v31 += 48;
          v32 += 6;
          *(__m128i *)(v32 - 5) = v34;
          *(v32 - 3) = *(const char **)(v31 - 24);
          *(v32 - 2) = *(const char **)(v31 - 16);
          v29 = *(const char **)(v31 - 8);
          *(v32 - 1) = v29;
          --v30;
        }
        while ( v30 );
        v17 = v90;
        v16 = (const char *)v93;
        v23 = v91;
        v36 = v94 - 1;
        v19 = v92;
        if ( (__int64)(v94 - 1) < 0 )
          v36 = 0;
        v37 = 6 * v36;
        v38 = 48 * v36 + 48;
        v39 = (__int64)&v88[v37 + 6];
        v90 = 0xAAAAAAAAAAAAAAABLL * (v38 >> 4);
        v40 = &v86[-v93];
        v41 = 0xAAAAAAAAAAAAAAABLL * ((__int64)&v86[-v93] >> 4);
        if ( (__int64)&v86[-v93] <= 0 )
          goto LABEL_32;
      }
      v93 = v39;
      v42 = 0;
      v94 = v19;
      v95 = v38;
      v91 = v17;
      v43 = v41;
      v92 = v23;
      v44 = v16;
      do
      {
        v45 = *(_QWORD *)v44;
        v46 = _mm_loadu_si128((const __m128i *)(v44 + 8));
        *(_QWORD *)v44 = 0;
        *(_OWORD *)(v44 + 8) = v42;
        v47 = *(_QWORD *)v19;
        if ( *(_QWORD *)v19 )
        {
          *(_QWORD *)(v19 + 8) = 0;
          v87 = v46;
          qfree(v47, (const char *)v38);
          v46 = _mm_load_si128(&v87);
          v42 = 0;
        }
        *(_QWORD *)v19 = v45;
        v44 += 48;
        v19 += 48;
        *(__m128i *)(v19 - 40) = v46;
        *(_QWORD *)(v19 - 24) = *((_QWORD *)v44 - 3);
        *(_QWORD *)(v19 - 16) = *((_QWORD *)v44 - 2);
        v38 = *((_QWORD *)v44 - 1);
        *(_QWORD *)(v19 - 8) = v38;
        --v43;
      }
      while ( v43 );
      v17 = v91;
      v23 = v92;
      v39 = v93;
      v19 = v94;
      v38 = v95;
LABEL_32:
      v48 = v90;
      v49 = 0;
      if ( v38 <= 0 )
        goto LABEL_16;
      v92 = v23;
      v91 = v17;
      v50 = v90;
      v93 = v19;
      v51 = (char *)v86;
      v52 = v39;
      do
      {
        v51 -= 48;
        v53 = *(_QWORD *)(v52 - 48);
        v54 = _mm_loadu_si128((const __m128i *)(v52 - 40));
        v52 -= 48;
        *(_QWORD *)v52 = 0;
        *(_OWORD *)(v52 + 8) = v49;
        v55 = *(_QWORD *)v51;
        if ( *(_QWORD *)v51 )
        {
          *((_QWORD *)v51 + 1) = 0;
          v87 = v54;
          qfree(v55, (const char *)v38, v40, v48);
          v54 = _mm_load_si128(&v87);
          v49 = 0;
        }
        *(_QWORD *)v51 = v53;
        *(__m128i *)(v51 + 8) = v54;
        *((_QWORD *)v51 + 3) = *(_QWORD *)(v52 + 24);
        *((_QWORD *)v51 + 4) = *(_QWORD *)(v52 + 32);
        v40 = *(const char **)(v52 + 40);
        *((_QWORD *)v51 + 5) = v40;
        --v50;
      }
      while ( v50 );
      LODWORD(v17) = v91;
      v23 = v92;
      v56 = v90 - 1;
      LODWORD(v19) = v93;
      if ( (__int64)(v90 - 1) < 0 )
        v56 = 0;
      v24 = &v86[-48 * v56 - 48];
LABEL_9:
      v11 -= v23;
      v87.m128i_i64[0] = (__int64)v24;
      sub_394830(v85, v19, (_DWORD)v24, v17, v23, (_DWORD)v88, a7, (__int64)a8);
      v25 = v11;
      if ( v15 <= v11 )
        v25 = v15;
      if ( a7 >= v25 )
      {
        v13 = (__int64)v86;
        v14 = (unsigned __int8 (__fastcall *)(const char **, __int64, double, double))a8;
        v12 = v15;
        v10 = (__int64 *)v87.m128i_i64[0];
        v9 = v88;
        return sub_393110(v10, v13, v89, v12, v11, v9, v14);
      }
      v85 = v87.m128i_i64[0];
      v16 = v86;
      if ( v11 < v15 )
        goto LABEL_5;
LABEL_13:
      v23 = v11 / 2;
      v86 = &v16[16 * (v11 / 2) + 16 * ((v11 + ((unsigned __int64)v11 >> 63)) & 0xFFFFFFFFFFFFFFFELL)];
      v19 = sub_394460(v85, (__int64)v16, (__int64)v86, (unsigned __int8 (__fastcall *)(__int64, unsigned __int64))a8);
      v17 = 0xAAAAAAAAAAAAAAABLL * ((v19 - v85) >> 4);
      v15 -= v17;
      if ( v15 > v11 / 2 )
        goto LABEL_6;
    }
  }
  return sub_393110(v10, v13, v89, v12, v11, v9, v14);
}

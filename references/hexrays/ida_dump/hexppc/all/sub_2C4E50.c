unsigned __int64 __fastcall sub_2C4E50(__int64 *a1, _QWORD *a2, int a3)
{
  __int64 *v3; // rbp
  bool v4; // zf
  unsigned __int64 v5; // r15
  _QWORD *v6; // r13
  __int64 *v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // r13
  __m128i v14; // xmm0
  __m128i v15; // xmm6
  __int64 v16; // rbx
  int v17; // r10d
  __int16 v18; // r9
  char v19; // si
  __int8 v20; // cl
  __int64 v21; // r12
  __int64 v22; // r11
  __m128i v23; // xmm0
  __int64 v24; // rdi
  __int64 v25; // rdi
  __m128i v26; // xmm7
  int v27; // esi
  int v28; // ecx
  __int64 v29; // r15
  __int64 (__fastcall *v30)(__int64, __int64); // rcx
  __int64 v31; // rsi
  __int64 v32; // r12
  __int64 j; // rbx
  _QWORD *v34; // rdi
  __int64 v35; // rax
  bool v36; // cc
  __int64 v37; // r15
  __int64 v38; // r13
  unsigned __int64 v39; // rbp
  __int64 v40; // rbx
  unsigned __int64 v41; // r12
  unsigned __int8 (***v42)(void); // rdi
  unsigned __int8 (*v43)(void); // rax
  __int64 v44; // rsi
  unsigned __int8 (***v45)(void); // rdi
  unsigned __int8 (*v46)(void); // rax
  _QWORD *v48; // rbx
  __int64 v49; // r15
  __int64 v50; // r13
  __m128i v51; // xmm0
  __m128i v52; // xmm2
  __int64 v53; // r12
  int v54; // r10d
  __int16 v55; // r9
  __int8 v56; // r8
  char v57; // si
  __int64 v58; // rbx
  _QWORD *v59; // r11
  __m128i v60; // xmm0
  __int64 v61; // rdi
  __int64 v62; // rdi
  __m128i v63; // xmm3
  int v64; // edi
  int v65; // esi
  __int64 v66; // r14
  __int64 (__fastcall *v67)(__int64, __int64); // r8
  __int64 *v68; // r14
  __int64 v69; // r12
  __int64 i; // rbx
  _QWORD *v71; // r13
  __int64 v72; // rdi
  __int64 *v73; // rbx
  __int64 v74; // r12
  _QWORD *v75; // rbx
  _QWORD *v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rbx
  _QWORD *v79; // rax
  __int64 (__fastcall *v80)(__int64, __int64); // r10
  _QWORD *v81; // rsi
  __m128i v82; // xmm0
  __m128i v83; // xmm6
  __int64 v84; // r14
  __int64 v85; // r10
  int v86; // edi
  __int64 v87; // r13
  __int64 v88; // r11
  __m128i v89; // xmm0
  __int64 v90; // rdi
  __int64 v91; // rdi
  __m128i v92; // xmm7
  int v93; // r10d
  int v94; // edi
  __int64 v95; // rdi
  __int64 v96; // r13
  __int64 v97; // r12
  __int64 v98; // rbx
  _QWORD *v99; // rax
  __int64 v100; // rdi
  __m128i v101; // [rsp+0h] [rbp-118h] BYREF
  _QWORD *v102; // [rsp+10h] [rbp-108h]
  _QWORD *v103; // [rsp+18h] [rbp-100h]
  __m128i v104; // [rsp+20h] [rbp-F8h] BYREF
  _QWORD *v105; // [rsp+30h] [rbp-E8h]
  _QWORD *v106; // [rsp+38h] [rbp-E0h]
  __m128i v107; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v108; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v109; // [rsp+60h] [rbp-B8h]
  __int64 *v110; // [rsp+68h] [rbp-B0h]
  _QWORD *v111; // [rsp+70h] [rbp-A8h]
  _QWORD *v112; // [rsp+78h] [rbp-A0h]
  __int64 *v113; // [rsp+80h] [rbp-98h]
  int v114; // [rsp+8Ch] [rbp-8Ch]
  __m128i v115; // [rsp+90h] [rbp-88h]
  __m128i v116; // [rsp+A0h] [rbp-78h]
  __m128i v117; // [rsp+B0h] [rbp-68h]
  __int64 v118; // [rsp+C0h] [rbp-58h] BYREF
  __int128 v119; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v120; // [rsp+D8h] [rbp-40h]

  v3 = a1;
  v4 = a1[14] == 0;
  v112 = a2;
  v114 = a3;
  v120 = __readfsqword(0x28u);
  v102 = (_QWORD *)a1[12];
  if ( !v4 )
  {
    v118 = 0;
    v113 = &v118;
    v119 = 0;
    sub_2C49F0(&v118, (unsigned __int64)v102);
    v4 = a1[1] == 0;
    v109 = 0;
    v110 = a1 + 2;
    if ( !v4 )
    {
      do
      {
        switch_dbctx(*(int *)(v112[v109] + 8LL));
        v49 = *v110;
        v50 = *v110 + 96 * v110[1];
        if ( *v110 != v50 )
        {
          do
          {
            while ( 1 )
            {
              v66 = v118 + 88LL * *(_QWORD *)(v49 + 88);
              v67 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v66 + 8LL);
              if ( v67 == sub_2AD8B0 )
                break;
              v67(v118 + 88LL * *(_QWORD *)(v49 + 88), v49);
              v49 += 96;
              if ( v50 == v49 )
                goto LABEL_55;
            }
            v51 = _mm_loadu_si128((const __m128i *)(v66 + 8));
            *(_QWORD *)(v66 + 8) = *(_QWORD *)(v49 + 8);
            *(_DWORD *)(v66 + 16) = *(_DWORD *)(v49 + 16);
            v116 = v51;
            *(_QWORD *)(v49 + 8) = v51.m128i_i64[0];
            *(_DWORD *)(v49 + 16) = v116.m128i_i32[2];
            v52 = _mm_loadu_si128((const __m128i *)(v66 + 40));
            v53 = *(_QWORD *)(v66 + 32);
            *(_OWORD *)(v66 + 40) = 0;
            v54 = *(_DWORD *)(v66 + 24);
            v55 = *(_WORD *)(v66 + 28);
            v56 = *(_BYTE *)(v66 + 30);
            v101 = v52;
            *(_QWORD *)(v66 + 32) = 0;
            v57 = *(_BYTE *)(v66 + 31);
            v58 = *(_QWORD *)(v66 + 56);
            *(_DWORD *)(v66 + 24) = *(_DWORD *)(v49 + 24);
            *(_BYTE *)(v66 + 28) = *(_BYTE *)(v49 + 28);
            *(_BYTE *)(v66 + 29) = *(_BYTE *)(v49 + 29);
            *(_BYTE *)(v66 + 30) = *(_BYTE *)(v49 + 30);
            *(_BYTE *)(v66 + 31) = *(_BYTE *)(v49 + 31);
            v59 = *(_QWORD **)(v49 + 32);
            v60 = _mm_loadu_si128((const __m128i *)(v49 + 40));
            *(_QWORD *)(v49 + 32) = 0;
            *(_OWORD *)(v49 + 40) = 0;
            v61 = *(_QWORD *)(v66 + 32);
            if ( v61 )
            {
              *(_QWORD *)(v66 + 40) = 0;
              v107.m128i_i16[0] = v55;
              v106 = v59;
              LOBYTE(v105) = v57;
              v104.m128i_i8[0] = v56;
              LODWORD(v103) = v54;
              v108 = v60;
              qfree(v61);
              v60 = _mm_load_si128(&v108);
              v55 = v107.m128i_i16[0];
              v59 = v106;
              v57 = (char)v105;
              v56 = v104.m128i_i8[0];
              v54 = (int)v103;
            }
            *(_QWORD *)(v66 + 32) = v59;
            *(__m128i *)(v66 + 40) = v60;
            *(_QWORD *)(v66 + 56) = *(_QWORD *)(v49 + 56);
            v62 = *(_QWORD *)(v49 + 32);
            *(_DWORD *)(v49 + 24) = v54;
            *(_WORD *)(v49 + 28) = v55;
            *(_BYTE *)(v49 + 30) = v56;
            *(_BYTE *)(v49 + 31) = v57;
            if ( v62 )
            {
              *(_QWORD *)(v49 + 40) = 0;
              qfree(v62);
            }
            v63 = _mm_load_si128(&v101);
            v64 = *(_DWORD *)(v49 + 80);
            *(_QWORD *)(v49 + 32) = v53;
            v49 += 96;
            *(_QWORD *)(v49 - 40) = v58;
            *(__m128i *)(v49 - 56) = v63;
            v65 = *(_DWORD *)(v66 + 80);
            *(_DWORD *)(v66 + 80) = v64;
            *(_DWORD *)(v49 - 16) = v65;
          }
          while ( v50 != v49 );
LABEL_55:
          v50 = *v110;
        }
        if ( v50 )
        {
          v68 = v110;
          v69 = v110[1];
          if ( v69 )
          {
            for ( i = 0; i != v69; ++i )
            {
              v71 = (_QWORD *)(96 * i + v50);
              v72 = v71[4];
              *v71 = off_4CE3C8;
              if ( v72 )
              {
                v71[5] = 0;
                qfree(v72);
              }
              v50 = *v68;
            }
          }
          v73 = v110;
          v110[1] = 0;
          qfree(v50);
          *v73 = 0;
          v73[2] = 0;
        }
        v74 = v112[v109];
        v75 = v102;
        sub_2C49F0((_QWORD *)(v74 + 40), (unsigned __int64)v102 - v3[14]);
        if ( v75 )
        {
          v76 = nullptr;
          v77 = 0;
          v78 = 0;
          do
          {
            if ( *(_DWORD *)(v3[11] + 4 * v77) )
            {
              v79 = (_QWORD *)(*(_QWORD *)(v74 + 40) + 88 * v78);
              v80 = *(__int64 (__fastcall **)(__int64, __int64))(*v79 + 8LL);
              v81 = (_QWORD *)((char *)v76 + v118);
              if ( v80 == sub_2AD8B0 )
              {
                v82 = _mm_loadu_si128((const __m128i *)(v79 + 1));
                v79[1] = v81[1];
                *((_DWORD *)v79 + 4) = *((_DWORD *)v81 + 4);
                v115 = v82;
                v81[1] = v82.m128i_i64[0];
                *((_DWORD *)v81 + 4) = v115.m128i_i32[2];
                v83 = _mm_loadu_si128((const __m128i *)(v79 + 5));
                v84 = v79[4];
                *(_OWORD *)(v79 + 5) = 0;
                v85 = v79[3];
                v79[4] = 0;
                v86 = *((_DWORD *)v81 + 6);
                v87 = v79[7];
                v101 = v83;
                *((_DWORD *)v79 + 6) = v86;
                *((_BYTE *)v79 + 28) = *((_BYTE *)v81 + 28);
                *((_BYTE *)v79 + 29) = *((_BYTE *)v81 + 29);
                *((_BYTE *)v79 + 30) = *((_BYTE *)v81 + 30);
                *((_BYTE *)v79 + 31) = *((_BYTE *)v81 + 31);
                v88 = v81[4];
                v89 = _mm_loadu_si128((const __m128i *)(v81 + 5));
                v81[4] = 0;
                *(_OWORD *)(v81 + 5) = 0;
                v90 = v79[4];
                if ( v90 )
                {
                  v79[5] = 0;
                  v111 = v76;
                  v108.m128i_i64[0] = v88;
                  v106 = v81;
                  v105 = (_QWORD *)v77;
                  v104.m128i_i64[0] = v85;
                  v103 = v79;
                  v107 = v89;
                  qfree(v90);
                  v76 = v111;
                  v88 = v108.m128i_i64[0];
                  v89 = _mm_load_si128(&v107);
                  v81 = v106;
                  v77 = (__int64)v105;
                  v85 = v104.m128i_i64[0];
                  v79 = v103;
                }
                v79[4] = v88;
                *(__m128i *)(v79 + 5) = v89;
                v79[7] = v81[7];
                v91 = v81[4];
                v81[3] = v85;
                if ( v91 )
                {
                  v81[5] = 0;
                  v106 = v76;
                  v105 = v79;
                  v104.m128i_i64[0] = v77;
                  v103 = v81;
                  qfree(v91);
                  v76 = v106;
                  v79 = v105;
                  v77 = v104.m128i_i64[0];
                  v81 = v103;
                }
                v92 = _mm_load_si128(&v101);
                v93 = *((_DWORD *)v81 + 20);
                v81[4] = v84;
                v81[7] = v87;
                *(__m128i *)(v81 + 5) = v92;
                v94 = *((_DWORD *)v79 + 20);
                *((_DWORD *)v79 + 20) = v93;
                *((_DWORD *)v81 + 20) = v94;
              }
              else
              {
                v103 = v76;
                v101.m128i_i64[0] = v77;
                v80((__int64)v79, (__int64)v81);
                v77 = v101.m128i_i64[0];
                v76 = v103;
              }
              ++v78;
            }
            ++v77;
            v76 += 11;
          }
          while ( (_QWORD *)v77 != v102 );
        }
        else
        {
          v78 = 0;
        }
        if ( *(_QWORD *)(v74 + 48) != v78 )
        {
          if ( !under_debugger )
            sub_37EEE0(1962);
          BUG();
        }
        ++v109;
        v110 += 3;
      }
      while ( v109 < v3[1] );
    }
    v95 = v118;
    if ( v118 )
    {
      v96 = v119;
      if ( (_QWORD)v119 )
      {
        v97 = 0;
        v98 = 0;
        do
        {
          v99 = (_QWORD *)(v95 + v97);
          v100 = *(_QWORD *)(v95 + v97 + 32);
          *v99 = off_4CE3C8;
          if ( v100 )
          {
            v99[5] = 0;
            qfree(v100);
          }
          ++v98;
          v95 = v118;
          v97 += 88;
        }
        while ( v96 != v98 );
      }
      *(_QWORD *)&v119 = 0;
      qfree(v95);
    }
LABEL_23:
    if ( (_BYTE)v114 )
    {
      v36 = (unsigned __int64)v3[1] <= 2;
      v102 = nullptr;
      v37 = *v112;
      v38 = v112[1];
      v103 = (_QWORD *)(*v112 + 40LL);
      v104.m128i_i64[0] = v38 + 40;
      if ( !v36 )
      {
        v101.m128i_i64[0] = v112[2];
        v102 = (_QWORD *)(v101.m128i_i64[0] + 40);
      }
      goto LABEL_26;
    }
    return v120 - __readfsqword(0x28u);
  }
  if ( a1[1] )
  {
    v113 = a1;
    v5 = 0;
    v6 = a2;
    v7 = a1 + 2;
    do
    {
      switch_dbctx(*(int *)(v6[v5] + 8LL));
      v8 = v6[v5];
      sub_2C49F0((_QWORD *)(v8 + 40), (unsigned __int64)v102);
      v9 = *v7;
      v10 = *v7 + 96 * v7[1];
      if ( *v7 != v10 )
      {
        v110 = v7;
        v11 = v8;
        v12 = v10;
        v111 = v6;
        v13 = v9;
        v109 = v5;
        do
        {
          while ( 1 )
          {
            v29 = *(_QWORD *)(v11 + 40) + 88LL * *(_QWORD *)(v13 + 88);
            v30 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 8LL);
            if ( v30 == sub_2AD8B0 )
              break;
            v31 = v13;
            v13 += 96;
            v30(v29, v31);
            if ( v13 == v12 )
              goto LABEL_13;
          }
          v14 = _mm_loadu_si128((const __m128i *)(v29 + 8));
          *(_QWORD *)(v29 + 8) = *(_QWORD *)(v13 + 8);
          *(_DWORD *)(v29 + 16) = *(_DWORD *)(v13 + 16);
          v117 = v14;
          *(_QWORD *)(v13 + 8) = v14.m128i_i64[0];
          *(_DWORD *)(v13 + 16) = v117.m128i_i32[2];
          v15 = _mm_loadu_si128((const __m128i *)(v29 + 40));
          v16 = *(_QWORD *)(v29 + 32);
          *(_OWORD *)(v29 + 40) = 0;
          v17 = *(_DWORD *)(v29 + 24);
          v18 = *(_WORD *)(v29 + 28);
          v19 = *(_BYTE *)(v29 + 30);
          v101 = v15;
          *(_QWORD *)(v29 + 32) = 0;
          v20 = *(_BYTE *)(v29 + 31);
          v21 = *(_QWORD *)(v29 + 56);
          *(_DWORD *)(v29 + 24) = *(_DWORD *)(v13 + 24);
          *(_BYTE *)(v29 + 28) = *(_BYTE *)(v13 + 28);
          *(_BYTE *)(v29 + 29) = *(_BYTE *)(v13 + 29);
          *(_BYTE *)(v29 + 30) = *(_BYTE *)(v13 + 30);
          *(_BYTE *)(v29 + 31) = *(_BYTE *)(v13 + 31);
          v22 = *(_QWORD *)(v13 + 32);
          v23 = _mm_loadu_si128((const __m128i *)(v13 + 40));
          *(_QWORD *)(v13 + 32) = 0;
          *(_OWORD *)(v13 + 40) = 0;
          v24 = *(_QWORD *)(v29 + 32);
          if ( v24 )
          {
            *(_QWORD *)(v29 + 40) = 0;
            v108.m128i_i64[0] = v22;
            v107.m128i_i8[0] = v20;
            LOBYTE(v106) = v19;
            LODWORD(v105) = v17;
            LOWORD(v103) = v18;
            v104 = v23;
            qfree(v24);
            v22 = v108.m128i_i64[0];
            v20 = v107.m128i_i8[0];
            v19 = (char)v106;
            v17 = (int)v105;
            v23 = _mm_load_si128(&v104);
            v18 = (__int16)v103;
          }
          *(_QWORD *)(v29 + 32) = v22;
          *(__m128i *)(v29 + 40) = v23;
          *(_QWORD *)(v29 + 56) = *(_QWORD *)(v13 + 56);
          v25 = *(_QWORD *)(v13 + 32);
          *(_DWORD *)(v13 + 24) = v17;
          *(_WORD *)(v13 + 28) = v18;
          *(_BYTE *)(v13 + 30) = v19;
          *(_BYTE *)(v13 + 31) = v20;
          if ( v25 )
          {
            *(_QWORD *)(v13 + 40) = 0;
            qfree(v25);
          }
          v26 = _mm_load_si128(&v101);
          v27 = *(_DWORD *)(v13 + 80);
          *(_QWORD *)(v13 + 32) = v16;
          v13 += 96;
          *(_QWORD *)(v13 - 40) = v21;
          *(__m128i *)(v13 - 56) = v26;
          v28 = *(_DWORD *)(v29 + 80);
          *(_DWORD *)(v29 + 80) = v27;
          *(_DWORD *)(v13 - 16) = v28;
        }
        while ( v13 != v12 );
LABEL_13:
        v7 = v110;
        v5 = v109;
        v6 = v111;
        v10 = *v110;
      }
      if ( v10 )
      {
        v32 = v7[1];
        if ( v32 )
        {
          for ( j = 0; j != v32; ++j )
          {
            v34 = (_QWORD *)(96 * j + v10);
            *v34 = off_4CE3C8;
            v35 = v34[4];
            if ( v35 )
            {
              v34[5] = 0;
              qfree(v35);
            }
            v10 = *v7;
          }
        }
        v7[1] = 0;
        qfree(v10);
        *v7 = 0;
        v7[2] = 0;
      }
      ++v5;
      v7 += 3;
    }
    while ( v5 < v113[1] );
    v3 = v113;
    goto LABEL_23;
  }
  if ( !(_BYTE)v114 )
    return v120 - __readfsqword(0x28u);
  v102 = nullptr;
  v37 = *v112;
  v38 = v112[1];
  v103 = (_QWORD *)(*v112 + 40LL);
  v104.m128i_i64[0] = v38 + 40;
LABEL_26:
  v39 = *(_QWORD *)(v37 + 48);
  if ( !v39 )
    goto LABEL_41;
  v40 = 0;
  v41 = 0;
  v39 = 0;
  do
  {
    v45 = (unsigned __int8 (***)(void))(v40 + *(_QWORD *)(v37 + 40));
    v46 = **v45;
    if ( (char *)v46 == (char *)sub_2A99E0 )
    {
      if ( (unsigned int)sub_253FC0((__int64)(v45 + 1), (__int64)(v45 + 8)) )
        goto LABEL_31;
    }
    else if ( v46() )
    {
      goto LABEL_31;
    }
    v42 = (unsigned __int8 (***)(void))(v40 + *(_QWORD *)(v38 + 40));
    v43 = **v42;
    if ( (char *)v43 == (char *)sub_2A99E0 )
    {
      if ( !(unsigned int)sub_253FC0((__int64)(v42 + 1), (__int64)(v42 + 8)) )
        goto LABEL_35;
    }
    else if ( !v43() )
    {
      goto LABEL_35;
    }
LABEL_31:
    if ( v39 < v41 )
    {
      v44 = *(_QWORD *)(v37 + 40);
      v101.m128i_i64[0] = 88 * v39;
      (*(void (__fastcall **)(unsigned __int64, __int64))(*(_QWORD *)(v44 + 88 * v39) + 8LL))(v44 + 88 * v39, v40 + v44);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*(_QWORD *)(v38 + 40) + v101.m128i_i64[0]) + 8LL))(
        *(_QWORD *)(v38 + 40) + v101.m128i_i64[0],
        v40 + *(_QWORD *)(v38 + 40));
      if ( v102 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(*v102 + v101.m128i_i64[0]) + 8LL))(
          *v102 + v101.m128i_i64[0],
          v40 + *v102);
    }
    ++v39;
LABEL_35:
    ++v41;
    v40 += 88;
  }
  while ( v41 < *(_QWORD *)(v37 + 48) );
  v37 = *v112;
LABEL_41:
  switch_dbctx(*(int *)(v37 + 8));
  sub_2C49F0(v103, v39);
  v48 = v112;
  switch_dbctx(*(int *)(v112[1] + 8LL));
  sub_2C49F0(v104.m128i_i64[0], v39);
  if ( !v102 )
    return v120 - __readfsqword(0x28u);
  switch_dbctx(*(int *)(v48[2] + 8LL));
  return sub_2C49F0(v102, v39);
}

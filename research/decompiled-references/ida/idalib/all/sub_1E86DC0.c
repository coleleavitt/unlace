__int64 __fastcall sub_1E86DC0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 si128)
{
  _QWORD *v8; // r12
  char v9; // bl
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned int v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rbp
  unsigned int v17; // eax
  unsigned __int8 v18; // al
  unsigned int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  unsigned int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rax
  __int64 v30; // r15
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdx
  __int64 v33; // rbp
  char *v34; // rdx
  _QWORD *v35; // rcx
  char *v36; // rbp
  char *v37; // r15
  __int64 v38; // rdx
  unsigned __int64 v39; // rdx
  __int64 v40; // r14
  unsigned __int8 v41; // r13
  int v42; // r8d
  bool v43; // r9
  __int64 v44; // rax
  unsigned __int64 v45; // r12
  char v46; // di
  unsigned __int64 v47; // rax
  int v48; // eax
  char *v49; // r12
  char *v50; // r13
  _BYTE *i; // rax
  __int64 v52; // rsi
  unsigned int v53; // ecx
  __int64 v54; // rdi
  __int64 *v55; // r12
  __int64 *v56; // r13
  __int64 v57; // rsi
  __int64 v58; // rdi
  unsigned __int64 v59; // r14
  _QWORD *v60; // r13
  _QWORD *v61; // rdi
  _QWORD *v62; // r15
  _QWORD *v63; // r12
  char *v64; // rdi
  __int128 v66; // [rsp-40h] [rbp-2088h]
  unsigned __int64 v67; // [rsp+8h] [rbp-2040h] BYREF
  unsigned __int64 v68; // [rsp+10h] [rbp-2038h]
  unsigned __int64 v69; // [rsp+18h] [rbp-2030h]
  _QWORD *v70; // [rsp+20h] [rbp-2028h]
  int v71; // [rsp+28h] [rbp-2020h]
  char v72; // [rsp+2Fh] [rbp-2019h]
  __int64 v73; // [rsp+30h] [rbp-2018h]
  __int64 v74; // [rsp+38h] [rbp-2010h]
  unsigned __int64 *v75; // [rsp+40h] [rbp-2008h]
  __int64 v76; // [rsp+48h] [rbp-2000h]
  __int64 v77; // [rsp+50h] [rbp-1FF8h]
  __int64 v78; // [rsp+58h] [rbp-1FF0h]
  unsigned __int64 *v79; // [rsp+60h] [rbp-1FE8h]
  __int64 v80; // [rsp+68h] [rbp-1FE0h]
  unsigned int v81; // [rsp+70h] [rbp-1FD8h]
  unsigned int v82; // [rsp+74h] [rbp-1FD4h]
  void **p_ptr; // [rsp+78h] [rbp-1FD0h]
  unsigned __int64 *v84; // [rsp+80h] [rbp-1FC8h]
  __int64 v85; // [rsp+88h] [rbp-1FC0h]
  _DWORD *v86; // [rsp+90h] [rbp-1FB8h] BYREF
  __int64 v87; // [rsp+98h] [rbp-1FB0h]
  _DWORD v88[2]; // [rsp+A0h] [rbp-1FA8h] BYREF
  __int64 v89; // [rsp+A8h] [rbp-1FA0h]
  __int64 v90; // [rsp+B0h] [rbp-1F98h]
  __m128 v91; // [rsp+C0h] [rbp-1F88h]
  unsigned __int64 v92; // [rsp+D0h] [rbp-1F78h]
  __int64 *v93; // [rsp+E0h] [rbp-1F68h] BYREF
  __m128 v94; // [rsp+E8h] [rbp-1F60h]
  void *ptr; // [rsp+100h] [rbp-1F48h] BYREF
  __int64 v96; // [rsp+108h] [rbp-1F40h]
  char v97; // [rsp+110h] [rbp-1F38h] BYREF
  unsigned __int64 v98; // [rsp+150h] [rbp-1EF8h] BYREF
  __int64 v99; // [rsp+158h] [rbp-1EF0h]
  _QWORD v100[336]; // [rsp+160h] [rbp-1EE8h] BYREF
  void *v101; // [rsp+BE0h] [rbp-1468h]
  __int64 v102; // [rsp+BE8h] [rbp-1460h]
  int v103; // [rsp+BF0h] [rbp-1458h]
  char v104; // [rsp+BF4h] [rbp-1454h]
  _QWORD v105[17]; // [rsp+BF8h] [rbp-1450h] BYREF
  int v106; // [rsp+C80h] [rbp-13C8h]
  __int64 v107; // [rsp+C88h] [rbp-13C0h]
  __int64 v108; // [rsp+C90h] [rbp-13B8h]
  void *v109; // [rsp+C98h] [rbp-13B0h]
  __int64 v110; // [rsp+CA0h] [rbp-13A8h]
  _BYTE v111[32]; // [rsp+CA8h] [rbp-13A0h] BYREF
  __int64 *v112; // [rsp+CC8h] [rbp-1380h]
  __int64 v113; // [rsp+CD0h] [rbp-1378h]
  _QWORD v114[2]; // [rsp+CD8h] [rbp-1370h] BYREF
  unsigned int v115; // [rsp+CE8h] [rbp-1360h]
  int v116; // [rsp+CECh] [rbp-135Ch]
  __int64 v117; // [rsp+CF0h] [rbp-1358h]
  char v118; // [rsp+CF8h] [rbp-1350h]
  int v119; // [rsp+CFCh] [rbp-134Ch]
  int v120; // [rsp+2000h] [rbp-48h]

  v8 = a1;
  v9 = a3;
  v10 = *(_QWORD *)(a2 + 128);
  v72 = a3;
  if ( !v10 )
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), a3, a4, a5, a6);
    v10 = *(_QWORD *)(a2 + 128);
    if ( !v10 )
      BUG();
  }
  v11 = *(_QWORD *)(v10 + 88);
  v12 = a1[31];
  v13 = *(_DWORD *)(v11 + 24);
  v80 = v11;
  v81 = v13;
  v14 = sub_A7AC20(v12, v11, a3, a4, a5, a6);
  v86 = nullptr;
  v15 = *(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v14 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v14) & 7;
  v69 = v15;
  if ( v9 )
    v16 = (v8[31] + 17832LL) | 6;
  else
    v16 = sub_B87BD0(v8[31] + 17536LL, v15);
  LOWORD(v88[0]) = v88[0] & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v90 = 0;
  v89 = v69;
  v17 = v88[0] & 0xFFF001FF;
  BYTE1(v17) = ((unsigned __int16)(v88[0] & 0x1FF) >> 8) | 4;
  v88[0] = v17;
  v88[1] = v81;
  v18 = sub_B62360((__int64)v88);
  v86 = v88;
  BYTE1(v88[0]) = (v18 << 6) | BYTE1(v88[0]) & 0x3F;
  BYTE2(v88[0]) = BYTE2(v88[0]) & 0xF8 | (v18 >> 2) & 7;
  LOWORD(v98) = v98 & 0xFE00 | 0x1A;
  if ( unk_2CD7484 )
    sub_EE9B50(26);
  v100[0] = 0;
  v99 = v69;
  v19 = v98 & 0xFFF001FF;
  BYTE1(v19) = ((unsigned __int16)(v98 & 0x1FF) >> 8) | 2;
  v98 = __PAIR64__(v81, v19);
  v20 = sub_B62360((__int64)&v98);
  BYTE1(v98) = ((_BYTE)v20 << 6) | BYTE1(v98) & 0x3F;
  BYTE2(v98) = BYTE2(v98) & 0xF8 | ((unsigned __int8)v20 >> 2) & 7;
  v22 = sub_C0EB40((__int64)&v98, v8[31], nullptr, (unsigned int)(v20 << 6), v21);
  v23 = v16;
  v24 = 0;
  v102 = 16;
  v82 = v22;
  v98 = (unsigned __int64)v100;
  v99 = 0x1000000000LL;
  v101 = v105;
  v109 = v111;
  v110 = 0x400000000LL;
  v112 = v114;
  v103 = 0;
  v104 = 1;
  v105[16] = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v113 = 0;
  v114[0] = 0;
  v114[1] = 1;
  v115 = v81;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v29 = sub_B94670(v80 + 64, v23, v25, v26, v27, v28);
  if ( (v29 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v30 = 0;
    p_ptr = &ptr;
    ptr = &v97;
    v31 = v29;
    v96 = 0x800000000LL;
    do
    {
      ++v30;
      if ( (v31 & 4) == 0 )
        break;
      v32 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v32 )
        break;
      v31 = *(_QWORD *)(v32 + 8);
    }
    while ( v31 );
    if ( v30 > 8 )
    {
      v67 = v29;
      sub_2237220(p_ptr, p_ptr + 2, v30, 8);
      v35 = (_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF8LL);
      LODWORD(v30) = v30 + v96;
      v34 = (char *)ptr + 8 * (unsigned int)v96 + 8;
      v33 = 8LL * (unsigned int)v30;
      if ( (v67 & 4) != 0 )
        goto LABEL_16;
    }
    else
    {
      v33 = 8LL * (unsigned int)v30;
      v34 = (char *)(p_ptr + 2);
      while ( 1 )
      {
        v34 += 8;
        v35 = (_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v29 & 4) == 0 )
          break;
LABEL_16:
        if ( !v35 )
        {
          *((_QWORD *)v34 - 1) = 0;
          goto LABEL_18;
        }
        *((_QWORD *)v34 - 1) = *v35;
        v29 = v35[1];
        if ( !v29 )
          goto LABEL_18;
      }
    }
    *((_QWORD *)v34 - 1) = v35;
LABEL_18:
    LODWORD(v96) = v30;
    v79 = (unsigned __int64 *)&v86;
    v36 = (char *)ptr + v33;
    v37 = (char *)ptr;
    if ( ptr != v36 )
    {
      v70 = v8;
      while ( 1 )
      {
        v38 = *(_QWORD *)v37;
        if ( *(char *)(*(_QWORD *)v37 + 28LL) < 0 )
          goto LABEL_21;
        v93 = (__int64 *)(v38 | 3);
        v87 = v38 | 3;
        v39 = v38 & 0xFFFFFFFFFFFFFFF8LL;
        v40 = v39;
        v41 = *(_BYTE *)(v39 + 28) & 0x7F;
        v42 = v41;
        if ( v41 == 81 )
          goto LABEL_21;
        v43 = (unsigned int)v41 - 53 > 1 && ((v41 + 52) & 0x7Fu) > 1;
        if ( v43 )
        {
          v46 = *(_BYTE *)(v39 + 28) & 0x7F;
          v45 = v39;
        }
        else
        {
          v71 = v41;
          LOBYTE(v68) = 0;
          v67 = v39;
          v44 = sub_B72ED0(v39);
          v39 = v67;
          v43 = v68;
          v42 = v71;
          v45 = v44;
          v46 = *(_BYTE *)(v44 + 28) & 0x7F;
        }
        v67 = 0;
        v93 = (__int64 *)(v39 | (*(_BYTE *)(v45 + 29) >> 5) & 3);
        if ( v46 == 71 )
        {
          v47 = *(_QWORD *)(v45 + 48);
          v67 = v45;
          v45 = v47;
          v46 = *(_BYTE *)(v47 + 28) & 0x7F;
        }
        if ( v46 != 38 )
          v45 = 0;
        v68 = v45;
        a7 = _mm_loadh_ps((const double *)&v67);
        v94 = a7;
        si128 = (__m128)_mm_load_si128((const __m128i *)&v93);
        v92 = a7.m128_u64[1];
        v91 = si128;
        if ( !v43 )
        {
          v40 = sub_B72ED0(v39);
          v41 = *(_BYTE *)(v40 + 28) & 0x7F;
          v42 = v41;
        }
        if ( (unsigned int)(v42 - 35) > 3 )
        {
          if ( v41 == 71 )
          {
            if ( v72 )
            {
              v85 = 1;
              v84 = v79;
              *((_QWORD *)&v66 + 1) = v79;
              *(_QWORD *)&v66 = v82;
              sub_1BF07D0((__int64)v70, v40, v87, v80, 0, v69, v66, 1, (__int64)&v98, 1, 0, 0);
            }
            else
            {
              sub_1BF2330(
                v70,
                (__int64 *)v67,
                v91.m128_i64[0],
                0,
                v79,
                1u,
                *(double *)a7.m128_u64,
                si128,
                (__int64)&v98,
                1u,
                0,
                1,
                0,
                0,
                0);
            }
          }
          goto LABEL_21;
        }
        if ( v72 )
        {
          v77 = 0;
          v78 = 0;
          v75 = v79;
          v76 = 1;
          sub_1BEF9D0(
            (__int64)v70,
            v40,
            v87,
            v80,
            v69,
            v82,
            a7,
            si128,
            (__int64)v79,
            1u,
            (unsigned int *)&v98,
            1u,
            0,
            0,
            0,
            0,
            0);
LABEL_21:
          v37 += 8;
          if ( v36 == v37 )
            goto LABEL_35;
        }
        else
        {
          v37 += 8;
          v73 = 0;
          v74 = 0;
          sub_1BF10B0(
            v70,
            v45,
            v91.m128_i64[0],
            v79,
            1u,
            (unsigned int *)&v98,
            a7,
            si128,
            1u,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            0,
            0);
          if ( v36 == v37 )
          {
LABEL_35:
            v8 = v70;
            break;
          }
        }
      }
    }
    v48 = sub_1BF27B0((__int64)&v98, v8, v81, &v93, *(double *)a7.m128_u64, si128);
    if ( !v48 || (v24 = 0, v48 == 3) )
      v24 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v93 + 32LL))(*v93);
    if ( ptr != p_ptr + 2 )
      free(ptr);
  }
  sub_1BD27A0((__int64 *)&v98);
  v49 = (char *)v109;
  v50 = (char *)v109 + 8 * (unsigned int)v110;
  if ( v109 != v50 )
  {
    for ( i = v109; ; i = v109 )
    {
      v52 = 0x40000000000LL;
      v53 = (unsigned int)((v49 - i) >> 3) >> 7;
      if ( v53 <= 0x1D )
        v52 = 4096LL << v53;
      v54 = *(_QWORD *)v49;
      v49 += 8;
      operator delete(v54, v52, 16);
      if ( v50 == v49 )
        break;
    }
  }
  v55 = v112;
  v56 = &v112[2 * (unsigned int)v113];
  if ( v112 != v56 )
  {
    do
    {
      v57 = v55[1];
      v58 = *v55;
      v55 += 2;
      operator delete(v58, v57, 16);
    }
    while ( v56 != v55 );
    v56 = v112;
  }
  if ( v56 != v114 )
    free(v56);
  if ( v109 != v111 )
    free(v109);
  if ( !v104 )
    free(v101);
  v59 = v98;
  v60 = (_QWORD *)(v98 + 168LL * (unsigned int)v99);
  if ( (_QWORD *)v98 != v60 )
  {
    do
    {
      while ( 1 )
      {
        v60 -= 21;
        v61 = (_QWORD *)v60[8];
        v62 = (_QWORD *)v60[9];
        v63 = v61;
        if ( v62 != v61 )
        {
          do
          {
            while ( 1 )
            {
              v64 = (char *)v63[3];
              if ( v64 == (char *)(v63 + 5) )
                break;
              operator delete(v64);
              v63 += 8;
              if ( v62 == v63 )
                goto LABEL_59;
            }
            v63 += 8;
          }
          while ( v62 != v63 );
LABEL_59:
          v61 = (_QWORD *)v60[8];
        }
        if ( !v61 )
          break;
        operator delete(v61);
        if ( (_QWORD *)v59 == v60 )
          goto LABEL_62;
      }
    }
    while ( (_QWORD *)v59 != v60 );
LABEL_62:
    v60 = (_QWORD *)v98;
  }
  if ( v60 != v100 )
    free(v60);
  return v24;
}

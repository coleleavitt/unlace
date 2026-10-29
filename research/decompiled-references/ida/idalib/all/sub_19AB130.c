__int64 __fastcall sub_19AB130(
        __int64 a1,
        __int64 *a2,
        int a3,
        unsigned __int64 *a4,
        unsigned __int64 a5,
        int a6,
        __m128 a7,
        __m128i a8,
        unsigned __int8 a9)
{
  unsigned __int64 *v12; // rbx
  unsigned int v13; // eax
  __int64 v14; // rdi
  unsigned int v15; // r14d
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int64 *v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbp
  __m128i v29; // xmm4
  __m128i v30; // xmm5
  __m128i si128; // xmm6
  unsigned __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rdi
  unsigned __int8 v36; // cl
  __m128i *v37; // rdi
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 *v41; // rsi
  unsigned int v42; // ecx
  unsigned int v43; // edx
  __m128i *v44; // rdi
  unsigned int v45; // eax
  unsigned int v46; // eax
  unsigned __int64 v47; // r14
  int v48; // r13d
  int v49; // eax
  __int64 v50; // r12
  int v51; // r15d
  __int64 v52; // rax
  __int64 v53; // r12
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __m128i v56; // xmm2
  __m128i v57; // xmm3
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // rcx
  __int16 v61; // dx
  __int64 v62; // rax
  int v63; // r14d
  __int64 v64; // r13
  unsigned int v65; // eax
  __int64 v66; // r13
  __int64 v67; // rax
  __int64 v68; // rcx
  char v69; // dl
  bool v70; // zf
  __int64 v71; // rdx
  unsigned __int64 v72; // r13
  int v73; // r12d
  __int64 v74; // rbp
  unsigned __int8 v75; // al
  __int64 v76; // rdx
  unsigned __int64 v78; // [rsp+18h] [rbp-2110h]
  unsigned __int64 v79; // [rsp+18h] [rbp-2110h]
  unsigned __int64 v80; // [rsp+18h] [rbp-2110h]
  __int64 v82; // [rsp+20h] [rbp-2108h]
  int v83; // [rsp+28h] [rbp-2100h]
  unsigned __int64 *v84; // [rsp+30h] [rbp-20F8h]
  unsigned __int64 v85; // [rsp+30h] [rbp-20F8h]
  unsigned __int64 *v86; // [rsp+30h] [rbp-20F8h]
  unsigned __int8 v87[12]; // [rsp+3Ch] [rbp-20ECh] BYREF
  __int64 v88; // [rsp+48h] [rbp-20E0h] BYREF
  __int64 v89; // [rsp+50h] [rbp-20D8h] BYREF
  __int64 v90; // [rsp+58h] [rbp-20D0h] BYREF
  unsigned __int64 v91; // [rsp+60h] [rbp-20C8h] BYREF
  __int64 v92; // [rsp+68h] [rbp-20C0h] BYREF
  _WORD v93[2]; // [rsp+70h] [rbp-20B8h] BYREF
  unsigned int v94; // [rsp+74h] [rbp-20B4h]
  int v95; // [rsp+78h] [rbp-20B0h]
  int v96; // [rsp+7Ch] [rbp-20ACh]
  __m128 v97; // [rsp+80h] [rbp-20A8h] BYREF
  __m128i v98; // [rsp+90h] [rbp-2098h]
  __m128i v99; // [rsp+A0h] [rbp-2088h]
  __m128i v100; // [rsp+B0h] [rbp-2078h] BYREF
  __m128i v101; // [rsp+C0h] [rbp-2068h] BYREF
  __m128i v102[7]; // [rsp+D0h] [rbp-2058h] BYREF
  __m128i v103; // [rsp+140h] [rbp-1FE8h] BYREF
  __m128i v104; // [rsp+150h] [rbp-1FD8h] BYREF
  __m128i v105; // [rsp+160h] [rbp-1FC8h] BYREF
  _QWORD v106[17]; // [rsp+170h] [rbp-1FB8h] BYREF
  __int64 v107; // [rsp+1F8h] [rbp-1F30h]
  __int64 v108; // [rsp+200h] [rbp-1F28h]
  __int64 v109; // [rsp+210h] [rbp-1F18h]
  __int64 v110; // [rsp+218h] [rbp-1F10h]
  int v111; // [rsp+228h] [rbp-1F00h]
  char v112; // [rsp+22Ch] [rbp-1EFCh]
  _QWORD *v113; // [rsp+230h] [rbp-1EF8h]
  __int64 v114; // [rsp+238h] [rbp-1EF0h]
  _QWORD v115[12]; // [rsp+240h] [rbp-1EE8h] BYREF
  _WORD v116[52]; // [rsp+2A0h] [rbp-1E88h] BYREF
  __int64 *v117; // [rsp+308h] [rbp-1E20h]
  __int64 v118; // [rsp+310h] [rbp-1E18h]
  __int64 v119; // [rsp+318h] [rbp-1E10h] BYREF

  v12 = (unsigned __int64 *)a2;
  v87[0] = a9;
  v83 = (_DWORD)a2 + 8;
  v88 = *a2;
  v103.m128i_i64[0] = v88;
  v103.m128i_i64[1] = (__int64)(a2 + 1);
  v13 = sub_F6CCB0(v103.m128i_i64, a7);
  v14 = *(_QWORD *)(a1 + 248);
  v15 = v13;
  v91 = __PAIR64__(a6, v13);
  v16 = *a2;
  if ( (*(_BYTE *)(*(_QWORD *)(v14 + 2320) + 52LL) & 1) != 0 )
  {
    a2 = (__int64 *)*a2;
    v16 = sub_A70E70(v14, *v12, 4);
  }
  v97.m128_i32[0] = 9;
  v97.m128_u64[1] = 0;
  v98.m128i_i64[0] = v16;
  v98.m128i_i32[2] = 0;
  v99.m128i_i64[0] = (__int64)v12;
  if ( a5 )
  {
    v94 = v15;
    if ( v87[0] )
    {
      v93[0] = 1;
      v96 = a6;
      v95 = a3;
    }
    else
    {
      v93[0] = 0;
      v95 = a3;
      v96 = a6;
    }
  }
  else
  {
    v94 = v15;
    v93[0] = 4;
    v95 = a3;
    v96 = a6;
  }
  v17 = sub_F57E80(*(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF0LL));
  if ( !v17 || (*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v17 + 17) & 4) != 0 )
  {
LABEL_24:
    v32 = v88 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(v17 + 16) != 17 )
  {
    if ( v87[0] )
    {
      v21 = *(unsigned __int64 **)(*a4 + 16);
      v22 = (unsigned int)((__int64)(*(_QWORD *)(*a4 + 24) - (_QWORD)v21) >> 3);
    }
    else
    {
      v22 = a5;
      v21 = a4;
    }
    if ( !v22 )
    {
      v41 = (__int64 *)(a1 + 8);
      v42 = 3250;
      v43 = v15;
      goto LABEL_41;
    }
    if ( v22 > 1 )
    {
      v46 = sub_EEB7E0(v21[1], (__int64)a2, *(double *)a7.m128_u64);
      v41 = (__int64 *)(a1 + 8);
      v42 = 3249;
      v43 = v46;
      goto LABEL_41;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 2LL) & 1) != 0 )
    {
      v23 = *(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v23 + 16) == 16
        || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 16
        && (v86 = v21, v62 = sub_F63050(v23, a2, v18, v19), v21 = v86, v62) )
      {
        v84 = v21;
        sub_168B9F0((__int64)&v103, (__int64 *)(a1 + 8), v15, 0x1A5Eu, 0);
        a2 = (__int64 *)&v91;
        sub_15884C0((__int64)&v103, (__int64 *)&v91);
        sub_15F7200(&v103);
        v21 = v84;
      }
    }
    if ( (*(_WORD *)*v21 & 0x1FF) == 0x35 )
    {
      v45 = sub_EEB7E0(*v21, (__int64)a2, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)&v103, (__int64 *)(a1 + 8), v45, 0xCB3u, 0);
      v44 = (__m128i *)sub_15890D0((__int64)&v103, v87);
      goto LABEL_42;
    }
    v85 = *v21;
    v89 = 0;
    a7 = 0;
    v104.m128i_i32[0] = sub_C00A40(v85, (__int64)a2, v18, v19, v20);
    v107 &= 0xFFFFFFFE00000000LL;
    v109 &= 0xFFFFFFFE00000000LL;
    v113 = v115;
    v105.m128i_i64[0] = (__int64)v106;
    v115[10] = v116;
    v114 = 0x800000000LL;
    a2 = (__int64 *)*v12;
    v116[48] = 0;
    v103 = 0;
    v104.m128i_i16[2] = 0;
    v104.m128i_i64[1] = 0;
    v105.m128i_i64[1] = 0x400000000LL;
    v106[16] = 0;
    v108 = 0;
    v110 = 0;
    v111 = 0;
    v112 = 0;
    v115[8] = 0;
    v115[9] = 0;
    v115[11] = 0x400000000LL;
    v117 = &v119;
    v118 = 0x400000000LL;
    v24 = sub_1D79BF0(a1, (_DWORD)a2, v83, v85, (unsigned int)&v89, (unsigned int)&v103, 0, 0, 0);
    if ( v24 && v24 != 18 )
    {
      sub_168B9F0((__int64)&v100, (__int64 *)(a1 + 8), v15, 0xCB0u, 0);
      v25 = sub_1605D30((__int64)&v100, &v88);
      v90 = *(_QWORD *)(v85 + 8);
      v26 = sub_162B6D0(v25, &v90);
      v27 = sub_15884C0(v26, (__int64 *)&v91);
      v92 = sub_EEC8C0(v85, (__int64)&v91, 0.0);
      sub_1587DB0(v27, &v92);
      sub_15F7200(&v100);
LABEL_21:
      sub_19A2E00((__int64)&v103);
      return 1;
    }
    if ( (v89 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      goto LABEL_21;
    v101.m128i_i64[0] = v89;
    v100.m128i_i32[0] = 9;
    v100.m128i_i64[1] = 0;
    v29 = _mm_load_si128(&v100);
    v101.m128i_i32[2] = 0;
    v30 = _mm_load_si128(&v101);
    v102[0].m128i_i64[0] = (__int64)v12;
    si128 = _mm_load_si128(v102);
    v88 = v89;
    v97 = (__m128)v29;
    v98 = v30;
    v99 = si128;
    sub_19A2E00((__int64)&v103);
    goto LABEL_24;
  }
  a2 = (__int64 *)v12;
  v55 = sub_1A26590(a1, v12, &v97, v93, a4, a5);
  v88 = v55;
  v32 = v55 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v55 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return 1;
  v104.m128i_i64[0] = v55;
  v103.m128i_i32[0] = 9;
  v103.m128i_i64[1] = 0;
  a8 = _mm_load_si128(&v103);
  v104.m128i_i32[2] = 0;
  v56 = _mm_load_si128(&v104);
  v105.m128i_i64[0] = (__int64)v12;
  v57 = _mm_load_si128(&v105);
  v97 = (__m128)a8;
  v98 = v56;
  v99 = v57;
LABEL_25:
  if ( (*(_BYTE *)(*(_QWORD *)v32 + 17LL) & 4) != 0
    || (a2 = (__int64 *)a5, (unsigned __int8)sub_BFE470((_DWORD **)a4, a5)) )
  {
    v38 = sub_C1BEF0((__int64)&v88, (__int64)a2, v32, v19);
    return sub_C978A0(*(_QWORD **)(a1 + 248), v38, (unsigned __int64)v12, a3, a4, a5, a6, v87[0]);
  }
  if ( a5 != 1 )
  {
    v33 = v88;
    v34 = v88;
    v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v36 = *(_BYTE *)(v35 + 16);
    if ( (unsigned __int8)(v36 - 2) > 4u )
      goto LABEL_39;
    if ( !v87[0] )
    {
LABEL_30:
      sub_168B9F0((__int64)&v103, (__int64 *)(a1 + 8), v15, 0x1532u, 0);
      v37 = &v103;
LABEL_31:
      sub_15884C0((__int64)v37, (__int64 *)&v91);
      sub_15F7200(&v103);
      return 1;
    }
LABEL_38:
    v34 = sub_A71450(*(_QWORD *)(a1 + 248), v33);
    v39 = *(_QWORD *)(*(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v35 = *(_QWORD *)v39;
    v36 = *(_BYTE *)(*(_QWORD *)v39 + 16LL);
    goto LABEL_39;
  }
  if ( v87[0] )
  {
    v33 = v88;
    v34 = v88;
    v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v36 = *(_BYTE *)(v35 + 16);
    if ( (unsigned __int8)(v36 - 2) > 4u )
      goto LABEL_39;
    goto LABEL_38;
  }
  if ( (*(_WORD *)*a4 & 0x1FF) != 0x35 )
    return sub_16B0740(a1, (__int64 *)v12, v88, a3, *a4, a6, a7, *(double *)a8.m128i_i64);
  v34 = v88;
  v35 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v36 = *(_BYTE *)(v35 + 16);
  if ( (unsigned __int8)(v36 - 2) <= 4u )
    goto LABEL_30;
LABEL_39:
  v40 = (unsigned int)v36 - 25;
  if ( (unsigned int)v40 <= 1 )
  {
    v41 = (__int64 *)(a1 + 8);
    v42 = 3988;
    v43 = v15;
LABEL_41:
    sub_168B9F0((__int64)&v103, v41, v43, v42, 0);
    v44 = &v103;
LABEL_42:
    v37 = (__m128i *)sub_1605D30((__int64)v44, &v88);
    goto LABEL_31;
  }
  if ( v36 != 13 || ((*(_WORD *)(v35 + 18) >> 3) & 0x1FF) != 0x1B3 )
  {
    v103.m128i_i32[2] = 4043;
    v103.m128i_i64[0] = (__int64)off_2BC64B0;
    v104.m128i_i64[0] = (__int64)&v91;
    if ( !(unsigned __int8)sub_1E63C20(a1, v15, v34, 1, &v103) )
      goto LABEL_59;
    return 1;
  }
  if ( a5 )
  {
    if ( v87[0] )
    {
      v47 = *a4;
      if ( !(unsigned int)((__int64)(*(_QWORD *)(*a4 + 24) - *(_QWORD *)(*a4 + 16)) >> 3) )
      {
        v48 = sub_EEC140(*a4);
        v49 = sub_EEB7E0(v47, v40, *(double *)a7.m128_u64);
        v50 = *(unsigned int *)(a1 + 1956);
        v51 = v49;
        v52 = *(unsigned int *)(a1 + 1952);
        if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v50, v52) )
        {
          v50 = 0;
          v52 = 0;
        }
        v53 = v52 | (v50 << 32);
        v54 = sub_6D5440(&v88);
        return sub_C98EE0(*(_QWORD **)(a1 + 248), v54, 0, (__int64)v12, 24, v47, 0, v53, v51, v48);
      }
    }
LABEL_59:
    sub_1A19220((unsigned int)&v103, a1, (unsigned int)&v97, (unsigned int)v93, (_DWORD)a4, a5, 0, 1);
    v58 = sub_1A1D600((unsigned int)&v103, a1, (unsigned int)&v97, (unsigned int)v93, (_DWORD)a4, a5, 0);
    if ( v58 == 1 )
    {
LABEL_68:
      v78 = v58;
      sub_1A0BB10(&v103);
      return v78;
    }
    v59 = v58 & 0xFFFFFFFFFFFFFFFELL;
    if ( (v58 & 0xFFFFFFFFFFFFFFFELL) == 0 )
      BUG();
    v60 = v58 & 0xFFFFFFFFFFFFFFFELL;
    v61 = *(_WORD *)v59 & 0x1FF;
    if ( v61 == 116 )
    {
      v60 = *(_QWORD *)(v59 + 24);
      v61 = *(_WORD *)v60 & 0x1FF;
    }
    if ( v61 == 61 )
    {
      if ( (*(_BYTE *)(v60 + 5) & 1) == 0 )
        goto LABEL_76;
      v61 = **(_WORD **)(v60 + 16) & 0x1FF;
    }
    if ( v61 == 100 || v61 == 114 )
      goto LABEL_68;
LABEL_76:
    v63 = 0;
    if ( v87[0] )
      a6 = 0;
    else
      v63 = a3;
    v82 = *(_QWORD *)(v59 + 8);
    v64 = *(unsigned int *)(a1 + 1956);
    v65 = *(_DWORD *)(a1 + 1952);
    if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v64, v65) )
    {
      v64 = 0;
      v65 = 0;
    }
    v66 = (v64 << 32) | v65;
    v67 = *(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF0LL);
    v68 = *(unsigned __int8 *)(v67 + 16);
    if ( (unsigned int)(v68 - 43) > 1 )
    {
      v76 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
      if ( (unsigned int)v76 > 1
        || (v80 = v59, v67 = sub_F63050(*(_QWORD *)(v88 & 0xFFFFFFFFFFFFFFF0LL), a1, v76, v68), v59 = v80, !v67) )
      {
        v69 = 0;
LABEL_84:
        v58 = sub_C98EE0(*(_QWORD **)(a1 + 248), v82, v69, (__int64)v12, 5, v59, 0, v66, v63, a6);
        goto LABEL_68;
      }
      v68 = *(unsigned __int8 *)(v67 + 16);
    }
    if ( (_BYTE)v68 == 43 )
      goto LABEL_83;
    while ( 1 )
    {
      v70 = (*(_BYTE *)(v67 + 18) & 0x10) == 0;
      v67 = *(_QWORD *)(*(_QWORD *)(v67 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      if ( v70 )
        break;
      v71 = (unsigned int)*(unsigned __int8 *)(v67 + 16) - 43;
      if ( (unsigned int)v71 > 1 )
      {
        v79 = v59;
        v67 = sub_F63050(v67, a1, v71, v68);
        v59 = v79;
      }
    }
    v69 = 2;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v67 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1 )
LABEL_83:
      v69 = 1;
    goto LABEL_84;
  }
  v72 = sub_6D5440(&v88);
  v73 = v96;
  v74 = sub_EEE9A0(24, *(_QWORD **)(a1 + 248), 8u);
  *(_WORD *)v74 = *(_WORD *)v74 & 0xFE00 | 0x64;
  if ( unk_2CD7484 )
    sub_EE9B50(100);
  *(_WORD *)(v74 + 1) &= 0xF801u;
  *(_QWORD *)(v74 + 8) = v72;
  *(_QWORD *)(v74 + 16) = v12;
  *(_DWORD *)(v74 + 4) = v73;
  v75 = sub_B635F0(v74);
  *(_BYTE *)(v74 + 1) = (v75 << 6) | *(_BYTE *)(v74 + 1) & 0x3F;
  *(_BYTE *)(v74 + 2) = *(_BYTE *)(v74 + 2) & 0xF8 | (v75 >> 2) & 7;
  return v74;
}

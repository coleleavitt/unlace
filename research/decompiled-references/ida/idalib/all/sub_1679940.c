void __fastcall sub_1679940(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebx
  char *v7; // rbx
  _QWORD *v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rbx
  __int32 v11; // r15d
  char *v12; // r12
  __int64 v13; // rax
  unsigned int v14; // ebx
  int v15; // r13d
  __int64 *v16; // r15
  __int64 v17; // rbx
  __int32 v18; // r12d
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // r9
  char v22; // r10
  char v23; // r15
  __int64 *v24; // rax
  __int64 v25; // rcx
  __m128i v26; // xmm0
  char v27; // bl
  char v28; // dl
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // r10
  int v35; // ecx
  int v36; // edx
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  __int64 *v44; // rdx
  __int64 *v45; // rbx
  _QWORD *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rsi
  _QWORD *v49; // rcx
  char *v50; // rax
  char *v51; // rdx
  __m128i v52; // xmm0
  __int64 v53; // rax
  char v54; // r10
  __int64 v55; // rsi
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  _QWORD *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  unsigned __int64 v65; // rax
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  char v70; // r10
  int v71; // ebx
  char v72; // cl
  int v73; // ebx
  __int64 v74; // rcx
  __m128i *v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  _QWORD *v80; // [rsp+28h] [rbp-3C0h]
  __int64 v81; // [rsp+28h] [rbp-3C0h]
  char v82; // [rsp+28h] [rbp-3C0h]
  __m128i *v83; // [rsp+28h] [rbp-3C0h]
  __int64 v84; // [rsp+28h] [rbp-3C0h]
  char v85; // [rsp+28h] [rbp-3C0h]
  char v86; // [rsp+28h] [rbp-3C0h]
  __int64 v87; // [rsp+30h] [rbp-3B8h]
  __int64 v89; // [rsp+40h] [rbp-3A8h]
  unsigned int v90; // [rsp+4Ch] [rbp-39Ch]
  unsigned int v91; // [rsp+70h] [rbp-378h]
  int v92; // [rsp+74h] [rbp-374h]
  int v93; // [rsp+78h] [rbp-370h]
  char v94; // [rsp+7Fh] [rbp-369h]
  char v95; // [rsp+7Fh] [rbp-369h]
  int v96; // [rsp+80h] [rbp-368h]
  int v97; // [rsp+84h] [rbp-364h]
  __int64 v98; // [rsp+88h] [rbp-360h]
  __m128i v99; // [rsp+90h] [rbp-358h] BYREF
  unsigned int v100; // [rsp+A0h] [rbp-348h]
  __m128i v101; // [rsp+B0h] [rbp-338h] BYREF
  unsigned int v102; // [rsp+C0h] [rbp-328h]
  __m128i v103; // [rsp+D0h] [rbp-318h] BYREF
  unsigned int v104; // [rsp+E0h] [rbp-308h]
  __m128i v105; // [rsp+F0h] [rbp-2F8h]
  unsigned int v106; // [rsp+100h] [rbp-2E8h]
  __m128i v107; // [rsp+110h] [rbp-2D8h] BYREF
  __int128 v108; // [rsp+120h] [rbp-2C8h] BYREF
  unsigned int v109; // [rsp+130h] [rbp-2B8h]
  char *v110; // [rsp+138h] [rbp-2B0h]
  __int64 v111; // [rsp+140h] [rbp-2A8h]
  char v112; // [rsp+148h] [rbp-2A0h] BYREF
  __int16 v113; // [rsp+158h] [rbp-290h]
  __int64 v114; // [rsp+160h] [rbp-288h]
  char *v115; // [rsp+168h] [rbp-280h]
  __int64 v116; // [rsp+170h] [rbp-278h]
  char v117; // [rsp+178h] [rbp-270h] BYREF
  char *v118; // [rsp+188h] [rbp-260h]
  __int64 v119; // [rsp+190h] [rbp-258h]
  char v120; // [rsp+198h] [rbp-250h] BYREF
  __int64 v121; // [rsp+1A8h] [rbp-240h]
  __int64 v122; // [rsp+1B0h] [rbp-238h]
  __int64 v123; // [rsp+1B8h] [rbp-230h]
  char v124; // [rsp+1C0h] [rbp-228h]
  _BYTE v125[136]; // [rsp+1C8h] [rbp-220h] BYREF
  void *ptr; // [rsp+250h] [rbp-198h] BYREF
  __int64 v127; // [rsp+258h] [rbp-190h]
  _BYTE v128[16]; // [rsp+260h] [rbp-188h] BYREF
  char v129; // [rsp+270h] [rbp-178h]
  _QWORD v130[2]; // [rsp+278h] [rbp-170h] BYREF
  char v131; // [rsp+288h] [rbp-160h] BYREF
  __int16 v132; // [rsp+298h] [rbp-150h]
  __int64 v133; // [rsp+2A0h] [rbp-148h]
  _QWORD v134[2]; // [rsp+2A8h] [rbp-140h] BYREF
  char v135; // [rsp+2B8h] [rbp-130h] BYREF
  _QWORD v136[2]; // [rsp+2C8h] [rbp-120h] BYREF
  char v137; // [rsp+2D8h] [rbp-110h] BYREF
  __int64 v138[3]; // [rsp+2E8h] [rbp-100h] BYREF
  char v139; // [rsp+300h] [rbp-E8h]
  _BYTE v140[112]; // [rsp+308h] [rbp-E0h] BYREF
  char v141; // [rsp+378h] [rbp-70h]
  char v142; // [rsp+380h] [rbp-68h]
  __int64 v143; // [rsp+3A8h] [rbp-40h]

  v6 = *(_DWORD *)(a3 + 8);
  v89 = a2;
  v90 = v6;
  if ( *(_BYTE *)(a1 + 289) )
    goto LABEL_17;
  ptr = v128;
  v127 = 0x100000000LL;
  if ( v6 )
  {
    a2 = a3;
    sub_A30580((__int64)&ptr, a3);
  }
  v143 = *(_QWORD *)(a3 + 344);
  if ( (*(_BYTE *)(v89 + 29) & 1) != 0 && sub_1671280(v89, a2, a3, a4, a5, a6) )
  {
LABEL_9:
    v7 = (char *)ptr;
    goto LABEL_10;
  }
  v7 = (char *)ptr;
  if ( BYTE4(v143) )
  {
    LOBYTE(v108) = 0;
    v112 = 0;
    v107 = (__m128i)(unsigned __int64)&v108;
    v110 = &v112;
    v115 = &v117;
    v118 = &v120;
    v117 = 0;
    v8 = (char *)ptr + 328 * (unsigned int)v143;
    v120 = 0;
    v9 = v8[1];
    v10 = *v8;
    LOBYTE(v109) = v109 & 0xF0;
    v113 &= 0xF000u;
    v124 &= 0xFCu;
    v111 = 0;
    v114 = 0;
    v116 = 0;
    v119 = 0;
    v121 = 0;
    v122 = 0;
    v123 = 0;
    v125[120] = 0;
    v11 = *(_DWORD *)v8;
    v80 = v8;
    sub_A302B0((__int64)&v107, (__int64)(v8 + 2));
    v124 = v80[24] & 3 | v124 & 0xFC;
    sub_A2FAD0((__int64)v125, (__int64)(v80 + 25));
    if ( v11 | (HIDWORD(v9) | (unsigned int)v9 | HIDWORD(v10)) & 0x7FFFFFFF && v111 )
    {
      v50 = (char *)ptr;
      v51 = (char *)ptr + 328 * (unsigned int)v127;
      if ( ptr == v51 )
      {
LABEL_70:
        v103.m128i_i64[1] = v9;
        v103.m128i_i32[1] = (v10 & 0xFFFFFFFF00000000LL) >> 32;
        v103.m128i_i32[0] = v11;
        v52 = _mm_load_si128(&v103);
        LOBYTE(v104) = v104 & 0xFC | 2;
        v105 = v52;
        v106 = v104;
        sub_1672C20(
          a1,
          v89,
          (__int64)&loc_2E926E,
          (__int64)&v101,
          (__int64)sub_16716D0,
          (__int64)&v99,
          v52.m128i_i64[0],
          v52.m128i_i64[1],
          v104);
        sub_A1FD80((__int64)&v107);
        v7 = (char *)ptr;
        goto LABEL_10;
      }
      while ( *(_DWORD *)v50
           || (*((_DWORD *)v50 + 1) & 0x7FFFFFFF) != 0
           || (*((_DWORD *)v50 + 2) & 0x7FFFFFFF) != 0
           || (*((_DWORD *)v50 + 3) & 0x7FFFFFFF) != 0
           || !*((_QWORD *)v50 + 8) )
      {
        v50 += 328;
        if ( v51 == v50 )
          goto LABEL_70;
      }
    }
    sub_A1FD80((__int64)&v107);
    goto LABEL_9;
  }
LABEL_10:
  v12 = &v7[328 * (unsigned int)v127];
  if ( v12 != v7 )
  {
    do
    {
      while ( 1 )
      {
        v12 -= 328;
        if ( v12[320] )
          break;
        sub_A09D30((__int64)(v12 + 16));
        if ( v12 == v7 )
          goto LABEL_13;
      }
      sub_A09CE0((__int64)(v12 + 200));
      sub_A09D30((__int64)(v12 + 16));
    }
    while ( v12 != v7 );
LABEL_13:
    v7 = (char *)ptr;
  }
  if ( v7 != v128 )
    free(v7);
  v90 = *(_DWORD *)(a3 + 8);
LABEL_17:
  v127 = 0;
  v128[0] = 0;
  v13 = *(_QWORD *)(a3 + 344);
  v130[1] = 0;
  v131 = 0;
  v14 = v13;
  v133 = 0;
  ptr = v128;
  v130[0] = &v131;
  if ( !BYTE4(v13) )
    v14 = v90;
  v134[0] = &v135;
  v129 &= 0xF0u;
  v91 = v14;
  v132 &= 0xF000u;
  v134[1] = 0;
  v135 = 0;
  v136[0] = &v137;
  v136[1] = 0;
  v137 = 0;
  memset(v138, 0, sizeof(v138));
  v139 &= 0xFCu;
  v142 = 0;
  if ( v90 )
  {
    v87 = 0;
    v15 = 0;
    v98 = 328LL * v14;
    while ( 1 )
    {
      v16 = (__int64 *)(*(_QWORD *)a3 + v87);
      v17 = *v16;
      v18 = *(_DWORD *)v16;
      v81 = v16[1];
      sub_9EE8A0((__int64)&ptr, (__int64)(v16 + 2));
      v129 = v16[6] & 0xF | v129 & 0xF0;
      sub_9EE8A0((__int64)v130, (__int64)(v16 + 7));
      v132 = v16[11] & 0xFFF | v132 & 0xF000;
      v133 = v16[12];
      sub_9EE8A0((__int64)v134, (__int64)(v16 + 13));
      sub_9EE8A0((__int64)v136, (__int64)(v16 + 17));
      v19 = (__int64)(v16 + 21);
      sub_A2FF50(v138, v16 + 21);
      v139 = v16[24] & 3 | v139 & 0xFC;
      if ( v142 )
        break;
      if ( !*((_BYTE *)v16 + 320) )
        goto LABEL_24;
      v19 = (__int64)(v16 + 25);
      sub_A11C70((__int64)v140, (__int64)(v16 + 25));
      v28 = *((_BYTE *)v16 + 312);
      v142 = 1;
      v22 = *(_BYTE *)(a1 + 289);
      v141 = v28 & 0x7F | v141 & 0x80;
      if ( v91 == v15 )
      {
LABEL_36:
        v22 ^= 1u;
        v23 = 0;
        goto LABEL_29;
      }
LABEL_25:
      v23 = 0;
      if ( v22 )
      {
        v22 = 0;
      }
      else if ( !v18 )
      {
        v23 = v22;
        if ( ((HIDWORD(v81) | (unsigned int)v81 | HIDWORD(v17)) & 0x7FFFFFFF) == 0 )
        {
          v23 = 1;
          v24 = (__int64 *)(*(_QWORD *)a3 + v98);
          v17 = *v24;
          v18 = *(_DWORD *)v24;
          v81 = v24[1];
        }
      }
LABEL_29:
      v25 = v22 & 1;
      v99.m128i_i64[1] = v81;
      v99.m128i_i64[0] = __PAIR64__(HIDWORD(v17), v18);
      v26 = _mm_load_si128(&v99);
      v101 = v26;
      LOBYTE(v100) = (2 * v23) | v25 | v100 & 0xFC;
      v27 = v100;
      v102 = v100;
      if ( (v139 & 1) != 0 )
      {
        v103 = v26;
        v104 = v100;
        v105 = v26;
        v106 = v100;
        v82 = v22;
        if ( (v100 & 1) != 0 )
        {
          v43 = (_QWORD *)sub_9C8850(v89);
          v45 = v44;
          v46 = v43;
          v47 = ((char *)v45 - (char *)v43) >> 5;
          v48 = v45 - v43;
          if ( v47 > 0 )
          {
            v48 = *v43;
            if ( *(_WORD *)(*v43 + 36LL) != 427 )
            {
              v48 = v43[1];
              if ( *(_WORD *)(v48 + 36) == 427 )
              {
                v45 = v43 + 1;
              }
              else
              {
                v48 = v43[2];
                if ( *(_WORD *)(v48 + 36) == 427 )
                {
                  v45 = v43 + 2;
                }
                else
                {
                  v48 = v43[3];
                  v49 = &v43[4 * v47];
                  if ( *(_WORD *)(v48 + 36) == 427 )
                  {
                    v45 = v43 + 3;
                  }
                  else
                  {
                    while ( 1 )
                    {
                      v43 = v46 + 4;
                      if ( v46 + 4 == v49 )
                      {
                        v48 = v45 - v49;
                        goto LABEL_56;
                      }
                      v48 = v46[4];
                      if ( *(_WORD *)(v48 + 36) == 427 )
                        goto LABEL_73;
                      v48 = v46[5];
                      if ( *(_WORD *)(v48 + 36) == 427 )
                      {
                        v45 = v46 + 5;
                        goto LABEL_74;
                      }
                      v48 = v46[6];
                      if ( *(_WORD *)(v48 + 36) == 427 )
                      {
                        v45 = v46 + 6;
                        goto LABEL_74;
                      }
                      v48 = v46[7];
                      if ( *(_WORD *)(v48 + 36) == 427 )
                        break;
                      v46 += 4;
                    }
                    v45 = v46 + 7;
                  }
                }
              }
              goto LABEL_74;
            }
LABEL_73:
            v45 = v43;
LABEL_74:
            v53 = sub_9C88C0(v89);
            v54 = v82;
            if ( (__int64 *)v53 != v45 )
            {
              v55 = v105.m128i_i64[0];
              v95 = v82;
              v84 = sub_B35EA0(*(_QWORD *)(a1 + 248), v105.m128i_i64[0], v105.m128i_i64[1], *v45, 1, 0);
              v60 = sub_B8C3D0(v89, v55, v56, v57, v58, v59);
              sub_1672BE0((__int64)v60, (__int64)v45);
              v48 = v84;
              sub_B8CC60(v89, v84, v61, v62, v63, v64);
              v54 = v95;
            }
            v85 = v54;
            v65 = sub_BA85D0(v89);
            v70 = v85;
            if ( v65 )
            {
              sub_BAC3D0(v65, v48, v66, v67, v68, v69);
              v70 = v85;
            }
            v71 = v97;
            v107 = 0;
            BYTE1(v71) = BYTE1(v97) & 0xFC;
            v86 = v70;
            v97 = v71;
            v72 = BYTE1(v71);
            v73 = v96;
            v109 = v109 & 0xFF000000 | 0x101A4;
            v74 = v72 & 1;
            BYTE1(v73) = BYTE1(v96) & 0xFC;
            v108 = 0;
            v96 = v73;
            HIBYTE(v109) = (2 * ((v73 & 0x200) != 0)) | v74 | HIBYTE(v109) & 0xFC;
            v75 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v74, v68, v69);
            sub_B15FA0(v75, *(_QWORD *)(a1 + 248), &v107);
            sub_B8CC60(v89, (__int64)v75, v76, v77, v78, v79);
            v22 = v86;
            goto LABEL_30;
          }
LABEL_56:
          if ( v48 != 2 )
          {
            if ( v48 != 3 )
            {
              if ( v48 != 1 )
                goto LABEL_74;
LABEL_59:
              if ( *(_WORD *)(*v43 + 36LL) == 427 )
                v45 = v43;
              goto LABEL_74;
            }
            if ( *(_WORD *)(*v43 + 36LL) == 427 )
              goto LABEL_73;
            ++v43;
          }
          if ( *(_WORD *)(*v43 + 36LL) == 427 )
            goto LABEL_73;
          ++v43;
          goto LABEL_59;
        }
        v29 = sub_BA85D0(v89);
        v34 = v82;
        if ( v29 )
        {
          sub_BAC3D0(v29, v19, v30, v31, v32, v33);
          v34 = v82;
        }
        v35 = v93;
        v36 = v92;
        v94 = v34;
        BYTE1(v35) = BYTE1(v93) & 0xFC;
        BYTE1(v36) = BYTE1(v92) & 0xFC;
        v107 = 0;
        v93 = v35;
        v92 = v36;
        v37 = BYTE1(v35) & 1;
        v109 = v109 & 0xFF000000 | 0x101A4;
        v108 = 0;
        HIBYTE(v109) = (2 * ((v36 & 0x200) != 0)) | v37 | HIBYTE(v109) & 0xFC;
        v83 = (__m128i *)sub_1672F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u, v37, v32, v33);
        sub_B15FA0(v83, *(_QWORD *)(a1 + 248), &v107);
        v38 = sub_B35EA0(*(_QWORD *)(a1 + 248), v105.m128i_i64[0], v105.m128i_i64[1], (__int64)v83, (v27 & 2) != 0, 0);
        sub_B8CC60(v89, v38, v39, v40, v41, v42);
        v22 = v94;
      }
LABEL_30:
      v101.m128i_i32[0] = v18;
      ++v15;
      LOBYTE(v102) = (2 * v23) | v22 & 1 | v102 & 0xFC;
      sub_1675F20(a1, v89 | 4, (__int64)&ptr, v25, v20, v21, (__int128)_mm_load_si128(&v101), v102);
      v87 += 328;
      if ( v15 == v90 )
      {
        if ( v142 )
          sub_A09CE0((__int64)v140);
        goto LABEL_33;
      }
    }
    if ( *((_BYTE *)v16 + 320) )
    {
      v19 = (__int64)(v16 + 25);
      sub_A2F670((__int64)v140, (__int64)(v16 + 25));
      v141 = v16[39] & 0x7F | v141 & 0x80;
    }
    else
    {
      v142 = 0;
      sub_A09CE0((__int64)v140);
    }
LABEL_24:
    v22 = *(_BYTE *)(a1 + 289);
    if ( v91 == v15 )
      goto LABEL_36;
    goto LABEL_25;
  }
LABEL_33:
  sub_A09D30((__int64)&ptr);
}

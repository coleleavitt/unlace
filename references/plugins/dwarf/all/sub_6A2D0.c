__int64 __fastcall sub_6A2D0(_QWORD *a1, unsigned __int64 a2, _QWORD *a3, __int64 *a4, __int64 *a5)
{
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned int v9; // ebx
  unsigned int v11; // eax
  unsigned __int64 v12; // r15
  int v13; // ecx
  __int64 v14; // r10
  _QWORD *v15; // r11
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 *v19; // r10
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r13
  __int64 v23; // rcx
  char stock_tinfo; // al
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r15
  const char *v28; // rcx
  const char *v29; // r15
  int v30; // eax
  const char *v31; // rsi
  char v32; // r15
  __int64 v33; // r13
  __int64 v34; // rax
  int v35; // eax
  __int64 *v36; // r10
  _QWORD *v37; // r11
  unsigned __int64 *v38; // rax
  const char *v39; // rsi
  _QWORD *v40; // rax
  bool v41; // zf
  __int64 v42; // rdx
  __int64 *v43; // r10
  int v44; // ecx
  _QWORD *v45; // r11
  int v46; // r13d
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r15
  __int64 v51; // rdi
  char v52; // al
  __int64 *v53; // r10
  _QWORD *v54; // r11
  __int16 v55; // ax
  __int64 v56; // rdx
  int v57; // r15d
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rdi
  _QWORD *v61; // [rsp+8h] [rbp-2C8h]
  __int64 v62; // [rsp+8h] [rbp-2C8h]
  _QWORD *v63; // [rsp+8h] [rbp-2C8h]
  __int64 v64; // [rsp+8h] [rbp-2C8h]
  _QWORD *v65; // [rsp+8h] [rbp-2C8h]
  char v66; // [rsp+17h] [rbp-2B9h]
  __int64 *v67; // [rsp+18h] [rbp-2B8h]
  __int64 *v68; // [rsp+18h] [rbp-2B8h]
  _QWORD *v69; // [rsp+18h] [rbp-2B8h]
  __int64 *v70; // [rsp+18h] [rbp-2B8h]
  _QWORD *v71; // [rsp+18h] [rbp-2B8h]
  __int64 *v72; // [rsp+18h] [rbp-2B8h]
  _QWORD *v73; // [rsp+20h] [rbp-2B0h]
  unsigned __int8 v74; // [rsp+20h] [rbp-2B0h]
  const char *v75; // [rsp+20h] [rbp-2B0h]
  __int64 v76; // [rsp+28h] [rbp-2A8h]
  _QWORD *v78; // [rsp+38h] [rbp-298h]
  bool v79; // [rsp+38h] [rbp-298h]
  __int64 *v80; // [rsp+38h] [rbp-298h]
  __int64 v81; // [rsp+38h] [rbp-298h]
  __int64 *v82; // [rsp+38h] [rbp-298h]
  _QWORD *v83; // [rsp+38h] [rbp-298h]
  _QWORD *v84; // [rsp+38h] [rbp-298h]
  __int64 v85; // [rsp+38h] [rbp-298h]
  _QWORD *v86; // [rsp+38h] [rbp-298h]
  _QWORD *v88; // [rsp+40h] [rbp-290h]
  _QWORD *v90; // [rsp+48h] [rbp-288h]
  __int64 v91; // [rsp+48h] [rbp-288h]
  __int64 v92; // [rsp+48h] [rbp-288h]
  __int64 *v93; // [rsp+48h] [rbp-288h]
  _QWORD *v94; // [rsp+48h] [rbp-288h]
  __int64 *v95; // [rsp+48h] [rbp-288h]
  char v96; // [rsp+48h] [rbp-288h]
  __int64 *v97; // [rsp+48h] [rbp-288h]
  __int64 *v98; // [rsp+48h] [rbp-288h]
  bool v99; // [rsp+48h] [rbp-288h]
  __int64 v100; // [rsp+48h] [rbp-288h]
  char v101; // [rsp+53h] [rbp-27Dh] BYREF
  char v102; // [rsp+54h] [rbp-27Ch] BYREF
  __int64 v103; // [rsp+58h] [rbp-278h] BYREF
  char v104; // [rsp+60h] [rbp-270h] BYREF
  char v105; // [rsp+68h] [rbp-268h] BYREF
  __int64 v106; // [rsp+70h] [rbp-260h] BYREF
  __int64 v107; // [rsp+78h] [rbp-258h] BYREF
  unsigned int v108; // [rsp+80h] [rbp-250h] BYREF
  __int64 v109; // [rsp+88h] [rbp-248h] BYREF
  __int128 v110; // [rsp+90h] [rbp-240h] BYREF
  __int64 v111; // [rsp+A0h] [rbp-230h] BYREF
  __int64 v112; // [rsp+A8h] [rbp-228h]
  unsigned __int64 v113; // [rsp+B0h] [rbp-220h] BYREF
  __int128 v114; // [rsp+B8h] [rbp-218h]
  _BYTE v115[32]; // [rsp+D0h] [rbp-200h] BYREF
  __m128i v116; // [rsp+F0h] [rbp-1E0h] BYREF
  __int64 v117; // [rsp+100h] [rbp-1D0h]
  int v118; // [rsp+108h] [rbp-1C8h]
  _OWORD v119[4]; // [rsp+110h] [rbp-1C0h] BYREF
  __int64 v120; // [rsp+150h] [rbp-180h]
  __int64 v121; // [rsp+160h] [rbp-170h] BYREF
  __int64 v122; // [rsp+168h] [rbp-168h]
  __m128i v123; // [rsp+240h] [rbp-90h] BYREF
  int v124; // [rsp+270h] [rbp-60h]
  __int64 v125; // [rsp+278h] [rbp-58h]
  __int128 v126; // [rsp+280h] [rbp-50h]
  unsigned __int64 v127; // [rsp+298h] [rbp-38h]

  v78 = a3;
  v127 = __readfsqword(0x28u);
  v7 = *a4;
  v110 = 0;
  v76 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 16) + 128LL) + 24LL);
  sub_945B0(a3, &v110, 64);
  sub_89A30(v115, a3[32], &v110);
  v8 = (unsigned __int64)v119;
  memset(v119, 0, sizeof(v119));
  v120 = 0;
  v9 = sub_851D0(v115, v119, a5);
  if ( !(_BYTE)v9 )
    goto LABEL_2;
  v113 = 0;
  v8 = a1[2];
  v114 = 0;
  v11 = sub_84600(v119, v8, &v113);
  v12 = v113;
  v9 = v11;
  if ( (_BYTE)v11 )
  {
    if ( (_QWORD)v114 == 2 )
    {
      if ( *(_BYTE *)(v113 + 72) == 6 )
      {
        v66 = v11;
LABEL_7:
        v13 = *(unsigned __int8 *)(v113 + 32);
        v14 = *(_QWORD *)(*v78 + 16LL);
        v15 = *(_QWORD **)(v14 + 168);
        v16 = *((_DWORD *)v15 + 604);
        if ( v16 == -1 || v16 + 112 != (unsigned __int8)v13 )
        {
          v17 = *((_DWORD *)v15 + 605);
          if ( v17 == -1 || v13 != v17 + 112 )
          {
            v8 = v113;
            v67 = *(__int64 **)(*v78 + 16LL);
            v73 = *(_QWORD **)(v14 + 168);
            v18 = sub_854B0(v73, v113);
            v15 = v73;
            if ( v18 != 1 )
            {
              v19 = v67;
              if ( *(_BYTE *)(v12 + 32) == 0x9C )
              {
                v106 = 0;
                v26 = a1[3];
                v74 = *(_BYTE *)(v26 + 224);
                if ( v74 )
                  goto LABEL_36;
                v27 = a1[1];
                if ( v27 )
                {
                  while ( 1 )
                  {
                    while ( 1 )
                    {
                      if ( (*(_BYTE *)(v27 + 16) & 0x10) == 0 )
                        goto LABEL_13;
                      if ( a4[28] != -1 && (a4[28] & 0x7FFFFFFFFFFFFFFFLL) != 0 )
                      {
                        v79 = a4[28] != -1 && (a4[28] & 0x7FFFFFFFFFFFFFFFLL) != 0;
                        v8 = (unsigned __int64)(v19 + 4);
                        v88 = v15;
                        v75 = (const char *)(v19 + 4);
                        v95 = v19;
                        v111 = sub_841F0(v19, v19 + 4, a4 + 28);
                        v43 = v95;
                        v44 = -1;
                        v45 = v88;
                        LOBYTE(v44) = v111 != -1 && (v111 & 0x7FFFFFFFFFFFFFFFLL) != 0;
                        v46 = v44;
                        if ( !(_BYTE)v44 )
                        {
                          v12 = v113;
                          v9 = v79;
                          goto LABEL_14;
                        }
                        v112 = v42;
                        while ( 1 )
                        {
                          v83 = v45;
                          v97 = v43;
                          sub_84A60(&v121);
                          v52 = sub_98E20(&v111, &v121);
                          v53 = v97;
                          v54 = v83;
                          if ( v52 )
                          {
                            v55 = sub_97BF0(&v121);
                            v53 = v97;
                            v54 = v83;
                            if ( v55 == 46 )
                              break;
                          }
                          v8 = (unsigned __int64)v75;
                          v84 = v54;
                          v98 = v53;
                          v111 = sub_841F0(v53, v75, &v111);
                          v112 = v56;
                          sub_1B750((__int64)&v121);
                          v43 = v98;
                          v45 = v84;
                          if ( (v111 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v111 == -1 )
                            goto LABEL_86;
                        }
                        v99 = v123.m128i_i64[0] != -1 && (v123.m128i_i64[0] & 0x7FFFFFFFFFFFFFFFLL) != 0;
                        if ( !v99 )
                        {
                          if ( under_debugger )
LABEL_100:
                            BUG();
                          interr(30478);
                        }
                        v86 = v54;
                        v58 = *(_QWORD *)(v121 + 16);
                        v116 = _mm_load_si128(&v123);
                        v117 = v58;
                        v118 = unk_ABD34;
                        v8 = *((unsigned int *)v54 + 604);
                        v59 = sub_85560(v54, v8);
                        if ( !v59 )
                        {
                          sub_1B750((__int64)&v121);
                          v12 = v113;
                          v9 = v99;
                          goto LABEL_14;
                        }
                        v100 = v59;
                        v60 = operator new(0x10u);
                        *(_QWORD *)v60 = 0;
                        v8 = (unsigned __int64)&v116;
                        *(_DWORD *)(v60 + 8) = 0;
                        *(_DWORD *)(v60 + 8) = *(_DWORD *)(v100 + 4);
                        *(_QWORD *)v60 = (int)sub_85520(v86, &v116, v27);
                        cleanup_argloc(a2);
                        if ( v60 )
                        {
                          *(_DWORD *)a2 = 5;
                          *(_QWORD *)(a2 + 8) = v60;
                        }
                        sub_1B750((__int64)&v121);
                        v23 = v100;
                        if ( !v66 )
                        {
LABEL_86:
                          v12 = v113;
                          v9 = v46;
                          goto LABEL_14;
                        }
                        goto LABEL_40;
                      }
                      if ( under_debugger )
                        goto LABEL_100;
                      v26 = interr(30478);
LABEL_36:
                      v61 = v15;
                      v68 = v19;
                      v28 = (char *)a5
                          + *(_QWORD *)(*(_QWORD *)(v26 + 72) + 184LL)
                          - *(_QWORD *)(*(_QWORD *)(v26 + 72) + 176LL);
                      a5 = &v106;
                      v29 = v28;
                      v8 = (unsigned __int64)v28;
                      v30 = (*(__int64 (__fastcall **)(_QWORD, const char *, __int64 *, char *, char *))(v78[32] + 432LL))(
                              *(_QWORD *)(v26 + 208),
                              v28,
                              &v103,
                              &v104,
                              &v105);
                      v19 = v68;
                      v15 = v61;
                      if ( !v30 )
                        break;
                      v27 = a1[1];
                      if ( !v27 )
                        goto LABEL_38;
                    }
                    v69 = v61;
                    v93 = v19;
                    v35 = (*(__int64 (__fastcall **)(__int64, const char *, char *, __int64 *, unsigned int *, __int64 *, __int64 *, __int64 *, char *, __m128i *, __int64 *))(v78[32] + 424LL))(
                            v103,
                            v29,
                            &v101,
                            &v107,
                            &v108,
                            &v109,
                            &v121,
                            &v111,
                            &v102,
                            &v116,
                            &v106);
                    v36 = v93;
                    v37 = v61;
                    if ( !v35 && !v101 )
                    {
                      v80 = v93;
                      v49 = sub_85560(v61, v108);
                      v37 = v61;
                      v36 = v93;
                      if ( v49 )
                      {
                        v124 = -2;
                        v8 = (unsigned __int64)src;
                        v125 = -1;
                        v126 = 0;
                        if ( *(_QWORD *)(v49 + 16) )
                          v8 = *(_QWORD *)(v49 + 8);
                        v62 = v49;
                        v96 = callui(1092, v8);
                        v36 = v80;
                        v37 = v69;
                        v23 = v62;
                        if ( v96 )
                        {
                          if ( v107 )
                          {
                            v81 = v62;
                            v63 = v69;
                            v70 = v36;
                            v50 = operator new(0x10u);
                            *(_QWORD *)v50 = 0;
                            *(_DWORD *)(v50 + 8) = 0;
                            *(_DWORD *)(v50 + 8) = *(_DWORD *)(v81 + 4);
                            *(_QWORD *)v50 = v109;
                            cleanup_argloc(a2);
                            v23 = v81;
                            v36 = v70;
                            v37 = v63;
                            if ( v50 )
                            {
                              *(_DWORD *)a2 = 5;
                              *(_QWORD *)(a2 + 8) = v50;
                            }
                          }
                          else
                          {
                            v65 = v69;
                            v72 = v80;
                            v57 = *(_DWORD *)(v23 + 4);
                            v85 = v23;
                            cleanup_argloc(a2);
                            v23 = v85;
                            v36 = v72;
                            v37 = v65;
                            *(_DWORD *)a2 = 3;
                            *(_DWORD *)(a2 + 8) = v57;
                          }
                          if ( v124 < -1 || (v51 = v125) == 0 )
                          {
LABEL_79:
                            if ( !v66 )
                            {
LABEL_38:
                              v12 = v113;
                              v9 = v74;
                              goto LABEL_14;
                            }
                            goto LABEL_40;
                          }
LABEL_78:
                          v82 = v36;
                          v64 = v23;
                          v71 = v37;
                          *(_QWORD *)&v126 = 0;
                          qfree(v51);
                          v36 = v82;
                          v37 = v71;
                          v23 = v64;
                          if ( v96 )
                            goto LABEL_79;
                          goto LABEL_55;
                        }
                        if ( v124 >= -1 )
                        {
                          v51 = v125;
                          if ( v125 )
                            goto LABEL_78;
                        }
                      }
                    }
LABEL_55:
                    v8 = (unsigned __int64)src;
                    v38 = (unsigned __int64 *)a1[3];
                    if ( v38[1] )
                      v8 = *v38;
                    v78 = v37;
                    a5 = v36;
                    sub_16F70();
                    v19 = a5;
                    v15 = v78;
                    v27 = a1[1];
                    if ( !v27 )
                      goto LABEL_38;
                  }
                }
              }
              goto LABEL_13;
            }
          }
        }
        v90 = v15;
        v8 = (unsigned int)sub_85470(v15, v12);
        v20 = sub_85560(v90, v8);
        if ( v20 )
        {
          v91 = v20;
          v21 = operator new(0x10u);
          *(_QWORD *)v21 = 0;
          v22 = v21;
          *(_DWORD *)(v21 + 8) = 0;
          *(_DWORD *)(v21 + 8) = *(_DWORD *)(v91 + 4);
          *(_QWORD *)v21 = *(_QWORD *)v12;
          cleanup_argloc(a2);
          v23 = v91;
          if ( v22 )
          {
            *(_DWORD *)a2 = 5;
            *(_QWORD *)(a2 + 8) = v22;
            if ( v66 )
              goto LABEL_21;
          }
          else if ( v66 )
          {
LABEL_40:
            if ( *(_DWORD *)a2 == 3 )
            {
              v124 = -2;
              v31 = src;
              v125 = -1;
              v126 = 0;
              if ( *(_QWORD *)(v23 + 16) )
                v31 = *(const char **)(v23 + 8);
              v32 = callui(1092, v31);
              v33 = -1;
              if ( v32 )
              {
                v33 = v125;
                v32 = v125 != -1;
              }
              if ( v124 >= -1 && v125 )
              {
                *(_QWORD *)&v126 = 0;
                qfree(v125);
              }
              goto LABEL_50;
            }
            if ( *(_DWORD *)a2 != 5 )
            {
              v8 = a2;
              v116.m128i_i32[0] = 0;
              copy_argloc(&v116, a2);
LABEL_24:
              if ( v116.m128i_i32[0] == 6 )
              {
                v8 = v116.m128i_u64[1];
                if ( v116.m128i_i64[1] != -1 && callui(1110, v116.m128i_i64[1]) == 8 )
                {
                  v121 = 0;
                  v122 = 0;
                  v47 = *(_QWORD *)(v76 + 16) & v111;
                  cleanup_argloc(&v121);
                  v48 = *(_QWORD *)(a2 + 8);
                  *(_QWORD *)(a2 + 8) = v47;
                  v122 = v48;
                  LODWORD(v48) = *(_DWORD *)a2;
                  *(_DWORD *)a2 = 6;
                  LODWORD(v121) = v48;
                  cleanup_argloc(&v121);
                }
              }
              cleanup_argloc(&v116);
              goto LABEL_13;
            }
LABEL_21:
            v92 = v23;
            v121 = 0;
            stock_tinfo = get_stock_tinfo(&v121, 7);
            v25 = v92;
            if ( !stock_tinfo )
            {
              clear_tinfo_t(&v121);
              v121 = 0;
              v122 = 0;
LABEL_23:
              v116.m128i_i32[0] = 0;
              v8 = (unsigned __int64)&v121;
              copy_argloc(&v116, &v121);
              cleanup_argloc(&v121);
              goto LABEL_24;
            }
            v124 = -2;
            v39 = src;
            v125 = -1;
            v40 = *(_QWORD **)(a2 + 8);
            v126 = 0;
            v41 = *(_QWORD *)(v92 + 16) == 0;
            v94 = v40;
            if ( !v41 )
              v39 = *(const char **)(v25 + 8);
            v32 = callui(1092, v39);
            v33 = -1;
            if ( v32 )
            {
              v33 = v125 + *v94;
              v32 = v33 != -1;
            }
            if ( v124 >= -1 && v125 )
            {
              *(_QWORD *)&v126 = 0;
              qfree(v125);
            }
            clear_tinfo_t(&v121);
LABEL_50:
            v121 = 0;
            v122 = 0;
            v34 = *(_QWORD *)(v76 + 16);
            if ( v34 != v33 && v32 )
            {
              LODWORD(v121) = 6;
              v122 = v33 & v34;
            }
            goto LABEL_23;
          }
        }
LABEL_13:
        v12 = v113;
        goto LABEL_14;
      }
    }
    else if ( (_QWORD)v114 == 1 )
    {
      v66 = 0;
      goto LABEL_7;
    }
    v9 = 0;
  }
LABEL_14:
  if ( v12 )
  {
    *(_QWORD *)&v114 = 0;
    qfree(v12);
  }
LABEL_2:
  sub_85110(v115, v8);
  sub_84A10(&v110);
  return v9;
}

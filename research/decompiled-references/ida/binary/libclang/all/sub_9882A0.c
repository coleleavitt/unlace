__int64 __fastcall sub_9882A0(__int64 a1, _DWORD *a2, unsigned __int8 a3)
{
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rax
  const __m128i *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __m128i *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // bl
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int64 v29; // rax
  _BYTE *v30; // rdx
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // rax
  _BYTE *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 *v62; // rsi
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rsi
  __int64 v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rax
  __int64 v80; // rsi
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rax
  __int64 v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rdx
  __int64 v91; // rsi
  __int64 v92; // rcx
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // [rsp+8h] [rbp-E0h]
  __int64 v96; // [rsp+8h] [rbp-E0h]
  _QWORD *v97; // [rsp+8h] [rbp-E0h]
  __int64 v98; // [rsp+8h] [rbp-E0h]
  _BYTE *v99; // [rsp+8h] [rbp-E0h]
  _WORD *v100; // [rsp+8h] [rbp-E0h]
  __int64 v101; // [rsp+8h] [rbp-E0h]
  __int64 v102; // [rsp+8h] [rbp-E0h]
  __int64 v103; // [rsp+8h] [rbp-E0h]
  __int64 v104; // [rsp+8h] [rbp-E0h]
  _DWORD *v105; // [rsp+8h] [rbp-E0h]
  _WORD *v106; // [rsp+8h] [rbp-E0h]
  _DWORD *v107; // [rsp+8h] [rbp-E0h]
  __int64 v108; // [rsp+8h] [rbp-E0h]
  _QWORD *v109; // [rsp+8h] [rbp-E0h]
  __int64 v110; // [rsp+8h] [rbp-E0h]
  __int64 v111; // [rsp+8h] [rbp-E0h]
  __int64 v112; // [rsp+8h] [rbp-E0h]
  __int64 v113; // [rsp+8h] [rbp-E0h]
  __int64 v114; // [rsp+8h] [rbp-E0h]
  __int64 v115; // [rsp+10h] [rbp-D8h]
  __int64 v116; // [rsp+10h] [rbp-D8h]
  __int64 v117; // [rsp+10h] [rbp-D8h]
  __int64 v118; // [rsp+10h] [rbp-D8h]
  __int64 v119; // [rsp+10h] [rbp-D8h]
  __int64 v120; // [rsp+10h] [rbp-D8h]
  __int64 v121; // [rsp+10h] [rbp-D8h]
  __int64 v122; // [rsp+10h] [rbp-D8h]
  __int64 v123; // [rsp+10h] [rbp-D8h]
  __int64 v124; // [rsp+10h] [rbp-D8h]
  __int64 v125; // [rsp+10h] [rbp-D8h]
  __int64 v126; // [rsp+10h] [rbp-D8h]
  __int64 v127; // [rsp+10h] [rbp-D8h]
  __int64 v128; // [rsp+10h] [rbp-D8h]
  const __m128i *v129; // [rsp+18h] [rbp-D0h]
  __int64 v130; // [rsp+18h] [rbp-D0h]
  __int64 v131; // [rsp+18h] [rbp-D0h]
  __int64 v132; // [rsp+18h] [rbp-D0h]
  __int64 v133; // [rsp+18h] [rbp-D0h]
  __int64 v134[3]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v135; // [rsp+48h] [rbp-A0h]
  unsigned int v136; // [rsp+50h] [rbp-98h]
  int v137; // [rsp+60h] [rbp-88h]
  __int64 v138[3]; // [rsp+70h] [rbp-78h] BYREF
  __int64 v139; // [rsp+88h] [rbp-60h]
  unsigned int v140; // [rsp+90h] [rbp-58h]
  int v141; // [rsp+A0h] [rbp-48h]

  v6 = (unsigned int)(**(_DWORD **)a1 + a2[2]);
  sub_A1C030(v134, *(_QWORD *)(*(_QWORD *)a1 + 24LL), v6, (unsigned int)v6);
  v7 = sub_8CA760(*(__int64 **)(*(_QWORD *)(a1 + 8) + 192LL), *(_QWORD *)(*(_QWORD *)a2 + 48LL));
  v8 = HIDWORD(v7);
  if ( BYTE4(v7) )
  {
    switch ( (int)v7 )
    {
      case 0:
        v39 = *(_QWORD *)(a1 + 16);
        v40 = (unsigned int)(*(_DWORD *)v39 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v39 + 24), v40, (unsigned int)v40);
        v101 = sub_8F63E0(v138);
        v34 = (_BYTE *)sub_8F63E0(v134);
        goto LABEL_30;
      case 1:
        v37 = *(_QWORD *)(a1 + 16);
        v38 = (unsigned int)(*(_DWORD *)v37 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v37 + 24), v38, (unsigned int)v38);
        v101 = sub_8F6BD0(v138);
        v34 = (_BYTE *)sub_8F6BD0(v134);
LABEL_30:
        v30 = (_BYTE *)v101;
        goto LABEL_27;
      case 2:
        v35 = *(_QWORD *)(a1 + 16);
        v36 = (unsigned int)(*(_DWORD *)v35 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v35 + 24), v36, (unsigned int)v36);
        v100 = (_WORD *)sub_8F6C20(v138);
        *(_WORD *)sub_8F6C20(v134) = *v100;
        goto LABEL_14;
      case 3:
        v53 = *(_QWORD *)(a1 + 16);
        v54 = (unsigned int)(*(_DWORD *)v53 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v53 + 24), v54, (unsigned int)v54);
        v106 = (_WORD *)sub_8F7430(v138);
        *(_WORD *)sub_8F7430(v134) = *v106;
        goto LABEL_14;
      case 4:
        v51 = *(_QWORD *)(a1 + 16);
        v52 = (unsigned int)(*(_DWORD *)v51 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v51 + 24), v52, (unsigned int)v52);
        v105 = (_DWORD *)sub_8F7480(v138);
        *(_DWORD *)sub_8F7480(v134) = *v105;
        goto LABEL_14;
      case 5:
        v55 = *(_QWORD *)(a1 + 16);
        v56 = (unsigned int)(*(_DWORD *)v55 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v55 + 24), v56, (unsigned int)v56);
        v107 = (_DWORD *)sub_8F7C70(v138);
        *(_DWORD *)sub_8F7C70(v134) = *v107;
        goto LABEL_14;
      case 6:
        v23 = *(_QWORD *)(a1 + 16);
        v24 = (unsigned int)(*(_DWORD *)v23 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v23 + 24), v24, (unsigned int)v24);
        v97 = (_QWORD *)sub_8F7CC0(v138);
        *(_QWORD *)sub_8F7CC0(v134) = *v97;
        goto LABEL_14;
      case 7:
        v73 = *(_QWORD *)(a1 + 16);
        v74 = (unsigned int)(*(_DWORD *)v73 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v73 + 24), v74, (unsigned int)v74);
        v109 = (_QWORD *)sub_8F84D0(v138);
        *(_QWORD *)sub_8F84D0(v134) = *v109;
        goto LABEL_14;
      case 8:
        v67 = *(_QWORD *)(a1 + 16);
        v68 = (unsigned int)(*(_DWORD *)v67 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v67 + 24), v68, (unsigned int)v68);
        v69 = sub_8F8520(v138);
        v70 = sub_8F8520(v134);
        if ( *(_DWORD *)(v70 + 8) <= 0x40u )
          goto LABEL_54;
        goto LABEL_55;
      case 9:
        v71 = *(_QWORD *)(a1 + 16);
        v72 = (unsigned int)(*(_DWORD *)v71 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v71 + 24), v72, (unsigned int)v72);
        v69 = sub_8F8D30(v138);
        v70 = sub_8F8D30(v134);
        if ( *(_DWORD *)(v70 + 8) > 0x40u )
          goto LABEL_55;
LABEL_54:
        if ( *(_DWORD *)(v69 + 8) <= 0x40u )
        {
          *(_QWORD *)v70 = *(_QWORD *)v69;
          *(_DWORD *)(v70 + 8) = *(_DWORD *)(v69 + 8);
        }
        else
        {
LABEL_55:
          sub_2585EA0(v70, v69);
        }
        goto LABEL_14;
      case 10:
        v25 = *(_QWORD *)(a1 + 16);
        v26 = (unsigned int)(*(_DWORD *)v25 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v25 + 24), v26, (unsigned int)v26);
        v27 = v138[0];
        v28 = v139;
        if ( v141
          || (v117 = v139, v98 = v138[0], v29 = sub_8E5480((__int64)v138), v27 = v98, v28 = v117, !*(_BYTE *)(v29 + 51))
          || (v30 = (_BYTE *)(v117 + v140 + 72), v140 != v98) )
        {
          v30 = (_BYTE *)(v28 + v27 + 40);
        }
        v31 = v135;
        v32 = v134[0];
        if ( v137
          || (v130 = v135,
              v118 = v134[0],
              v99 = v30,
              v33 = sub_8E5480((__int64)v134),
              v30 = v99,
              v32 = v118,
              v31 = v130,
              !*(_BYTE *)(v33 + 51))
          || (v34 = (_BYTE *)(v130 + v136 + 72), v136 != v118) )
        {
          v34 = (_BYTE *)(v31 + v32 + 40);
        }
LABEL_27:
        *v34 = *v30;
        goto LABEL_14;
      case 11:
        v85 = *(_QWORD *)(a1 + 16);
        v86 = (unsigned int)(*(_DWORD *)v85 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v85 + 24), v86, (unsigned int)v86);
        v87 = v138[0];
        v88 = v139;
        if ( v141
          || (v126 = v139, v112 = v138[0],
                           v89 = sub_8E5480((__int64)v138),
                           v87 = v112,
                           v88 = v126,
                           !*(_BYTE *)(v89 + 51))
          || (v90 = v126 + v112 + 72, v112 != v140) )
        {
          v90 = v88 + v87 + 40;
        }
        v91 = v135;
        v92 = v134[0];
        if ( v137
          || (v133 = v135,
              v127 = v134[0],
              v113 = v90,
              v93 = sub_8E5480((__int64)v134),
              v90 = v113,
              v92 = v127,
              v91 = v133,
              !*(_BYTE *)(v93 + 51))
          || (v94 = v133 + v127 + 72, v127 != v136) )
        {
          v94 = v91 + v92 + 40;
        }
        if ( *(_DWORD *)(v94 + 8) <= 0x40u && *(_DWORD *)(v90 + 8) <= 0x40u )
        {
          *(_QWORD *)v94 = *(_QWORD *)v90;
          *(_DWORD *)(v94 + 8) = *(_DWORD *)(v90 + 8);
        }
        else
        {
          v128 = v90;
          v114 = v94;
          sub_2585EA0(v94, v90);
          v90 = v128;
          v94 = v114;
        }
        *(_BYTE *)(v94 + 12) = *(_BYTE *)(v90 + 12);
        *(_DWORD *)(v94 + 16) = *(_DWORD *)(v90 + 16);
        goto LABEL_14;
      case 12:
        v57 = *(_QWORD *)(a1 + 16);
        v58 = (unsigned int)(*(_DWORD *)v57 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v57 + 24), v58, (unsigned int)v58);
        v59 = v138[0];
        v60 = v139;
        if ( v141
          || (v122 = v139, v108 = v138[0],
                           v61 = sub_8E5480((__int64)v138),
                           v59 = v108,
                           v60 = v122,
                           !*(_BYTE *)(v61 + 51))
          || (v62 = (__int64 *)(v122 + v140 + 72), v140 != v108) )
        {
          v62 = (__int64 *)(v60 + v59 + 40);
        }
        v63 = v135;
        v64 = v134[0];
        if ( v137
          || (v132 = v135, v123 = v134[0],
                           v65 = sub_8E5480((__int64)v134),
                           v64 = v123,
                           v63 = v132,
                           !*(_BYTE *)(v65 + 51))
          || (v66 = (__int64 *)(v132 + v123 + 72), v123 != v136) )
        {
          v66 = (__int64 *)(v63 + v64 + 40);
        }
        sub_9807A0(v66, v62, v64);
        goto LABEL_14;
      case 13:
        v75 = *(_QWORD *)(a1 + 16);
        v76 = (unsigned int)(*(_DWORD *)v75 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v75 + 24), v76, (unsigned int)v76);
        v77 = v138[0];
        v78 = v139;
        if ( v141
          || (v124 = v139, v110 = v138[0],
                           v79 = sub_8E5480((__int64)v138),
                           v77 = v110,
                           v78 = v124,
                           !*(_BYTE *)(v79 + 51))
          || (v80 = v124 + v110 + 72, v110 != v140) )
        {
          v80 = v78 + v77 + 40;
        }
        v81 = v135;
        v82 = v134[0];
        if ( v137
          || (v125 = v135, v111 = v134[0],
                           v83 = sub_8E5480((__int64)v134),
                           v82 = v111,
                           v81 = v125,
                           !*(_BYTE *)(v83 + 51))
          || (v84 = v125 + v111 + 72, v111 != v136) )
        {
          v84 = v81 + v82 + 40;
        }
        sub_A1C120(v84, v80, v82);
        goto LABEL_14;
      case 14:
        v10 = *(_QWORD *)(a1 + 16);
        v11 = (unsigned int)(*(_DWORD *)v10 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v10 + 24), v11, (unsigned int)v11);
        v12 = v138[0];
        v13 = v139;
        if ( v141
          || (v115 = v139, v95 = v138[0], v14 = sub_8E5480((__int64)v138), v12 = v95, v13 = v115, !*(_BYTE *)(v14 + 51))
          || (v15 = (const __m128i *)(v115 + v95 + 72), v95 != v140) )
        {
          v15 = (const __m128i *)(v13 + v12 + 40);
        }
        v16 = v135;
        v17 = v134[0];
        if ( v137
          || (v129 = v15,
              v116 = v135,
              v96 = v134[0],
              v18 = sub_8E5480((__int64)v134),
              v17 = v96,
              v16 = v116,
              v15 = v129,
              !*(_BYTE *)(v18 + 51))
          || (v19 = (__m128i *)(v116 + v96 + 72), v96 != v136) )
        {
          v19 = (__m128i *)(v16 + v17 + 40);
        }
        *v19 = _mm_loadu_si128(v15);
        v19[1].m128i_i8[0] = v15[1].m128i_i8[0];
        goto LABEL_14;
      case 15:
        v41 = *(_QWORD *)(a1 + 16);
        v42 = (unsigned int)(*(_DWORD *)v41 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v41 + 24), v42, (unsigned int)v42);
        v43 = v138[0];
        v44 = v139;
        if ( v141
          || (v119 = v138[0], v102 = v139,
                              v45 = sub_8E5480((__int64)v138),
                              v44 = v102,
                              v43 = v119,
                              !*(_BYTE *)(v45 + 51))
          || (v46 = v102 + v140 + 72, v140 != v119) )
        {
          v46 = v44 + v43 + 40;
        }
        v47 = v135;
        v48 = v134[0];
        if ( v137
          || (v131 = v134[0],
              v120 = v135,
              v103 = v46,
              v49 = sub_8E5480((__int64)v134),
              v46 = v103,
              v47 = v120,
              v48 = v131,
              !*(_BYTE *)(v49 + 51))
          || (v50 = v120 + v136 + 72, v136 != v131) )
        {
          v50 = v47 + v48 + 40;
        }
        v121 = v46;
        v104 = v50;
        sub_A1C120(v50, v46, v46);
        *(_QWORD *)(v104 + 56) = *(_QWORD *)(v121 + 56);
        *(_DWORD *)(v104 + 64) = *(_DWORD *)(v121 + 64);
LABEL_14:
        sub_A1C0C0(v138);
        v20 = *(_QWORD *)(a1 + 16);
        v21 = (unsigned int)(*(_DWORD *)v20 + a2[2]);
        sub_A1C030(v138, *(_QWORD *)(v20 + 24), v21, (unsigned int)v21);
        v22 = sub_A1C2E0(v138);
        sub_A1C0C0(v138);
        if ( v22 )
          sub_A1DB00(v134);
        if ( a3 )
          sub_A1C490(v134);
        break;
      default:
        break;
    }
  }
  else
  {
    sub_A1C030(
      v138,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 24LL),
      (unsigned int)(**(_DWORD **)(a1 + 16) + a2[2]),
      (unsigned int)(**(_DWORD **)(a1 + 16) + a2[2]));
    LODWORD(v8) = sub_988F10(*(_QWORD *)(a1 + 8), **(_QWORD **)(a1 + 24), v138, v134, a3);
    sub_A1C0C0(v138);
  }
  sub_A1C0C0(v134);
  return (unsigned int)v8;
}


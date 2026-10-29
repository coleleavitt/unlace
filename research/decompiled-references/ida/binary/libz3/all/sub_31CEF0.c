void __fastcall sub_31CEF0(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rsi
  const __m128i *v7; // r12
  __int8 v8; // si
  __m128i *v9; // rbx
  __int8 v10; // r9
  char v11; // di
  __m128i v12; // xmm0
  __int64 v13; // r11
  __int32 v14; // ecx
  char v15; // al
  __int8 v16; // dl
  __int64 v17; // r10
  __int8 v18; // r8
  char v19; // al
  __int32 v20; // edi
  __int64 v21; // r15
  __int32 v22; // edx
  __int32 v23; // esi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int8 v26; // di
  char v27; // di
  __int64 v28; // rsi
  __int64 v29; // rdx
  __int8 v30; // di
  char v31; // di
  __int64 v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rax
  unsigned int v36; // edx
  __int64 v37; // r13
  __int64 v38; // rsi
  __int64 v39; // rdi
  bool v40; // zf
  __m128 v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // r13
  int v45; // edx
  int v46; // esi
  __int64 v47; // rsi
  __int64 v48; // rdx
  char v49; // di
  char v50; // di
  __int64 v51; // rsi
  __int64 v52; // rdx
  char v53; // di
  char v54; // di
  __int64 *v55; // rbx
  __int64 *v56; // rdx
  __int64 *v57; // r15
  __int64 v58; // rsi
  __int64 v59; // rdi
  unsigned __int64 v60; // rdi
  __int64 v61; // rsi
  int v62; // eax
  char v63; // si
  int v64; // edx
  __int64 v65; // rax
  __int64 v66; // rdx
  char v67; // di
  char v68; // si
  __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rdi
  void *v72; // rbx
  __int64 v73; // rsi
  __int64 v74; // rdi
  void *v75; // rbx
  __int64 v76; // r9
  __int64 v77; // rax
  __int32 v78; // edi
  __int32 v79; // edx
  __int64 v80; // rdi
  __int64 v81; // rdx
  char v82; // r8
  __int8 v83; // r8
  __int64 v84; // rdi
  __int64 v85; // rdx
  char v86; // r8
  char v87; // r8
  __int64 v88; // [rsp+0h] [rbp-138h]
  __int64 v89; // [rsp+10h] [rbp-128h]
  void *v90; // [rsp+18h] [rbp-120h]
  __int64 v91; // [rsp+28h] [rbp-110h]
  bool v92; // [rsp+3Fh] [rbp-F9h]
  __int32 v93; // [rsp+50h] [rbp-E8h] BYREF
  char v94; // [rsp+54h] [rbp-E4h]
  __int64 v95; // [rsp+58h] [rbp-E0h]
  __int32 v96; // [rsp+60h] [rbp-D8h] BYREF
  char v97; // [rsp+64h] [rbp-D4h]
  __int64 v98; // [rsp+68h] [rbp-D0h]
  __int32 v99; // [rsp+70h] [rbp-C8h]
  __m128i v100; // [rsp+80h] [rbp-B8h] BYREF
  __int32 v101; // [rsp+90h] [rbp-A8h] BYREF
  char v102; // [rsp+94h] [rbp-A4h]
  __int64 v103; // [rsp+98h] [rbp-A0h]
  __int32 v104; // [rsp+A0h] [rbp-98h] BYREF
  char v105; // [rsp+A4h] [rbp-94h]
  __int64 v106; // [rsp+A8h] [rbp-90h]
  __int32 v107; // [rsp+B0h] [rbp-88h]
  __m128i v108; // [rsp+C0h] [rbp-78h]
  __int32 v109; // [rsp+D0h] [rbp-68h] BYREF
  char v110; // [rsp+D4h] [rbp-64h]
  __int64 v111; // [rsp+D8h] [rbp-60h]
  __int32 v112; // [rsp+E0h] [rbp-58h] BYREF
  char v113; // [rsp+E4h] [rbp-54h]
  __int64 v114; // [rsp+E8h] [rbp-50h]
  __int32 v115; // [rsp+F0h] [rbp-48h]

  v4 = a2 - a1;
  if ( v4 <= 56 )
    return;
  v5 = 0x6DB6DB6DB6DB6DB7LL * (v4 >> 3);
  v91 = (v5 - 2) / 2;
  v92 = (v5 & 1) == 0;
  v89 = (v5 - 1) >> 1;
  v7 = (const __m128i *)(a1 + 56 * v91);
  v88 = v91;
  while ( 1 )
  {
    v8 = v7[1].m128i_i8[4];
    v9 = (__m128i *)v7;
    v95 = 0;
    v10 = v8;
    v8 &= 2u;
    v10 &= 1u;
    v11 = v97 & 0xFC;
    v12 = _mm_loadu_si128(v7);
    v93 = v7[1].m128i_i32[0];
    v13 = v7[1].m128i_i64[1];
    v101 = v93;
    v14 = v7[2].m128i_i32[0];
    v94 = v8 | v10 | v94 & 0xFC;
    v15 = v102 & 0xFC;
    v16 = v7[2].m128i_i8[4];
    v17 = v7[2].m128i_i64[1];
    v7->m128i_i64[0] = 0;
    v96 = v14;
    v18 = v16;
    v16 &= 2u;
    v7[1].m128i_i64[1] = 0;
    v102 = v8 | v10 | v15;
    v18 &= 1u;
    v103 = v13;
    v19 = v105 & 0xFC;
    v7[2].m128i_i64[1] = 0;
    v97 = v16 | v18 | v11;
    v20 = v7[3].m128i_i32[0];
    v104 = v14;
    v105 = v16 | v18 | v19;
    v99 = v20;
    v106 = v17;
    v98 = 0;
    v100 = v12;
    v107 = v20;
    v21 = v88;
    if ( v88 < v89 )
    {
      while ( 1 )
      {
        v32 = 2 * (v21 + 1);
        v33 = a1 + 112 * (v21 + 1);
        v34 = v33 - 56;
        v35 = v33 - 56 + 16;
        if ( (*(_BYTE *)(v33 - 56 + 36) & 1) != 0
          || *(_DWORD *)(v34 + 32) != 1
          || (*(_BYTE *)(v33 + 36) & 1) != 0
          || *(_DWORD *)(v33 + 32) != 1 )
        {
          break;
        }
        if ( (*(_BYTE *)(v34 + 20) & 1) != 0 || (*(_BYTE *)(v33 + 20) & 1) != 0 )
        {
          v36 = (unsigned int)sub_182C7B0(qword_1C7F2C0, v35, v33 + 16) >> 31;
          v37 = a1 + 56 * v21;
          v38 = *(_QWORD *)v37;
          goto LABEL_9;
        }
        v37 = a1 + 56 * v21;
        v21 = v32 - (*(_DWORD *)(v34 + 16) < *(_DWORD *)(v33 + 16));
        v9 = (__m128i *)(a1 + 56 * v21);
        *(_QWORD *)v37 = v9->m128i_i64[0];
        v9->m128i_i64[0] = 0;
LABEL_5:
        v22 = *(_DWORD *)(v37 + 16);
        v23 = v9[1].m128i_i32[0];
        v9->m128i_i64[0] = 0;
        *(_DWORD *)(v37 + 16) = v23;
        v24 = v9[1].m128i_i64[1];
        v9[1].m128i_i32[0] = v22;
        v25 = *(_QWORD *)(v37 + 24);
        *(_QWORD *)(v37 + 24) = v24;
        v26 = v9[1].m128i_i8[4];
        v9[1].m128i_i64[1] = v25;
        LOBYTE(v25) = *(_BYTE *)(v37 + 20);
        *(_BYTE *)(v37 + 20) = v26 & 2 | v25 & 0xFD;
        LOBYTE(v25) = v25 & 2 | v9[1].m128i_i8[4] & 0xFD;
        v9[1].m128i_i8[4] = v25;
        v27 = *(_BYTE *)(v37 + 20);
        *(_BYTE *)(v37 + 20) = v25 & 1 | v27 & 0xFE;
        LODWORD(v24) = v9[2].m128i_i32[0];
        v9[1].m128i_i8[4] = v27 & 1 | v9[1].m128i_i8[4] & 0xFE;
        LODWORD(v25) = *(_DWORD *)(v37 + 32);
        *(_DWORD *)(v37 + 32) = v24;
        v28 = v9[2].m128i_i64[1];
        v9[2].m128i_i32[0] = v25;
        v29 = *(_QWORD *)(v37 + 40);
        *(_QWORD *)(v37 + 40) = v28;
        v30 = v9[2].m128i_i8[4];
        v9[2].m128i_i64[1] = v29;
        LOBYTE(v29) = *(_BYTE *)(v37 + 36);
        *(_BYTE *)(v37 + 36) = v30 & 2 | v29 & 0xFD;
        LOBYTE(v29) = v29 & 2 | v9[2].m128i_i8[4] & 0xFD;
        v9[2].m128i_i8[4] = v29;
        v31 = *(_BYTE *)(v37 + 36) & 1;
        *(_BYTE *)(v37 + 36) = v29 & 1 | *(_BYTE *)(v37 + 36) & 0xFE;
        v9[2].m128i_i8[4] = v31 | v9[2].m128i_i8[4] & 0xFE;
        *(_DWORD *)(v37 + 48) = v9[3].m128i_i32[0];
        if ( v89 <= v21 )
          goto LABEL_17;
      }
      LOBYTE(v36) = sub_1848D40(qword_1C7F2C0, v35, v33 + 16);
      v37 = a1 + 56 * v21;
      v38 = *(_QWORD *)v37;
LABEL_9:
      v21 = v32 - (unsigned __int8)v36;
      v9 = (__m128i *)(a1 + 56 * v21);
      *(_QWORD *)v37 = v9->m128i_i64[0];
      v9->m128i_i64[0] = v38;
      if ( v38 )
      {
        v39 = v9->m128i_i64[1];
        v40 = (*(_DWORD *)(v38 + 8))-- == 1;
        if ( v40 )
          sub_15D7BC0(v39, v38);
      }
      goto LABEL_5;
    }
LABEL_17:
    if ( v91 == v21 && v92 )
    {
      v76 = 14 * (v21 + 1);
      v21 = 2 * (v21 + 1) - 1;
      v77 = a1 + 8 * v76 - 56;
      v78 = *(_DWORD *)(v77 + 16);
      v9->m128i_i64[0] = *(_QWORD *)v77;
      v79 = v9[1].m128i_i32[0];
      *(_QWORD *)v77 = 0;
      v9[1].m128i_i32[0] = v78;
      v80 = *(_QWORD *)(v77 + 24);
      *(_DWORD *)(v77 + 16) = v79;
      v81 = v9[1].m128i_i64[1];
      v9[1].m128i_i64[1] = v80;
      v82 = *(_BYTE *)(v77 + 20);
      *(_QWORD *)(v77 + 24) = v81;
      LOBYTE(v81) = v9[1].m128i_i8[4];
      v9[1].m128i_i8[4] = v82 & 2 | v81 & 0xFD;
      LOBYTE(v81) = v81 & 2 | *(_BYTE *)(v77 + 20) & 0xFD;
      *(_BYTE *)(v77 + 20) = v81;
      v83 = v9[1].m128i_i8[4];
      v9[1].m128i_i8[4] = v81 & 1 | v83 & 0xFE;
      LODWORD(v80) = *(_DWORD *)(v77 + 32);
      *(_BYTE *)(v77 + 20) = v83 & 1 | *(_BYTE *)(v77 + 20) & 0xFE;
      LODWORD(v81) = v9[2].m128i_i32[0];
      v9[2].m128i_i32[0] = v80;
      v84 = *(_QWORD *)(v77 + 40);
      *(_DWORD *)(v77 + 32) = v81;
      v85 = v9[2].m128i_i64[1];
      v9[2].m128i_i64[1] = v84;
      v86 = *(_BYTE *)(v77 + 36);
      *(_QWORD *)(v77 + 40) = v85;
      LOBYTE(v85) = v9[2].m128i_i8[4];
      v9[2].m128i_i8[4] = v86 & 2 | v85 & 0xFD;
      LOBYTE(v85) = v85 & 2 | *(_BYTE *)(v77 + 36) & 0xFD;
      *(_BYTE *)(v77 + 36) = v85;
      v87 = v9[2].m128i_i8[4] & 1;
      v9[2].m128i_i8[4] = v85 & 1 | v9[2].m128i_i8[4] & 0xFE;
      *(_BYTE *)(v77 + 36) = v87 | *(_BYTE *)(v77 + 36) & 0xFE;
      v9[3].m128i_i32[0] = *(_DWORD *)(v77 + 48);
    }
    v41 = (__m128)_mm_load_si128(&v100);
    v100.m128i_i64[0] = 0;
    v109 = v101;
    v108 = (__m128i)v41;
    v110 = v102 & 3 | v110 & 0xFC;
    v42 = v103;
    v103 = 0;
    v111 = v42;
    v112 = v104;
    v113 = v105 & 3 | v113 & 0xFC;
    v43 = v106;
    v106 = 0;
    v114 = v43;
    v115 = v107;
    v44 = (v21 - 1) / 2;
    if ( v88 >= v21 )
    {
      a4 = _mm_movehl_ps(a4, v41);
      v60 = a4.m128_u64[0];
      v55 = (__int64 *)(a1 + 56 * v21);
      v61 = *v55;
LABEL_36:
      v108.m128i_i64[0] = v61;
      *v55 = v41.m128_u64[0];
      if ( v61 )
      {
        v40 = (*(_DWORD *)(v61 + 8))-- == 1;
        if ( v40 )
          sub_15D7BC0(v60, v61);
      }
    }
    else
    {
      while ( 1 )
      {
        v55 = (__int64 *)(a1 + 56 * v44);
        v56 = v55 + 2;
        if ( (v113 & 1) != 0 || v112 != 1 || (*((_BYTE *)v55 + 36) & 1) != 0 || *((_DWORD *)v55 + 8) != 1 )
        {
          if ( !(unsigned __int8)sub_1848D40(qword_1C7F2C0, &v109, v56) )
            goto LABEL_35;
        }
        else if ( (v110 & 1) != 0 || (*((_BYTE *)v55 + 20) & 1) != 0 )
        {
          if ( (int)sub_182C7B0(qword_1C7F2C0, &v109, v56) >= 0 )
          {
LABEL_35:
            v60 = v108.m128i_u64[1];
            v41.m128_u64[0] = v108.m128i_i64[0];
            v55 = (__int64 *)(a1 + 56 * v21);
            v61 = *v55;
            goto LABEL_36;
          }
        }
        else if ( v109 >= *((_DWORD *)v55 + 4) )
        {
          goto LABEL_35;
        }
        v57 = (__int64 *)(a1 + 56 * v21);
        v58 = *v57;
        *v57 = *v55;
        *v55 = v58;
        if ( v58 )
        {
          v59 = v55[1];
          v40 = (*(_DWORD *)(v58 + 8))-- == 1;
          if ( v40 )
            sub_15D7BC0(v59, v58);
        }
        v45 = *((_DWORD *)v57 + 4);
        v46 = *((_DWORD *)v55 + 4);
        *v55 = 0;
        *((_DWORD *)v57 + 4) = v46;
        v47 = v55[3];
        *((_DWORD *)v55 + 4) = v45;
        v48 = v57[3];
        v57[3] = v47;
        v49 = *((_BYTE *)v55 + 20);
        v55[3] = v48;
        LOBYTE(v48) = *((_BYTE *)v57 + 20);
        *((_BYTE *)v57 + 20) = v49 & 2 | v48 & 0xFD;
        LOBYTE(v48) = v48 & 2 | *((_BYTE *)v55 + 20) & 0xFD;
        *((_BYTE *)v55 + 20) = v48;
        v50 = *((_BYTE *)v57 + 20);
        *((_BYTE *)v57 + 20) = v48 & 1 | v50 & 0xFE;
        LODWORD(v47) = *((_DWORD *)v55 + 8);
        *((_BYTE *)v55 + 20) = v50 & 1 | *((_BYTE *)v55 + 20) & 0xFE;
        LODWORD(v48) = *((_DWORD *)v57 + 8);
        *((_DWORD *)v57 + 8) = v47;
        v51 = v55[5];
        *((_DWORD *)v55 + 8) = v48;
        v52 = v57[5];
        v57[5] = v51;
        v53 = *((_BYTE *)v55 + 36);
        v55[5] = v52;
        LOBYTE(v52) = *((_BYTE *)v57 + 36);
        *((_BYTE *)v57 + 36) = v53 & 2 | v52 & 0xFD;
        LOBYTE(v52) = v52 & 2 | *((_BYTE *)v55 + 36) & 0xFD;
        *((_BYTE *)v55 + 36) = v52;
        v54 = *((_BYTE *)v57 + 36) & 1;
        *((_BYTE *)v57 + 36) = v52 & 1 | *((_BYTE *)v57 + 36) & 0xFE;
        *((_BYTE *)v55 + 36) = v54 | *((_BYTE *)v55 + 36) & 0xFE;
        *((_DWORD *)v57 + 12) = *((_DWORD *)v55 + 12);
        v21 = v44;
        if ( v88 >= v44 )
          break;
        v44 = (v44 - 1) / 2;
      }
      *v55 = v108.m128i_i64[0];
    }
    v62 = *((_DWORD *)v55 + 4);
    v63 = *((_BYTE *)v55 + 20);
    v108.m128i_i64[0] = 0;
    v64 = v109;
    v109 = v62;
    v65 = v55[3];
    *((_DWORD *)v55 + 4) = v64;
    v66 = v111;
    v67 = v63 & 0xFD;
    v111 = v65;
    LOBYTE(v65) = v110;
    v55[3] = v66;
    LOBYTE(v66) = v65;
    LOBYTE(v65) = v65 & 0xFD;
    LOBYTE(v66) = v65 & 1 | v63 & 0xFC | v66 & 2;
    LOBYTE(v65) = v65 | v63 & 2;
    v68 = *((_BYTE *)v55 + 36);
    *((_BYTE *)v55 + 20) = v66;
    v110 = v67 & 1 | v65 & 0xFE;
    LODWORD(v65) = *((_DWORD *)v55 + 8);
    *((_DWORD *)v55 + 8) = v112;
    v112 = v65;
    v69 = v55[5];
    v55[5] = v114;
    v114 = v69;
    LOBYTE(v69) = v113 & 0xFD | v68 & 2;
    *((_BYTE *)v55 + 36) = v113 & 1 | v68 & 0xFC | v113 & 2;
    v113 = v68 & 1 | v69 & 0xFE;
    v90 = qword_1C7F2C0;
    *((_DWORD *)v55 + 12) = v115;
    sub_182CBA0(v90, &v109);
    sub_182CBA0(v90, &v112);
    v70 = v108.m128i_i64[0];
    if ( v108.m128i_i64[0] )
    {
      v71 = v108.m128i_i64[1];
      v40 = (*(_DWORD *)(v108.m128i_i64[0] + 8))-- == 1;
      if ( v40 )
        sub_15D7BC0(v71, v70);
    }
    v72 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v101);
    sub_182CBA0(v72, &v104);
    v73 = v100.m128i_i64[0];
    if ( v100.m128i_i64[0] )
    {
      v74 = v100.m128i_i64[1];
      v40 = (*(_DWORD *)(v100.m128i_i64[0] + 8))-- == 1;
      if ( v40 )
        break;
    }
    v75 = qword_1C7F2C0;
    if ( !v88 )
      goto LABEL_48;
LABEL_45:
    --v88;
    sub_182CBA0(v75, &v93);
    sub_182CBA0(v75, &v96);
    v7 = (const __m128i *)((char *)v7 - 56);
  }
  sub_15D7BC0(v74, v73);
  v75 = qword_1C7F2C0;
  if ( v88 )
    goto LABEL_45;
LABEL_48:
  sub_182CBA0(v75, &v93);
  sub_182CBA0(v75, &v96);
}


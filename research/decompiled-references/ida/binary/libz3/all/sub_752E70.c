void __fastcall sub_752E70(__int64 a1, int a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v5; // edx
  __int64 v6; // r12
  const __m128i *v7; // rbp
  void *v8; // rdi
  __int64 v9; // rax
  __int64 *v10; // r10
  int v11; // esi
  __int64 v12; // r11
  __int64 *v13; // rdi
  __int64 v14; // rdx
  __int64 *v15; // rcx
  __int64 *i; // rax
  __int64 v17; // rdx
  void *v18; // r15
  void *v19; // r13
  __int64 v20; // rcx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // r13
  void *v24; // rbp
  void *v25; // rbp
  __int64 v26; // rsi
  __int64 v27; // rax
  __int32 v28; // eax
  void *v29; // r13
  __int32 v30; // eax
  unsigned int v31; // r11d
  __int64 v32; // r9
  size_t v33; // r15
  int v34; // esi
  __int64 v35; // rax
  __int64 v36; // r11
  __int64 *v37; // rax
  __int64 v38; // r10
  unsigned __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rdx
  void *v42; // rbp
  void *v43; // rbp
  __int64 v44; // rax
  unsigned int v45; // ecx
  char *v46; // rdi
  unsigned int v47; // ecx
  __int64 v48; // rax
  char *v49; // rbp
  char *v50; // r13
  void *v51; // r12
  void *v52; // r12
  char *v53; // rsi
  int v54; // eax
  __int64 v55; // rax
  char v56; // dl
  char v57; // cl
  __int64 v58; // rax
  char v59; // dl
  char v60; // cl
  __int64 v61; // rax
  char v62; // dl
  char v63; // cl
  __int64 v64; // rax
  char v65; // dl
  char v66; // cl
  __int64 *v67; // rsi
  unsigned int v68; // edx
  int v69; // eax
  unsigned int v70; // eax
  unsigned int v71; // esi
  char *v72; // rdi
  __int64 v73; // rdx
  char *v74; // r15
  void *v75; // rbp
  void *v76; // rbp
  char *v77; // rsi
  __int64 v78; // rsi
  char *v79; // r12
  unsigned int v80; // ecx
  char *v81; // rdx
  unsigned int v82; // edi
  char *v83; // rax
  __int64 v84; // rbx
  char *v85; // rdi
  char *v86; // rbp
  char *v87; // r13
  void *v88; // r15
  void *v89; // r15
  char *v90; // rsi
  unsigned int v91; // ebx
  __int64 v92; // rbp
  unsigned __int64 v93; // [rsp+10h] [rbp-D8h]
  int v94; // [rsp+18h] [rbp-D0h]
  __int64 v95; // [rsp+18h] [rbp-D0h]
  __int64 v96; // [rsp+18h] [rbp-D0h]
  char *v97; // [rsp+18h] [rbp-D0h]
  unsigned int v98; // [rsp+20h] [rbp-C8h]
  unsigned int v99; // [rsp+20h] [rbp-C8h]
  __int64 v100; // [rsp+20h] [rbp-C8h]
  int ptr; // [rsp+28h] [rbp-C0h]
  unsigned int ptrb; // [rsp+28h] [rbp-C0h]
  char *ptra; // [rsp+28h] [rbp-C0h]
  __int64 v104; // [rsp+30h] [rbp-B8h]
  unsigned int v105; // [rsp+38h] [rbp-B0h]
  __int64 v106; // [rsp+40h] [rbp-A8h]
  __int8 v107; // [rsp+48h] [rbp-A0h]
  _BYTE v108[24]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v109; // [rsp+68h] [rbp-80h] BYREF
  __int64 v110; // [rsp+70h] [rbp-78h]
  __int64 v111; // [rsp+78h] [rbp-70h] BYREF
  __int64 v112; // [rsp+80h] [rbp-68h]
  __int64 v113; // [rsp+88h] [rbp-60h] BYREF
  __int64 v114; // [rsp+90h] [rbp-58h]
  __int64 v115; // [rsp+98h] [rbp-50h] BYREF
  __int64 v116; // [rsp+A0h] [rbp-48h]
  __int64 v117; // [rsp+A8h] [rbp-40h]

  v2 = *(_QWORD *)(a1 + 56);
  if ( !v2 )
    return;
  v3 = *(unsigned int *)(v2 - 4);
  if ( !(_DWORD)v3 )
    return;
  v105 = v3 - a2;
  if ( (_DWORD)v3 == a2 )
  {
    if ( !*(_DWORD *)(a1 + 92) && !*(_DWORD *)(a1 + 96) )
      goto LABEL_108;
    v78 = *(unsigned int *)(a1 + 88);
    v79 = *(char **)(a1 + 80);
    v80 = *(_DWORD *)(a1 + 88);
    v81 = &v79[112 * v78];
    if ( v79 == v81 )
      goto LABEL_104;
    v82 = v105;
    v83 = *(char **)(a1 + 80);
    do
    {
      if ( *(_QWORD *)v83 )
        *(_QWORD *)v83 = 0;
      else
        ++v82;
      v83 += 112;
    }
    while ( v81 != v83 );
    if ( v80 <= 0x10 || 3 * v80 >= 4 * v82 )
    {
LABEL_104:
      *(_QWORD *)(a1 + 92) = 0;
    }
    else
    {
      if ( v79 )
      {
        v86 = v79;
        v87 = &v79[112 * v78];
        do
        {
          v88 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v86 + 72);
          sub_182CBA0(v88, v86 + 88);
          v89 = qword_1C7F2C0;
          sub_182CBA0(qword_1C7F2C0, v86 + 40);
          v90 = v86 + 56;
          v86 += 112;
          sub_182CBA0(v89, v90);
        }
        while ( v86 != v87 );
        sub_186B220(v79);
        v80 = *(_DWORD *)(a1 + 88);
      }
      *(_QWORD *)(a1 + 80) = 0;
      v91 = v80 >> 1;
      *(_DWORD *)(a1 + 88) = v80 >> 1;
      v92 = sub_186B270(112LL * (v80 >> 1));
      sub_751C60(v92, v91);
      *(_QWORD *)(a1 + 80) = v92;
      v2 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 92) = 0;
      if ( !v2 )
        return;
    }
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
LABEL_108:
      v84 = v2 + 120 * v3;
      do
      {
        sub_25A130((char *)(v2 + 72));
        v85 = (char *)(v2 + 40);
        v2 += 120;
        sub_25A130(v85);
      }
      while ( v2 != v84 );
      v2 = *(_QWORD *)(a1 + 56);
    }
    *(_DWORD *)(v2 - 4) = 0;
    return;
  }
  v5 = v3 - 1;
  if ( (int)v3 - a2 >= (unsigned int)v3 )
    goto LABEL_19;
  v6 = 120LL * v5;
  v93 = 120 * (v5 - (unsigned __int64)(unsigned int)(a2 - 1));
  while ( 2 )
  {
    v7 = (const __m128i *)(v6 + v2);
    v8 = qword_1C7F2C0;
    v106 = v7->m128i_i64[0];
    if ( v7[7].m128i_i8[0] )
    {
      *(_QWORD *)&v108[16] = 0x100000000LL;
      *(_OWORD *)v108 = 0u;
      v109 = 0;
      v110 = 0;
      v111 = 1;
      v112 = 0;
      v113 = 0;
      v114 = 0;
      v115 = 1;
      v116 = 0;
      v117 = 0x100000000LL;
      sub_182CBA0(qword_1C7F2C0, &v111);
      BYTE4(v111) &= ~1u;
      BYTE4(v113) &= ~1u;
      LODWORD(v111) = 1;
      LODWORD(v113) = 0;
      sub_182CBA0(qword_1C7F2C0, &v115);
      v9 = *(unsigned int *)(a1 + 88);
      v10 = *(__int64 **)(a1 + 80);
      LODWORD(v115) = 1;
      BYTE4(v115) &= ~1u;
      BYTE4(v117) = 1;
      v11 = *(_DWORD *)(v106 + 12);
      v12 = 112LL * (v11 & (unsigned int)(v9 - 1));
      v13 = &v10[(unsigned __int64)v12 / 8];
      v14 = 112 * v9;
      v15 = &v10[14 * v9];
      i = &v10[(unsigned __int64)v12 / 8];
      if ( v12 != v14 )
      {
        do
        {
          v17 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v17 + 12) == v11 && v106 == v17 )
            {
LABEL_77:
              v67 = i + 14;
              if ( v15 == i + 14 )
                v67 = v10;
              v68 = *(_DWORD *)(a1 + 92) - 1;
              if ( *v67 )
              {
                *i = 1;
                v69 = *(_DWORD *)(a1 + 96);
                *(_DWORD *)(a1 + 92) = v68;
                v70 = v69 + 1;
                if ( v68 < 0x40 )
                  v68 = 64;
                *(_DWORD *)(a1 + 96) = v70;
                if ( v68 < v70 && !(unsigned __int8)sub_186AF10(v13) )
                {
                  v71 = *(_DWORD *)(a1 + 88);
                  v100 = sub_186B270(112LL * v71);
                  sub_751C60(v100, v71);
                  sub_75A420(*(_QWORD *)(a1 + 80), *(unsigned int *)(a1 + 88), v100, *(unsigned int *)(a1 + 88));
                  v72 = *(char **)(a1 + 80);
                  if ( v72 )
                  {
                    v73 = *(unsigned int *)(a1 + 88);
                    if ( (_DWORD)v73 )
                    {
                      ptra = *(char **)(a1 + 80);
                      v74 = ptra;
                      v97 = &v72[112 * v73];
                      do
                      {
                        v75 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, v74 + 72);
                        sub_182CBA0(v75, v74 + 88);
                        v76 = qword_1C7F2C0;
                        sub_182CBA0(qword_1C7F2C0, v74 + 40);
                        v77 = v74 + 56;
                        v74 += 112;
                        sub_182CBA0(v76, v77);
                      }
                      while ( v74 != v97 );
                      v72 = ptra;
                    }
                    sub_186B220(v72);
                  }
                  *(_DWORD *)(a1 + 96) = 0;
                  *(_QWORD *)(a1 + 80) = v100;
                }
              }
              else
              {
                *i = 0;
                *(_DWORD *)(a1 + 92) = v68;
              }
              goto LABEL_14;
            }
          }
          else if ( !v17 )
          {
            goto LABEL_14;
          }
          i += 14;
        }
        while ( v15 != i );
      }
      if ( v10 != v13 )
      {
        for ( i = v10; v13 != i; i += 14 )
        {
          v41 = *i;
          if ( (unsigned __int64)*i > 1 )
          {
            if ( *(_DWORD *)(v41 + 12) == v11 && v106 == v41 )
              goto LABEL_77;
          }
          else if ( !v41 )
          {
            break;
          }
        }
      }
LABEL_14:
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v113);
      sub_182CBA0(v18, &v115);
      v19 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v109);
      sub_182CBA0(v19, &v111);
      goto LABEL_15;
    }
    v107 = v7->m128i_i8[8];
    v27 = v7[2].m128i_i64[0];
    *(__m128i *)v108 = _mm_loadu_si128(v7 + 1);
    *(_QWORD *)&v108[16] = v27;
    v109 = 0;
    v110 = 0;
    v111 = 1;
    v112 = 0;
    if ( (v7[2].m128i_i8[12] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v109, &v7[2].m128i_u64[1]);
    else
      LODWORD(v109) = v7[2].m128i_i32[2];
    if ( (v7[3].m128i_i8[12] & 1) != 0 )
    {
      sub_182C690(v8, &v111, &v7[3].m128i_u64[1]);
    }
    else
    {
      v28 = v7[3].m128i_i32[2];
      BYTE4(v111) &= ~1u;
      LODWORD(v111) = v28;
    }
    v113 = 0;
    v29 = qword_1C7F2C0;
    v114 = 0;
    v115 = 1;
    v116 = 0;
    if ( (v7[4].m128i_i8[12] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, &v113, &v7[4].m128i_u64[1]);
    else
      LODWORD(v113) = v7[4].m128i_i32[2];
    if ( (v7[5].m128i_i8[12] & 1) != 0 )
    {
      sub_182C690(v29, &v115, &v7[5].m128i_u64[1]);
    }
    else
    {
      v30 = v7[5].m128i_i32[2];
      BYTE4(v115) &= ~1u;
      LODWORD(v115) = v30;
    }
    v31 = *(_DWORD *)(a1 + 88);
    LODWORD(v117) = v7[6].m128i_i32[2];
    BYTE4(v117) = v7[6].m128i_i8[12];
    if ( 3 * v31 < 4 * (*(_DWORD *)(a1 + 92) + *(_DWORD *)(a1 + 96)) )
    {
      ptr = 2 * v31;
      v94 = 2 * v31;
      v33 = 224LL * v31;
      v44 = sub_186B270(v33);
      v45 = v94;
      v95 = v44;
      v98 = v45;
      sub_751C60(v44, v45);
      sub_75A420(*(_QWORD *)(a1 + 80), *(unsigned int *)(a1 + 88), v95, v98);
      v46 = *(char **)(a1 + 80);
      v32 = v95;
      v47 = v98;
      v31 = ptr;
      if ( v46 )
      {
        v48 = *(unsigned int *)(a1 + 88);
        if ( (_DWORD)v48 )
        {
          v49 = *(char **)(a1 + 80);
          v104 = v6;
          v50 = &v46[112 * v48];
          do
          {
            v51 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v49 + 72);
            sub_182CBA0(v51, v49 + 88);
            v52 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, v49 + 40);
            v53 = v49 + 56;
            v49 += 112;
            sub_182CBA0(v52, v53);
          }
          while ( v49 != v50 );
          v32 = v95;
          v31 = ptr;
          v6 = v104;
          v47 = v98;
        }
        ptrb = v47;
        v99 = v31;
        v96 = v32;
        sub_186B220(v46);
        v32 = v96;
        v31 = v99;
        v47 = ptrb;
      }
      *(_QWORD *)(a1 + 80) = v32;
      *(_DWORD *)(a1 + 88) = v47;
      *(_DWORD *)(a1 + 96) = 0;
    }
    else
    {
      v32 = *(_QWORD *)(a1 + 80);
      v33 = 112LL * v31;
    }
    v34 = *(_DWORD *)(v106 + 12);
    v35 = 112LL * (v34 & (v31 - 1));
    v36 = v32 + v35;
    if ( v35 == v33 )
    {
      v38 = 0;
      while ( 1 )
      {
LABEL_45:
        if ( v36 == v32 )
        {
          sub_1872CE0("");
          sub_1873130(114, 405);
        }
        v40 = *(_QWORD *)v32;
        if ( *(_QWORD *)v32 > 1u )
        {
          if ( *(_DWORD *)(v40 + 12) == v34 && v106 == v40 )
          {
            *(_QWORD *)v32 = v106;
            *(_BYTE *)(v32 + 8) = v107;
            *(__m128i *)(v32 + 16) = _mm_load_si128((const __m128i *)v108);
            *(_QWORD *)(v32 + 29) = *(_QWORD *)&v108[13];
            sub_751900((int *)(v32 + 40), (int *)&v109);
            goto LABEL_58;
          }
        }
        else
        {
          if ( !v40 )
          {
            if ( v38 )
              --*(_DWORD *)(a1 + 96);
            else
              v38 = v32;
            *(_QWORD *)v38 = v106;
            *(_BYTE *)(v38 + 8) = v107;
            *(__m128i *)(v38 + 16) = _mm_load_si128((const __m128i *)v108);
            *(_QWORD *)(v38 + 29) = *(_QWORD *)&v108[13];
            sub_751900((int *)(v38 + 40), (int *)&v109);
            ++*(_DWORD *)(a1 + 92);
            goto LABEL_58;
          }
          v38 = v32;
        }
        v32 += 112;
      }
    }
    v37 = (__int64 *)(v32 + v35);
    v38 = 0;
    while ( 1 )
    {
      v39 = *v37;
      if ( (unsigned __int64)*v37 <= 1 )
        break;
      if ( *(_DWORD *)(v39 + 12) == v34 && v106 == v39 )
      {
        *v37 = v106;
        *((_BYTE *)v37 + 8) = v107;
        *((__m128i *)v37 + 1) = _mm_load_si128((const __m128i *)v108);
        *(__int64 *)((char *)v37 + 29) = *(_QWORD *)&v108[13];
        sub_751900((int *)v37 + 10, (int *)&v109);
        goto LABEL_58;
      }
LABEL_38:
      v37 += 14;
      if ( (__int64 *)(v32 + v33) == v37 )
        goto LABEL_45;
    }
    if ( v39 )
    {
      v38 = (__int64)v37;
      goto LABEL_38;
    }
    if ( v38 )
      --*(_DWORD *)(a1 + 96);
    else
      v38 = (__int64)v37;
    *(_QWORD *)v38 = v106;
    *(_BYTE *)(v38 + 8) = v107;
    *(__m128i *)(v38 + 16) = _mm_load_si128((const __m128i *)v108);
    *(_QWORD *)(v38 + 29) = *(_QWORD *)&v108[13];
    v54 = *(_DWORD *)(v38 + 40);
    *(_DWORD *)(v38 + 40) = v109;
    LODWORD(v109) = v54;
    v55 = *(_QWORD *)(v38 + 48);
    *(_QWORD *)(v38 + 48) = v110;
    v110 = v55;
    v56 = *(_BYTE *)(v38 + 44);
    *(_BYTE *)(v38 + 44) = BYTE4(v109) & 2 | v56 & 0xFD;
    BYTE4(v109) = v56 & 2 | BYTE4(v109) & 0xFD;
    v57 = *(_BYTE *)(v38 + 44);
    *(_BYTE *)(v38 + 44) = BYTE4(v109) & 1 | v57 & 0xFE;
    BYTE4(v109) = v57 & 1 | BYTE4(v109) & 0xFE;
    LODWORD(v55) = *(_DWORD *)(v38 + 56);
    *(_DWORD *)(v38 + 56) = v111;
    LODWORD(v111) = v55;
    v58 = *(_QWORD *)(v38 + 64);
    *(_QWORD *)(v38 + 64) = v112;
    v112 = v58;
    v59 = *(_BYTE *)(v38 + 60);
    *(_BYTE *)(v38 + 60) = BYTE4(v111) & 2 | v59 & 0xFD;
    BYTE4(v111) = v59 & 2 | BYTE4(v111) & 0xFD;
    v60 = *(_BYTE *)(v38 + 60);
    *(_BYTE *)(v38 + 60) = BYTE4(v111) & 1 | v60 & 0xFE;
    BYTE4(v111) = v60 & 1 | BYTE4(v111) & 0xFE;
    LODWORD(v58) = *(_DWORD *)(v38 + 72);
    *(_DWORD *)(v38 + 72) = v113;
    LODWORD(v113) = v58;
    v61 = *(_QWORD *)(v38 + 80);
    *(_QWORD *)(v38 + 80) = v114;
    v114 = v61;
    v62 = *(_BYTE *)(v38 + 76);
    *(_BYTE *)(v38 + 76) = BYTE4(v113) & 2 | v62 & 0xFD;
    BYTE4(v113) = v62 & 2 | BYTE4(v113) & 0xFD;
    v63 = *(_BYTE *)(v38 + 76) & 1;
    *(_BYTE *)(v38 + 76) = BYTE4(v113) & 1 | *(_BYTE *)(v38 + 76) & 0xFE;
    BYTE4(v113) = v63 | BYTE4(v113) & 0xFE;
    LODWORD(v61) = *(_DWORD *)(v38 + 88);
    *(_DWORD *)(v38 + 88) = v115;
    LODWORD(v115) = v61;
    v64 = *(_QWORD *)(v38 + 96);
    *(_QWORD *)(v38 + 96) = v116;
    v116 = v64;
    v65 = *(_BYTE *)(v38 + 92);
    *(_BYTE *)(v38 + 92) = BYTE4(v115) & 2 | v65 & 0xFD;
    BYTE4(v115) = v65 & 2 | BYTE4(v115) & 0xFD;
    v66 = *(_BYTE *)(v38 + 92) & 1;
    *(_BYTE *)(v38 + 92) = BYTE4(v115) & 1 | *(_BYTE *)(v38 + 92) & 0xFE;
    BYTE4(v115) = v66 | BYTE4(v115) & 0xFE;
    *(_DWORD *)(v38 + 104) = v117;
    *(_BYTE *)(v38 + 108) = BYTE4(v117);
    ++*(_DWORD *)(a1 + 92);
LABEL_58:
    v42 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v113);
    sub_182CBA0(v42, &v115);
    v43 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v109);
    sub_182CBA0(v43, &v111);
LABEL_15:
    v2 = *(_QWORD *)(a1 + 56);
    if ( v93 != v6 )
    {
      v6 -= 120;
      continue;
    }
    break;
  }
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
LABEL_19:
    v20 = 120LL * v105;
    v21 = v2 + v20;
    v22 = 120 * v3;
    v23 = v2 + v22;
    if ( v20 != v22 )
    {
      do
      {
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v21 + 72);
        sub_182CBA0(v24, v21 + 88);
        v25 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v21 + 40);
        v26 = v21 + 56;
        v21 += 120;
        sub_182CBA0(v25, v26);
      }
      while ( v23 != v21 );
      v2 = *(_QWORD *)(a1 + 56);
    }
    *(_DWORD *)(v2 - 4) = v105;
  }
}


/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D3180
// Address: 0x00000000000D3180

//----- (00000000000D3180) ----------------------------------------------------
char *__fastcall sub_D3180(__int64 a1)
{
  char *v2; // rax
  _BYTE *v3; // rcx
  unsigned __int64 v4; // rdx
  int v5; // esi
  _BYTE *v6; // rsi
  char *v7; // rax
  char *v8; // r15
  char *v9; // rcx
  char *v10; // rax
  char *v11; // rdx
  char *v12; // rax
  char *v13; // r14
  unsigned __int64 v14; // r8
  __int64 v15; // rcx
  unsigned __int64 v16; // rdx
  __int64 v17; // rsi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rbp
  char *v22; // rax
  char *v23; // rcx
  unsigned __int64 v24; // rsi
  unsigned __int8 v25; // dl
  __int64 v26; // rdi
  __int64 v27; // rbp
  char *v28; // rax
  char *v29; // rax
  char *v30; // r15
  char *v31; // rbp
  _BYTE *v32; // r13
  signed __int64 v33; // rbp
  char *v34; // rbx
  char *v35; // rax
  int v36; // ecx
  char *v37; // rax
  __int64 v38; // rbp
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  bool v43; // bp
  __int64 v44; // rax
  __int64 v45; // r15
  _QWORD *v46; // rbx
  _QWORD *v47; // rdx
  __int64 v48; // rcx
  unsigned __int64 v49; // rax
  _QWORD *v50; // rax
  __m128i v51; // xmm0
  const char *v52; // rax
  char *v53; // rax
  char *v54; // rax
  char *v55; // rsi
  char v56; // dl
  char v57; // cl
  char *v58; // rdx
  char *v59; // rax
  char *v60; // rcx
  char *v61; // r15
  _QWORD *v62; // rbx
  __int64 v63; // rcx
  _QWORD *v64; // rax
  _QWORD *v65; // rdx
  char *v66; // rax
  char *v67; // rbp
  char *v68; // rbx
  _BYTE *v69; // r13
  signed __int64 v70; // rbx
  char *v71; // r15
  char *v72; // rax
  unsigned __int8 v73; // al
  __int64 v74; // rcx
  const void *v75; // r13
  signed __int64 v76; // r15
  unsigned __int64 v77; // rbp
  __int64 v78; // rcx
  _QWORD *v79; // rax
  char *v80; // rbp
  _QWORD *v81; // rax
  char *v82; // rax
  _QWORD *v83; // rax
  _QWORD *v84; // rdx
  char *v85; // rax
  _QWORD *v86; // rax
  _QWORD *v87; // rdx
  char *v88; // rax
  _QWORD *v89; // rax
  _QWORD *v90; // rdx
  char *v91; // rax
  _QWORD *v92; // rax
  _QWORD *v93; // rdx
  char *v94; // rax
  _QWORD *v95; // rax
  _QWORD *v96; // rdx
  char *v97; // rax
  _QWORD *v98; // rax
  _QWORD *v99; // rdx
  __int64 v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rdx
  __m128i v103; // xmm0
  const char *v104; // rax
  _QWORD *v105; // rdx
  int v106; // eax
  char v107; // dl
  _QWORD *v108; // rax
  __int64 v109; // r15
  _QWORD *v110; // rax
  _QWORD *v111; // rdx
  char *v112; // rdx
  char *v113; // rsi
  unsigned int v114; // edi
  char *v115; // rdx
  _QWORD *v116; // rax
  _QWORD *v117; // rdx
  char *v118; // rax
  char *v119; // rbp
  _QWORD *v120; // rbx
  __int64 v121; // rcx
  _QWORD *v122; // rax
  _QWORD *v123; // rdx
  const void *v125; // r13
  signed __int64 v126; // r15
  unsigned __int64 v127; // rbp
  _QWORD *v128; // rbx
  __int64 v129; // rcx
  _QWORD *v130; // rax
  char *v131; // rbp
  _QWORD *v132; // rdx
  _QWORD *v133; // rax
  __int64 v134; // r15
  __int64 v135; // rcx
  _QWORD *v136; // rax
  _QWORD *v137; // rdx
  __int64 v138; // [rsp+8h] [rbp-80h]
  __int64 v139; // [rsp+8h] [rbp-80h]
  __int64 v140; // [rsp+8h] [rbp-80h]
  __int64 v141; // [rsp+8h] [rbp-80h]
  char *v142; // [rsp+10h] [rbp-78h]
  __int64 v143; // [rsp+20h] [rbp-68h]
  __int64 v144; // [rsp+20h] [rbp-68h]
  char *v145; // [rsp+28h] [rbp-60h]
  __int64 v146; // [rsp+30h] [rbp-58h]
  __int16 v147; // [rsp+38h] [rbp-50h] BYREF
  int v148; // [rsp+3Ch] [rbp-4Ch]
  char v149; // [rsp+40h] [rbp-48h]
  unsigned __int64 v150; // [rsp+48h] [rbp-40h]
  unsigned __int64 v151; // [rsp+50h] [rbp-38h]

  v151 = __readfsqword(0x28u);
  v2 = *(char **)a1;
  v3 = *(_BYTE **)(a1 + 8);
  v4 = (unsigned __int64)&v3[-*(_QWORD *)a1];
  if ( !v4 || (v5 = *v2, v5 != 84) && (_BYTE)v5 != 71 )
  {
    v147 = 0;
    v148 = 0;
    v149 = 0;
    v150 = (__int64)(*(_QWORD *)(a1 + 672) - *(_QWORD *)(a1 + 664)) >> 3;
    v12 = sub_D6270((char **)a1, &v147);
    if ( !v12 )
      return nullptr;
    v13 = v12;
    v14 = v150;
    v15 = *(_QWORD *)(a1 + 664);
    v16 = (*(_QWORD *)(a1 + 672) - v15) >> 3;
    if ( v150 < v16 )
    {
      v17 = *(_QWORD *)(a1 + 576);
      v18 = (*(_QWORD *)(a1 + 584) - v17) >> 3;
      v19 = v150;
      do
      {
        v20 = *(_QWORD *)(v15 + 8 * v19);
        v21 = *(_QWORD *)(v20 + 16);
        if ( v21 >= v18 )
          return nullptr;
        *(_QWORD *)(v20 + 24) = *(_QWORD *)(v17 + 8 * v21);
      }
      while ( ++v19 < v16 );
    }
    *(_QWORD *)(a1 + 672) = v15 + 8 * v14;
    v22 = *(char **)a1;
    v23 = *(char **)(a1 + 8);
    v24 = (unsigned __int64)&v23[-*(_QWORD *)a1];
    if ( !v24 )
      return v13;
    v25 = *v22 - 46;
    if ( v25 <= 0x31u )
    {
      v26 = 0x2000000800001LL;
      if ( _bittest64(&v26, v25) )
        return v13;
    }
    v27 = 0;
    if ( v24 < 0xD || *v22 != 85 )
    {
LABEL_72:
      v59 = nullptr;
      if ( !(_BYTE)v147 )
      {
        if ( HIBYTE(v147) )
        {
          v59 = sub_D4260(a1);
          if ( !v59 )
            return nullptr;
        }
      }
      v60 = *(char **)a1;
      if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v60 == 118 )
      {
        v61 = v59;
        *(_QWORD *)a1 = v60 + 1;
        v62 = *(_QWORD **)(a1 + 4832);
        v63 = v62[1];
        if ( (unsigned __int64)(v63 + 64) < 0xFF0 )
        {
          v65 = v62 + 1;
        }
        else
        {
          v64 = (_QWORD *)operator new[](0x1000u);
          *v64 = v62;
          v64[1] = 0;
          *(_QWORD *)(a1 + 4832) = v64;
          v63 = 0;
          v65 = v64 + 1;
          v62 = v64;
        }
        *v65 = v63 + 64;
        v106 = v148;
        v107 = v149;
        *(_DWORD *)((char *)v62 + v63 + 24) = 65555;
        *(_QWORD *)((char *)v62 + v63 + 16) = off_152F48;
        *(_QWORD *)((char *)v62 + v63 + 32) = v61;
        *(_QWORD *)((char *)v62 + v63 + 40) = v13;
        v13 = (char *)v62 + v63 + 16;
        *(_OWORD *)((char *)v62 + v63 + 48) = 0;
        *(_QWORD *)((char *)v62 + v63 + 64) = v27;
LABEL_132:
        *(_DWORD *)((char *)v62 + v63 + 72) = v106;
        *((_BYTE *)v62 + v63 + 76) = v107;
        return v13;
      }
      v145 = v59;
      v146 = v27;
      v139 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
      v142 = v13;
      while ( 1 )
      {
        v66 = sub_D4260(a1);
        if ( !v66 )
          return nullptr;
        v67 = v66;
        v68 = *(char **)(a1 + 24);
        if ( v68 == *(char **)(a1 + 32) )
        {
          v69 = *(_BYTE **)(a1 + 16);
          v70 = v68 - v69;
          v144 = v70 >> 2;
          if ( (_BYTE *)(a1 + 40) == v69 )
          {
            v72 = (char *)malloc(2 * v70);
            v71 = v72;
            if ( v70 )
              memmove(v72, v69, v70);
          }
          else
          {
            v71 = (char *)realloc(v69, 2 * v70);
          }
          *(_QWORD *)(a1 + 16) = v71;
          v68 = &v71[8 * (v70 >> 3)];
          *(_QWORD *)(a1 + 24) = v68;
          *(_QWORD *)(a1 + 32) = &v71[8 * v144];
          v13 = v142;
        }
        *(_QWORD *)(a1 + 24) = v68 + 8;
        *(_QWORD *)v68 = v67;
        if ( *(_QWORD *)(a1 + 8) == *(_QWORD *)a1 )
          break;
        v73 = **(_BYTE **)a1 - 46;
        if ( v73 <= 0x31u )
        {
          v74 = 0x2000000800001LL;
          if ( _bittest64(&v74, v73) )
            break;
        }
      }
      v140 = 8 * v139;
      v75 = (const void *)(v140 + *(_QWORD *)(a1 + 16));
      v76 = *(_QWORD *)(a1 + 24) - (_QWORD)v75;
      v77 = ((_DWORD)v76 + 15) & 0xFFFFFFF0;
      v62 = *(_QWORD **)(a1 + 4832);
      v78 = v62[1];
      if ( v78 + v77 < 0xFF0 )
      {
        v105 = v62 + 1;
      }
      else
      {
        if ( v77 >= 0xFF1 )
        {
          v79 = (_QWORD *)operator new[](v77 + 16);
          *v79 = *v62;
          v79[1] = 0;
          *v62 = v79;
          v80 = (char *)(v79 + 2);
          if ( !v76 )
            goto LABEL_128;
          goto LABEL_127;
        }
        v108 = (_QWORD *)operator new[](0x1000u);
        *v108 = v62;
        v108[1] = 0;
        *(_QWORD *)(a1 + 4832) = v108;
        v78 = 0;
        v105 = v108 + 1;
        v62 = v108;
      }
      *v105 = v78 + v77;
      v80 = (char *)v62 + v78 + 16;
      if ( !v76 )
      {
LABEL_128:
        v109 = v76 >> 3;
        *(_QWORD *)(a1 + 24) = v75;
        v63 = v62[1];
        if ( (unsigned __int64)(v63 + 64) < 0xFF0 )
        {
          v111 = v62 + 1;
        }
        else
        {
          v110 = (_QWORD *)operator new[](0x1000u);
          *v110 = v62;
          v110[1] = 0;
          *(_QWORD *)(a1 + 4832) = v110;
          v63 = 0;
          v111 = v110 + 1;
          v62 = v110;
        }
        *v111 = v63 + 64;
        v106 = v148;
        v107 = v149;
        *(_DWORD *)((char *)v62 + v63 + 24) = 65555;
        *(_QWORD *)((char *)v62 + v63 + 16) = off_152F48;
        *(_QWORD *)((char *)v62 + v63 + 32) = v145;
        *(_QWORD *)((char *)v62 + v63 + 40) = v13;
        v13 = (char *)v62 + v63 + 16;
        *(_QWORD *)((char *)v62 + v63 + 48) = v80;
        *(_QWORD *)((char *)v62 + v63 + 56) = v109;
        *(_QWORD *)((char *)v62 + v63 + 64) = v146;
        goto LABEL_132;
      }
LABEL_127:
      memmove(v80, v75, v76);
      v75 = (const void *)(*(_QWORD *)(a1 + 16) + v140);
      v62 = *(_QWORD **)(a1 + 4832);
      goto LABEL_128;
    }
    if ( v22[1] != 97
      || v22[2] != 57
      || v22[3] != 101
      || v22[4] != 110
      || v22[5] != 97
      || v22[6] != 98
      || v22[7] != 108
      || v22[8] != 101 )
    {
      v27 = 0;
      goto LABEL_72;
    }
    if ( v22[9] != 95 || v22[10] != 105 || v22[11] != 102 || v22[12] != 73 )
    {
      v27 = 0;
      goto LABEL_72;
    }
    v28 = v22 + 13;
    *(_QWORD *)a1 = v28;
    v138 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
    if ( v28 == v23 )
      goto LABEL_38;
LABEL_35:
    if ( *v28 != 69 )
    {
LABEL_38:
      while ( 1 )
      {
        v29 = sub_D72F0(a1, v24);
        if ( !v29 )
          return nullptr;
        v30 = v29;
        v31 = *(char **)(a1 + 24);
        if ( v31 == *(char **)(a1 + 32) )
        {
          v32 = *(_BYTE **)(a1 + 16);
          v33 = v31 - v32;
          v143 = v33 >> 2;
          v24 = 2 * v33;
          if ( (_BYTE *)(a1 + 40) == v32 )
          {
            v35 = (char *)malloc(2 * v33);
            v34 = v35;
            if ( v33 )
            {
              v24 = (unsigned __int64)v32;
              memmove(v35, v32, v33);
            }
          }
          else
          {
            v34 = (char *)realloc(v32, v24);
          }
          *(_QWORD *)(a1 + 16) = v34;
          v31 = &v34[8 * (v33 >> 3)];
          *(_QWORD *)(a1 + 24) = v31;
          *(_QWORD *)(a1 + 32) = &v34[8 * v143];
        }
        *(_QWORD *)(a1 + 24) = v31 + 8;
        *(_QWORD *)v31 = v30;
        v28 = *(char **)a1;
        if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
          goto LABEL_35;
      }
    }
    *(_QWORD *)a1 = v28 + 1;
    v141 = 8 * v138;
    v125 = (const void *)(v141 + *(_QWORD *)(a1 + 16));
    v126 = *(_QWORD *)(a1 + 24) - (_QWORD)v125;
    v127 = ((_DWORD)v126 + 15) & 0xFFFFFFF0;
    v128 = *(_QWORD **)(a1 + 4832);
    v129 = v128[1];
    if ( v129 + v127 < 0xFF0 )
    {
      v132 = v128 + 1;
    }
    else
    {
      if ( v127 >= 0xFF1 )
      {
        v130 = (_QWORD *)operator new[](v127 + 16);
        *v130 = *v128;
        v130[1] = 0;
        *v128 = v130;
        v131 = (char *)(v130 + 2);
        if ( !v126 )
          goto LABEL_186;
        goto LABEL_185;
      }
      v133 = (_QWORD *)operator new[](0x1000u);
      *v133 = v128;
      v133[1] = 0;
      *(_QWORD *)(a1 + 4832) = v133;
      v129 = 0;
      v132 = v133 + 1;
      v128 = v133;
    }
    *v132 = v129 + v127;
    v131 = (char *)v128 + v129 + 16;
    if ( !v126 )
    {
LABEL_186:
      v134 = v126 >> 3;
      *(_QWORD *)(a1 + 24) = v125;
      v135 = v128[1];
      if ( (unsigned __int64)(v135 + 32) < 0xFF0 )
      {
        v137 = v128 + 1;
      }
      else
      {
        v136 = (_QWORD *)operator new[](0x1000u);
        *v136 = v128;
        v136[1] = 0;
        *(_QWORD *)(a1 + 4832) = v136;
        v135 = 0;
        v137 = v136 + 1;
        v128 = v136;
      }
      *v137 = v135 + 32;
      *(_DWORD *)((char *)v128 + v135 + 24) = 16843017;
      *(_QWORD *)((char *)v128 + v135 + 16) = off_152ED8;
      *(_QWORD *)((char *)v128 + v135 + 32) = v131;
      v27 = (__int64)v128 + v135 + 16;
      *(_QWORD *)((char *)v128 + v135 + 40) = v134;
      goto LABEL_72;
    }
LABEL_185:
    memmove(v131, v125, v126);
    v125 = (const void *)(*(_QWORD *)(a1 + 16) + v141);
    v128 = *(_QWORD **)(a1 + 4832);
    goto LABEL_186;
  }
  if ( v5 == 71 )
  {
    if ( v4 < 2 )
      return nullptr;
    v36 = v2[1];
    if ( v36 != 82 )
    {
      if ( v36 != 86 )
        return nullptr;
      *(_QWORD *)a1 = v2 + 2;
      v13 = nullptr;
      v37 = sub_D6270((char **)a1, nullptr);
      if ( v37 )
      {
        v38 = (__int64)v37;
        v39 = *(_QWORD **)(a1 + 4832);
        v40 = v39[1];
        if ( (unsigned __int64)(v40 + 48) < 0xFF0 )
        {
          v42 = v39 + 1;
        }
        else
        {
          v41 = (_QWORD *)operator new[](0x1000u);
          *v41 = v39;
          v41[1] = 0;
          *(_QWORD *)(a1 + 4832) = v41;
          v40 = 0;
          v42 = v41 + 1;
          v39 = v41;
        }
        *v42 = v40 + 48;
        v13 = (char *)v39 + v40 + 16;
        *(_DWORD *)((char *)v39 + v40 + 24) = 16843029;
        *(_QWORD *)v13 = off_1518C8;
        v103 = (__m128i)(unsigned __int64)"";
        v104 = "guard variable for ";
LABEL_174:
        *(__m128i *)((char *)v39 + v40 + 32) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v104, v103);
        *(_QWORD *)((char *)v39 + v40 + 48) = v38;
      }
      return v13;
    }
    *(_QWORD *)a1 = v2 + 2;
    v13 = nullptr;
    v53 = sub_D6270((char **)a1, nullptr);
    if ( !v53 )
      return v13;
    v45 = (__int64)v53;
    v54 = *(char **)a1;
    v55 = *(char **)(a1 + 8);
    v56 = 1;
    if ( v55 != *(char **)a1 )
    {
      v57 = *v54;
      if ( *v54 >= 48 && (v57 < 58 || (unsigned __int8)(v57 - 65) <= 0x19u) )
      {
        v58 = v54 + 1;
        while ( 1 )
        {
          v54 = v58;
          if ( v57 >= 58 && (unsigned __int8)(v57 - 65) > 0x19u )
            break;
          *(_QWORD *)a1 = v58;
          if ( v55 != v58 )
          {
            v57 = *v58++;
            if ( v57 > 47 )
              continue;
          }
          goto LABEL_153;
        }
        v54 = v58 - 1;
LABEL_153:
        v56 = 0;
      }
    }
    if ( v54 == v55 || *v54 != 95 )
    {
      if ( !v56 )
        return nullptr;
    }
    else
    {
      *(_QWORD *)a1 = v54 + 1;
    }
    v46 = *(_QWORD **)(a1 + 4832);
    v48 = v46[1];
    if ( (unsigned __int64)(v48 + 48) < 0xFF0 )
    {
      v117 = v46 + 1;
    }
    else
    {
      v116 = (_QWORD *)operator new[](0x1000u);
      *v116 = v46;
      v116[1] = 0;
      *(_QWORD *)(a1 + 4832) = v116;
      v48 = 0;
      v117 = v116 + 1;
      v46 = v116;
    }
    *v117 = v48 + 48;
    v13 = (char *)v46 + v48 + 16;
    *(_DWORD *)((char *)v46 + v48 + 24) = 16843029;
    *(_QWORD *)v13 = off_1518C8;
    v51 = (__m128i)(unsigned __int64)"";
    v52 = "reference temporary for ";
LABEL_162:
    *(__m128i *)((char *)v46 + v48 + 32) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v52, v51);
    *(_QWORD *)((char *)v46 + v48 + 48) = v45;
    return v13;
  }
  v6 = v2 + 1;
  if ( v4 < 2 )
  {
LABEL_51:
    *(_QWORD *)a1 = v6;
    v43 = v3 != v6 && *v6 == 118;
    if ( sub_D7620((char **)a1) )
      return nullptr;
    v44 = sub_D3180(a1, v6);
    if ( !v44 )
      return nullptr;
    v45 = v44;
    v46 = *(_QWORD **)(a1 + 4832);
    v47 = v46 + 1;
    v48 = v46[1];
    v49 = v48 + 48;
    if ( v43 )
    {
      if ( v49 >= 0xFF0 )
      {
        v50 = (_QWORD *)operator new[](0x1000u);
        *v50 = v46;
        v50[1] = 0;
        *(_QWORD *)(a1 + 4832) = v50;
        v48 = 0;
        v47 = v50 + 1;
        v46 = v50;
      }
      *v47 = v48 + 48;
      v13 = (char *)v46 + v48 + 16;
      *(_DWORD *)((char *)v46 + v48 + 24) = 16843029;
      *(_QWORD *)v13 = off_1518C8;
      v51 = (__m128i)(unsigned __int64)"";
      v52 = "virtual thunk to ";
    }
    else
    {
      if ( v49 >= 0xFF0 )
      {
        v81 = (_QWORD *)operator new[](0x1000u);
        *v81 = v46;
        v81[1] = 0;
        *(_QWORD *)(a1 + 4832) = v81;
        v48 = 0;
        v47 = v81 + 1;
        v46 = v81;
      }
      *v47 = v48 + 48;
      v13 = (char *)v46 + v48 + 16;
      *(_DWORD *)((char *)v46 + v48 + 24) = 16843029;
      *(_QWORD *)v13 = off_1518C8;
      v51 = (__m128i)(unsigned __int64)"";
      v52 = "non-virtual thunk to ";
    }
    goto LABEL_162;
  }
  switch ( *v6 )
  {
    case 'C':
      *(_QWORD *)a1 = v2 + 2;
      v7 = sub_D4260(a1);
      if ( !v7 )
        return nullptr;
      v8 = v7;
      v9 = *(char **)a1;
      v10 = *(char **)(a1 + 8);
      if ( *(char **)a1 == v10 )
      {
        v11 = *(char **)a1;
      }
      else
      {
        v11 = *(char **)a1;
        if ( *v9 == 110 )
        {
          v11 = v9 + 1;
          *(_QWORD *)a1 = v9 + 1;
          if ( v9 + 1 == v10 )
            return nullptr;
          goto LABEL_147;
        }
      }
      if ( v11 == v10 )
        return nullptr;
LABEL_147:
      if ( (unsigned int)(*v11 - 48) > 9 )
        return nullptr;
      v112 = v11 + 1;
      break;
    case 'H':
      *(_QWORD *)a1 = v2 + 2;
      v13 = nullptr;
      v82 = sub_D6270((char **)a1, nullptr);
      if ( !v82 )
        return v13;
      v38 = (__int64)v82;
      v39 = *(_QWORD **)(a1 + 4832);
      v40 = v39[1];
      if ( (unsigned __int64)(v40 + 48) < 0xFF0 )
      {
        v84 = v39 + 1;
      }
      else
      {
        v83 = (_QWORD *)operator new[](0x1000u);
        *v83 = v39;
        v83[1] = 0;
        *(_QWORD *)(a1 + 4832) = v83;
        v40 = 0;
        v84 = v83 + 1;
        v39 = v83;
      }
      *v84 = v40 + 48;
      v13 = (char *)v39 + v40 + 16;
      *(_DWORD *)((char *)v39 + v40 + 24) = 16843029;
      *(_QWORD *)v13 = off_1518C8;
      v103 = (__m128i)(unsigned __int64)"";
      v104 = "thread-local initialization routine for ";
      goto LABEL_174;
    case 'I':
      *(_QWORD *)a1 = v2 + 2;
      v85 = sub_D4260(a1);
      if ( !v85 )
        return nullptr;
      v38 = (__int64)v85;
      v39 = *(_QWORD **)(a1 + 4832);
      v40 = v39[1];
      if ( (unsigned __int64)(v40 + 48) < 0xFF0 )
      {
        v87 = v39 + 1;
      }
      else
      {
        v86 = (_QWORD *)operator new[](0x1000u);
        *v86 = v39;
        v86[1] = 0;
        *(_QWORD *)(a1 + 4832) = v86;
        v40 = 0;
        v87 = v86 + 1;
        v39 = v86;
      }
      *v87 = v40 + 48;
      v13 = (char *)v39 + v40 + 16;
      *(_DWORD *)((char *)v39 + v40 + 24) = 16843029;
      *(_QWORD *)v13 = off_1518C8;
      v103 = (__m128i)(unsigned __int64)"";
      v104 = "typeinfo for ";
      goto LABEL_174;
    case 'S':
      *(_QWORD *)a1 = v2 + 2;
      v88 = sub_D4260(a1);
      if ( !v88 )
        return nullptr;
      v38 = (__int64)v88;
      v39 = *(_QWORD **)(a1 + 4832);
      v40 = v39[1];
      if ( (unsigned __int64)(v40 + 48) < 0xFF0 )
      {
        v90 = v39 + 1;
      }
      else
      {
        v89 = (_QWORD *)operator new[](0x1000u);
        *v89 = v39;
        v89[1] = 0;
        *(_QWORD *)(a1 + 4832) = v89;
        v40 = 0;
        v90 = v89 + 1;
        v39 = v89;
      }
      *v90 = v40 + 48;
      v13 = (char *)v39 + v40 + 16;
      *(_DWORD *)((char *)v39 + v40 + 24) = 16843029;
      *(_QWORD *)v13 = off_1518C8;
      v103 = (__m128i)(unsigned __int64)"";
      v104 = "typeinfo name for ";
      goto LABEL_174;
    case 'T':
      *(_QWORD *)a1 = v2 + 2;
      v91 = sub_D4260(a1);
      if ( !v91 )
        return nullptr;
      v38 = (__int64)v91;
      v39 = *(_QWORD **)(a1 + 4832);
      v40 = v39[1];
      if ( (unsigned __int64)(v40 + 48) < 0xFF0 )
      {
        v93 = v39 + 1;
      }
      else
      {
        v92 = (_QWORD *)operator new[](0x1000u);
        *v92 = v39;
        v92[1] = 0;
        *(_QWORD *)(a1 + 4832) = v92;
        v40 = 0;
        v93 = v92 + 1;
        v39 = v92;
      }
      *v93 = v40 + 48;
      v13 = (char *)v39 + v40 + 16;
      *(_DWORD *)((char *)v39 + v40 + 24) = 16843029;
      *(_QWORD *)v13 = off_1518C8;
      v103 = (__m128i)(unsigned __int64)"";
      v104 = "VTT for ";
      goto LABEL_174;
    case 'V':
      *(_QWORD *)a1 = v2 + 2;
      v94 = sub_D4260(a1);
      if ( !v94 )
        return nullptr;
      v38 = (__int64)v94;
      v39 = *(_QWORD **)(a1 + 4832);
      v40 = v39[1];
      if ( (unsigned __int64)(v40 + 48) < 0xFF0 )
      {
        v96 = v39 + 1;
      }
      else
      {
        v95 = (_QWORD *)operator new[](0x1000u);
        *v95 = v39;
        v95[1] = 0;
        *(_QWORD *)(a1 + 4832) = v95;
        v40 = 0;
        v96 = v95 + 1;
        v39 = v95;
      }
      *v96 = v40 + 48;
      v13 = (char *)v39 + v40 + 16;
      *(_DWORD *)((char *)v39 + v40 + 24) = 16843029;
      *(_QWORD *)v13 = off_1518C8;
      v103 = (__m128i)(unsigned __int64)"";
      v104 = "vtable for ";
      goto LABEL_174;
    case 'W':
      *(_QWORD *)a1 = v2 + 2;
      v13 = nullptr;
      v97 = sub_D6270((char **)a1, nullptr);
      if ( !v97 )
        return v13;
      v38 = (__int64)v97;
      v39 = *(_QWORD **)(a1 + 4832);
      v40 = v39[1];
      if ( (unsigned __int64)(v40 + 48) < 0xFF0 )
      {
        v99 = v39 + 1;
      }
      else
      {
        v98 = (_QWORD *)operator new[](0x1000u);
        *v98 = v39;
        v98[1] = 0;
        *(_QWORD *)(a1 + 4832) = v98;
        v40 = 0;
        v99 = v98 + 1;
        v39 = v98;
      }
      *v99 = v40 + 48;
      v13 = (char *)v39 + v40 + 16;
      *(_DWORD *)((char *)v39 + v40 + 24) = 16843029;
      *(_QWORD *)v13 = off_1518C8;
      v103 = (__m128i)(unsigned __int64)"";
      v104 = "thread-local wrapper routine for ";
      goto LABEL_174;
    case 'c':
      *(_QWORD *)a1 = v2 + 2;
      if ( sub_D7620((char **)a1) )
        return nullptr;
      if ( sub_D7620((char **)a1) )
        return nullptr;
      v100 = sub_D3180(a1, v6);
      if ( !v100 )
        return nullptr;
      v38 = v100;
      v39 = *(_QWORD **)(a1 + 4832);
      v40 = v39[1];
      if ( (unsigned __int64)(v40 + 48) < 0xFF0 )
      {
        v102 = v39 + 1;
      }
      else
      {
        v101 = (_QWORD *)operator new[](0x1000u);
        *v101 = v39;
        v101[1] = 0;
        *(_QWORD *)(a1 + 4832) = v101;
        v40 = 0;
        v102 = v101 + 1;
        v39 = v101;
      }
      *v102 = v40 + 48;
      v13 = (char *)v39 + v40 + 16;
      *(_DWORD *)((char *)v39 + v40 + 24) = 16843029;
      *(_QWORD *)v13 = off_1518C8;
      v103 = (__m128i)(unsigned __int64)"";
      v104 = "covariant return thunk to ";
      goto LABEL_174;
    default:
      goto LABEL_51;
  }
  while ( 1 )
  {
    v113 = v112;
    *(_QWORD *)a1 = v112;
    if ( v10 == v112 )
      break;
    v114 = *v112++ - 48;
    if ( v114 >= 0xA )
    {
      v115 = v113;
      goto LABEL_164;
    }
  }
  v115 = v10;
LABEL_164:
  v13 = nullptr;
  if ( v9 != v115 && v10 != v113 )
  {
    if ( *v113 == 95 )
    {
      *(_QWORD *)a1 = v113 + 1;
      v118 = sub_D4260(a1);
      if ( v118 )
      {
        v119 = v118;
        v120 = *(_QWORD **)(a1 + 4832);
        v121 = v120[1];
        if ( (unsigned __int64)(v121 + 32) < 0xFF0 )
        {
          v123 = v120 + 1;
        }
        else
        {
          v122 = (_QWORD *)operator new[](0x1000u);
          *v122 = v120;
          v122[1] = 0;
          *(_QWORD *)(a1 + 4832) = v122;
          v121 = 0;
          v123 = v122 + 1;
          v120 = v122;
        }
        *v123 = v121 + 32;
        v13 = (char *)v120 + v121 + 16;
        *(_DWORD *)((char *)v120 + v121 + 24) = 16843030;
        *(_QWORD *)v13 = off_151948;
        *(_QWORD *)((char *)v120 + v121 + 32) = v119;
        *(_QWORD *)((char *)v120 + v121 + 40) = v8;
        return v13;
      }
    }
    return nullptr;
  }
  return v13;
}
// D31D0: conditional instruction was optimized away because esi.4==54
// 1518C8: using guessed type __int64 (__fastcall *off_1518C8[7])();
// 151948: using guessed type __int64 (__fastcall *off_151948[7])();
// 152ED8: using guessed type __int64 (__fastcall *off_152ED8[7])();
// 152F48: using guessed type __int64 (__fastcall *off_152F48[7])();

/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D6270
// Address: 0x00000000000D6270

//----- (00000000000D6270) ----------------------------------------------------
char *__fastcall sub_D6270(char **a1, _BYTE *a2)
{
  _BYTE *v2; // r15
  char **v3; // r12
  char *v4; // rcx
  char *v5; // rax
  unsigned __int64 v6; // rdx
  char v7; // bl
  int v8; // edi
  char *v9; // rsi
  __int64 v10; // rdx
  char *v11; // rcx
  char *v12; // rax
  char *v13; // rbp
  char *v14; // rcx
  char *v15; // rax
  _BYTE *v16; // rdx
  char *v17; // rdx
  int v18; // esi
  int v19; // esi
  char *v20; // rax
  char *v21; // rax
  char *v22; // r14
  char *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rdx
  __int64 v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // rbx
  char *v30; // rbp
  __int64 v31; // rcx
  __int64 v32; // rax
  _QWORD *v33; // rdx
  char *result; // rax
  char *v35; // rbx
  char *v36; // r15
  signed __int64 v37; // rbx
  __int64 v38; // r14
  char *v39; // rbp
  char *v40; // rbx
  __int64 v41; // rcx
  char **v42; // rax
  _QWORD *v43; // rdx
  char *v44; // rax
  char *v45; // r14
  _QWORD *v46; // rax
  _QWORD *v47; // rbx
  char *v48; // rbp
  __int64 v49; // rcx
  __int64 v50; // rax
  _QWORD *v51; // rdx
  char *v52; // rax
  char *v53; // rcx
  unsigned __int64 v54; // rcx
  _QWORD *v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rbp
  _QWORD *v58; // r14
  char *v59; // rbx
  __int64 v60; // rcx
  _BYTE *v61; // r13
  char *v62; // rax
  char *v63; // rax
  char *v64; // r13
  __int64 v65; // rbx
  char *v66; // rbp
  __int64 v67; // rcx
  char **v68; // rax
  _QWORD *v69; // rdx
  _QWORD *v70; // rbx
  __int64 v71; // r14
  char *v72; // rbp
  __int64 v73; // rcx
  char *v74; // rax
  char *v75; // r15
  _BYTE *v76; // r14
  char *v77; // rbx
  char *v78; // r13
  signed __int64 v79; // rbx
  char *v80; // rbp
  char *v81; // rax
  char *v82; // rbx
  char *v83; // rdi
  signed __int64 v84; // rbx
  __int64 v85; // r14
  char *v86; // rbp
  _QWORD *v87; // rax
  _QWORD *v88; // rbx
  __int64 v89; // r14
  char *v90; // rbp
  __int64 v91; // rcx
  char *v92; // rax
  char *v93; // rax
  char *v94; // rbx
  __int64 v95; // r14
  char *v96; // rbp
  __int64 v97; // rcx
  char **v98; // rax
  _QWORD *v99; // rdx
  char *v100; // r15
  signed __int64 v101; // rbx
  __int64 v102; // r12
  char *v103; // rbp
  char *v104; // rax
  char *v105; // rax
  _QWORD *v106; // rax
  _QWORD *v107; // rbx
  char *v108; // rbp
  char *v109; // r13
  signed __int64 v110; // rbp
  char *v111; // r15
  char *v112; // rax
  char *v113; // rax
  char *v114; // rax
  char *v115; // rsi
  char *v116; // rdx
  char *v117; // rcx
  char *v118; // rax
  char *v119; // rax
  char *v120; // rcx
  int v121; // edx
  int v122; // edx
  __int64 v123; // rdx
  __int64 (__fastcall **v124)(); // rax
  char *v125; // rdx
  unsigned int v126; // esi
  char *v127; // rcx
  unsigned int v128; // esi
  char *v129; // rcx
  unsigned int v130; // esi
  char *v131; // rax
  char *v132; // rdx
  int v133; // esi
  char *v134; // rcx
  int v135; // esi
  char *v136; // rbx
  __int64 v137; // rcx
  __int64 v138; // rax
  _QWORD *v139; // rdx
  __int64 v140; // rax
  _QWORD *v141; // rdx
  __int64 src; // [rsp+8h] [rbp-70h]
  char *srca; // [rsp+8h] [rbp-70h]
  _BYTE *v144; // [rsp+10h] [rbp-68h]
  char *v145; // [rsp+18h] [rbp-60h]
  __int64 v146; // [rsp+18h] [rbp-60h]
  char **v147; // [rsp+20h] [rbp-58h]
  __int64 v148; // [rsp+28h] [rbp-50h]
  char **v149; // [rsp+30h] [rbp-48h]
  __int64 v150[8]; // [rsp+38h] [rbp-40h] BYREF

  v2 = a2;
  v3 = a1;
  v150[1] = __readfsqword(0x28u);
  v4 = *a1;
  v5 = a1[1];
  if ( *a1 != v5 && *v4 == 76 )
    *a1 = ++v4;
  v6 = v5 - v4;
  if ( v5 == v4 )
    goto LABEL_59;
  v7 = *v4;
  if ( *v4 == 90 )
  {
    if ( v4 == v5 )
      return nullptr;
    *a1 = v4 + 1;
    v12 = sub_D3180((__int64)a1);
    if ( !v12 )
      return nullptr;
    v13 = v12;
    v14 = *a1;
    v15 = a1[1];
    if ( *a1 == v15 || *v14 != 69 )
      return nullptr;
    v16 = v14 + 1;
    *a1 = v14 + 1;
    if ( v14 + 1 == v15 )
      goto LABEL_191;
    if ( *v16 == 115 )
    {
      v17 = v14 + 2;
      *a1 = v14 + 2;
      if ( v14 + 2 != v15 )
      {
        v18 = *v17;
        if ( v18 == 95 )
        {
          if ( v14 + 3 != v15 )
          {
            v19 = v14[3];
            if ( (unsigned int)(v19 - 48) <= 9 )
            {
              v15 = v14 + 4;
              goto LABEL_239;
            }
            if ( (_BYTE)v19 == 95 )
            {
              v134 = v14 + 4;
              if ( v134 != v15 )
              {
                while ( 1 )
                {
                  v135 = *v134++;
                  if ( (unsigned int)(v135 - 48) > 9 )
                    break;
                  if ( v15 == v134 )
                    goto LABEL_238;
                }
                if ( (_BYTE)v135 == 95 )
                  v17 = v134;
              }
            }
          }
        }
        else if ( (unsigned int)(v18 - 48) <= 9 )
        {
          v127 = v14 + 3;
          while ( v15 != v127 )
          {
            v128 = *v127++ - 48;
            if ( v128 >= 0xA )
              goto LABEL_238;
          }
          goto LABEL_239;
        }
LABEL_238:
        v15 = v17;
      }
LABEL_239:
      *a1 = v15;
      v136 = a1[604];
      v137 = *((_QWORD *)v136 + 1);
      if ( (unsigned __int64)(v137 + 32) < 0xFF0 )
      {
        v139 = v136 + 8;
      }
      else
      {
        v138 = operator new[](0x1000u);
        *(_QWORD *)v138 = v136;
        *(_QWORD *)(v138 + 8) = 0;
        a1[604] = (char *)v138;
        v137 = 0;
        v139 = (_QWORD *)(v138 + 8);
        v136 = (char *)v138;
      }
      *v139 = v137 + 32;
      v22 = &v136[v137 + 16];
      *(_DWORD *)&v136[v137 + 24] = 16843015;
      *(_QWORD *)v22 = off_1519B8;
      *(__m128i *)&v136[v137 + 32] = _mm_unpacklo_epi64(
                                       (__m128i)(unsigned __int64)"string literal",
                                       (__m128i)(unsigned __int64)"");
LABEL_243:
      v23 = a1[604];
      v24 = *((_QWORD *)v23 + 1);
      if ( (unsigned __int64)(v24 + 32) < 0xFF0 )
      {
        v141 = v23 + 8;
      }
      else
      {
        v140 = operator new[](0x1000u);
        *(_QWORD *)v140 = v23;
        *(_QWORD *)(v140 + 8) = 0;
        a1[604] = (char *)v140;
        v24 = 0;
        v141 = (_QWORD *)(v140 + 8);
        v23 = (char *)v140;
      }
      *v141 = v24 + 32;
      v123 = (__int64)&v23[v24 + 16];
      *(_DWORD *)&v23[v24 + 24] = 16843033;
      v124 = off_152BC8;
      goto LABEL_247;
    }
    if ( *v16 != 100 )
    {
LABEL_191:
      v118 = sub_D6270(a1, a2);
      if ( !v118 )
        return nullptr;
      v22 = v118;
      v119 = *a1;
      v120 = a1[1];
      if ( *a1 != v120 )
      {
        v121 = *v119;
        if ( v121 == 95 )
        {
          if ( v119 + 1 != v120 )
          {
            v122 = v119[1];
            if ( (unsigned int)(v122 - 48) > 9 )
            {
              if ( (_BYTE)v122 == 95 )
              {
                v132 = v119 + 2;
                if ( v119 + 2 != v120 )
                {
                  while ( 1 )
                  {
                    v133 = *v132++;
                    if ( (unsigned int)(v133 - 48) > 9 )
                      break;
                    if ( v120 == v132 )
                      goto LABEL_232;
                  }
                  if ( (_BYTE)v133 == 95 )
                    v119 = v132;
                }
              }
            }
            else
            {
              v119 += 2;
            }
          }
        }
        else if ( (unsigned int)(v121 - 48) <= 9 )
        {
          v125 = v119 + 1;
          while ( v120 != v125 )
          {
            v126 = *v125++ - 48;
            if ( v126 >= 0xA )
              goto LABEL_232;
          }
          v119 = a1[1];
        }
      }
LABEL_232:
      *a1 = v119;
      goto LABEL_243;
    }
    v115 = v14 + 2;
    *a1 = v14 + 2;
    if ( v14 + 2 == v15 )
    {
      v116 = v15;
    }
    else
    {
      v116 = v14 + 2;
      if ( *v115 == 110 )
      {
        v117 = v14 + 3;
        *a1 = v117;
        v116 = v117;
        if ( v117 == v15 )
        {
LABEL_215:
          if ( v116 == v15 )
            return nullptr;
          if ( *v116 != 95 )
            return nullptr;
          *a1 = v116 + 1;
          v131 = sub_D6270(a1, v2);
          if ( !v131 )
            return nullptr;
          v22 = v131;
          goto LABEL_243;
        }
LABEL_211:
        if ( (unsigned int)(*v116 - 48) <= 9 )
        {
          v129 = v116 + 1;
          do
          {
            v116 = v129;
            *a1 = v129;
            if ( v15 == v129 )
              break;
            v130 = *v129++ - 48;
          }
          while ( v130 < 0xA );
        }
        goto LABEL_215;
      }
    }
    if ( v115 == v15 )
      goto LABEL_215;
    goto LABEL_211;
  }
  if ( v7 == 83 )
  {
    if ( v6 >= 2 && v4[1] == 116 )
      goto LABEL_27;
    v20 = sub_D7A40(a1);
    if ( !v20 )
      return nullptr;
    v13 = v20;
    if ( a1[1] == *a1 )
      return nullptr;
    if ( **a1 != 73 )
      return nullptr;
    v21 = (char *)sub_D7E00(a1, a2 != nullptr);
    if ( !v21 )
      return nullptr;
    v22 = v21;
    if ( a2 )
      a2[1] = 1;
    v23 = a1[604];
    v24 = *((_QWORD *)v23 + 1);
    if ( (unsigned __int64)(v24 + 32) < 0xFF0 )
    {
      v26 = v23 + 8;
    }
    else
    {
      v25 = operator new[](0x1000u);
      *(_QWORD *)v25 = v23;
      *(_QWORD *)(v25 + 8) = 0;
      a1[604] = (char *)v25;
      v24 = 0;
      v26 = (_QWORD *)(v25 + 8);
      v23 = (char *)v25;
    }
    *v26 = v24 + 32;
    v123 = (__int64)&v23[v24 + 16];
    *(_DWORD *)&v23[v24 + 24] = 16843040;
    v124 = off_152D88;
LABEL_247:
    *(_QWORD *)&v23[v24 + 16] = v124;
    *(_QWORD *)&v23[v24 + 32] = v13;
    *(_QWORD *)&v23[v24 + 40] = v22;
    return (char *)v123;
  }
  if ( v7 != 78 )
  {
LABEL_27:
    if ( v6 >= 3 )
    {
      if ( *v4 != 83 )
        goto LABEL_59;
      if ( v4[1] == 116 && v4[2] == 76 )
      {
        v27 = 3;
LABEL_56:
        *a1 = &v4[v27];
        v28 = sub_D8DF0((__int64)a1, a2, v6);
        if ( !v28 )
          return nullptr;
        v29 = v28;
        v30 = a1[604];
        v31 = *((_QWORD *)v30 + 1);
        if ( (unsigned __int64)(v31 + 32) < 0xFF0 )
        {
          v33 = v30 + 8;
        }
        else
        {
          v32 = operator new[](0x1000u);
          *(_QWORD *)v32 = v30;
          *(_QWORD *)(v32 + 8) = 0;
          a1[604] = (char *)v32;
          v31 = 0;
          v33 = (_QWORD *)(v32 + 8);
          v30 = (char *)v32;
        }
        *v33 = v31 + 32;
        *(_DWORD *)&v30[v31 + 24] = 16843042;
        *(_QWORD *)&v30[v31 + 16] = off_152DF8;
        *(_QWORD *)&v30[v31 + 32] = v29;
        result = &v30[v31 + 16];
        if ( &v30[v31] == (char *)-16LL )
          return nullptr;
LABEL_60:
        if ( a1[1] == *a1 || **a1 != 73 )
          return result;
        v35 = a1[38];
        if ( v35 == a1[39] )
        {
          v145 = result;
          v36 = a1[37];
          v37 = v35 - v36;
          v38 = v37 >> 2;
          if ( a1 + 40 == (char **)v36 )
          {
            v44 = (char *)malloc(2 * v37);
            v39 = v44;
            if ( v37 )
              memmove(v44, v36, v37);
            a1[37] = v39;
          }
          else
          {
            v39 = (char *)realloc(a1[37], 2 * v37);
            a1[37] = v39;
          }
          v35 = &v39[8 * (v37 >> 3)];
          a1[38] = v35;
          a1[39] = &v39[8 * v38];
          v2 = a2;
          result = v145;
        }
        a1[38] = v35 + 8;
        v45 = result;
        *(_QWORD *)v35 = result;
        v46 = sub_D7E00(a1, v2 != nullptr);
        if ( v46 )
        {
          v47 = v46;
          if ( v2 )
            v2[1] = 1;
          v48 = a1[604];
          v49 = *((_QWORD *)v48 + 1);
          if ( (unsigned __int64)(v49 + 32) < 0xFF0 )
          {
            v51 = v48 + 8;
          }
          else
          {
            v50 = operator new[](0x1000u);
            *(_QWORD *)v50 = v48;
            *(_QWORD *)(v50 + 8) = 0;
            a1[604] = (char *)v50;
            v49 = 0;
            v51 = (_QWORD *)(v50 + 8);
            v48 = (char *)v50;
          }
          *v51 = v49 + 32;
          *(_DWORD *)&v48[v49 + 24] = 16843040;
          *(_QWORD *)&v48[v49 + 16] = off_152D88;
          *(_QWORD *)&v48[v49 + 32] = v45;
          *(_QWORD *)&v48[v49 + 40] = v47;
          return &v48[v49 + 16];
        }
        return nullptr;
      }
    }
    else if ( v6 != 2 )
    {
      goto LABEL_59;
    }
    if ( *v4 == 83 && v4[1] == 116 )
    {
      v27 = 2;
      goto LABEL_56;
    }
LABEL_59:
    result = (char *)sub_D8DF0((__int64)a1, a2, v6);
    if ( !result )
      return nullptr;
    goto LABEL_60;
  }
  v8 = 0;
  if ( v4 == v5 )
    return nullptr;
  v9 = v4 + 1;
  *v3 = v4 + 1;
  v10 = (__int64)v5;
  if ( v4 + 1 != v5 )
  {
    v8 = 0;
    if ( *v9 == 114 )
    {
      v11 = v4 + 2;
      *v3 = v11;
      v8 = 4;
      v9 = v11;
    }
    if ( v9 != v5 )
    {
      if ( *v9 == 86 )
      {
        *v3 = ++v9;
        v8 |= 2u;
      }
      if ( v9 != v5 && *v9 == 75 )
      {
        *v3 = ++v9;
        v8 |= 1u;
      }
    }
    v10 = (__int64)v9;
  }
  if ( v2 )
    *((_DWORD *)v2 + 1) = v8;
  if ( (char *)v10 == v5 )
    goto LABEL_68;
  if ( *(_BYTE *)v10 != 79 )
  {
    if ( *(_BYTE *)v10 == 82 )
    {
      *v3 = (char *)++v10;
      if ( v2 )
        v2[8] = 1;
      goto LABEL_70;
    }
LABEL_68:
    if ( v2 )
      v2[8] = 0;
    goto LABEL_70;
  }
  *v3 = (char *)++v10;
  if ( v2 )
    v2[8] = 2;
LABEL_70:
  v150[0] = 0;
  if ( (unsigned __int64)&v5[-v10] >= 2 && *(_BYTE *)v10 == 83 && *(_BYTE *)(v10 + 1) == 116 )
  {
    *v3 = (char *)(v10 + 2);
    v40 = v3[604];
    v41 = *((_QWORD *)v40 + 1);
    if ( (unsigned __int64)(v41 + 32) <= 0xFEF )
    {
      v43 = v40 + 8;
    }
    else
    {
      v42 = (char **)operator new[](0x1000u);
      *v42 = v40;
      v42[1] = nullptr;
      v3[604] = (char *)v42;
      v41 = 0;
      v43 = v42 + 1;
      v40 = (char *)v42;
    }
    *v43 = v41 + 32;
    *(_DWORD *)&v40[v41 + 24] = 16843015;
    *(_QWORD *)&v40[v41 + 16] = off_1519B8;
    v10 = (__int64)"std";
    *(__m128i *)&v40[v41 + 32] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)"std", (__m128i)(unsigned __int64)"");
    v150[0] = (__int64)&v40[v41 + 16];
  }
  v147 = v3 + 40;
  v146 = 0;
  v149 = v3;
  v144 = v2;
  while ( 1 )
  {
    v52 = *v3;
    v53 = v3[1];
    if ( *v3 != v53 )
      break;
LABEL_97:
    if ( v52 == v53 || *v52 != 77 )
    {
      v54 = v53 - v52;
      if ( v54 )
      {
        v10 = (unsigned __int8)(*v52 - 67);
        switch ( *v52 )
        {
          case 'C':
            goto LABEL_152;
          case 'D':
            if ( v54 < 2 )
              goto LABEL_152;
            if ( ((unsigned __int8)v52[1] | 0x20) == 0x74 )
            {
              v55 = sub_D88C0(v3);
              if ( !v55 )
                return (char *)v146;
LABEL_118:
              v70 = v55;
              v71 = v150[0];
              if ( v150[0] )
              {
                v72 = v3[604];
                v73 = *((_QWORD *)v72 + 1);
                v61 = v2;
                if ( (unsigned __int64)(v73 + 32) < 0xFF0 )
                {
                  v10 = (__int64)(v72 + 8);
                }
                else
                {
                  v74 = (char *)operator new[](0x1000u);
                  *(_QWORD *)v74 = v72;
                  *((_QWORD *)v74 + 1) = 0;
                  v3[604] = v74;
                  v10 = (__int64)(v74 + 8);
                  v73 = 0;
                  v72 = v74;
                }
                *(_QWORD *)v10 = v73 + 32;
                v75 = &v72[v73 + 16];
                *(_DWORD *)&v72[v73 + 24] = 16843032;
                *(_QWORD *)v75 = off_151A98;
                *(_QWORD *)&v72[v73 + 32] = v71;
                *(_QWORD *)&v72[v73 + 40] = v70;
                v150[0] = (__int64)v75;
                if ( v61 )
LABEL_128:
                  v61[1] = 0;
              }
              else
              {
                v61 = v2;
                v150[0] = (__int64)v55;
                v75 = (char *)v55;
                if ( v61 )
                  goto LABEL_128;
              }
LABEL_129:
              v76 = v61;
              v77 = v3[38];
              if ( v77 == v3[39] )
              {
                v78 = v3[37];
                v79 = v77 - v78;
                v148 = v79 >> 2;
                if ( v147 == (char **)v78 )
                {
                  v81 = (char *)malloc(2 * v79);
                  v80 = v81;
                  if ( v79 )
                    memmove(v81, v78, v79);
                }
                else
                {
                  v80 = (char *)realloc(v78, 2 * v79);
                }
                v3[37] = v80;
                v77 = &v80[8 * (v79 >> 3)];
                v3[38] = v77;
                v3[39] = &v80[8 * v148];
              }
              v3[38] = v77 + 8;
              *(_QWORD *)v77 = v75;
              v2 = v76;
              continue;
            }
            if ( v52[1] == 67 )
              goto LABEL_146;
LABEL_152:
            if ( !v150[0] )
              return (char *)v146;
            v93 = sub_D89E0(v3, v150, v2);
            if ( !v93 )
              return (char *)v146;
            v94 = v93;
            v95 = v150[0];
            if ( v150[0] )
            {
              v96 = v3[604];
              v97 = *((_QWORD *)v96 + 1);
              if ( (unsigned __int64)(v97 + 32) < 0xFF0 )
              {
                v99 = v96 + 8;
              }
              else
              {
                v98 = (char **)operator new[](0x1000u);
                *v98 = v96;
                v98[1] = nullptr;
                v3[604] = (char *)v98;
                v99 = v98 + 1;
                v97 = 0;
                v96 = (char *)v98;
              }
              *v99 = v97 + 32;
              *(_DWORD *)&v96[v97 + 24] = 16843032;
              *(_QWORD *)&v96[v97 + 16] = off_151A98;
              *(_QWORD *)&v96[v97 + 32] = v95;
              *(_QWORD *)&v96[v97 + 40] = v94;
              v94 = &v96[v97 + 16];
            }
            v150[0] = (__int64)v94;
            if ( v2 )
              v2[1] = 0;
            v106 = sub_D8C70((__int64)v3, v94);
            v150[0] = (__int64)v106;
            if ( !v106 )
              return (char *)v146;
            v107 = v106;
            v108 = v3[38];
            if ( v108 == v3[39] )
            {
              v109 = v3[37];
              v110 = v108 - v109;
              src = v110 >> 2;
              if ( v147 == (char **)v109 )
              {
                v112 = (char *)malloc(2 * v110);
                v111 = v112;
                if ( v110 )
                  memmove(v112, v109, v110);
              }
              else
              {
                v111 = (char *)realloc(v109, 2 * v110);
              }
              v3[37] = v111;
              v108 = &v111[8 * (v110 >> 3)];
              v3[38] = v108;
              v3[39] = &v111[8 * src];
              v2 = v144;
            }
            v3[38] = v108 + 8;
            *(_QWORD *)v108 = v107;
            break;
          case 'I':
            v56 = sub_D7E00(v3, v2 != nullptr);
            if ( !v56 )
              return (char *)v146;
            v57 = v150[0];
            if ( !v150[0] )
              return (char *)v146;
            v58 = v56;
            v59 = v3[604];
            v60 = *((_QWORD *)v59 + 1);
            v61 = v2;
            if ( (unsigned __int64)(v60 + 32) < 0xFF0 )
            {
              v10 = (__int64)(v59 + 8);
            }
            else
            {
              v62 = (char *)operator new[](0x1000u);
              *(_QWORD *)v62 = v59;
              *((_QWORD *)v62 + 1) = 0;
              v3[604] = v62;
              v10 = (__int64)(v62 + 8);
              v60 = 0;
              v59 = v62;
            }
            *(_QWORD *)v10 = v60 + 32;
            v75 = &v59[v60 + 16];
            *(_DWORD *)&v59[v60 + 24] = 16843040;
            *(_QWORD *)v75 = off_152D88;
            *(_QWORD *)&v59[v60 + 32] = v57;
            *(_QWORD *)&v59[v60 + 40] = v58;
            v150[0] = (__int64)v75;
            if ( v61 )
              v61[1] = 1;
            goto LABEL_129;
          case 'S':
            if ( v54 >= 2 && v52[1] == 116 )
              goto LABEL_146;
            v63 = sub_D7A40(v3);
            if ( !v63 )
              return (char *)v146;
            v64 = v63;
            v65 = v150[0];
            if ( !v150[0] )
            {
              v150[0] = (__int64)v63;
              if ( !v2 )
                goto LABEL_141;
LABEL_140:
              v2[1] = 0;
              goto LABEL_141;
            }
            v66 = v3[604];
            v67 = *((_QWORD *)v66 + 1);
            if ( (unsigned __int64)(v67 + 32) < 0xFF0 )
            {
              v69 = v66 + 8;
            }
            else
            {
              v68 = (char **)operator new[](0x1000u);
              *v68 = v66;
              v68[1] = nullptr;
              v3[604] = (char *)v68;
              v69 = v68 + 1;
              v67 = 0;
              v66 = (char *)v68;
            }
            *v69 = v67 + 32;
            v63 = &v66[v67 + 16];
            *(_DWORD *)&v66[v67 + 24] = 16843032;
            v10 = (__int64)off_151A98;
            *(_QWORD *)v63 = off_151A98;
            *(_QWORD *)&v66[v67 + 32] = v65;
            *(_QWORD *)&v66[v67 + 40] = v64;
            v150[0] = (__int64)v63;
            if ( v2 )
              goto LABEL_140;
LABEL_141:
            if ( v63 == v64 )
              continue;
            v82 = v3[38];
            if ( v82 == v3[39] )
            {
              v83 = v3[37];
              v84 = v82 - v83;
              v85 = v84 >> 2;
              if ( v147 == (char **)v83 )
              {
                srca = v3[37];
                v113 = (char *)malloc(2 * v84);
                v86 = v113;
                if ( v84 )
                  memmove(v113, srca, v84);
              }
              else
              {
                v86 = (char *)realloc(v83, 2 * v84);
              }
              v3[37] = v86;
              v82 = &v86[8 * (v84 >> 3)];
              v3[38] = v82;
              v3[39] = &v86[8 * v85];
              v2 = v144;
            }
            goto LABEL_92;
          case 'T':
            v55 = sub_D85D0((__int64)v3);
            if ( !v55 )
              return (char *)v146;
            goto LABEL_118;
          default:
            v10 = (unsigned __int8)(*v52 - 67);
            goto LABEL_146;
        }
      }
      else
      {
LABEL_146:
        v87 = sub_D8DF0((__int64)v3, v2, v10);
        if ( !v87 )
          return (char *)v146;
        v88 = v87;
        v89 = v150[0];
        if ( v150[0] )
        {
          v90 = v3[604];
          v91 = *((_QWORD *)v90 + 1);
          if ( (unsigned __int64)(v91 + 32) < 0xFF0 )
          {
            v10 = (__int64)(v90 + 8);
          }
          else
          {
            v92 = (char *)operator new[](0x1000u);
            *(_QWORD *)v92 = v90;
            *((_QWORD *)v92 + 1) = 0;
            v3[604] = v92;
            v10 = (__int64)(v92 + 8);
            v91 = 0;
            v90 = v92;
          }
          *(_QWORD *)v10 = v91 + 32;
          v64 = &v90[v91 + 16];
          *(_DWORD *)&v90[v91 + 24] = 16843032;
          *(_QWORD *)v64 = off_151A98;
          *(_QWORD *)&v90[v91 + 32] = v89;
          *(_QWORD *)&v90[v91 + 40] = v88;
          v150[0] = (__int64)v64;
          if ( v2 )
LABEL_159:
            v2[1] = 0;
        }
        else
        {
          v150[0] = (__int64)v87;
          v64 = (char *)v87;
          if ( v2 )
            goto LABEL_159;
        }
        v82 = v3[38];
        if ( v82 == v3[39] )
        {
          v100 = v3[37];
          v101 = v82 - v100;
          v102 = v101 >> 2;
          if ( v147 == (char **)v100 )
          {
            v104 = (char *)malloc(2 * v101);
            v103 = v104;
            if ( v101 )
              memmove(v104, v100, v101);
          }
          else
          {
            v103 = (char *)realloc(v100, 2 * v101);
          }
          v2 = v144;
          v149[37] = v103;
          v82 = &v103[8 * (v101 >> 3)];
          v149[38] = v82;
          v105 = &v103[8 * v102];
          v3 = v149;
          v149[39] = v105;
        }
LABEL_92:
        v3[38] = v82 + 8;
        *(_QWORD *)v82 = v64;
      }
    }
    else
    {
      *v3 = v52 + 1;
      if ( !v150[0] )
        return (char *)v146;
    }
  }
  if ( *v52 != 69 )
  {
    if ( *v52 == 76 )
      *v3 = ++v52;
    goto LABEL_97;
  }
  *v3 = v52 + 1;
  if ( !v150[0] )
    return nullptr;
  v114 = v3[38];
  if ( v3[37] == v114 )
    return nullptr;
  v146 = v150[0];
  v3[38] = v114 - 8;
  return (char *)v146;
}
// D6C56: variable 'v10' is possibly undefined
// 1519B8: using guessed type __int64 (__fastcall *off_1519B8[7])();
// 151A98: using guessed type __int64 (__fastcall *off_151A98[7])();
// 152BC8: using guessed type __int64 (__fastcall *off_152BC8[7])();
// 152D88: using guessed type __int64 (__fastcall *off_152D88[7])();
// 152DF8: using guessed type __int64 (__fastcall *off_152DF8[7])();

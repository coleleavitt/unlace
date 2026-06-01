/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807C7A0
// Address: 0x0807C7A0

//----- (0807C7A0) --------------------------------------------------------
int __cdecl sub_807C7A0(int (__cdecl *a1)(int, int), int a2, int a3, int a4)
{
  int v5; // ecx
  int v6; // ebx
  char *v7; // eax
  char *v8; // ebp
  int v9; // eax
  int result; // eax
  char *v11; // ebp
  int v12; // eax
  int v13; // edx
  char *v14; // edi
  char *v15; // ecx
  int v16; // eax
  int v17; // eax
  unsigned int v18; // eax
  size_t v19; // ebp
  size_t v20; // eax
  char *v21; // ecx
  int v22; // edi
  size_t v23; // edx
  int v24; // ebp
  char v25; // al
  int v26; // edi
  size_t v27; // ebx
  int (__cdecl *v28)(int, int); // ebp
  int v29; // eax
  int v30; // ebx
  int v31; // ebp
  char *v32; // ebx
  int (__cdecl *v33)(int, int); // edi
  int v34; // eax
  unsigned int v35; // eax
  int v36; // ebx
  int v37; // ebx
  int v38; // ebx
  int v39; // ebp
  int v40; // edi
  char *v41; // ebx
  char *v42; // edi
  int v43; // eax
  int (__cdecl *v44)(int, int); // ebx
  int v45; // eax
  char *v46; // eax
  int v47; // ebp
  int v48; // eax
  int v49; // edi
  __m128i *v50; // edx
  int v51; // eax
  int v52; // eax
  char v53; // al
  char *i; // ecx
  size_t v55; // eax
  int v56; // edi
  char *v57; // ecx
  int v58; // ecx
  unsigned int v59; // eax
  int v60; // eax
  signed int v61; // ecx
  __m128i v62; // xmm0
  char v63; // al
  _DWORD *v64; // esi
  __int64 v65; // rax
  __m128i v66; // xmm0
  char v67; // al
  unsigned int v68; // edx
  __int32 v69; // ecx
  int v70; // edx
  int v71; // ebp
  size_t v72; // eax
  int v73; // edi
  int v74; // eax
  const char *v75; // ecx
  int v76; // edi
  size_t v77; // eax
  int v78; // edx
  int v79; // edx
  char *v80; // eax
  char *v81; // eax
  int v82; // edx
  int (__cdecl *v83)(int, int); // ebx
  int v84; // ebp
  int v85; // eax
  int v86; // edi
  int v87; // edi
  int v88; // eax
  int v89; // eax
  int v90; // edi
  char v91; // cl
  unsigned int v92; // ebp
  unsigned int v93; // edi
  __m128i v94; // xmm1
  int v95; // ebx
  __m128i v96; // xmm1
  int v97; // eax
  size_t v98; // eax
  bool v99; // cl
  int v100; // ebx
  int (__cdecl *v101)(int, int); // [esp+14h] [ebp-488h]
  int v102; // [esp+18h] [ebp-484h]
  int v103; // [esp+1Ch] [ebp-480h]
  int v104; // [esp+24h] [ebp-478h]
  char *v105; // [esp+28h] [ebp-474h]
  int v106; // [esp+2Ch] [ebp-470h]
  int v107; // [esp+30h] [ebp-46Ch]
  int v108; // [esp+34h] [ebp-468h]
  char *v109; // [esp+38h] [ebp-464h]
  int v110; // [esp+3Ch] [ebp-460h]
  __m128i v111; // [esp+40h] [ebp-45Ch]
  unsigned __int64 v112; // [esp+50h] [ebp-44Ch]
  int v113; // [esp+58h] [ebp-444h]
  char *v114; // [esp+5Ch] [ebp-440h]
  _DWORD *v115; // [esp+60h] [ebp-43Ch]
  int v116; // [esp+64h] [ebp-438h]
  char v117; // [esp+68h] [ebp-434h] BYREF
  char s[1024]; // [esp+7Ch] [ebp-420h] BYREF
  _DWORD v119[8]; // [esp+47Ch] [ebp-20h] BYREF

  v119[0] = __readgsdword(0x14u);
  v5 = a4;
  v103 = *(_DWORD *)(a4 + 4);
  if ( v103 <= 0
    || (v6 = *(_DWORD *)(a3 + 8), v106 = a3 + 20, !v6)
    || (v7 = *(char **)(a3 + 4), v8 = v7 + 1, v9 = *v7, !(_BYTE)v9) )
  {
    v102 = 0;
    goto LABEL_11;
  }
  v104 = 0;
  v102 = 0;
  v101 = a1;
  v108 = a4;
  while ( (_BYTE)v9 != 37 )
  {
    result = v101(a2, v9);
    if ( result )
      goto LABEL_12;
    ++v102;
    v105 = v8;
LABEL_8:
    v8 = v105 + 1;
    v9 = *v105;
    if ( !(_BYTE)v9 )
    {
      v5 = v108;
LABEL_11:
      *(_DWORD *)(v5 + 4) = v102;
      result = 0;
      goto LABEL_12;
    }
  }
  v11 = v8 + 1;
  v12 = 0;
  while ( 1 )
  {
    LOBYTE(v13) = *(v11 - 1);
    v14 = v11 - 1;
    if ( (_BYTE)v13 == 43 )
    {
      v12 |= 2u;
      goto LABEL_18;
    }
    if ( (char)v13 > 43 )
      break;
    if ( (_BYTE)v13 == 32 )
    {
      v12 |= 4u;
    }
    else
    {
      if ( (_BYTE)v13 != 35 )
      {
        v107 = v12;
        v15 = v11 - 1;
        if ( (_BYTE)v13 != 42 )
          goto LABEL_33;
        if ( --v103 > 0 )
        {
          v47 = v106;
          result = sub_808A3E0(v106);
          if ( result )
            goto LABEL_12;
          v48 = *(_DWORD *)(v47 + 4);
          v104 = v48;
          v106 = v47 + 20;
          if ( v48 < 0 )
          {
            v107 |= 1u;
            v104 = -v48;
          }
        }
        else if ( v104 )
        {
          goto LABEL_246;
        }
        v16 = v104;
        v13 = (unsigned __int8)v14[1];
        v15 = v14 + 1;
        v104 = 0;
        v110 = v16;
        goto LABEL_55;
      }
      v12 |= 8u;
    }
LABEL_18:
    ++v11;
  }
  if ( (_BYTE)v13 == 45 )
  {
    v12 |= 1u;
    goto LABEL_18;
  }
  v107 = v12;
  if ( (_BYTE)v13 == 48 )
  {
    LOBYTE(v13) = *v11;
    v17 = v107 | 0x10;
    if ( (v107 & 1) != 0 )
      v17 = v107;
    v15 = v11;
    v107 = v17;
LABEL_33:
    v18 = (char)v13;
    v110 = -1;
    if ( (unsigned int)(char)v13 > 0x7F )
    {
LABEL_34:
      v19 = 0;
      v111.m128i_i32[0] = (__int32)v15;
      v20 = strlen(v15);
      v21 = (char *)v111.m128i_i32[0];
      v113 = v20;
      v22 = v20;
      v109 = (char *)&qword_811CFF4 - 281405;
      v105 = (char *)&qword_811CFF4 - 281405;
      goto LABEL_35;
    }
  }
  else
  {
    v18 = (char)v13;
    v15 = v11 - 1;
  }
  v110 = -1;
  while ( v18 - 48 <= 9 )
  {
    v45 = 0;
    if ( v110 != -1 )
      v45 = 10 * v110;
    ++v15;
    v110 = (char)(v13 - 48) + v45;
    v18 = *v15;
    LOBYTE(v13) = *v15;
    if ( v18 > 0x7F )
    {
      v113 = -1;
      v46 = v15;
      goto LABEL_80;
    }
  }
  v13 = (unsigned __int8)*v15;
LABEL_55:
  if ( (_BYTE)v13 != 46 )
  {
    v113 = -1;
    goto LABEL_61;
  }
  v35 = v15[1];
  if ( (_BYTE)v35 != 42 )
  {
    ++v15;
    if ( v35 > 0x7F )
      goto LABEL_34;
    v36 = 0;
    while ( v35 - 48 <= 9 )
    {
      ++v15;
      v36 = v35 + 10 * v36 - 48;
      v35 = *v15;
      if ( v35 > 0x7F )
        goto LABEL_34;
    }
    v113 = v36;
    v13 = (unsigned __int8)*v15;
LABEL_61:
    if ( (char)v13 <= 108 )
    {
      if ( (char)v13 <= 77 )
      {
        v46 = v15;
        if ( (_BYTE)v13 == 70 )
          goto LABEL_81;
LABEL_80:
        if ( (_BYTE)v13 == 76 )
          goto LABEL_81;
      }
      else
      {
        v37 = 1140850689;
        if ( !_bittest(&v37, v13 - 78) )
          goto LABEL_64;
        v46 = v15;
LABEL_81:
        LOBYTE(v13) = v46[1];
        ++v15;
      }
    }
LABEL_64:
    v105 = v15 + 1;
    switch ( (char)v13 )
    {
      case '%':
        s[0] = 37;
        v19 = 0;
        v22 = 1;
        goto LABEL_145;
      case 'E':
      case 'G':
      case 'e':
      case 'f':
      case 'g':
        if ( --v103 <= 0 )
        {
          if ( v104 == 1531 )
            goto LABEL_187;
          v50 = nullptr;
        }
        else
        {
          v49 = v106;
          result = sub_808A6A0(v106);
          if ( result )
            goto LABEL_186;
          v50 = (__m128i *)(v49 + 4);
          v106 = v49 + 20;
        }
        if ( (unsigned int)(v110 + 1) <= 1 )
        {
          v110 = 0;
          v52 = 15;
        }
        else
        {
          v51 = 0;
          if ( v113 >= 0 )
            v51 = v113;
          v52 = (v110 << 8) | (v51 << 16) | 0xF;
        }
        sub_80CA380((int)s, 1024, v50, v52);
        v53 = s[0];
        for ( i = s; v53 == 32; ++i )
          v53 = i[1];
        if ( v53 == 45 )
        {
          ++i;
          v19 = 1;
          v109 = "-";
        }
        else if ( (v107 & 2) != 0 )
        {
          v19 = 1;
          v109 = "+";
        }
        else if ( (v107 & 4) != 0 )
        {
          v19 = 1;
          v109 = " ";
        }
        else
        {
          v19 = 0;
          v109 = "";
        }
        v111.m128i_i32[0] = (__int32)i;
        v55 = strlen(i);
        v21 = (char *)v111.m128i_i32[0];
        v113 = v55;
        v22 = v55;
        v104 = 0;
        goto LABEL_35;
      case 'X':
      case 'x':
        if ( (v107 & 8) != 0 )
        {
          v56 = 16;
          v57 = (char *)&qword_811CFF4 - 279165;
          if ( (_BYTE)v13 != 120 )
            v57 = (char *)(&qword_811CFF4 - 34896);
          v109 = v57;
        }
        else
        {
          v56 = 16;
          v109 = "";
        }
        goto LABEL_103;
      case 'a':
        if ( --v103 > 0 )
        {
          v90 = v106;
          result = sub_808A3E0(v106);
          if ( result )
            goto LABEL_12;
          v79 = *(_DWORD *)(v90 + 4);
          v106 = v90 + 20;
        }
        else
        {
          if ( v104 )
            goto LABEL_246;
          v79 = 0;
        }
        if ( *(_DWORD *)&algn_811D3B0[12] )
          (*(void (__cdecl **)(char *, int, int))&algn_811D3B0[12])(s, 1024, v79);
        else
          sub_80D3B60(s, 1024, (char *)&qword_811CFF4 - 277342, v79);
        v77 = strlen(s);
        v21 = s;
        v78 = v77;
LABEL_132:
        v22 = v113;
        if ( v113 >= v77 )
        {
          v113 = v78;
          v22 = v77;
        }
        v104 = 0;
        v19 = 0;
        v109 = "";
        goto LABEL_35;
      case 'b':
        if ( (v107 & 8) != 0 )
          v81 = "0b";
        else
          v81 = "";
        v56 = 2;
        v109 = v81;
        goto LABEL_103;
      case 'c':
        if ( --v103 <= 0 )
        {
          s[0] = 0;
          if ( v104 == 1531 )
            goto LABEL_187;
          v104 = 0;
          v19 = 0;
          v22 = 1;
LABEL_145:
          v113 = 1;
          v21 = s;
          v109 = "";
          goto LABEL_35;
        }
        v87 = v106;
        result = sub_808A3E0(v106);
        if ( !result )
        {
          v88 = *(_DWORD *)(v87 + 4);
          v104 = 0;
          v19 = 0;
          v21 = s;
          v113 = 1;
          s[0] = v88;
          v89 = v87 + 20;
          v22 = 1;
          v106 = v89;
          v109 = (char *)&qword_811CFF4 - 281405;
          goto LABEL_35;
        }
        s[0] = 0;
        if ( result != 1531 )
          goto LABEL_12;
        goto LABEL_187;
      case 'd':
      case 'i':
        if ( --v103 <= 0 )
        {
          if ( v104 == 1531 )
            goto LABEL_187;
          if ( (v107 & 2) != 0 )
          {
            if ( !v113 )
              goto LABEL_169;
            v60 = v106;
            v62 = 0;
            v91 = 0;
            v109 = (char *)&qword_811CFF4 - 271585;
            goto LABEL_201;
          }
          if ( (v107 & 4) == 0 )
          {
            if ( !v113 )
              goto LABEL_169;
            v60 = v106;
            v62 = 0;
            v91 = 0;
            v109 = (char *)&qword_811CFF4 - 281405;
            goto LABEL_201;
          }
          if ( v113 )
          {
            v60 = v106;
            v62 = 0;
            v91 = 0;
            v109 = (char *)&qword_811CFF4 - 271782;
LABEL_201:
            v106 = v60;
            v92 = -1;
            v93 = -1 << v91;
            if ( (v91 & 0x20) != 0 )
            {
              v92 = -1 << v91;
              v93 = 0;
            }
            v94 = _mm_cvtsi32_si128(v93);
            v56 = 10;
            v111 = _mm_andnot_si128(_mm_unpacklo_epi32(v94, _mm_cvtsi32_si128(v92)), v62);
            v112 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v111, 0x20u)), _mm_cvtsi128_si32(v111));
            goto LABEL_113;
          }
LABEL_169:
          v104 = 0;
        }
        else
        {
          if ( *(_BYTE *)v106 != 2 )
          {
            LOBYTE(v104) = v13;
            result = sub_808A540(v106);
            LOBYTE(v13) = v104;
            if ( result )
            {
LABEL_186:
              if ( result != 1531 )
                goto LABEL_12;
LABEL_187:
              v19 = 0;
              v109 = "";
LABEL_178:
              v106 += 20;
              v22 = 5;
              v104 = 1531;
              v113 = 5;
              v21 = "<obj>";
LABEL_35:
              v23 = v110 - v19 - v22;
              v24 = v23;
              if ( (v107 & 0x10) != 0 )
              {
                v42 = v109;
                v43 = *v109;
                if ( (_BYTE)v43 )
                {
                  v110 = v23;
                  v44 = v101;
                  v111.m128i_i32[0] = (__int32)v21;
                  do
                  {
                    ++v42;
                    result = v44(a2, v43);
                    if ( result )
                      goto LABEL_12;
                    v43 = *v42;
                  }
                  while ( (_BYTE)v43 );
                  v23 = v110;
                  v21 = (char *)v111.m128i_i32[0];
                  v102 = &v42[v102] - v109;
                  v38 = v102;
                  if ( (v107 & 1) != 0 )
                  {
LABEL_66:
                    if ( v113 - 1 < 0 )
                    {
                      v40 = v38;
LABEL_159:
                      if ( v24 - 1 >= 0 )
                      {
                        v83 = v101;
                        v102 = v24 + v40;
                        v84 = v24 + v40;
                        for ( result = v101(a2, 32); !result; result = v83(a2, 32) )
                        {
                          if ( v84 == ++v40 )
                            goto LABEL_8;
                        }
                        goto LABEL_12;
                      }
                      v102 = v40;
                      goto LABEL_8;
                    }
LABEL_67:
                    v102 = v24;
                    v39 = v38;
                    v40 = v38 + v113;
                    v41 = &v21[-v38];
                    do
                    {
                      result = v101(a2, v41[v39]);
                      if ( result )
                        goto LABEL_12;
                      ++v39;
                    }
                    while ( v40 != v39 );
                    v24 = v102;
                    goto LABEL_159;
                  }
                  v109 = v42;
                  v25 = 48;
                }
                else
                {
                  if ( (v107 & 1) != 0 )
                    goto LABEL_222;
                  v25 = 48;
                }
              }
              else
              {
                if ( (v107 & 1) != 0 )
                {
                  v29 = *v109;
LABEL_45:
                  if ( (_BYTE)v29 )
                  {
LABEL_46:
                    v30 = v102;
                    v107 = v24;
                    v102 = (int)v21;
                    v31 = v30;
                    v32 = &v109[-v30];
                    v33 = v101;
                    for ( result = v101(a2, v29); ; result = v33(a2, v34) )
                    {
                      if ( result )
                        goto LABEL_12;
                      v34 = v32[++v31];
                      if ( !(_BYTE)v34 )
                        break;
                    }
                    v38 = v31;
                    v21 = (char *)v102;
                    v24 = v107;
                    goto LABEL_66;
                  }
LABEL_222:
                  v38 = v102;
                  goto LABEL_66;
                }
                v25 = 32;
              }
              v26 = v25;
              v27 = v23 - 1;
              if ( (int)(v23 - 1) >= 0 )
              {
                v107 = v23;
                v28 = v101;
                v110 = (int)v21;
                for ( result = v101(a2, v25); ; result = v28(a2, v26) )
                {
                  if ( result )
                    goto LABEL_12;
                  if ( !v27 )
                    break;
                  --v27;
                }
                v24 = -1;
                v21 = (char *)v110;
                v82 = v107 + v102;
                v29 = *v109;
                v102 += v107;
                if ( !(_BYTE)v29 )
                {
                  v38 = v82;
                  if ( v113 - 1 < 0 )
                    goto LABEL_8;
                  goto LABEL_67;
                }
                goto LABEL_46;
              }
              v24 = v23 - 1;
              v29 = *v109;
              goto LABEL_45;
            }
            v62 = _mm_loadl_epi64((const __m128i *)(v106 + 4));
            v58 = v106 + 20;
            v95 = _mm_cvtsi128_si32(v62);
            v96 = _mm_srli_epi64(v62, 0x20u);
            v97 = _mm_cvtsi128_si32(v96);
            if ( v97 >= 0 )
            {
              v100 = v97 | v95;
              v111 = v62;
              v112 = __PAIR64__(_mm_cvtsi128_si32(v96), _mm_cvtsi128_si32(v62));
              if ( (v107 & 2) != 0 )
              {
                if ( !v113 && !v100 )
                  goto LABEL_185;
                v106 += 20;
                v56 = 10;
                v109 = "+";
                goto LABEL_113;
              }
              v104 = v107 & 4;
              if ( (v107 & 4) == 0 )
              {
                v106 += 20;
                if ( !v113 && !v100 )
                  goto LABEL_107;
                v56 = 10;
                v109 = "";
                goto LABEL_113;
              }
              if ( !v113 && !v100 )
              {
LABEL_185:
                v104 = 0;
LABEL_106:
                v106 = v58;
LABEL_107:
                v113 = 0;
                goto LABEL_108;
              }
              v106 += 20;
              v56 = 10;
              v109 = " ";
            }
            else
            {
LABEL_112:
              v106 += 20;
              v111 = _mm_sub_epi64((__m128i)0LL, v62);
              v112 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v111, 0x20u)), _mm_cvtsi128_si32(v111));
              v56 = 10;
              v109 = "-";
            }
LABEL_113:
            v63 = 39;
            v116 = a2;
            if ( (_BYTE)v13 == 88 )
              v63 = 7;
            LOBYTE(v104) = v63;
            v115 = v119;
            v114 = &v117;
            v64 = v119;
            while ( 1 )
            {
              v65 = __udivmoddi4(v111.m128i_i32[0], v111.m128i_i32[1], v56, 0, v114);
              v66 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v65), _mm_cvtsi32_si128(HIDWORD(v65)));
              v67 = v117 + 48;
              if ( (char)(v117 + 48) > 57 )
                v67 += v104;
              v68 = HIDWORD(v112);
              v64 = (_DWORD *)((char *)v64 - 1);
              *(_BYTE *)v64 = v67;
              if ( __PAIR64__(v68, v112) < (unsigned int)v56 )
                break;
              v111 = v66;
              v112 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v66, 0x20u)), _mm_cvtsi128_si32(v66));
            }
            v69 = (__int32)v64;
            v70 = 1024;
            a2 = v116;
            if ( v113 <= 1024 )
              v70 = v113;
            v113 = v70;
            if ( v70 <= (int)v115 - v69 )
            {
              v111.m128i_i32[0] = v69;
              v22 = (int)v115 - v69;
              v98 = strlen(v109);
              v21 = (char *)v111.m128i_i32[0];
              v113 = v22;
              v19 = v98;
              v104 = 0;
            }
            else
            {
              v71 = v113;
              v22 = v113;
              memset((char *)v115 - v113, 48, v113 - ((_DWORD)v115 - v69));
              v111.m128i_i32[0] = (__int32)v115 - v71;
              v72 = strlen(v109);
              v21 = (char *)v111.m128i_i32[0];
              v104 = 0;
              v19 = v72;
            }
            goto LABEL_35;
          }
          v60 = v106 + 20;
          v61 = *(_DWORD *)(v106 + 4);
          v62 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v61), _mm_cvtsi32_si128(v61 >> 31));
          if ( v61 >> 31 == -1 )
            goto LABEL_112;
          v99 = v61 == 0;
          v104 = v107 & 2;
          if ( (v107 & 2) != 0 )
          {
            if ( !v113 && v99 )
            {
              v106 += 20;
              v19 = 0;
              v104 = 0;
              v22 = 0;
              v21 = nullptr;
              v113 = 0;
              v109 = "";
              goto LABEL_35;
            }
            v91 = 32;
            v109 = (char *)&qword_811CFF4 - 271585;
            goto LABEL_201;
          }
          if ( (v107 & 4) == 0 )
          {
            if ( !v113 && v99 )
              goto LABEL_241;
            v91 = 32;
            v109 = (char *)&qword_811CFF4 - 281405;
            goto LABEL_201;
          }
          if ( v113 || !v99 )
          {
            v91 = 32;
            v109 = (char *)&qword_811CFF4 - 271782;
            goto LABEL_201;
          }
LABEL_241:
          v106 += 20;
          v113 = 0;
        }
LABEL_108:
        v19 = 0;
        v22 = 0;
        v21 = nullptr;
        v109 = "";
        goto LABEL_35;
      case 'o':
        if ( (v107 & 8) != 0 )
          v80 = "0";
        else
          v80 = "";
        v56 = 8;
        v109 = v80;
        goto LABEL_103;
      case 's':
        if ( --v103 <= 0 )
          goto LABEL_196;
        v73 = v106;
        result = sub_8089CE0(v106);
        if ( result )
          goto LABEL_186;
        v74 = v73;
        v75 = (char *)&qword_811CFF4 - 258076;
        v76 = v73 + 20;
        if ( *(_DWORD *)(v74 + 8) )
          v75 = *(const char **)(v74 + 4);
        if ( v75 )
        {
          v104 = (int)v75;
          v77 = strlen(v75);
          v21 = (char *)v104;
          v106 = v76;
          v78 = v77;
        }
        else
        {
          v106 = v76;
LABEL_196:
          v78 = 6;
          v77 = 6;
          v21 = (char *)&qword_811CFF4 - 279162;
        }
        goto LABEL_132;
      case 'u':
        v56 = 10;
        v109 = "";
LABEL_103:
        if ( --v103 <= 0 )
        {
          if ( v104 == 1531 )
            goto LABEL_177;
          if ( !v113 )
            goto LABEL_169;
          v111 = 0;
          v112 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64((__m128i)0LL, 0x20u)), _mm_cvtsi128_si32((__m128i)0LL));
          goto LABEL_113;
        }
        if ( *(_BYTE *)v106 == 2 )
        {
          v58 = v106 + 20;
          v59 = *(_DWORD *)(v106 + 4);
          v104 = v59 | v113;
          if ( !(v59 | v113) )
            goto LABEL_106;
          v112 = v59;
          v106 += 20;
          v111 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v59), _mm_cvtsi32_si128(0));
          goto LABEL_113;
        }
        LOBYTE(v104) = v13;
        result = sub_808A540(v106);
        LOBYTE(v13) = v104;
        if ( result )
        {
          if ( result != 1531 )
            goto LABEL_12;
LABEL_177:
          v19 = strlen(v109);
          goto LABEL_178;
        }
        v58 = v106 + 20;
        v111 = _mm_loadl_epi64((const __m128i *)(v106 + 4));
        v112 = __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v111, 0x20u)), _mm_cvtsi128_si32(v111));
        if ( v113 || v112 )
        {
          v106 += 20;
          goto LABEL_113;
        }
        goto LABEL_185;
      default:
        goto LABEL_34;
    }
  }
  if ( --v103 > 0 )
  {
    v105 = v15;
    v86 = v106;
    result = sub_808A3E0(v106);
    if ( !result )
    {
      v104 = *(_DWORD *)(v86 + 4);
      v15 = v105;
      v106 = v86 + 20;
      goto LABEL_172;
    }
  }
  else
  {
    if ( !v104 )
    {
LABEL_172:
      v85 = v104;
      v13 = (unsigned __int8)v15[2];
      v15 += 2;
      v104 = 0;
      v113 = v85;
      goto LABEL_61;
    }
LABEL_246:
    result = 1531;
  }
LABEL_12:
  if ( v119[0] != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 804B9D0: using guessed type __int64 __cdecl __udivmoddi4(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D3B0: using guessed type _BYTE algn_811D3B0[16];
// 811D3BC: using guessed type int (__cdecl *)(_DWORD, _DWORD, _DWORD);

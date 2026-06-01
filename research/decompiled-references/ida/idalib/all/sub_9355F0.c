unsigned __int64 __fastcall sub_9355F0(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  unsigned int v7; // r12d
  __int64 v8; // r11
  __int64 v9; // r13
  int v10; // ecx
  int v11; // ebp
  int v12; // ebx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  bool v15; // cf
  __int64 v16; // rsi
  int v17; // ecx
  unsigned int v18; // eax
  int v19; // edx
  __int64 v20; // rcx
  const char *v21; // r14
  const char *v22; // rcx
  unsigned int v23; // r8d
  __int64 v24; // r14
  int v25; // ecx
  __int64 v26; // rbp
  char v27; // cl
  _DWORD *v28; // rbx
  unsigned int v29; // eax
  __int64 v30; // rsi
  unsigned int *v31; // rsi
  unsigned int v32; // r11d
  __int64 v33; // rsi
  _BYTE *v34; // r9
  unsigned int v35; // eax
  unsigned int v36; // ecx
  __int64 v37; // rax
  unsigned int *v38; // rsi
  unsigned int v39; // eax
  __int8 v40; // r14
  __int64 v41; // rsi
  __int64 v42; // r11
  __int64 v43; // rbp
  __m128i *v44; // r11
  __int8 v45; // r13
  __m128i v46; // xmm0
  __m128i v47; // xmm0
  char v48; // bl
  bool v50; // r8
  unsigned int v52; // ecx
  unsigned int v53; // ecx
  unsigned int v54; // eax
  int v55; // ecx
  unsigned __int64 v56; // r11
  __int64 v57; // rax
  unsigned __int64 v58; // r14
  bool v59; // r12
  __int64 v60; // rdi
  _QWORD *v61; // r8
  unsigned __int64 v64; // rcx
  __m128i v65; // xmm0
  __m128i v66; // xmm0
  __int64 v67; // r14
  unsigned int v68; // esi
  char v69; // di
  int v70; // eax
  unsigned __int16 v71; // r9
  __int64 v73; // rbp
  unsigned int v75; // r8d
  unsigned int v76; // r8d
  __int64 v77; // rbx
  unsigned __int64 v78; // r9
  __int64 v79; // r12
  __int64 v80; // rax
  __int64 v81; // rcx
  unsigned __int64 v82; // rdx
  unsigned __int64 v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // r8
  char *v88; // r8
  __int64 *v90; // rcx
  _QWORD *v91; // r8
  _QWORD *v92; // rsi
  signed __int64 v93; // rax
  __int64 v94; // rax
  __int64 v97; // rbp
  __int64 v98; // r8
  _QWORD *v101; // r9
  unsigned int v102; // ebp
  unsigned int v103; // eax
  __int64 v104; // rdx
  unsigned int *v105; // rdx
  unsigned int v106; // r11d
  __int64 v107; // rdx
  _BYTE *v108; // rsi
  unsigned int v109; // eax
  _DWORD *v110; // r11
  unsigned int v111; // eax
  unsigned int v112; // ecx
  unsigned int v113; // esi
  int v114; // r12d
  char v115; // al
  unsigned int v116; // ebx
  char v117; // cl
  int v118; // eax
  unsigned int v119; // eax
  __int64 v120; // r9
  int v122; // [rsp+Ch] [rbp-1BCh]
  int v123; // [rsp+Ch] [rbp-1BCh]
  __int64 v124; // [rsp+10h] [rbp-1B8h]
  char *v125; // [rsp+10h] [rbp-1B8h]
  __int64 v126; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v127; // [rsp+18h] [rbp-1B0h]
  __int64 v128; // [rsp+18h] [rbp-1B0h]
  unsigned int v129; // [rsp+20h] [rbp-1A8h]
  char *v130; // [rsp+20h] [rbp-1A8h]
  char v131; // [rsp+28h] [rbp-1A0h]
  _QWORD *v132; // [rsp+28h] [rbp-1A0h]
  __int64 v133; // [rsp+30h] [rbp-198h]
  const __m128i *v134; // [rsp+38h] [rbp-190h]
  unsigned int v135; // [rsp+40h] [rbp-188h]
  unsigned int v136; // [rsp+44h] [rbp-184h]
  const char *v137; // [rsp+48h] [rbp-180h]
  _QWORD *v138; // [rsp+50h] [rbp-178h]
  unsigned int v139; // [rsp+58h] [rbp-170h]
  __int64 v140; // [rsp+58h] [rbp-170h]
  __int64 v141; // [rsp+60h] [rbp-168h]
  __int64 v142; // [rsp+68h] [rbp-160h]
  __int64 v143; // [rsp+70h] [rbp-158h]
  int v144; // [rsp+78h] [rbp-150h]
  char v145; // [rsp+78h] [rbp-150h]
  unsigned int v146; // [rsp+7Ch] [rbp-14Ch]
  _DWORD v147[66]; // [rsp+80h] [rbp-148h]
  unsigned __int64 v148; // [rsp+188h] [rbp-40h]

  v5 = (unsigned __int64)a2;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_DWORD *)(a1 + 28);
  v8 = *(_QWORD *)(a1 + 248);
  v9 = *(_QWORD *)(a1 + 112);
  v10 = *(_DWORD *)(a1 + 256);
  v11 = (_DWORD)a2 - v6;
  v12 = *(_DWORD *)(a1 + 52);
  v148 = __readfsqword(0x28u);
  v133 = v8;
  v126 = v9;
  v124 = *(_QWORD *)(a1 + 56);
  v129 = (_DWORD)a2 - v6;
  v136 = *(_DWORD *)(a1 + 24);
  v138 = (_QWORD *)(v6 + v136);
  v122 = (_DWORD)a2 - v6;
  v13 = 1 << v10;
  v14 = (_DWORD)a2 - v6 - v13;
  v15 = v13 < (_DWORD)a2 - (_DWORD)v6 - v7;
  v16 = *(_QWORD *)(a1 + 96);
  if ( !v15 )
    v14 = v7;
  LOBYTE(v17) = 4;
  if ( !*(_DWORD *)(a1 + 40) )
    v7 = v14;
  if ( *(_DWORD *)(a1 + 268) <= 4u )
    v17 = *(_DWORD *)(a1 + 268);
  v18 = -1640531535 * *(_DWORD *)v5;
  v19 = 1 << v17;
  v135 = v18 >> (24 - *(_BYTE *)(v8 + 52));
  v20 = 16 * (v135 >> 8);
  v21 = (const char *)(v20 + *(_QWORD *)(v8 + 56));
  v22 = (const char *)(*(_QWORD *)(v8 + 112) + 4 * v20);
  _mm_prefetch(v22, 1);
  _mm_prefetch(v21, 1);
  v131 = 24 - v12;
  v134 = (const __m128i *)v21;
  v137 = v22;
  v139 = *(_QWORD *)(a1 + 96);
  if ( *(_DWORD *)(a1 + 300) )
  {
    v39 = ((unsigned int)v16 ^ v18) >> v131;
    *(_DWORD *)(a1 + 44) = v129;
  }
  else
  {
    v23 = *(_DWORD *)(a1 + 44);
    v24 = *(_QWORD *)(a1 + 56);
    v141 = a1 + 64;
    v25 = v11;
    v26 = v6;
    if ( v25 - v23 > 0x180 )
    {
      v102 = v23 + 96;
      if ( v23 >= v23 + 96 )
      {
        v26 = v6;
        v24 = *(_QWORD *)(a1 + 56);
      }
      else
      {
        v144 = v19;
        while ( 1 )
        {
          v103 = ((unsigned int)v16 ^ (-1640531535 * *(_DWORD *)(v6 + v23 + 8))) >> v131;
          v104 = 16 * (v103 >> 8);
          _mm_prefetch((const char *)(v9 + 4 * v104), 1);
          _mm_prefetch((const char *)(v124 + v104), 1);
          v105 = (unsigned int *)(a1 + 64 + 4LL * (v23 & 7));
          v106 = *v105;
          *v105 = v103;
          v107 = 16 * (v106 >> 8);
          v108 = (_BYTE *)(v124 + v107);
          v109 = (*(_BYTE *)(v124 + v107) - 1) & 0xF;
          if ( ((*(_BYTE *)(v124 + v107) - 1) & 0xF) == 0 )
            v109 = 15;
          *v108 = v109;
          v108[v109] = v106;
          *(_DWORD *)(v9 + 4 * (v107 + v109)) = v23++;
          if ( v102 == v23 )
            break;
          v16 = *(_QWORD *)(a1 + 96);
        }
        v19 = v144;
        v9 = *(_QWORD *)(a1 + 112);
        v24 = *(_QWORD *)(a1 + 56);
        v12 = *(_DWORD *)(a1 + 52);
        v26 = *(_QWORD *)(a1 + 8);
      }
      v110 = (_DWORD *)(v6 + v129 - 32);
      v23 = v129 - 32;
      if ( v5 + 1 >= (unsigned __int64)v110 )
      {
        v111 = v5 + 1 - (_DWORD)v110 + 1;
        if ( v111 > 8 )
          v111 = 8;
        v112 = v111 + v23;
        if ( v23 < v111 + v23 )
        {
          v143 = v6;
          v113 = v129 - 32;
          v146 = v7;
          v114 = *(_DWORD *)(a1 + 96);
          v115 = 24 - v12;
          v145 = v12;
          v116 = v112;
          v117 = v115;
          do
          {
            v118 = -1640531535 * *v110;
            v110 = (_DWORD *)((char *)v110 + 1);
            v119 = (v114 ^ (unsigned int)v118) >> v117;
            v120 = 16 * (v119 >> 8);
            _mm_prefetch((const char *)(v9 + 4 * v120), 1);
            _mm_prefetch((const char *)(v24 + v120), 1);
            LOBYTE(v120) = v113++;
            *(_DWORD *)(a1 + 4 * (v120 & 7) + 64) = v119;
          }
          while ( v116 != v113 );
          LOBYTE(v12) = v145;
          v6 = v143;
          v7 = v146;
        }
      }
    }
    if ( v129 > v23 )
    {
      v142 = v6;
      v27 = 24 - v12;
      v28 = (_DWORD *)(v26 + v23 + 8);
      do
      {
        v29 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v28)) >> v27;
        v30 = 16 * (v29 >> 8);
        _mm_prefetch((const char *)(v9 + 4 * v30), 1);
        _mm_prefetch((const char *)(v24 + v30), 1);
        v31 = (unsigned int *)(v141 + 4LL * (v23 & 7));
        v32 = *v31;
        *v31 = v29;
        v33 = 16 * (v32 >> 8);
        v34 = (_BYTE *)(v24 + v33);
        v35 = (*(_BYTE *)(v24 + v33) - 1) & 0xF;
        if ( ((*(_BYTE *)(v24 + v33) - 1) & 0xF) == 0 )
          v35 = 15;
        v28 = (_DWORD *)((char *)v28 + 1);
        *v34 = v35;
        v34[v35] = v32;
        *(_DWORD *)(v9 + 4 * (v33 + v35)) = v23++;
      }
      while ( v122 != v23 );
      v6 = v142;
    }
    *(_DWORD *)(a1 + 44) = v129;
    v36 = ((-1640531535 * *(_DWORD *)(v6 + v129 + 8)) ^ v139) >> v131;
    v37 = 16 * (v36 >> 8);
    _mm_prefetch((const char *)(v126 + 4 * v37), 1);
    _mm_prefetch((const char *)(v124 + v37), 1);
    v38 = (unsigned int *)(v141 + 4LL * (v129 & 7));
    v39 = *v38;
    *v38 = v36;
  }
  *(_DWORD *)(a1 + 104) += v39;
  v40 = v39;
  v41 = 0;
  v42 = 16 * (v39 >> 8);
  v43 = v126 + 4 * v42;
  v44 = (__m128i *)(v124 + v42);
  v45 = v44->m128i_i8[0];
  v46 = _mm_cvtsi32_si128(v39);
  v47 = _mm_unpacklo_epi8(v46, v46);
  v48 = v44->m128i_i8[0] & 0xF;
  _RAX = (unsigned __int16)__ROR2__(
                             _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi16(v47, v47), 0), _mm_loadu_si128(v44))),
                             v48);
  if ( (_WORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rcx, rax }
      v52 = (v48 + (_BYTE)_RCX) & 0xF;
      if ( v52 )
      {
        v53 = *(_DWORD *)(v43 + 4LL * v52);
        if ( v53 < v7 )
          goto LABEL_23;
        --v19;
        _mm_prefetch((const char *)(v6 + v53), 1);
        v147[v41++] = v53;
      }
      v50 = v19 != 0;
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v19 );
  }
  else
  {
LABEL_23:
    v50 = 1;
  }
  v54 = (v45 + 15) & 0xF;
  if ( ((v45 + 15) & 0xF) == 0 )
    v54 = 15;
  v44->m128i_i8[0] = v54;
  v44->m128i_i8[v54] = v40;
  v55 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v55 + 1;
  v56 = 3;
  *(_DWORD *)(v43 + 4LL * v54) = v55;
  if ( !v41 )
    goto LABEL_37;
  v57 = 0;
  v58 = a3 - 7;
  v59 = v50;
  while ( 1 )
  {
    while ( 1 )
    {
      v60 = (unsigned int)v147[v57];
      v61 = (_QWORD *)(v6 + v60);
      if ( *(_DWORD *)(v5 + v56 - 3) == *(_DWORD *)(v6 + v60 + v56 - 3) )
        break;
LABEL_28:
      if ( v41 == ++v57 )
        goto LABEL_36;
    }
    if ( v5 >= v58 )
    {
      v90 = (__int64 *)v5;
    }
    else
    {
      if ( *v61 != *(_QWORD *)v5 )
      {
        _RCX = *(_QWORD *)v5 ^ *v61;
        __asm { tzcnt   rcx, rcx }
        v64 = (unsigned int)_RCX >> 3;
        goto LABEL_33;
      }
      v90 = (__int64 *)(v5 + 8);
      v132 = v61 + 1;
      if ( v58 <= v5 + 8 )
      {
        ++v61;
      }
      else
      {
        v97 = v61[1];
        v98 = *(_QWORD *)(v5 + 8);
        if ( v98 != v97 )
        {
LABEL_85:
          _R8 = v97 ^ v98;
          __asm { tzcnt   r8, r8 }
          v64 = (unsigned __int64)v90 + ((unsigned int)_R8 >> 3) - v5;
          goto LABEL_33;
        }
        v140 = v6;
        v101 = v132;
        while ( 1 )
        {
          ++v90;
          ++v101;
          if ( v58 <= (unsigned __int64)v90 )
            break;
          v98 = *v101;
          v97 = *v90;
          if ( *v101 != *v90 )
          {
            v6 = v140;
            goto LABEL_85;
          }
        }
        v61 = v101;
        v6 = v140;
      }
    }
    if ( (unsigned __int64)v90 < a3 - 3 && *(_DWORD *)v61 == *(_DWORD *)v90 )
    {
      v90 = (__int64 *)((char *)v90 + 4);
      v61 = (_QWORD *)((char *)v61 + 4);
    }
    if ( (unsigned __int64)v90 < a3 - 1 && *(_WORD *)v61 == *(_WORD *)v90 )
    {
      v90 = (__int64 *)((char *)v90 + 2);
      v61 = (_QWORD *)((char *)v61 + 2);
    }
    if ( a3 > (unsigned __int64)v90 )
      v90 = (__int64 *)((char *)v90 + (*(_BYTE *)v61 == *(_BYTE *)v90));
    v64 = (unsigned __int64)v90 - v5;
LABEL_33:
    if ( v56 >= v64 )
      goto LABEL_28;
    *a4 = (unsigned int)(v122 + 3 - v60);
    if ( a3 == v5 + v64 )
      break;
    ++v57;
    v56 = v64;
    if ( v41 == v57 )
    {
LABEL_36:
      v50 = v59;
      goto LABEL_37;
    }
  }
  v50 = v59;
  v56 = v64;
LABEL_37:
  v65 = _mm_cvtsi32_si128(v135);
  v66 = _mm_unpacklo_epi8(v65, v65);
  v67 = *(_QWORD *)(v133 + 8);
  v68 = *(_DWORD *)(v133 + 24);
  v69 = v134->m128i_i8[0] & 0xF;
  v125 = *(char **)v133;
  v70 = *(_QWORD *)v133 - v67;
  v71 = __ROR2__(
          _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi16(v66, v66), 0), _mm_loadu_si128(v134))),
          v69);
  _RCX = v71;
  if ( v71 && v50 )
  {
    v73 = 0;
    do
    {
      __asm { tzcnt   r8, rcx }
      v75 = (v69 + (_BYTE)_R8) & 0xF;
      if ( v75 )
      {
        v76 = *(_DWORD *)&v137[4 * v75];
        if ( v68 > v76 )
          break;
        --v19;
        _mm_prefetch((const char *)(v67 + v76), 1);
        v147[v73++] = v76;
      }
      _RCX &= _RCX - 1;
    }
    while ( _RCX && v19 );
    if ( v73 )
    {
      v77 = 0;
      v123 = v70 + v122 - v136 + 3;
      v78 = v5 + 4;
      while ( 2 )
      {
        v79 = (unsigned int)v147[v77];
        v80 = v67 + v79;
        if ( *(_DWORD *)v5 != *(_DWORD *)(v67 + v79) )
          goto LABEL_47;
        v81 = v80 + 4;
        v82 = (unsigned __int64)&v125[v78 - 4 - v80];
        if ( a3 < v82 )
          v82 = a3;
        v83 = v82 - 7;
        if ( v78 >= v82 - 7 )
        {
          v91 = (_QWORD *)(v80 + 4);
          v92 = (_QWORD *)v78;
        }
        else
        {
          v84 = *(_QWORD *)(v80 + 4);
          v85 = *(_QWORD *)(v5 + 4);
          if ( v84 != v85 )
          {
            _RSI = v85 ^ v84;
            __asm { tzcnt   rsi, rsi }
            v88 = (char *)((unsigned int)_RSI >> 3);
            goto LABEL_54;
          }
          v92 = (_QWORD *)(v5 + 12);
          v91 = (_QWORD *)(v80 + 12);
          if ( v83 > v5 + 12 )
          {
            v128 = *(_QWORD *)(v80 + 12);
            v94 = *(_QWORD *)(v5 + 12);
            if ( v128 != v94 )
            {
              _RAX = v128 ^ v94;
LABEL_82:
              __asm { tzcnt   r8, rax }
              v88 = (char *)v92 + ((unsigned int)_R8 >> 3) - v78;
LABEL_54:
              if ( v125 != &v88[v81] )
              {
LABEL_55:
                if ( v56 < (unsigned __int64)(v88 + 4) )
                {
                  v56 = (unsigned __int64)(v88 + 4);
                  *a4 = (unsigned int)(v123 - v79);
                  if ( (char *)a3 == &v88[v5 + 4] )
                    return v56;
                }
LABEL_47:
                if ( ++v77 == v73 )
                  return v56;
                continue;
              }
LABEL_78:
              v130 = v88;
              v127 = v78;
              v93 = sub_92B7A0(&v88[v78], v138, a3);
              v78 = v127;
              v88 = &v130[v93];
              goto LABEL_55;
            }
            while ( 1 )
            {
              ++v92;
              ++v91;
              if ( v83 <= (unsigned __int64)v92 )
                break;
              if ( *v91 != *v92 )
              {
                _RAX = *v92 ^ *v91;
                goto LABEL_82;
              }
            }
          }
        }
        break;
      }
      if ( (unsigned __int64)v92 < v82 - 3 && *(_DWORD *)v91 == *(_DWORD *)v92 )
      {
        v92 = (_QWORD *)((char *)v92 + 4);
        v91 = (_QWORD *)((char *)v91 + 4);
      }
      if ( (unsigned __int64)v92 < v82 - 1 && *(_WORD *)v91 == *(_WORD *)v92 )
      {
        v92 = (_QWORD *)((char *)v92 + 2);
        v91 = (_QWORD *)((char *)v91 + 2);
      }
      if ( v82 > (unsigned __int64)v92 )
        v92 = (_QWORD *)((char *)v92 + (*(_BYTE *)v91 == *(_BYTE *)v92));
      v88 = (char *)v92 - v78;
      if ( v125 != (char *)v92 + v81 - v78 )
        goto LABEL_55;
      goto LABEL_78;
    }
  }
  return v56;
}

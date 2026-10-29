unsigned __int64 __fastcall sub_E2860(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // rbx
  unsigned int v6; // ebp
  int v7; // r11d
  __int64 v8; // r12
  __int64 v9; // rcx
  unsigned int v10; // r15d
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned int v14; // r14d
  char *v15; // rax
  unsigned int v16; // eax
  bool v17; // cf
  int v18; // ecx
  int v19; // esi
  __int64 v20; // r8
  char v21; // cl
  _QWORD *v22; // r11
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int *v25; // rdx
  unsigned int v26; // ebx
  __int64 v27; // rdx
  _BYTE *v28; // r9
  unsigned int v29; // eax
  unsigned __int64 v30; // rdx
  _DWORD *v31; // rcx
  unsigned __int64 v32; // rax
  __int8 v33; // r13
  __int64 v34; // r12
  __int64 v35; // r8
  __m128i v36; // xmm0
  __int64 v37; // r11
  __m128i *v38; // r8
  __m128i v39; // xmm0
  __int8 v40; // bl
  char v41; // r9
  unsigned int v44; // edx
  unsigned int v45; // edx
  unsigned __int64 v46; // rbp
  unsigned int v47; // eax
  int v48; // edx
  __int64 v49; // r11
  unsigned __int64 v50; // r9
  unsigned int v51; // r15d
  _QWORD *v52; // rax
  __int64 v53; // rax
  int v54; // ebx
  __int64 v55; // rax
  __int64 v56; // rcx
  unsigned __int64 v57; // rdx
  unsigned __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // r8
  _QWORD *v61; // rsi
  _QWORD *v62; // r8
  __int64 v63; // rax
  char *v66; // r8
  signed __int64 v67; // rax
  _QWORD *v68; // rsi
  _QWORD *v69; // rdx
  __int64 v70; // rax
  __int64 v71; // r8
  unsigned __int64 v74; // rsi
  unsigned __int64 v76; // rax
  int v81; // ebx
  __int64 i; // rdx
  unsigned __int64 v83; // rax
  __int64 v84; // rdx
  unsigned int *v85; // rdx
  unsigned int v86; // r9d
  __int64 v87; // rdx
  _BYTE *v88; // rsi
  unsigned int v89; // eax
  _QWORD *v90; // r9
  unsigned int v91; // eax
  unsigned int v92; // edx
  __int64 v93; // r15
  int v94; // r14d
  char v95; // cl
  unsigned __int64 v96; // rax
  unsigned __int64 v97; // rax
  __int64 v98; // r11
  __int64 v99; // [rsp+0h] [rbp-1C8h]
  __int64 v100; // [rsp+8h] [rbp-1C0h]
  __int64 v102; // [rsp+18h] [rbp-1B0h]
  unsigned __int64 v103; // [rsp+18h] [rbp-1B0h]
  char *v104; // [rsp+20h] [rbp-1A8h]
  __int64 v105; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v106; // [rsp+28h] [rbp-1A0h]
  unsigned int v107; // [rsp+30h] [rbp-198h]
  unsigned __int64 v108; // [rsp+30h] [rbp-198h]
  __int64 v109; // [rsp+38h] [rbp-190h]
  unsigned __int64 v110; // [rsp+38h] [rbp-190h]
  char v111; // [rsp+40h] [rbp-188h]
  __int64 v112; // [rsp+40h] [rbp-188h]
  unsigned __int64 v113; // [rsp+40h] [rbp-188h]
  char *v115; // [rsp+48h] [rbp-180h]
  __int64 v116; // [rsp+50h] [rbp-178h]
  _QWORD *v117; // [rsp+58h] [rbp-170h]
  char v118; // [rsp+68h] [rbp-160h]
  unsigned int v119; // [rsp+70h] [rbp-158h]
  unsigned int v120; // [rsp+78h] [rbp-150h]
  _DWORD v121[66]; // [rsp+80h] [rbp-148h]
  unsigned __int64 v122; // [rsp+188h] [rbp-40h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_QWORD *)(a1 + 112);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = (_DWORD)a2 - v5;
  v11 = *(_QWORD *)(a1 + 56);
  v122 = __readfsqword(0x28u);
  v12 = *(unsigned int *)(a1 + 24);
  v100 = v9;
  v102 = v8;
  v13 = (_QWORD *)(v5 + v12);
  v14 = *(_DWORD *)(a1 + 24);
  v15 = (char *)(v9 + v12);
  v99 = v5;
  v18 = *(_DWORD *)(a1 + 256);
  v117 = v13;
  v104 = v15;
  v105 = v11;
  v16 = v10 - (1 << v18);
  v107 = v10;
  v17 = 1 << v18 < v10 - v6;
  LOBYTE(v18) = 4;
  if ( !v17 )
    v16 = v6;
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v16;
  if ( *(_DWORD *)(a1 + 268) <= 4u )
    v18 = *(_DWORD *)(a1 + 268);
  v109 = *(_QWORD *)(a1 + 96);
  v19 = 1 << v18;
  v111 = 56 - v7;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v76 = 0xCF1BBCDCBB000000LL * *v4;
    *(_DWORD *)(a1 + 44) = v10;
    v32 = (v109 ^ v76) >> v111;
  }
  else
  {
    LODWORD(v20) = *(_DWORD *)(a1 + 44);
    v116 = a1 + 64;
    if ( v10 - (unsigned int)v20 > 0x180 )
    {
      v81 = v20 + 96;
      if ( (unsigned int)v20 >= (int)v20 + 96 )
      {
        v5 = v99;
      }
      else
      {
        for ( i = *(_QWORD *)(a1 + 96); ; i = *(_QWORD *)(a1 + 96) )
        {
          v83 = (i ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v99 + (unsigned int)v20 + 8))) >> v111;
          v84 = 16 * ((unsigned int)v83 >> 8);
          _mm_prefetch((const char *)(v8 + 4 * v84), 1);
          _mm_prefetch((const char *)(v11 + v84), 1);
          v85 = (unsigned int *)(a1 + 64 + 4 * (v20 & 7));
          v86 = *v85;
          *v85 = v83;
          v87 = 16 * (v86 >> 8);
          v88 = (_BYTE *)(v11 + v87);
          v89 = (*(_BYTE *)(v11 + v87) - 1) & 0xF;
          if ( ((*(_BYTE *)(v11 + v87) - 1) & 0xF) == 0 )
            v89 = 15;
          *v88 = v89;
          v88[v89] = v86;
          *(_DWORD *)(v8 + 4 * (v87 + v89)) = v20;
          LODWORD(v20) = v20 + 1;
          if ( v81 == (_DWORD)v20 )
            break;
        }
        v19 = 1 << v18;
        v8 = *(_QWORD *)(a1 + 112);
        v11 = *(_QWORD *)(a1 + 56);
        v7 = *(_DWORD *)(a1 + 52);
        v5 = *(_QWORD *)(a1 + 8);
      }
      v20 = v10 - 32;
      v90 = (_QWORD *)(v99 + v20);
      if ( (unsigned __int64)v4 + 1 >= v99 + v20 )
      {
        v91 = (_DWORD)v4 + 1 - (_DWORD)v90 + 1;
        if ( v91 > 8 )
          v91 = 8;
        if ( (unsigned int)v20 < v91 + (unsigned int)v20 )
        {
          v118 = v7;
          v92 = v10 - 32;
          v120 = v10;
          v93 = *(_QWORD *)(a1 + 96);
          v119 = v14;
          v94 = v91 + v20;
          v95 = 56 - v7;
          do
          {
            v96 = 0xCF1BBCDCBB000000LL * *v90;
            v90 = (_QWORD *)((char *)v90 + 1);
            v97 = (v93 ^ v96) >> v95;
            v98 = 16 * ((unsigned int)v97 >> 8);
            _mm_prefetch((const char *)(v8 + 4 * v98), 1);
            _mm_prefetch((const char *)(v11 + v98), 1);
            LOBYTE(v98) = v92++;
            *(_DWORD *)(a1 + 4 * (v98 & 7) + 64) = v97;
          }
          while ( v94 != v92 );
          LOBYTE(v7) = v118;
          v14 = v119;
          v10 = v120;
        }
      }
    }
    if ( v10 > (unsigned int)v20 )
    {
      v21 = 56 - v7;
      v22 = (_QWORD *)(v5 + (unsigned int)v20 + 8);
      do
      {
        v23 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBB000000LL * *v22)) >> v21;
        v24 = 16 * ((unsigned int)v23 >> 8);
        _mm_prefetch((const char *)(v8 + 4 * v24), 1);
        _mm_prefetch((const char *)(v11 + v24), 1);
        v25 = (unsigned int *)(v116 + 4 * (v20 & 7));
        v26 = *v25;
        *v25 = v23;
        v27 = 16 * (v26 >> 8);
        v28 = (_BYTE *)(v11 + v27);
        v29 = (*(_BYTE *)(v11 + v27) - 1) & 0xF;
        if ( ((*(_BYTE *)(v11 + v27) - 1) & 0xF) == 0 )
          v29 = 15;
        v22 = (_QWORD *)((char *)v22 + 1);
        *v28 = v29;
        v28[v29] = v26;
        *(_DWORD *)(v8 + 4 * (v27 + v29)) = v20;
        LODWORD(v20) = v20 + 1;
      }
      while ( v107 != (_DWORD)v20 );
    }
    *(_DWORD *)(a1 + 44) = v10;
    v30 = (v109 ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v99 + v10 + 8))) >> v111;
    v32 = 16 * ((unsigned int)v30 >> 8);
    _mm_prefetch((const char *)(v102 + 4 * v32), 1);
    _mm_prefetch((const char *)(v105 + v32), 1);
    v31 = (_DWORD *)(v116 + 4LL * (v10 & 7));
    LODWORD(v32) = *v31;
    *v31 = v30;
  }
  v33 = v32;
  *(_DWORD *)(a1 + 104) += v32;
  v34 = 0;
  v35 = 16 * ((unsigned int)v32 >> 8);
  v36 = _mm_cvtsi32_si128(v32);
  v37 = v102 + 4 * v35;
  v38 = (__m128i *)(v105 + v35);
  v39 = _mm_unpacklo_epi8(v36, v36);
  v40 = v38->m128i_i8[0];
  v41 = v38->m128i_i8[0] & 0xF;
  _RAX = (unsigned __int16)__ROR2__(
                             _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi16(v39, v39), 0), _mm_loadu_si128(v38))),
                             v41);
  if ( (_WORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v44 = (v41 + (_BYTE)_RDX) & 0xF;
      if ( v44 )
      {
        v45 = *(_DWORD *)(v37 + 4LL * v44);
        if ( v45 < v6 )
          break;
        if ( v14 <= v45 )
          _mm_prefetch((const char *)(v99 + v45), 1);
        else
          _mm_prefetch((const char *)(v100 + v45), 1);
        v121[v34] = v45;
        --v19;
        ++v34;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v19 );
  }
  v46 = 3;
  v47 = (v40 + 15) & 0xF;
  if ( ((v40 + 15) & 0xF) == 0 )
    v47 = 15;
  v38->m128i_i8[0] = v47;
  v38->m128i_i8[v47] = v33;
  v48 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v48 + 1;
  *(_DWORD *)(v37 + 4LL * v47) = v48;
  if ( v34 )
  {
    v49 = 0;
    v103 = (unsigned __int64)v4 + 4;
    v50 = a3;
    v106 = a3 - 7;
    v51 = v107 + 3;
    v108 = a3 - 3;
    v110 = a3 - 1;
    while ( 1 )
    {
      v53 = (unsigned int)v121[v49];
      v54 = v53;
      if ( v14 > (unsigned int)v53 )
      {
        v55 = v100 + v53;
        if ( *(_DWORD *)v4 != *(_DWORD *)v55 )
          goto LABEL_30;
        v56 = v55 + 4;
        v57 = (unsigned __int64)&v104[v103 - 4 - v55];
        if ( v50 < v57 )
          v57 = v50;
        v58 = v57 - 7;
        if ( v103 >= v57 - 7 )
        {
          v61 = (_QWORD *)v103;
          v62 = (_QWORD *)(v55 + 4);
          goto LABEL_50;
        }
        v59 = *(_QWORD *)(v55 + 4);
        v60 = *(_QWORD *)((char *)v4 + 4);
        if ( v59 == v60 )
        {
          v61 = (_QWORD *)((char *)v4 + 12);
          v62 = (_QWORD *)(v55 + 12);
          if ( v58 > (unsigned __int64)v4 + 12 )
          {
            v112 = *(_QWORD *)(v55 + 12);
            v63 = *(_QWORD *)((char *)v4 + 12);
            if ( v112 != v63 )
            {
              _RAX = v112 ^ v63;
LABEL_40:
              __asm { tzcnt   r8, rax }
              v66 = (char *)v61 + ((unsigned int)_R8 >> 3) - v103;
              if ( v104 == &v66[v56] )
              {
LABEL_41:
                v115 = v66;
                v113 = v50;
                v67 = sub_C9E40(&v66[v103], v117, v50);
                v50 = v113;
                v66 = &v115[v67];
              }
LABEL_57:
              v74 = (unsigned __int64)(v66 + 4);
              goto LABEL_58;
            }
            while ( 1 )
            {
              ++v61;
              ++v62;
              if ( v58 <= (unsigned __int64)v61 )
                break;
              if ( *v62 != *v61 )
              {
                _RAX = *v61 ^ *v62;
                goto LABEL_40;
              }
            }
          }
LABEL_50:
          if ( (unsigned __int64)v61 >= v57 - 3 || *(_DWORD *)v62 != *(_DWORD *)v61 )
          {
            if ( (unsigned __int64)v61 < v57 - 1 )
              goto LABEL_53;
LABEL_54:
            if ( v57 <= (unsigned __int64)v61 )
              goto LABEL_55;
LABEL_70:
            v61 = (_QWORD *)((char *)v61 + (*(_BYTE *)v62 == *(_BYTE *)v61));
            goto LABEL_55;
          }
          v61 = (_QWORD *)((char *)v61 + 4);
          v62 = (_QWORD *)((char *)v62 + 4);
          if ( (unsigned __int64)v61 >= v57 - 1 )
            goto LABEL_54;
LABEL_53:
          if ( *(_WORD *)v62 != *(_WORD *)v61 )
            goto LABEL_54;
          v61 = (_QWORD *)((char *)v61 + 2);
          v62 = (_QWORD *)((char *)v62 + 2);
          if ( v57 > (unsigned __int64)v61 )
            goto LABEL_70;
LABEL_55:
          v66 = (char *)v61 - v103;
        }
        else
        {
          _RSI = v60 ^ v59;
          __asm { tzcnt   rsi, rsi }
          v66 = (char *)((unsigned int)_RSI >> 3);
        }
        if ( v104 == &v66[v56] )
          goto LABEL_41;
        goto LABEL_57;
      }
      v52 = (_QWORD *)(v99 + v53);
      if ( *(_DWORD *)((char *)v4 + v46 - 3) != *(_DWORD *)((char *)v52 + v46 - 3) )
        goto LABEL_30;
      if ( (unsigned __int64)v4 >= v106 )
      {
        v68 = v4;
        goto LABEL_62;
      }
      if ( *v52 == *v4 )
        break;
      _RDX = *v4 ^ *v52;
      __asm { tzcnt   rsi, rdx }
      v74 = (unsigned int)_RSI >> 3;
LABEL_58:
      if ( v74 > v46 )
      {
        *a4 = v51 - v54;
        if ( (_QWORD *)v50 == (_QWORD *)((char *)v4 + v74) )
          return v74;
        v46 = v74;
      }
LABEL_30:
      if ( v34 == ++v49 )
        return v46;
    }
    v68 = v4 + 1;
    v69 = v52 + 1;
    if ( v106 > (unsigned __int64)(v4 + 1) )
    {
      v70 = v52[1];
      v71 = v4[1];
      if ( v70 != v71 )
      {
LABEL_46:
        _RAX = v71 ^ v70;
        __asm { tzcnt   r8, rax }
        v74 = (char *)v68 + ((unsigned int)_R8 >> 3) - (char *)v4;
        goto LABEL_58;
      }
      while ( 1 )
      {
        ++v68;
        ++v69;
        if ( v106 <= (unsigned __int64)v68 )
          break;
        v70 = *v69;
        v71 = *v68;
        if ( *v69 != *v68 )
          goto LABEL_46;
      }
    }
    v52 = v69;
LABEL_62:
    if ( (unsigned __int64)v68 < v108 && *(_DWORD *)v52 == *(_DWORD *)v68 )
    {
      v68 = (_QWORD *)((char *)v68 + 4);
      v52 = (_QWORD *)((char *)v52 + 4);
      if ( (unsigned __int64)v68 >= v110 )
        goto LABEL_66;
    }
    else if ( (unsigned __int64)v68 >= v110 )
    {
      goto LABEL_66;
    }
    if ( *(_WORD *)v52 == *(_WORD *)v68 )
    {
      v68 = (_QWORD *)((char *)v68 + 2);
      v52 = (_QWORD *)((char *)v52 + 2);
      if ( v50 <= (unsigned __int64)v68 )
        goto LABEL_68;
      goto LABEL_67;
    }
LABEL_66:
    if ( v50 <= (unsigned __int64)v68 )
    {
LABEL_68:
      v74 = (char *)v68 - (char *)v4;
      goto LABEL_58;
    }
LABEL_67:
    v68 = (_QWORD *)((char *)v68 + (*(_BYTE *)v52 == *(_BYTE *)v68));
    goto LABEL_68;
  }
  return v46;
}


unsigned __int64 __fastcall sub_91FC80(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  __int64 v5; // r15
  unsigned int v6; // r12d
  int v7; // ebx
  __int64 v8; // r13
  __int64 v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // r14
  __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned int v14; // r11d
  char *v15; // rax
  unsigned int v16; // eax
  bool v17; // cf
  int v18; // ecx
  __int64 v19; // rdx
  int v20; // esi
  unsigned int v21; // r8d
  __int64 v22; // rbp
  char v23; // cl
  _DWORD *v24; // rbx
  unsigned int v25; // eax
  __int64 v26; // rdx
  unsigned int *v27; // rdx
  unsigned int v28; // ebp
  __int64 v29; // rdx
  _BYTE *v30; // r9
  unsigned int v31; // eax
  unsigned int v32; // edx
  __int64 v33; // rax
  unsigned int *v34; // rcx
  unsigned int v35; // eax
  __int8 v36; // r14
  __int64 v37; // r13
  __int64 v38; // r8
  __m128i v39; // xmm0
  __int64 v40; // rbx
  __m128i *v41; // r8
  __m128i v42; // xmm0
  __int8 v43; // bp
  char v44; // r9
  unsigned int v47; // edx
  unsigned int v48; // edx
  unsigned __int64 v49; // r12
  unsigned int v50; // eax
  int v51; // edx
  __int64 v52; // rbx
  unsigned __int64 v53; // r9
  _QWORD *v54; // rax
  __int64 v55; // rax
  int v56; // ebp
  __int64 v57; // rax
  __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rdi
  __int64 v61; // rsi
  __int64 v62; // r8
  _QWORD *v63; // rsi
  _QWORD *v64; // r8
  __int64 v65; // rax
  char *v68; // r8
  signed __int64 v69; // rax
  _QWORD *v70; // r8
  _QWORD *v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rcx
  unsigned __int64 v76; // r8
  unsigned int v78; // eax
  unsigned int v83; // ebp
  unsigned int v84; // eax
  __int64 v85; // rdx
  unsigned int *v86; // rdx
  unsigned int v87; // r11d
  __int64 v88; // rdx
  _BYTE *v89; // r9
  unsigned int v90; // eax
  _DWORD *v91; // r9
  unsigned int v92; // eax
  unsigned int v93; // ecx
  unsigned int v94; // edx
  int v95; // r15d
  char v96; // al
  unsigned int v97; // ebx
  char v98; // cl
  int v99; // eax
  unsigned int v100; // eax
  __int64 v101; // r11
  __int64 v102; // [rsp+8h] [rbp-1C0h]
  __int64 v104; // [rsp+18h] [rbp-1B0h]
  unsigned int v105; // [rsp+18h] [rbp-1B0h]
  __int64 v106; // [rsp+20h] [rbp-1A8h]
  unsigned __int64 v107; // [rsp+20h] [rbp-1A8h]
  char *v108; // [rsp+28h] [rbp-1A0h]
  unsigned int v109; // [rsp+30h] [rbp-198h]
  unsigned __int64 v110; // [rsp+30h] [rbp-198h]
  unsigned int v111; // [rsp+38h] [rbp-190h]
  unsigned __int64 v112; // [rsp+38h] [rbp-190h]
  char v113; // [rsp+40h] [rbp-188h]
  unsigned __int64 v114; // [rsp+40h] [rbp-188h]
  __int64 v116; // [rsp+48h] [rbp-180h]
  unsigned __int64 v117; // [rsp+48h] [rbp-180h]
  int v118; // [rsp+50h] [rbp-178h]
  char *v119; // [rsp+50h] [rbp-178h]
  __int64 v120; // [rsp+58h] [rbp-170h]
  _QWORD *v121; // [rsp+60h] [rbp-168h]
  unsigned int v122; // [rsp+68h] [rbp-160h]
  __int64 v123; // [rsp+70h] [rbp-158h]
  char v124; // [rsp+78h] [rbp-150h]
  unsigned int v125; // [rsp+7Ch] [rbp-14Ch]
  _DWORD v126[66]; // [rsp+80h] [rbp-148h]
  unsigned __int64 v127; // [rsp+188h] [rbp-40h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_QWORD *)(a1 + 112);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = (_DWORD)a2 - v5;
  v11 = *(_QWORD *)(a1 + 56);
  v127 = __readfsqword(0x28u);
  v12 = *(unsigned int *)(a1 + 24);
  v102 = v9;
  v104 = v8;
  v13 = (_QWORD *)(v5 + v12);
  v14 = *(_DWORD *)(a1 + 24);
  v15 = (char *)(v9 + v12);
  v18 = *(_DWORD *)(a1 + 256);
  v121 = v13;
  v108 = v15;
  v106 = v11;
  v16 = v10 - (1 << v18);
  v109 = v10;
  v17 = 1 << v18 < v10 - v6;
  LOBYTE(v18) = 4;
  v111 = v10;
  if ( !v17 )
    v16 = v6;
  v19 = *(_QWORD *)(a1 + 96);
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v16;
  if ( *(_DWORD *)(a1 + 268) <= 4u )
    v18 = *(_DWORD *)(a1 + 268);
  v118 = *(_QWORD *)(a1 + 96);
  v20 = 1 << v18;
  v113 = 24 - v7;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v78 = v19 ^ (-1640531535 * *(_DWORD *)v4);
    *(_DWORD *)(a1 + 44) = v10;
    v35 = v78 >> v113;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 44);
    v22 = v5;
    v120 = a1 + 64;
    if ( v10 - v21 > 0x180 )
    {
      v83 = v21 + 96;
      if ( v21 >= v21 + 96 )
      {
        v22 = v5;
      }
      else
      {
        v122 = *(_DWORD *)(a1 + 24);
        while ( 1 )
        {
          v84 = ((unsigned int)v19 ^ (-1640531535 * *(_DWORD *)(v5 + v21 + 8))) >> v113;
          v85 = 16 * (v84 >> 8);
          _mm_prefetch((const char *)(v8 + 4 * v85), 1);
          _mm_prefetch((const char *)(v11 + v85), 1);
          v86 = (unsigned int *)(a1 + 64 + 4LL * (v21 & 7));
          v87 = *v86;
          *v86 = v84;
          v88 = 16 * (v87 >> 8);
          v89 = (_BYTE *)(v11 + v88);
          v90 = (*(_BYTE *)(v11 + v88) - 1) & 0xF;
          if ( ((*(_BYTE *)(v11 + v88) - 1) & 0xF) == 0 )
            v90 = 15;
          *v89 = v90;
          v89[v90] = v87;
          *(_DWORD *)(v8 + 4 * (v88 + v90)) = v21++;
          if ( v83 == v21 )
            break;
          v19 = *(_QWORD *)(a1 + 96);
        }
        v14 = v122;
        v8 = *(_QWORD *)(a1 + 112);
        v11 = *(_QWORD *)(a1 + 56);
        v7 = *(_DWORD *)(a1 + 52);
        v22 = *(_QWORD *)(a1 + 8);
      }
      v91 = (_DWORD *)(v5 + v109 - 32);
      v21 = v109 - 32;
      if ( (_DWORD *)((char *)v4 + 1) >= v91 )
      {
        v92 = (_DWORD)v4 + 1 - (_DWORD)v91 + 1;
        if ( v92 > 8 )
          v92 = 8;
        v93 = v92 + v21;
        if ( v21 < v92 + v21 )
        {
          v125 = v14;
          v94 = v109 - 32;
          v123 = v5;
          v95 = *(_DWORD *)(a1 + 96);
          v96 = 24 - v7;
          v124 = v7;
          v97 = v93;
          v98 = v96;
          do
          {
            v99 = -1640531535 * *v91;
            v91 = (_DWORD *)((char *)v91 + 1);
            v100 = (v95 ^ (unsigned int)v99) >> v98;
            v101 = 16 * (v100 >> 8);
            _mm_prefetch((const char *)(v8 + 4 * v101), 1);
            _mm_prefetch((const char *)(v11 + v101), 1);
            LOBYTE(v101) = v94++;
            *(_DWORD *)(a1 + 4 * (v101 & 7) + 64) = v100;
          }
          while ( v97 != v94 );
          LOBYTE(v7) = v124;
          v5 = v123;
          v14 = v125;
        }
      }
    }
    if ( v109 > v21 )
    {
      v23 = 24 - v7;
      v24 = (_DWORD *)(v22 + v21 + 8);
      do
      {
        v25 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v24)) >> v23;
        v26 = 16 * (v25 >> 8);
        _mm_prefetch((const char *)(v8 + 4 * v26), 1);
        _mm_prefetch((const char *)(v11 + v26), 1);
        v27 = (unsigned int *)(v120 + 4LL * (v21 & 7));
        v28 = *v27;
        *v27 = v25;
        v29 = 16 * (v28 >> 8);
        v30 = (_BYTE *)(v11 + v29);
        v31 = (*(_BYTE *)(v11 + v29) - 1) & 0xF;
        if ( ((*(_BYTE *)(v11 + v29) - 1) & 0xF) == 0 )
          v31 = 15;
        v24 = (_DWORD *)((char *)v24 + 1);
        *v30 = v31;
        v30[v31] = v28;
        *(_DWORD *)(v8 + 4 * (v29 + v31)) = v21++;
      }
      while ( v111 != v21 );
    }
    *(_DWORD *)(a1 + 44) = v109;
    v32 = (v118 ^ (unsigned int)(-1640531535 * *(_DWORD *)(v5 + v109 + 8))) >> v113;
    v33 = 16 * (v32 >> 8);
    _mm_prefetch((const char *)(v104 + 4 * v33), 1);
    _mm_prefetch((const char *)(v106 + v33), 1);
    v34 = (unsigned int *)(v120 + 4LL * (v109 & 7));
    v35 = *v34;
    *v34 = v32;
  }
  v36 = v35;
  *(_DWORD *)(a1 + 104) += v35;
  v37 = 0;
  v38 = 16 * (v35 >> 8);
  v39 = _mm_cvtsi32_si128(v35);
  v40 = v104 + 4 * v38;
  v41 = (__m128i *)(v106 + v38);
  v42 = _mm_unpacklo_epi8(v39, v39);
  v43 = v41->m128i_i8[0];
  v44 = v41->m128i_i8[0] & 0xF;
  _RAX = (unsigned __int16)__ROR2__(
                             _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_shuffle_epi32(_mm_unpacklo_epi16(v42, v42), 0), _mm_loadu_si128(v41))),
                             v44);
  if ( (_WORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v47 = (v44 + (_BYTE)_RDX) & 0xF;
      if ( v47 )
      {
        v48 = *(_DWORD *)(v40 + 4LL * v47);
        if ( v48 < v6 )
          break;
        if ( v14 <= v48 )
          _mm_prefetch((const char *)(v5 + v48), 1);
        else
          _mm_prefetch((const char *)(v102 + v48), 1);
        v126[v37] = v48;
        --v20;
        ++v37;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v20 );
  }
  v49 = 3;
  v50 = (v43 + 15) & 0xF;
  if ( ((v43 + 15) & 0xF) == 0 )
    v50 = 15;
  v41->m128i_i8[0] = v50;
  v41->m128i_i8[v50] = v36;
  v51 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v51 + 1;
  *(_DWORD *)(v40 + 4LL * v50) = v51;
  if ( v37 )
  {
    v52 = 0;
    v107 = (unsigned __int64)v4 + 4;
    v105 = v111 + 3;
    v53 = a3;
    v110 = a3 - 7;
    v112 = a3 - 3;
    v114 = a3 - 1;
    while ( 1 )
    {
      v55 = (unsigned int)v126[v52];
      v56 = v55;
      if ( v14 > (unsigned int)v55 )
        break;
      v54 = (_QWORD *)(v5 + v55);
      if ( *(_DWORD *)((char *)v4 + v49 - 3) != *(_DWORD *)((char *)v54 + v49 - 3) )
        goto LABEL_30;
      if ( (unsigned __int64)v4 >= v110 )
      {
        v70 = v4;
        goto LABEL_63;
      }
      if ( *v54 != *v4 )
      {
        _RDX = *v4 ^ *v54;
        __asm { tzcnt   r8, rdx }
        v76 = (unsigned int)_R8 >> 3;
        goto LABEL_59;
      }
      v70 = v4 + 1;
      v71 = v54 + 1;
      if ( v110 <= (unsigned __int64)(v4 + 1) )
        goto LABEL_98;
      v72 = v54[1];
      v73 = v4[1];
      if ( v72 == v73 )
      {
        while ( 1 )
        {
          ++v70;
          ++v71;
          if ( v110 <= (unsigned __int64)v70 )
            break;
          v72 = *v71;
          v73 = *v70;
          if ( *v71 != *v70 )
            goto LABEL_46;
        }
LABEL_98:
        v54 = v71;
LABEL_63:
        if ( (unsigned __int64)v70 < v112 && *(_DWORD *)v54 == *(_DWORD *)v70 )
        {
          v70 = (_QWORD *)((char *)v70 + 4);
          v54 = (_QWORD *)((char *)v54 + 4);
          if ( (unsigned __int64)v70 >= v114 )
            goto LABEL_67;
LABEL_66:
          if ( *(_WORD *)v54 != *(_WORD *)v70 )
            goto LABEL_67;
          v70 = (_QWORD *)((char *)v70 + 2);
          v54 = (_QWORD *)((char *)v54 + 2);
          if ( v53 > (unsigned __int64)v70 )
LABEL_68:
            v70 = (_QWORD *)((char *)v70 + (*(_BYTE *)v54 == *(_BYTE *)v70));
        }
        else
        {
          if ( (unsigned __int64)v70 < v114 )
            goto LABEL_66;
LABEL_67:
          if ( v53 > (unsigned __int64)v70 )
            goto LABEL_68;
        }
        v76 = (char *)v70 - (char *)v4;
        goto LABEL_59;
      }
LABEL_46:
      _RAX = v73 ^ v72;
      __asm { tzcnt   rax, rax }
      v76 = (char *)v70 + ((unsigned int)_RAX >> 3) - (char *)v4;
LABEL_59:
      if ( v76 > v49 )
      {
        v49 = v76;
        *a4 = v105 - v56;
        if ( (_QWORD *)v53 == (_QWORD *)((char *)v4 + v76) )
          return v49;
      }
LABEL_30:
      if ( v37 == ++v52 )
        return v49;
    }
    v57 = v102 + v55;
    if ( *(_DWORD *)v4 != *(_DWORD *)v57 )
      goto LABEL_30;
    v58 = v57 + 4;
    v59 = (unsigned __int64)&v108[v107 - 4 - v57];
    if ( v53 < v59 )
      v59 = v53;
    v60 = v59 - 7;
    if ( v107 >= v59 - 7 )
    {
      v63 = (_QWORD *)v107;
      v64 = (_QWORD *)(v57 + 4);
    }
    else
    {
      v61 = *(_QWORD *)(v57 + 4);
      v62 = *(_QWORD *)((char *)v4 + 4);
      if ( v61 != v62 )
      {
        _RSI = v62 ^ v61;
        __asm { tzcnt   rsi, rsi }
        v68 = (char *)((unsigned int)_RSI >> 3);
        goto LABEL_57;
      }
      v63 = (_QWORD *)((char *)v4 + 12);
      v64 = (_QWORD *)(v57 + 12);
      if ( v60 > (unsigned __int64)v4 + 12 )
      {
        v116 = *(_QWORD *)(v57 + 12);
        v65 = *(_QWORD *)((char *)v4 + 12);
        if ( v65 != v116 )
        {
          _RAX = v116 ^ v65;
LABEL_40:
          __asm { tzcnt   r8, rax }
          v68 = (char *)v63 + ((unsigned int)_R8 >> 3) - v107;
          if ( v108 != &v68[v58] )
            goto LABEL_58;
LABEL_41:
          v119 = v68;
          v117 = v53;
          v69 = sub_907A60(&v68[v107], v121, v53);
          v53 = v117;
          v68 = &v119[v69];
LABEL_58:
          v76 = (unsigned __int64)(v68 + 4);
          goto LABEL_59;
        }
        while ( 1 )
        {
          ++v63;
          ++v64;
          if ( v60 <= (unsigned __int64)v63 )
            break;
          if ( *v64 != *v63 )
          {
            _RAX = *v63 ^ *v64;
            goto LABEL_40;
          }
        }
      }
    }
    if ( (unsigned __int64)v63 < v59 - 3 && *(_DWORD *)v64 == *(_DWORD *)v63 )
    {
      v63 = (_QWORD *)((char *)v63 + 4);
      v64 = (_QWORD *)((char *)v64 + 4);
    }
    if ( (unsigned __int64)v63 < v59 - 1 && *(_WORD *)v64 == *(_WORD *)v63 )
    {
      v63 = (_QWORD *)((char *)v63 + 2);
      v64 = (_QWORD *)((char *)v64 + 2);
    }
    if ( v59 > (unsigned __int64)v63 )
      v63 = (_QWORD *)((char *)v63 + (*(_BYTE *)v64 == *(_BYTE *)v63));
    v68 = (char *)v63 - v107;
LABEL_57:
    if ( v108 != &v68[v58] )
      goto LABEL_58;
    goto LABEL_41;
  }
  return v49;
}


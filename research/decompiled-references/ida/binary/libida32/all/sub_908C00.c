unsigned __int64 __fastcall sub_908C00(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r15
  unsigned int v6; // r14d
  int v7; // r12d
  __int64 v8; // r10
  __int64 v9; // rcx
  unsigned int v10; // r9d
  __int64 v11; // r13
  __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned int v14; // ebx
  __int64 v15; // rax
  unsigned int v16; // eax
  bool v17; // cf
  int v18; // ecx
  int v19; // esi
  unsigned int v20; // r8d
  char v21; // cl
  _QWORD *v22; // rbp
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int *v25; // rdx
  unsigned int v26; // r12d
  __int64 v27; // rdx
  _BYTE *v28; // r9
  unsigned int v29; // eax
  unsigned __int64 v30; // rdx
  _DWORD *v31; // rcx
  unsigned __int64 v32; // rax
  __int8 v33; // r12
  __int64 v34; // r13
  __int64 v35; // r8
  __m128i v36; // xmm0
  __int64 v37; // r10
  __m128i *v38; // r8
  __m128i v39; // xmm0
  __int8 v40; // bp
  __m128i v41; // xmm0
  char v42; // r9
  unsigned int v45; // edx
  unsigned int v46; // edx
  unsigned __int64 v47; // r14
  unsigned int v48; // eax
  int v49; // edx
  __int64 v50; // rcx
  __int64 v51; // rbp
  unsigned int v52; // r13d
  _QWORD *v53; // rbx
  __int64 v54; // r11
  unsigned __int64 v55; // r9
  _QWORD *v56; // rsi
  __int64 v57; // rsi
  int v58; // r12d
  _DWORD *v59; // rsi
  _QWORD *v60; // rsi
  unsigned __int64 v61; // rdx
  signed __int64 v62; // rax
  __int64 v63; // r10
  signed __int64 v64; // r8
  unsigned __int64 v65; // rax
  signed __int64 v67; // rax
  unsigned int v68; // ebp
  __int64 i; // rdx
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  unsigned int *v72; // rdx
  unsigned int v73; // ebx
  __int64 v74; // rdx
  _BYTE *v75; // rsi
  unsigned int v76; // eax
  _QWORD *v77; // rbp
  unsigned int v78; // eax
  unsigned int v79; // edx
  unsigned int v80; // r9d
  __int64 v81; // r15
  char v82; // al
  unsigned int v83; // r12d
  char v84; // cl
  unsigned __int64 v85; // rax
  unsigned __int64 v86; // rax
  __int64 v87; // rdx
  __int64 v88; // rbx
  __int64 v89; // [rsp+0h] [rbp-1C8h]
  __int64 v91; // [rsp+10h] [rbp-1B8h]
  unsigned int v92; // [rsp+10h] [rbp-1B8h]
  __int64 v93; // [rsp+18h] [rbp-1B0h]
  __int64 v94; // [rsp+20h] [rbp-1A8h]
  _QWORD *v95; // [rsp+20h] [rbp-1A8h]
  unsigned int v96; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v97; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v98; // [rsp+28h] [rbp-1A0h]
  unsigned int v99; // [rsp+30h] [rbp-198h]
  __int64 v100; // [rsp+30h] [rbp-198h]
  __int64 v101; // [rsp+30h] [rbp-198h]
  signed __int64 v102; // [rsp+30h] [rbp-198h]
  __int64 v103; // [rsp+38h] [rbp-190h]
  __int64 v104; // [rsp+38h] [rbp-190h]
  __int64 v106; // [rsp+48h] [rbp-180h]
  _QWORD *v107; // [rsp+50h] [rbp-178h]
  __int64 v108; // [rsp+58h] [rbp-170h]
  unsigned int v109; // [rsp+58h] [rbp-170h]
  char v110; // [rsp+68h] [rbp-160h]
  __int64 v111; // [rsp+70h] [rbp-158h]
  char v112; // [rsp+78h] [rbp-150h]
  unsigned int v113; // [rsp+7Ch] [rbp-14Ch]
  _DWORD v114[66]; // [rsp+80h] [rbp-148h]
  unsigned __int64 v115; // [rsp+188h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_QWORD *)(a1 + 112);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = (_DWORD)a2 - v5;
  v11 = *(_QWORD *)(a1 + 56);
  v115 = __readfsqword(0x28u);
  v12 = *(unsigned int *)(a1 + 24);
  v89 = v9;
  v91 = v8;
  v13 = (_QWORD *)(v5 + v12);
  v14 = *(_DWORD *)(a1 + 24);
  v15 = v9 + v12;
  v18 = *(_DWORD *)(a1 + 256);
  v107 = v13;
  v93 = v15;
  v94 = v11;
  v16 = v10 - (1 << v18);
  v96 = v10;
  v17 = 1 << v18 < v10 - v6;
  LOBYTE(v18) = 5;
  v99 = v10;
  if ( !v17 )
    v16 = v6;
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v16;
  if ( *(_DWORD *)(a1 + 268) <= 5u )
    v18 = *(_DWORD *)(a1 + 268);
  v103 = *(_QWORD *)(a1 + 96);
  v19 = 1 << v18;
  v112 = 56 - v7;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v32 = (v103 ^ (0xCF1BBCDCBB000000LL * *a2)) >> v112;
    *(_DWORD *)(a1 + 44) = v10;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 44);
    v108 = v5;
    v106 = a1 + 64;
    if ( v10 - v20 > 0x180 )
    {
      v68 = v20 + 96;
      if ( v20 >= v20 + 96 )
      {
        v108 = v5;
      }
      else
      {
        v109 = *(_DWORD *)(a1 + 24);
        for ( i = *(_QWORD *)(a1 + 96); ; i = *(_QWORD *)(a1 + 96) )
        {
          v70 = (i ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v5 + v20 + 8))) >> v112;
          v71 = 32 * ((unsigned int)v70 >> 8);
          _mm_prefetch((const char *)(v11 + v71), 1);
          _mm_prefetch((const char *)(v8 + 4 * v71), 1);
          _mm_prefetch((const char *)(v8 + 4 * v71 + 64), 1);
          v72 = (unsigned int *)(a1 + 64 + 4LL * (v20 & 7));
          v73 = *v72;
          *v72 = v70;
          v74 = 32 * (v73 >> 8);
          v75 = (_BYTE *)(v11 + v74);
          v76 = (*(_BYTE *)(v11 + v74) - 1) & 0x1F;
          if ( ((*(_BYTE *)(v11 + v74) - 1) & 0x1F) == 0 )
            v76 = 31;
          *v75 = v76;
          v75[v76] = v73;
          *(_DWORD *)(v8 + 4 * (v74 + v76)) = v20++;
          if ( v68 == v20 )
            break;
        }
        v14 = v109;
        v19 = 1 << v18;
        v8 = *(_QWORD *)(a1 + 112);
        v11 = *(_QWORD *)(a1 + 56);
        v108 = *(_QWORD *)(a1 + 8);
        v7 = *(_DWORD *)(a1 + 52);
      }
      v77 = (_QWORD *)(v5 + v10 - 32);
      v20 = v10 - 32;
      if ( (_QWORD *)((char *)a2 + 1) >= v77 )
      {
        v78 = (_DWORD)a2 + 1 - (_DWORD)v77 + 1;
        if ( v78 > 8 )
          v78 = 8;
        v79 = v78 + v20;
        if ( v20 < v78 + v20 )
        {
          v113 = v14;
          v80 = v10 - 32;
          v111 = v5;
          v81 = *(_QWORD *)(a1 + 96);
          v82 = 56 - v7;
          v110 = v7;
          v83 = v79;
          v84 = v82;
          do
          {
            v85 = 0xCF1BBCDCBB000000LL * *v77;
            v77 = (_QWORD *)((char *)v77 + 1);
            v86 = (v81 ^ v85) >> v84;
            v87 = 32 * ((unsigned int)v86 >> 8);
            v88 = 4 * v87;
            _mm_prefetch((const char *)(v11 + v87), 1);
            LOBYTE(v87) = v80++;
            _mm_prefetch((const char *)(v8 + v88), 1);
            _mm_prefetch((const char *)(v8 + v88 + 64), 1);
            *(_DWORD *)(a1 + 4 * (v87 & 7) + 64) = v86;
          }
          while ( v83 != v80 );
          LOBYTE(v7) = v110;
          v5 = v111;
          v14 = v113;
        }
      }
    }
    if ( v96 > v20 )
    {
      v21 = 56 - v7;
      v22 = (_QWORD *)(v108 + v20 + 8);
      do
      {
        v23 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBB000000LL * *v22)) >> v21;
        v24 = 32 * ((unsigned int)v23 >> 8);
        _mm_prefetch((const char *)(v11 + v24), 1);
        _mm_prefetch((const char *)(v8 + 4 * v24), 1);
        _mm_prefetch((const char *)(v8 + 4 * v24 + 64), 1);
        v25 = (unsigned int *)(v106 + 4LL * (v20 & 7));
        v26 = *v25;
        *v25 = v23;
        v27 = 32 * (v26 >> 8);
        v28 = (_BYTE *)(v11 + v27);
        v29 = (*(_BYTE *)(v11 + v27) - 1) & 0x1F;
        if ( ((*(_BYTE *)(v11 + v27) - 1) & 0x1F) == 0 )
          v29 = 31;
        v22 = (_QWORD *)((char *)v22 + 1);
        *v28 = v29;
        v28[v29] = v26;
        *(_DWORD *)(v8 + 4 * (v27 + v29)) = v20++;
      }
      while ( v99 != v20 );
    }
    *(_DWORD *)(a1 + 44) = v96;
    v30 = (v103 ^ (0xCF1BBCDCBB000000LL * *(_QWORD *)(v5 + v96 + 8))) >> v112;
    v32 = 32 * ((unsigned int)v30 >> 8);
    _mm_prefetch((const char *)(v91 + 4 * v32), 1);
    _mm_prefetch((const char *)(v91 + 4 * v32 + 64), 1);
    _mm_prefetch((const char *)(v94 + v32), 1);
    v31 = (_DWORD *)(v106 + 4LL * (v96 & 7));
    LODWORD(v32) = *v31;
    *v31 = v30;
  }
  v33 = v32;
  *(_DWORD *)(a1 + 104) += v32;
  v34 = 0;
  v35 = 32 * ((unsigned int)v32 >> 8);
  v36 = _mm_cvtsi32_si128(v32);
  v37 = v91 + 4 * v35;
  v38 = (__m128i *)(v94 + v35);
  v39 = _mm_unpacklo_epi8(v36, v36);
  v40 = v38->m128i_i8[0];
  v41 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v39, v39), 0);
  v42 = v38->m128i_i8[0] & 0x1F;
  _RAX = (unsigned int)__ROR4__(
                         _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v38), v41))
                       | (_mm_movemask_epi8(_mm_cmpeq_epi8(v41, _mm_loadu_si128(v38 + 1))) << 16),
                         v42);
  if ( (_DWORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v45 = (v42 + (_BYTE)_RDX) & 0x1F;
      if ( v45 )
      {
        v46 = *(_DWORD *)(v37 + 4LL * v45);
        if ( v46 < v6 )
          break;
        if ( v14 <= v46 )
          _mm_prefetch((const char *)(v5 + v46), 1);
        else
          _mm_prefetch((const char *)(v89 + v46), 1);
        v114[v34] = v46;
        --v19;
        ++v34;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v19 );
  }
  v47 = 3;
  v48 = (v40 + 31) & 0x1F;
  if ( ((v40 + 31) & 0x1F) == 0 )
    v48 = 31;
  v38->m128i_i8[0] = v48;
  v38->m128i_i8[v48] = v33;
  v49 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v49 + 1;
  *(_DWORD *)(v37 + 4LL * v48) = v49;
  if ( v34 )
  {
    v50 = v34;
    v51 = 0;
    v52 = v14;
    v95 = (_QWORD *)((char *)a2 + 4);
    v53 = a2;
    v54 = v5;
    v55 = a3;
    v92 = v99 + 3;
    do
    {
      v57 = (unsigned int)v114[v51];
      v58 = v57;
      if ( v52 <= (unsigned int)v57 )
      {
        v56 = (_QWORD *)(v54 + v57);
        if ( *(_DWORD *)((char *)v53 + v47 - 3) != *(_DWORD *)((char *)v56 + v47 - 3) )
          goto LABEL_30;
        v101 = v50;
        v98 = v55;
        v65 = sub_907A60(v53, v56, v55);
        v55 = v98;
        v50 = v101;
      }
      else
      {
        v59 = (_DWORD *)(v89 + v57);
        if ( *(_DWORD *)v53 != *v59 )
          goto LABEL_30;
        v100 = v50;
        v60 = v59 + 1;
        v97 = v55;
        v61 = (unsigned __int64)v95 + v93 - (_QWORD)v60;
        if ( v55 < v61 )
          v61 = v55;
        v62 = sub_907A60(v95, v60, v61);
        v55 = v97;
        v50 = v100;
        v64 = v62;
        if ( v93 == v62 + v63 )
        {
          v104 = v100;
          v102 = v62;
          v67 = sub_907A60((_QWORD *)((char *)v95 + v62), v107, v97);
          v50 = v104;
          v55 = v97;
          v64 = v67 + v102;
        }
        v65 = v64 + 4;
      }
      if ( v47 < v65 )
      {
        v47 = v65;
        *a4 = v92 - v58;
        if ( (_QWORD *)v55 == (_QWORD *)((char *)v53 + v65) )
          return v47;
      }
LABEL_30:
      ++v51;
    }
    while ( v51 != v50 );
  }
  return v47;
}


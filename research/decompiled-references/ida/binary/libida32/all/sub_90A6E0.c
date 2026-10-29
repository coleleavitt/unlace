unsigned __int64 __fastcall sub_90A6E0(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r9
  unsigned int v6; // r15d
  int v7; // r13d
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // r14d
  __int64 v11; // rbp
  __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned int v14; // r11d
  char *v15; // rax
  unsigned int v16; // eax
  bool v17; // cf
  int v18; // ecx
  int v19; // esi
  __int64 v20; // r8
  __int64 v21; // rdx
  _QWORD *v22; // r12
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned int *v25; // rax
  unsigned int v26; // r11d
  __int64 v27; // rdx
  _BYTE *v28; // r9
  unsigned int v29; // eax
  unsigned __int64 v30; // rdx
  _DWORD *v31; // rcx
  unsigned __int64 v32; // rax
  __int64 v33; // rbx
  __int64 v34; // r8
  int *v35; // r9
  __int64 v36; // rbp
  __m128i *v37; // r8
  __int8 v38; // r12
  const __m128i *v39; // rdx
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  char v42; // cl
  __m128i v43; // xmm0
  __m128i v44; // xmm1
  __int64 v45; // r13
  unsigned int v48; // edx
  unsigned int v49; // edx
  unsigned __int64 v50; // r15
  unsigned int v51; // eax
  int v52; // edx
  __int64 v53; // rbp
  unsigned __int64 v54; // r8
  _QWORD *v55; // rax
  __int64 v56; // r10
  unsigned int v57; // r13d
  unsigned int v58; // r9d
  _QWORD *v59; // r11
  _QWORD *v60; // rsi
  __int64 v61; // rsi
  int v62; // r12d
  _DWORD *v63; // rsi
  _QWORD *v64; // rbx
  unsigned __int64 v65; // rdx
  signed __int64 v66; // rax
  signed __int64 v67; // rcx
  unsigned __int64 v68; // rax
  unsigned __int64 v70; // rax
  signed __int64 v71; // rax
  int v72; // ebp
  __int64 i; // rax
  unsigned __int64 v74; // rdx
  __int64 v75; // rax
  unsigned int *v76; // rax
  unsigned int v77; // r13d
  __int64 v78; // rdx
  _BYTE *v79; // rsi
  unsigned int v80; // eax
  _QWORD *v81; // r12
  unsigned int v82; // eax
  int v83; // edx
  unsigned int v84; // r9d
  __int64 v85; // r14
  char v86; // al
  int v87; // r13d
  char v88; // cl
  unsigned __int64 v89; // rdx
  unsigned __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // r11
  __int64 v93; // rax
  __int64 v94; // [rsp+0h] [rbp-1C8h]
  __int64 v95; // [rsp+8h] [rbp-1C0h]
  char *v97; // [rsp+18h] [rbp-1B0h]
  __int64 v98; // [rsp+20h] [rbp-1A8h]
  __int8 v99; // [rsp+20h] [rbp-1A8h]
  _QWORD *v100; // [rsp+20h] [rbp-1A8h]
  __int64 v101; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v102; // [rsp+28h] [rbp-1A0h]
  unsigned __int64 v103; // [rsp+28h] [rbp-1A0h]
  unsigned int v104; // [rsp+30h] [rbp-198h]
  unsigned int v105; // [rsp+30h] [rbp-198h]
  unsigned int v106; // [rsp+30h] [rbp-198h]
  signed __int64 v107; // [rsp+30h] [rbp-198h]
  __int64 v108; // [rsp+38h] [rbp-190h]
  unsigned int v109; // [rsp+38h] [rbp-190h]
  __int64 v111; // [rsp+48h] [rbp-180h]
  _QWORD *v112; // [rsp+50h] [rbp-178h]
  __int64 v113; // [rsp+58h] [rbp-170h]
  unsigned int v114; // [rsp+58h] [rbp-170h]
  char v115; // [rsp+68h] [rbp-160h]
  char v116; // [rsp+70h] [rbp-158h]
  unsigned int v117; // [rsp+74h] [rbp-154h]
  unsigned int v118; // [rsp+78h] [rbp-150h]
  int v119[66]; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v120; // [rsp+188h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_QWORD *)(a1 + 112);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = (_DWORD)a2 - v5;
  v11 = *(_QWORD *)(a1 + 56);
  v120 = __readfsqword(0x28u);
  v12 = *(unsigned int *)(a1 + 24);
  v95 = v9;
  v98 = v8;
  v13 = (_QWORD *)(v5 + v12);
  v14 = *(_DWORD *)(a1 + 24);
  v15 = (char *)(v9 + v12);
  v94 = v5;
  v18 = *(_DWORD *)(a1 + 256);
  v112 = v13;
  v97 = v15;
  v101 = v11;
  v16 = v10 - (1 << v18);
  v104 = v10;
  v17 = 1 << v18 < v10 - v6;
  LOBYTE(v18) = 6;
  if ( !v17 )
    v16 = v6;
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v16;
  if ( *(_DWORD *)(a1 + 268) <= 6u )
    v18 = *(_DWORD *)(a1 + 268);
  v108 = *(_QWORD *)(a1 + 96);
  v19 = 1 << v18;
  v116 = 56 - v7;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v70 = 0xCF1BBCDCBF9B0000LL * *a2;
    *(_DWORD *)(a1 + 44) = v10;
    v32 = (v108 ^ v70) >> v116;
  }
  else
  {
    LODWORD(v20) = *(_DWORD *)(a1 + 44);
    v113 = v5;
    v111 = a1 + 64;
    if ( v10 - (unsigned int)v20 > 0x180 )
    {
      v72 = v20 + 96;
      if ( (unsigned int)v20 >= (int)v20 + 96 )
      {
        v11 = v101;
        v113 = v5;
      }
      else
      {
        for ( i = *(_QWORD *)(a1 + 96); ; i = *(_QWORD *)(a1 + 96) )
        {
          v74 = (i ^ (0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v5 + (unsigned int)v20 + 8))) >> v116;
          v75 = (unsigned int)v74 >> 8 << 6;
          _mm_prefetch((const char *)(v101 + v75), 1);
          _mm_prefetch((const char *)(v101 + v75 + 32), 1);
          _mm_prefetch((const char *)(v8 + 4 * v75), 1);
          _mm_prefetch((const char *)(v8 + 4 * v75 + 64), 1);
          v76 = (unsigned int *)(a1 + 64 + 4 * (v20 & 7));
          v77 = *v76;
          *v76 = v74;
          v78 = v77 >> 8 << 6;
          v79 = (_BYTE *)(v101 + v78);
          v80 = (*(_BYTE *)(v101 + v78) - 1) & 0x3F;
          if ( ((*(_BYTE *)(v101 + v78) - 1) & 0x3F) == 0 )
            v80 = 63;
          *v79 = v80;
          v79[v80] = v77;
          *(_DWORD *)(v8 + 4 * (v78 + v80)) = v20;
          LODWORD(v20) = v20 + 1;
          if ( v72 == (_DWORD)v20 )
            break;
        }
        v19 = 1 << v18;
        v8 = *(_QWORD *)(a1 + 112);
        v113 = *(_QWORD *)(a1 + 8);
        v11 = *(_QWORD *)(a1 + 56);
        v7 = *(_DWORD *)(a1 + 52);
      }
      v20 = v10 - 32;
      v81 = (_QWORD *)(v5 + v20);
      if ( (unsigned __int64)a2 + 1 >= v5 + v20 )
      {
        v82 = (_DWORD)a2 + 1 - (_DWORD)v81 + 1;
        if ( v82 > 8 )
          v82 = 8;
        v83 = v82 + v20;
        if ( (unsigned int)v20 < v82 + (unsigned int)v20 )
        {
          v117 = v14;
          v84 = v10 - 32;
          v118 = v10;
          v85 = *(_QWORD *)(a1 + 96);
          v86 = 56 - v7;
          v115 = v7;
          v87 = v83;
          v88 = v86;
          do
          {
            v89 = 0xCF1BBCDCBF9B0000LL * *v81;
            v81 = (_QWORD *)((char *)v81 + 1);
            v90 = (v85 ^ v89) >> v88;
            v91 = (unsigned int)v90 >> 8 << 6;
            v92 = 4 * v91;
            _mm_prefetch((const char *)(v11 + v91), 1);
            _mm_prefetch((const char *)(v11 + v91 + 32), 1);
            v93 = v84++ & 7;
            _mm_prefetch((const char *)(v8 + v92), 1);
            _mm_prefetch((const char *)(v8 + v92 + 64), 1);
            *(_DWORD *)(a1 + 4 * v93 + 64) = v90;
          }
          while ( v87 != v84 );
          LOBYTE(v7) = v115;
          v14 = v117;
          v10 = v118;
        }
      }
    }
    if ( v10 > (unsigned int)v20 )
    {
      v21 = v113;
      v114 = v14;
      v22 = (_QWORD *)(v21 + (unsigned int)v20 + 8);
      do
      {
        v23 = (*(_QWORD *)(a1 + 96) ^ (0xCF1BBCDCBF9B0000LL * *v22)) >> (56 - (unsigned __int8)v7);
        v24 = (unsigned int)v23 >> 8 << 6;
        _mm_prefetch((const char *)(v11 + v24), 1);
        _mm_prefetch((const char *)(v11 + v24 + 32), 1);
        _mm_prefetch((const char *)(v8 + 4 * v24), 1);
        _mm_prefetch((const char *)(v8 + 4 * v24 + 64), 1);
        v25 = (unsigned int *)(v111 + 4 * (v20 & 7));
        v26 = *v25;
        *v25 = v23;
        v27 = v26 >> 8 << 6;
        v28 = (_BYTE *)(v11 + v27);
        v29 = (*(_BYTE *)(v11 + v27) - 1) & 0x3F;
        if ( ((*(_BYTE *)(v11 + v27) - 1) & 0x3F) == 0 )
          v29 = 63;
        v22 = (_QWORD *)((char *)v22 + 1);
        *v28 = v29;
        v28[v29] = v26;
        *(_DWORD *)(v8 + 4 * (v27 + v29)) = v20;
        LODWORD(v20) = v20 + 1;
      }
      while ( v104 != (_DWORD)v20 );
      v14 = v114;
    }
    *(_DWORD *)(a1 + 44) = v10;
    v30 = (v108 ^ (0xCF1BBCDCBF9B0000LL * *(_QWORD *)(v94 + v10 + 8))) >> v116;
    v32 = (unsigned int)v30 >> 8 << 6;
    _mm_prefetch((const char *)(v98 + 4 * v32), 1);
    _mm_prefetch((const char *)(v98 + 4 * v32 + 64), 1);
    _mm_prefetch((const char *)(v101 + v32), 1);
    _mm_prefetch((const char *)(v101 + v32 + 32), 1);
    v31 = (_DWORD *)(v111 + 4LL * (v10 & 7));
    LODWORD(v32) = *v31;
    *v31 = v30;
  }
  v33 = v98;
  *(_DWORD *)(a1 + 104) += v32;
  v99 = v32;
  v34 = (unsigned int)v32 >> 8 << 6;
  *(_OWORD *)v119 = 0;
  v35 = v119;
  v36 = v33 + 4 * v34;
  v37 = (__m128i *)(v101 + v34);
  v38 = v37->m128i_i8[0];
  v39 = v37;
  v40 = _mm_cvtsi32_si128(v32);
  v41 = _mm_unpacklo_epi8(v40, v40);
  v42 = v37->m128i_i8[0] & 0x3F;
  v43 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v41, v41), 0);
  do
  {
    v44 = _mm_loadu_si128(v39++);
    *v35++ = _mm_movemask_epi8(_mm_cmpeq_epi8(v44, v43));
  }
  while ( v39 != &v37[4] );
  v45 = 0;
  _RAX = __ROR8__(v119[0] | ((__int64)v119[3] << 48) | ((__int64)v119[2] << 32) | ((__int64)v119[1] << 16), v42);
  if ( _RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v48 = (v42 + (_BYTE)_RDX) & 0x3F;
      if ( v48 )
      {
        v49 = *(_DWORD *)(v36 + 4LL * v48);
        if ( v49 < v6 )
          break;
        if ( v14 <= v49 )
          _mm_prefetch((const char *)(v94 + v49), 1);
        else
          _mm_prefetch((const char *)(v95 + v49), 1);
        v119[v45] = v49;
        --v19;
        ++v45;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v19 );
  }
  v50 = 3;
  v51 = (v38 + 63) & 0x3F;
  if ( ((v38 + 63) & 0x3F) == 0 )
    v51 = 63;
  v37->m128i_i8[0] = v51;
  v37->m128i_i8[v51] = v99;
  v52 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v52 + 1;
  *(_DWORD *)(v36 + 4LL * v51) = v52;
  if ( v45 )
  {
    v53 = 0;
    v54 = a3;
    v100 = (_QWORD *)((char *)a2 + 4);
    v55 = a2;
    v56 = v45;
    v57 = v14;
    v58 = v104 + 3;
    v59 = v55;
    do
    {
      v61 = (unsigned int)v119[v53];
      v62 = v61;
      if ( v57 <= (unsigned int)v61 )
      {
        v60 = (_QWORD *)(v94 + v61);
        if ( *(_DWORD *)((char *)v59 + v50 - 3) != *(_DWORD *)((char *)v60 + v50 - 3) )
          goto LABEL_33;
        v106 = v58;
        v103 = v54;
        v68 = sub_907A60(v59, v60, v54);
        v54 = v103;
        v58 = v106;
      }
      else
      {
        v63 = (_DWORD *)(v95 + v61);
        if ( *(_DWORD *)v59 != *v63 )
          goto LABEL_33;
        v64 = v63 + 1;
        v105 = v58;
        v102 = v54;
        v65 = (unsigned __int64)v100 + v97 - (char *)(v63 + 1);
        if ( v54 < v65 )
          v65 = v54;
        v66 = sub_907A60(v100, v64, v65);
        v54 = v102;
        v58 = v105;
        v67 = v66;
        if ( v97 == (char *)v64 + v66 )
        {
          v109 = v105;
          v107 = v66;
          v71 = sub_907A60((_QWORD *)((char *)v100 + v66), v112, v102);
          v58 = v109;
          v54 = v102;
          v67 = v71 + v107;
        }
        v68 = v67 + 4;
      }
      if ( v68 > v50 )
      {
        v50 = v68;
        *a4 = v58 - v62;
        if ( (_QWORD *)v54 == (_QWORD *)((char *)v59 + v68) )
          return v50;
      }
LABEL_33:
      ++v53;
    }
    while ( v53 != v56 );
  }
  return v50;
}


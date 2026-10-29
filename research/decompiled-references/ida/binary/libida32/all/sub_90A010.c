unsigned __int64 __fastcall sub_90A010(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r13
  unsigned int v6; // r15d
  int v7; // r12d
  __int64 v8; // r11
  __int64 v9; // rcx
  unsigned int v10; // r10d
  __int64 v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // eax
  bool v17; // cf
  int v18; // ecx
  int v19; // esi
  unsigned int v20; // r9d
  char v21; // cl
  _DWORD *v22; // rbp
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned int *v25; // rax
  unsigned int v26; // r12d
  __int64 v27; // rdx
  _BYTE *v28; // r10
  unsigned int v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rax
  unsigned int *v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // r10
  int *v35; // r11
  __int64 v36; // r12
  __m128i *v37; // r10
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  const __m128i *v40; // rdx
  char v41; // cl
  __m128i v42; // xmm0
  __m128i v43; // xmm1
  __int64 v44; // rbp
  unsigned int v47; // edx
  unsigned int v48; // edx
  unsigned int v49; // eax
  int v50; // edx
  unsigned __int64 v51; // r12
  __int64 v52; // rcx
  __int64 v53; // r11
  __int64 v54; // rbp
  unsigned int v55; // r13d
  unsigned __int64 v56; // r8
  _QWORD *v57; // rsi
  __int64 v58; // rsi
  int v59; // ebx
  _DWORD *v60; // rsi
  _QWORD *v61; // rsi
  unsigned __int64 v62; // rdx
  signed __int64 v63; // rax
  __int64 v64; // r10
  signed __int64 v65; // r9
  unsigned __int64 v66; // rax
  signed __int64 v68; // rax
  unsigned int v69; // r11d
  __int64 v70; // rax
  unsigned int v71; // edx
  __int64 v72; // rax
  unsigned int *v73; // rax
  unsigned int v74; // r12d
  __int64 v75; // rdx
  _BYTE *v76; // r8
  unsigned int v77; // eax
  _DWORD *v78; // rbp
  unsigned int v79; // eax
  unsigned int v80; // edx
  unsigned int v81; // r10d
  int v82; // r13d
  char v83; // al
  unsigned int v84; // r12d
  char v85; // cl
  int v86; // edx
  unsigned int v87; // edx
  __int64 v88; // rax
  __int64 v89; // r8
  __int64 v90; // rax
  __int64 v91; // [rsp+8h] [rbp-1C0h]
  __int64 v93; // [rsp+18h] [rbp-1B0h]
  __int8 v94; // [rsp+18h] [rbp-1B0h]
  unsigned int v95; // [rsp+18h] [rbp-1B0h]
  __int64 v96; // [rsp+20h] [rbp-1A8h]
  __int64 v97; // [rsp+28h] [rbp-1A0h]
  __int8 v98; // [rsp+28h] [rbp-1A0h]
  _QWORD *v99; // [rsp+28h] [rbp-1A0h]
  unsigned int v100; // [rsp+30h] [rbp-198h]
  unsigned __int64 v101; // [rsp+30h] [rbp-198h]
  unsigned __int64 v102; // [rsp+30h] [rbp-198h]
  unsigned int v103; // [rsp+38h] [rbp-190h]
  __int64 v104; // [rsp+38h] [rbp-190h]
  __int64 v105; // [rsp+38h] [rbp-190h]
  signed __int64 v106; // [rsp+38h] [rbp-190h]
  char v107; // [rsp+40h] [rbp-188h]
  __int64 v108; // [rsp+40h] [rbp-188h]
  __int64 v110; // [rsp+50h] [rbp-178h]
  _QWORD *v111; // [rsp+58h] [rbp-170h]
  __int64 v112; // [rsp+60h] [rbp-168h]
  unsigned int v113; // [rsp+60h] [rbp-168h]
  int v114; // [rsp+68h] [rbp-160h]
  __int64 v115; // [rsp+70h] [rbp-158h]
  char v116; // [rsp+78h] [rbp-150h]
  unsigned int v117; // [rsp+7Ch] [rbp-14Ch]
  int v118[66]; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v119; // [rsp+188h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 28);
  v7 = *(_DWORD *)(a1 + 52);
  v8 = *(_QWORD *)(a1 + 112);
  v9 = *(_QWORD *)(a1 + 16);
  v10 = (_DWORD)a2 - v5;
  v11 = *(_QWORD *)(a1 + 56);
  v119 = __readfsqword(0x28u);
  v12 = *(unsigned int *)(a1 + 24);
  v91 = v9;
  v93 = v8;
  v13 = (_QWORD *)(v5 + v12);
  v14 = *(_DWORD *)(a1 + 24);
  v15 = v9 + v12;
  v18 = *(_DWORD *)(a1 + 256);
  v111 = v13;
  v96 = v15;
  v97 = v11;
  v16 = v10 - (1 << v18);
  v100 = v10;
  v17 = 1 << v18 < v10 - v6;
  LOBYTE(v18) = 6;
  v103 = v10;
  if ( !v17 )
    v16 = v6;
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v16;
  if ( *(_DWORD *)(a1 + 268) <= 6u )
    v18 = *(_DWORD *)(a1 + 268);
  v114 = *(_QWORD *)(a1 + 96);
  v19 = 1 << v18;
  v107 = 24 - v7;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v33 = ((unsigned int)*(_QWORD *)(a1 + 96) ^ (-1640531535 * *(_DWORD *)a2)) >> v107;
    *(_DWORD *)(a1 + 44) = v10;
  }
  else
  {
    v20 = *(_DWORD *)(a1 + 44);
    v112 = v5;
    v110 = a1 + 64;
    if ( v10 - v20 > 0x180 )
    {
      v69 = v20 + 96;
      if ( v20 >= v20 + 96 )
      {
        v8 = v93;
        v112 = v5;
      }
      else
      {
        LODWORD(v70) = *(_QWORD *)(a1 + 96);
        v113 = *(_DWORD *)(a1 + 24);
        while ( 1 )
        {
          v71 = ((unsigned int)v70 ^ (-1640531535 * *(_DWORD *)(v5 + v20 + 8))) >> v107;
          v72 = v71 >> 8 << 6;
          _mm_prefetch((const char *)(v11 + v72), 1);
          _mm_prefetch((const char *)(v11 + v72 + 32), 1);
          _mm_prefetch((const char *)(v93 + 4 * v72), 1);
          _mm_prefetch((const char *)(v93 + 4 * v72 + 64), 1);
          v73 = (unsigned int *)(a1 + 64 + 4LL * (v20 & 7));
          v74 = *v73;
          *v73 = v71;
          v75 = v74 >> 8 << 6;
          v76 = (_BYTE *)(v11 + v75);
          v77 = (*(_BYTE *)(v11 + v75) - 1) & 0x3F;
          if ( ((*(_BYTE *)(v11 + v75) - 1) & 0x3F) == 0 )
            v77 = 63;
          *v76 = v77;
          v76[v77] = v74;
          *(_DWORD *)(v93 + 4 * (v75 + v77)) = v20++;
          if ( v69 == v20 )
            break;
          v70 = *(_QWORD *)(a1 + 96);
        }
        v14 = v113;
        v8 = *(_QWORD *)(a1 + 112);
        v11 = *(_QWORD *)(a1 + 56);
        v7 = *(_DWORD *)(a1 + 52);
        v112 = *(_QWORD *)(a1 + 8);
      }
      v78 = (_DWORD *)(v5 + v10 - 32);
      v20 = v10 - 32;
      if ( (_DWORD *)((char *)a2 + 1) >= v78 )
      {
        v79 = (_DWORD)a2 + 1 - (_DWORD)v78 + 1;
        if ( v79 > 8 )
          v79 = 8;
        v80 = v79 + v20;
        if ( v20 < v79 + v20 )
        {
          v117 = v14;
          v81 = v10 - 32;
          v115 = v5;
          v82 = *(_DWORD *)(a1 + 96);
          v83 = 24 - v7;
          v116 = v7;
          v84 = v80;
          v85 = v83;
          do
          {
            v86 = -1640531535 * *v78;
            v78 = (_DWORD *)((char *)v78 + 1);
            v87 = (v82 ^ (unsigned int)v86) >> v85;
            v88 = v87 >> 8 << 6;
            v89 = 4 * v88;
            _mm_prefetch((const char *)(v11 + v88), 1);
            _mm_prefetch((const char *)(v11 + v88 + 32), 1);
            v90 = v81++ & 7;
            _mm_prefetch((const char *)(v8 + v89), 1);
            _mm_prefetch((const char *)(v8 + v89 + 64), 1);
            *(_DWORD *)(a1 + 4 * v90 + 64) = v87;
          }
          while ( v84 != v81 );
          LOBYTE(v7) = v116;
          v5 = v115;
          v14 = v117;
        }
      }
    }
    if ( v100 > v20 )
    {
      v21 = 24 - v7;
      v22 = (_DWORD *)(v112 + v20 + 8);
      do
      {
        v23 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v22)) >> v21;
        v24 = v23 >> 8 << 6;
        _mm_prefetch((const char *)(v11 + v24), 1);
        _mm_prefetch((const char *)(v11 + v24 + 32), 1);
        _mm_prefetch((const char *)(v8 + 4 * v24), 1);
        _mm_prefetch((const char *)(v8 + 4 * v24 + 64), 1);
        v25 = (unsigned int *)(v110 + 4LL * (v20 & 7));
        v26 = *v25;
        *v25 = v23;
        v27 = v26 >> 8 << 6;
        v28 = (_BYTE *)(v11 + v27);
        v29 = (*(_BYTE *)(v11 + v27) - 1) & 0x3F;
        if ( ((*(_BYTE *)(v11 + v27) - 1) & 0x3F) == 0 )
          v29 = 63;
        v22 = (_DWORD *)((char *)v22 + 1);
        *v28 = v29;
        v28[v29] = v26;
        *(_DWORD *)(v8 + 4 * (v27 + v29)) = v20++;
      }
      while ( v103 != v20 );
    }
    *(_DWORD *)(a1 + 44) = v100;
    v30 = (v114 ^ (unsigned int)(-1640531535 * *(_DWORD *)(v5 + v100 + 8))) >> v107;
    v31 = v30 >> 8 << 6;
    _mm_prefetch((const char *)(v93 + 4 * v31), 1);
    _mm_prefetch((const char *)(v93 + 4 * v31 + 64), 1);
    _mm_prefetch((const char *)(v97 + v31), 1);
    _mm_prefetch((const char *)(v97 + v31 + 32), 1);
    v32 = (unsigned int *)(v110 + 4LL * (v100 & 7));
    v33 = *v32;
    *v32 = v30;
  }
  *(_DWORD *)(a1 + 104) += v33;
  v34 = v33 >> 8 << 6;
  *(_OWORD *)v118 = 0;
  v35 = v118;
  v36 = v93 + 4 * v34;
  v37 = (__m128i *)(v97 + v34);
  v38 = _mm_cvtsi32_si128(v33);
  v98 = v33;
  v39 = _mm_unpacklo_epi8(v38, v38);
  v40 = v37;
  v94 = v37->m128i_i8[0];
  v41 = v37->m128i_i8[0] & 0x3F;
  v42 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v39, v39), 0);
  do
  {
    v43 = _mm_loadu_si128(v40++);
    *v35++ = _mm_movemask_epi8(_mm_cmpeq_epi8(v43, v42));
  }
  while ( v40 != &v37[4] );
  v44 = 0;
  _RAX = __ROR8__(v118[0] | ((__int64)v118[3] << 48) | ((__int64)v118[2] << 32) | ((__int64)v118[1] << 16), v41);
  if ( _RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v47 = (v41 + (_BYTE)_RDX) & 0x3F;
      if ( v47 )
      {
        v48 = *(_DWORD *)(v36 + 4LL * v47);
        if ( v48 < v6 )
          break;
        if ( v14 <= v48 )
          _mm_prefetch((const char *)(v5 + v48), 1);
        else
          _mm_prefetch((const char *)(v91 + v48), 1);
        v118[v44] = v48;
        --v19;
        ++v44;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v19 );
  }
  v49 = (v94 + 63) & 0x3F;
  if ( ((v94 + 63) & 0x3F) == 0 )
    v49 = 63;
  v37->m128i_i8[0] = v49;
  v37->m128i_i8[v49] = v98;
  v50 = *(_DWORD *)(a1 + 44);
  *(_DWORD *)(a1 + 44) = v50 + 1;
  *(_DWORD *)(v36 + 4LL * v49) = v50;
  v51 = 3;
  if ( v44 )
  {
    v52 = v44;
    v53 = 0;
    v54 = v5;
    v99 = (_QWORD *)((char *)a2 + 4);
    v55 = v14;
    v56 = a3;
    v95 = v103 + 3;
    do
    {
      v58 = (unsigned int)v118[v53];
      v59 = v58;
      if ( v55 <= (unsigned int)v58 )
      {
        v57 = (_QWORD *)(v54 + v58);
        if ( *(_DWORD *)((char *)a2 + v51 - 3) != *(_DWORD *)((char *)v57 + v51 - 3) )
          goto LABEL_32;
        v105 = v52;
        v102 = v56;
        v66 = sub_907A60(a2, v57, v56);
        v56 = v102;
        v52 = v105;
      }
      else
      {
        v60 = (_DWORD *)(v91 + v58);
        if ( *(_DWORD *)a2 != *v60 )
          goto LABEL_32;
        v104 = v52;
        v61 = v60 + 1;
        v101 = v56;
        v62 = (unsigned __int64)v99 + v96 - (_QWORD)v61;
        if ( v56 < v62 )
          v62 = v56;
        v63 = sub_907A60(v99, v61, v62);
        v56 = v101;
        v52 = v104;
        v65 = v63;
        if ( v96 == v63 + v64 )
        {
          v108 = v104;
          v106 = v63;
          v68 = sub_907A60((_QWORD *)((char *)v99 + v63), v111, v101);
          v52 = v108;
          v56 = v101;
          v65 = v68 + v106;
        }
        v66 = v65 + 4;
      }
      if ( v51 < v66 )
      {
        v51 = v66;
        *a4 = v95 - v59;
        if ( (_QWORD *)v56 == (_QWORD *)((char *)a2 + v66) )
          return v51;
      }
LABEL_32:
      ++v53;
    }
    while ( v52 != v53 );
  }
  return v51;
}


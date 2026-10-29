unsigned __int64 __fastcall sub_9092A0(__int64 a1, _QWORD *a2, unsigned __int64 a3, _QWORD *a4)
{
  __int64 v5; // r13
  unsigned int v6; // r15d
  int v7; // ebp
  __int64 v8; // r11
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // r12
  __int64 v12; // rax
  _QWORD *v13; // rsi
  unsigned int v14; // r8d
  __int64 v15; // rax
  unsigned int v16; // eax
  bool v17; // cf
  int v18; // ecx
  __int64 v19; // rdx
  int v20; // esi
  unsigned int v21; // r9d
  char v22; // cl
  _DWORD *v23; // rbx
  unsigned int v24; // eax
  __int64 v25; // rdx
  unsigned int *v26; // rdx
  unsigned int v27; // ebp
  __int64 v28; // rdx
  _BYTE *v29; // r10
  unsigned int v30; // eax
  unsigned int v31; // edx
  __int64 v32; // rax
  unsigned int *v33; // rcx
  unsigned int v34; // eax
  __int8 v35; // r12
  __int64 v36; // rbp
  __int64 v37; // r9
  __m128i v38; // xmm0
  __int64 v39; // r11
  __m128i *v40; // r9
  __m128i v41; // xmm0
  __int8 v42; // bl
  __m128i v43; // xmm0
  char v44; // r10
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
  unsigned int v70; // eax
  __int64 v71; // rdx
  unsigned int *v72; // rdx
  unsigned int v73; // ebp
  __int64 v74; // rdx
  _BYTE *v75; // r8
  unsigned int v76; // eax
  _DWORD *v77; // rbx
  unsigned int v78; // eax
  unsigned int v79; // edx
  unsigned int v80; // r10d
  int v81; // r13d
  char v82; // al
  unsigned int v83; // ebp
  char v84; // cl
  int v85; // eax
  unsigned int v86; // eax
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // [rsp+8h] [rbp-1C0h]
  __int64 v91; // [rsp+18h] [rbp-1B0h]
  unsigned int v92; // [rsp+18h] [rbp-1B0h]
  __int64 v93; // [rsp+20h] [rbp-1A8h]
  __int64 v94; // [rsp+28h] [rbp-1A0h]
  _QWORD *v95; // [rsp+28h] [rbp-1A0h]
  unsigned int v96; // [rsp+30h] [rbp-198h]
  unsigned __int64 v97; // [rsp+30h] [rbp-198h]
  unsigned __int64 v98; // [rsp+30h] [rbp-198h]
  unsigned int v99; // [rsp+38h] [rbp-190h]
  __int64 v100; // [rsp+38h] [rbp-190h]
  __int64 v101; // [rsp+38h] [rbp-190h]
  signed __int64 v102; // [rsp+38h] [rbp-190h]
  char v103; // [rsp+40h] [rbp-188h]
  __int64 v104; // [rsp+40h] [rbp-188h]
  __int64 v106; // [rsp+50h] [rbp-178h]
  _QWORD *v107; // [rsp+58h] [rbp-170h]
  __int64 v108; // [rsp+60h] [rbp-168h]
  unsigned int v109; // [rsp+60h] [rbp-168h]
  int v110; // [rsp+68h] [rbp-160h]
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
  v99 = v10;
  v18 = *(_DWORD *)(a1 + 256);
  v107 = v13;
  v93 = v15;
  v94 = v11;
  v16 = v10 - (1 << v18);
  v96 = v10;
  v17 = 1 << v18 < v10 - v6;
  LOBYTE(v18) = 5;
  if ( !v17 )
    v16 = v6;
  v19 = *(_QWORD *)(a1 + 96);
  if ( !*(_DWORD *)(a1 + 40) )
    v6 = v16;
  if ( *(_DWORD *)(a1 + 268) <= 5u )
    v18 = *(_DWORD *)(a1 + 268);
  v110 = *(_QWORD *)(a1 + 96);
  v20 = 1 << v18;
  v103 = 24 - v7;
  if ( *(_DWORD *)(a1 + 300) )
  {
    v34 = ((unsigned int)v19 ^ (-1640531535 * *(_DWORD *)a2)) >> v103;
    *(_DWORD *)(a1 + 44) = v10;
  }
  else
  {
    v21 = *(_DWORD *)(a1 + 44);
    v108 = v5;
    v106 = a1 + 64;
    if ( v10 - v21 > 0x180 )
    {
      v69 = v21 + 96;
      if ( v21 >= v21 + 96 )
      {
        v8 = v91;
        v108 = v5;
      }
      else
      {
        v109 = *(_DWORD *)(a1 + 24);
        while ( 1 )
        {
          v70 = ((unsigned int)v19 ^ (-1640531535 * *(_DWORD *)(v5 + v21 + 8))) >> v103;
          v71 = 32 * (v70 >> 8);
          _mm_prefetch((const char *)(v11 + v71), 1);
          _mm_prefetch((const char *)(v91 + 4 * v71), 1);
          _mm_prefetch((const char *)(v91 + 4 * v71 + 64), 1);
          v72 = (unsigned int *)(a1 + 64 + 4LL * (v21 & 7));
          v73 = *v72;
          *v72 = v70;
          v74 = 32 * (v73 >> 8);
          v75 = (_BYTE *)(v11 + v74);
          v76 = (*(_BYTE *)(v11 + v74) - 1) & 0x1F;
          if ( ((*(_BYTE *)(v11 + v74) - 1) & 0x1F) == 0 )
            v76 = 31;
          *v75 = v76;
          v75[v76] = v73;
          *(_DWORD *)(v91 + 4 * (v74 + v76)) = v21++;
          if ( v69 == v21 )
            break;
          v19 = *(_QWORD *)(a1 + 96);
        }
        v14 = v109;
        v8 = *(_QWORD *)(a1 + 112);
        v11 = *(_QWORD *)(a1 + 56);
        v7 = *(_DWORD *)(a1 + 52);
        v108 = *(_QWORD *)(a1 + 8);
      }
      v77 = (_DWORD *)(v5 + v10 - 32);
      v21 = v96 - 32;
      if ( (_DWORD *)((char *)a2 + 1) >= v77 )
      {
        v78 = (_DWORD)a2 + 1 - (_DWORD)v77 + 1;
        if ( v78 > 8 )
          v78 = 8;
        v79 = v78 + v21;
        if ( v21 < v78 + v21 )
        {
          v113 = v14;
          v80 = v96 - 32;
          v111 = v5;
          v81 = *(_DWORD *)(a1 + 96);
          v82 = 24 - v7;
          v112 = v7;
          v83 = v79;
          v84 = v82;
          do
          {
            v85 = -1640531535 * *v77;
            v77 = (_DWORD *)((char *)v77 + 1);
            v86 = (v81 ^ (unsigned int)v85) >> v84;
            v87 = 32 * (v86 >> 8);
            v88 = 4 * v87;
            _mm_prefetch((const char *)(v11 + v87), 1);
            LOBYTE(v87) = v80++;
            _mm_prefetch((const char *)(v8 + v88), 1);
            _mm_prefetch((const char *)(v8 + v88 + 64), 1);
            *(_DWORD *)(a1 + 4 * (v87 & 7) + 64) = v86;
          }
          while ( v83 != v80 );
          LOBYTE(v7) = v112;
          v5 = v111;
          v14 = v113;
        }
      }
    }
    if ( v96 > v21 )
    {
      v22 = 24 - v7;
      v23 = (_DWORD *)(v108 + v21 + 8);
      do
      {
        v24 = (*(_DWORD *)(a1 + 96) ^ (unsigned int)(-1640531535 * *v23)) >> v22;
        v25 = 32 * (v24 >> 8);
        _mm_prefetch((const char *)(v11 + v25), 1);
        _mm_prefetch((const char *)(v8 + 4 * v25), 1);
        _mm_prefetch((const char *)(v8 + 4 * v25 + 64), 1);
        v26 = (unsigned int *)(v106 + 4LL * (v21 & 7));
        v27 = *v26;
        *v26 = v24;
        v28 = 32 * (v27 >> 8);
        v29 = (_BYTE *)(v11 + v28);
        v30 = (*(_BYTE *)(v11 + v28) - 1) & 0x1F;
        if ( ((*(_BYTE *)(v11 + v28) - 1) & 0x1F) == 0 )
          v30 = 31;
        v23 = (_DWORD *)((char *)v23 + 1);
        *v29 = v30;
        v29[v30] = v27;
        *(_DWORD *)(v8 + 4 * (v28 + v30)) = v21++;
      }
      while ( v99 != v21 );
    }
    *(_DWORD *)(a1 + 44) = v96;
    v31 = (v110 ^ (unsigned int)(-1640531535 * *(_DWORD *)(v5 + v96 + 8))) >> v103;
    v32 = 32 * (v31 >> 8);
    _mm_prefetch((const char *)(v91 + 4 * v32), 1);
    _mm_prefetch((const char *)(v91 + 4 * v32 + 64), 1);
    _mm_prefetch((const char *)(v94 + v32), 1);
    v33 = (unsigned int *)(v106 + 4LL * (v96 & 7));
    v34 = *v33;
    *v33 = v31;
  }
  v35 = v34;
  *(_DWORD *)(a1 + 104) += v34;
  v36 = 0;
  v37 = 32 * (v34 >> 8);
  v38 = _mm_cvtsi32_si128(v34);
  v39 = v91 + 4 * v37;
  v40 = (__m128i *)(v94 + v37);
  v41 = _mm_unpacklo_epi8(v38, v38);
  v42 = v40->m128i_i8[0];
  v43 = _mm_shuffle_epi32(_mm_unpacklo_epi16(v41, v41), 0);
  v44 = v40->m128i_i8[0] & 0x1F;
  _RAX = (unsigned int)__ROR4__(
                         _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128(v40), v43))
                       | (_mm_movemask_epi8(_mm_cmpeq_epi8(v43, _mm_loadu_si128(v40 + 1))) << 16),
                         v44);
  if ( (_DWORD)_RAX )
  {
    do
    {
      __asm { tzcnt   rdx, rax }
      v47 = (v44 + (_BYTE)_RDX) & 0x1F;
      if ( v47 )
      {
        v48 = *(_DWORD *)(v39 + 4LL * v47);
        if ( v48 < v6 )
          break;
        if ( v14 <= v48 )
          _mm_prefetch((const char *)(v5 + v48), 1);
        else
          _mm_prefetch((const char *)(v89 + v48), 1);
        v114[v36] = v48;
        --v20;
        ++v36;
      }
      _RAX &= _RAX - 1;
    }
    while ( _RAX && v20 );
  }
  v49 = (v42 + 31) & 0x1F;
  if ( ((v42 + 31) & 0x1F) == 0 )
    v49 = 31;
  v40->m128i_i8[0] = v49;
  v40->m128i_i8[v49] = v35;
  v50 = *(_DWORD *)(a1 + 44);
  v51 = 3;
  *(_DWORD *)(a1 + 44) = v50 + 1;
  *(_DWORD *)(v39 + 4LL * v49) = v50;
  if ( v36 )
  {
    v52 = v36;
    v53 = 0;
    v54 = v5;
    v95 = (_QWORD *)((char *)a2 + 4);
    v55 = v14;
    v56 = a3;
    v92 = v99 + 3;
    do
    {
      v58 = (unsigned int)v114[v53];
      v59 = v58;
      if ( v55 <= (unsigned int)v58 )
      {
        v57 = (_QWORD *)(v54 + v58);
        if ( *(_DWORD *)((char *)a2 + v51 - 3) != *(_DWORD *)((char *)v57 + v51 - 3) )
          goto LABEL_30;
        v101 = v52;
        v98 = v56;
        v66 = sub_907A60(a2, v57, v56);
        v56 = v98;
        v52 = v101;
      }
      else
      {
        v60 = (_DWORD *)(v89 + v58);
        if ( *(_DWORD *)a2 != *v60 )
          goto LABEL_30;
        v100 = v52;
        v61 = v60 + 1;
        v97 = v56;
        v62 = (unsigned __int64)v95 + v93 - (_QWORD)v61;
        if ( v56 < v62 )
          v62 = v56;
        v63 = sub_907A60(v95, v61, v62);
        v56 = v97;
        v52 = v100;
        v65 = v63;
        if ( v93 == v63 + v64 )
        {
          v104 = v100;
          v102 = v63;
          v68 = sub_907A60((_QWORD *)((char *)v95 + v63), v107, v97);
          v52 = v104;
          v56 = v97;
          v65 = v68 + v102;
        }
        v66 = v65 + 4;
      }
      if ( v51 < v66 )
      {
        v51 = v66;
        *a4 = v92 - v59;
        if ( (_QWORD *)v56 == (_QWORD *)((char *)a2 + v66) )
          return v51;
      }
LABEL_30:
      ++v53;
    }
    while ( v53 != v52 );
  }
  return v51;
}


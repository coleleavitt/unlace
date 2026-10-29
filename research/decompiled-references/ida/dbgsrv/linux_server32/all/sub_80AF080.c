/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80AF080
// Address: 0x080AF080

//----- (080AF080) --------------------------------------------------------
__int32 __cdecl sub_80AF080(_DWORD *a1, int a2, int a3, int a4, int *a5)
{
  __m128i v5; // xmm1
  _DWORD *v6; // esi
  int v7; // ebx
  __int32 v8; // eax
  void **v9; // ecx
  _DWORD *v10; // esi
  char *v11; // eax
  char *v12; // eax
  void **i; // edi
  char *v14; // esi
  void *v15; // eax
  void *v16; // eax
  unsigned int v18; // eax
  bool v19; // si
  int v20; // eax
  unsigned __int64 v21; // rax
  int v22; // edx
  int v23; // eax
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // kr00_8
  __m128i *v28; // ebx
  unsigned int v29; // ecx
  int v30; // edx
  const __m128i *v31; // eax
  __m128i v32; // xmm0
  __int32 v33; // ebx
  unsigned int v34; // edi
  int v35; // esi
  unsigned int v36; // eax
  unsigned int v37; // edx
  unsigned __int64 v38; // rax
  __m128i v39; // xmm0
  int v40; // eax
  unsigned int v41; // edx
  __m128i si128; // xmm0
  unsigned __int64 v43; // rcx
  __m128i v44; // xmm0
  char *v45; // esi
  char v46; // si
  int v47; // ebx
  unsigned int v48; // eax
  int v49; // eax
  __m128i v50; // xmm0
  char *v51; // eax
  int v52; // ebx
  int *v53; // eax
  unsigned int v54; // eax
  void **v55; // esi
  unsigned __int64 v56; // rax
  __int64 v57; // [esp+4h] [ebp-308h]
  bool *v58; // [esp+8h] [ebp-304h]
  int v59; // [esp+Ch] [ebp-300h]
  int v60; // [esp+10h] [ebp-2FCh]
  unsigned int v61; // [esp+10h] [ebp-2FCh]
  unsigned int v62; // [esp+10h] [ebp-2FCh]
  unsigned int v63; // [esp+1Ch] [ebp-2F0h]
  __m128i v64; // [esp+20h] [ebp-2ECh]
  unsigned __int8 v65; // [esp+20h] [ebp-2ECh]
  unsigned __int64 v66; // [esp+30h] [ebp-2DCh]
  char v67; // [esp+30h] [ebp-2DCh]
  unsigned int v68; // [esp+40h] [ebp-2CCh]
  unsigned int v69; // [esp+44h] [ebp-2C8h]
  bool v70; // [esp+48h] [ebp-2C4h]
  unsigned int v71; // [esp+48h] [ebp-2C4h]
  __m128i v72; // [esp+50h] [ebp-2BCh] BYREF
  unsigned int v73; // [esp+60h] [ebp-2ACh]
  int v74; // [esp+64h] [ebp-2A8h]
  unsigned int v75; // [esp+68h] [ebp-2A4h]
  char v76; // [esp+6Dh] [ebp-29Fh]
  unsigned __int16 v77; // [esp+6Eh] [ebp-29Eh]
  _DWORD *v78; // [esp+70h] [ebp-29Ch]
  _WORD *v79; // [esp+74h] [ebp-298h]
  unsigned __int64 v80; // [esp+78h] [ebp-294h]
  _DWORD *v81; // [esp+80h] [ebp-28Ch]
  int *v82; // [esp+84h] [ebp-288h]
  int *v83; // [esp+88h] [ebp-284h]
  _DWORD *v84; // [esp+8Ch] [ebp-280h]
  __m128i v85; // [esp+90h] [ebp-27Ch]
  void **v86; // [esp+A4h] [ebp-268h]
  _QWORD v87[2]; // [esp+A8h] [ebp-264h] BYREF
  bool v88; // [esp+BFh] [ebp-24Dh] BYREF
  __m128i v89; // [esp+C0h] [ebp-24Ch] BYREF
  char *v90; // [esp+D0h] [ebp-23Ch] BYREF
  unsigned int v91; // [esp+D4h] [ebp-238h]
  unsigned int v92; // [esp+D8h] [ebp-234h]
  __m128i v93; // [esp+E0h] [ebp-22Ch] BYREF
  __m128i *v94; // [esp+F0h] [ebp-21Ch] BYREF
  int v95; // [esp+F4h] [ebp-218h]
  __m128i v96; // [esp+F8h] [ebp-214h] BYREF
  _WORD v97[8]; // [esp+10Ch] [ebp-200h] BYREF
  void *v98; // [esp+11Ch] [ebp-1F0h]
  int v99; // [esp+120h] [ebp-1ECh]
  _BYTE v100[16]; // [esp+134h] [ebp-1D8h] BYREF
  void *v101; // [esp+144h] [ebp-1C8h]
  int v102; // [esp+148h] [ebp-1C4h]
  char v103; // [esp+1BCh] [ebp-150h]
  char *v104; // [esp+1E0h] [ebp-12Ch]
  int v105; // [esp+1E4h] [ebp-128h]
  int v106; // [esp+274h] [ebp-98h]
  __m128i v107; // [esp+278h] [ebp-94h] BYREF
  char v108; // [esp+290h] [ebp-7Ch]
  char v109; // [esp+291h] [ebp-7Bh]
  __int16 v110; // [esp+29Ch] [ebp-70h]
  unsigned __int16 v111; // [esp+29Eh] [ebp-6Eh]
  void *v112; // [esp+2D4h] [ebp-38h]
  int v113; // [esp+2D8h] [ebp-34h]
  int v114; // [esp+2E0h] [ebp-2Ch]
  unsigned int v115; // [esp+2ECh] [ebp-20h]

  v5 = _mm_loadl_epi64((const __m128i *)&a2);
  v84 = a1;
  v6 = (_DWORD *)_mm_cvtsi128_si32(v5);
  v82 = a5;
  v7 = _mm_cvtsi128_si32(_mm_srli_epi64(v5, 0x20u));
  v115 = __readgsdword(0x14u);
  v81 = v6;
  LODWORD(v80) = &dword_811E72C;
  if ( dword_811E72C && *(_BYTE *)(dword_811E72C + 96) )
  {
    v59 = *(_DWORD *)(v84[13] + 100 * ((_DWORD)v6 - 1) + 12);
    v57 = v5.m128i_i64[0];
    sub_8058290();
  }
  if ( !v84[34] )
    goto LABEL_143;
  v8 = v84[33];
  v86 = (void **)v84[34];
  v9 = nullptr;
  v85.m128i_i32[0] = v8;
  while ( *(_QWORD *)(v85.m128i_i32[0] + 32) != __PAIR64__(v7, (unsigned int)v6) )
  {
    v9 = (void **)((char *)v9 + 1);
    v85.m128i_i32[0] += 40;
    if ( v9 == v86 )
      goto LABEL_143;
  }
  v86 = (void **)v85.m128i_i32[0];
  if ( !v85.m128i_i32[0] )
  {
LABEL_143:
    if ( !byte_811F8A1 )
    {
      if ( v115 == __readgsdword(0x14u) )
        sub_80CFF40(721, v57, SHIDWORD(v57), v59);
      sub_80D7AB0();
    }
    BUG();
  }
  v10 = (_DWORD *)*v84;
  if ( !*v84 || v10[1] != 1 )
    goto LABEL_35;
  v11 = (char *)&qword_811CFF4 - 258076;
  if ( v10[3] )
    v11 = (char *)v10[2];
  v83 = sub_80CD4D0((int)v11, 0);
  if ( !v83 )
  {
LABEL_35:
    sub_8058290();
    v85.m128i_i32[0] = 1;
    goto LABEL_36;
  }
  v79 = v97;
  sub_806D700((int)v97, v83, 0);
  if ( !(unsigned __int8)sub_8069FC0((int)v97)
    || !(unsigned __int8)sub_806A5B0(v97)
    || !(unsigned __int8)sub_806EF70((int)v97) )
  {
    sub_8058290();
LABEL_16:
    v85.m128i_i32[0] = 1;
    goto LABEL_17;
  }
  if ( !v103 || !v102 || v110 != 1 )
  {
    if ( *(_DWORD *)v80 && *(_BYTE *)(*(_DWORD *)v80 + 96) )
      sub_8058290();
    v85.m128i_i32[0] = 0;
    goto LABEL_17;
  }
  v78 = v100;
  v18 = sub_806BD60((int)v100, 14);
  if ( !v18 || (v74 = sub_806BD80((int)v100, v18, v58)) == 0 )
  {
    sub_8058290();
LABEL_63:
    *v82 = 232;
    goto LABEL_16;
  }
  v81 = (_DWORD *)sub_806BDC0((int)v78, (int)v81, &v88);
  if ( !v81 )
  {
    sub_8058290();
    goto LABEL_63;
  }
  v90 = nullptr;
  v91 = 0;
  v76 = v108;
  v77 = v111;
  v19 = v88;
  v65 = (v109 != 2) + 1;
  v92 = 0;
  v85 = _mm_add_epi64(_mm_loadl_epi64((const __m128i *)(v81 + 6)), _mm_loadl_epi64(&v107));
  sub_80CD730(v106, v85.m128i_i64[0], 0);
  v94 = nullptr;
  v95 = 0;
  v96.m128i_i32[0] = 0;
  sub_806F910((int)v78, (int)&v94, (int)v81);
  if ( v76 == 2 )
  {
    if ( v19 )
    {
      v85.m128i_i32[0] = (__int32)&qword_811CFF4 - 488644;
      v20 = 24;
    }
    else
    {
      v85.m128i_i32[0] = (__int32)&qword_811CFF4 - 488852;
      v20 = 16;
    }
  }
  else if ( v19 )
  {
    v85.m128i_i32[0] = (__int32)&qword_811CFF4 - 489588;
    v20 = 12;
  }
  else
  {
    v85.m128i_i32[0] = (__int32)&qword_811CFF4 - 489700;
    v20 = 8;
  }
  v80 = (unsigned int)v20;
  if ( *((_QWORD *)v81 + 7) != v20 )
    goto LABEL_55;
  LODWORD(v21) = sub_806C340(v78, (int)v81);
  v66 = v21;
  if ( v21 )
  {
    v26 = __udivmoddi4(v21, HIDWORD(v21), v80, HIDWORD(v80), v87);
    v73 = v26;
    v27 = v87[0];
    if ( HIDWORD(v87[0]) || LODWORD(v87[0]) )
    {
LABEL_55:
      *v82 = 216;
      if ( v94 )
      {
        v95 = 0;
        sub_80CF780(v94);
      }
      v85.m128i_i32[0] = 1;
      goto LABEL_58;
    }
    LODWORD(v26) = v91;
    v71 = HIDWORD(v26);
    v72.m128i_i32[0] = v73;
    v75 = v73;
    if ( v91 < v73 )
    {
      if ( v92 < v73 )
      {
        v90 = (char *)sub_80CF920((int)&v90, v90, v73, 0x20u);
        LODWORD(v26) = v91;
      }
      memset(&v90[32 * v26], 0, 32 * (v75 - v26));
      v91 = v75;
    }
    else if ( v72.m128i_i32[0] != v91 )
    {
      v91 = v73;
    }
    memset(v90, 0, 32 * v75);
    v28 = v94;
    if ( v66 >= v80 )
    {
      v29 = v77;
      v30 = v65;
      do
      {
        v75 = v29;
        LODWORD(v80) = v30;
        ((void (__cdecl *)(__m128i *, _DWORD, int, unsigned int, char *))v85.m128i_i32[0])(
          v28,
          v27,
          v30,
          v29,
          &v90[32 * v27]);
        v30 = v80;
        ++v27;
        v29 = v75;
      }
      while ( v27 < __PAIR64__(v71, v72.m128i_u32[0]) );
      v28 = v94;
    }
    if ( v28 )
    {
      v95 = 0;
      sub_80CF780(v28);
    }
  }
  else if ( v94 )
  {
    v95 = 0;
    sub_80CF780(v94);
  }
  v22 = 234;
  if ( !*(_QWORD *)(v74 + 56) )
  {
LABEL_70:
    v85.m128i_i32[0] = 1;
    *v82 = v22;
    goto LABEL_58;
  }
  v70 = v88;
  v23 = sub_806C340(v78, v74);
  v25 = __udivmoddi4(v23, v24, *(_DWORD *)(v74 + 56), *(_DWORD *)(v74 + 60), v87);
  if ( HIDWORD(v87[0]) || LODWORD(v87[0]) )
  {
    v22 = 231;
    goto LABEL_70;
  }
  v63 = HIDWORD(v25);
  v68 = v25;
  v69 = v91;
  v85.m128i_i32[0] = 0;
  if ( !v91 )
    goto LABEL_58;
  v73 = 0;
  v75 = 0;
  do
  {
    v31 = (const __m128i *)&v90[32 * v75];
    if ( !v31->m128i_i64[1] )
      goto LABEL_108;
    if ( v31[1].m128i_i64[0] >= __PAIR64__(v63, v68) )
      goto LABEL_103;
    v94 = nullptr;
    v95 = 0;
    v96 = 0;
    v32 = _mm_loadl_epi64(v31);
    v33 = v31->m128i_i32[2];
    v34 = v31[1].m128i_u32[0];
    v64.m128i_i64[0] = v32.m128i_i64[0];
    v35 = _mm_cvtsi128_si32(v32);
    v60 = _mm_cvtsi128_si32(_mm_srli_epi64(v32, 0x20u));
    v32.m128i_i64[0] = v31[1].m128i_i64[1];
    LODWORD(v80) = v33;
    v89.m128i_i64[0] = v32.m128i_i64[0];
    if ( v77 == 243 && (unsigned int)(v33 - 60) <= 1 )
    {
      ++v73;
      goto LABEL_108;
    }
    v36 = sub_80CD730(v106, 0, 1);
    v72 = _mm_sub_epi64(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(v37)), _mm_loadl_epi64(&v107));
    if ( v76 == 2 )
    {
      LODWORD(v38) = sub_806C340(v78, v74);
      if ( v34 >= (unsigned int)(v38 / 0x18) )
        goto LABEL_177;
      v39 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(24 * v34), _mm_cvtsi32_si128(0));
    }
    else
    {
      LODWORD(v56) = sub_806C340(v78, v74);
      if ( v34 >= (unsigned int)(v56 >> 4) )
      {
LABEL_177:
        v40 = 213;
        goto LABEL_102;
      }
      v39 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(16 * v34), _mm_cvtsi32_si128(0));
    }
    sub_80CD730(
      v106,
      _mm_add_epi64(_mm_add_epi64(v39, _mm_loadl_epi64((const __m128i *)(v74 + 24))), _mm_loadl_epi64(&v107)).m128i_i64[0],
      0);
    if ( sub_806A240((int)v79, (int)&v94) < 0 )
    {
      v40 = 211;
LABEL_102:
      *v82 = v40;
      v85 = _mm_add_epi64(_mm_load_si128(&v72), _mm_loadl_epi64(&v107));
      sub_80CD730(v106, v85.m128i_i64[0], 0);
      goto LABEL_103;
    }
    v72 = _mm_add_epi64(_mm_load_si128(&v72), _mm_loadl_epi64(&v107));
    sub_80CD730(v106, v72.m128i_i64[0], 0);
    if ( v77 <= 0x3Eu )
    {
      if ( v77 > 1u )
      {
        switch ( v77 )
        {
          case 2u:
          case 0x12u:
            if ( (_DWORD)v80 == 54 )
              goto LABEL_117;
            if ( (_DWORD)v80 == 23 )
              goto LABEL_135;
            break;
          case 3u:
            if ( (_DWORD)v80 == 1 || (_DWORD)v80 == 32 )
              goto LABEL_135;
            break;
          case 8u:
            if ( (_DWORD)v80 == 18 )
              goto LABEL_117;
            if ( (_DWORD)v80 == 2 )
              goto LABEL_135;
            break;
          case 0x14u:
            if ( (_DWORD)v80 == 1 )
              goto LABEL_135;
            break;
          case 0x15u:
            if ( (_DWORD)v80 == 38 )
              goto LABEL_117;
            if ( (_DWORD)v80 == 1 )
              goto LABEL_135;
            break;
          case 0x28u:
            if ( (_DWORD)v80 == 2 )
              goto LABEL_135;
            break;
          case 0x2Du:
            goto LABEL_165;
          case 0x32u:
            if ( (_DWORD)v80 == 39 )
              goto LABEL_117;
            if ( (_DWORD)v80 != 101 )
              break;
            goto LABEL_135;
          case 0x3Eu:
            if ( (_DWORD)v80 == 10 || (_DWORD)v80 == 21 )
              goto LABEL_135;
            if ( (_DWORD)v80 == 1 )
              goto LABEL_117;
            break;
          default:
            break;
        }
      }
LABEL_150:
      *v82 = 211;
      goto LABEL_103;
    }
    switch ( v77 )
    {
      case 0xC3u:
LABEL_165:
        if ( (_DWORD)v80 != 1 && (_DWORD)v80 != 4 )
          goto LABEL_150;
        break;
      case 0xF3u:
        switch ( (int)v80 )
        {
          case 1:
          case 35:
          case 39:
          case 56:
            goto LABEL_135;
          case 2:
          case 36:
          case 40:
            goto LABEL_117;
          case 33:
          case 37:
          case 54:
            v41 = 1;
            si128 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257524));
            goto LABEL_118;
          case 34:
          case 38:
          case 55:
            v41 = 2;
            si128 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257396));
            goto LABEL_118;
          default:
            goto LABEL_150;
        }
      case 0xB7u:
        if ( (_DWORD)v80 != 258 && (_DWORD)v80 != 283 )
        {
          if ( (_DWORD)v80 != 257 )
            goto LABEL_150;
LABEL_117:
          v41 = 8;
          si128 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257428));
          goto LABEL_118;
        }
        break;
      default:
        goto LABEL_150;
    }
LABEL_135:
    v41 = 4;
    si128 = _mm_load_si128((const __m128i *)((char *)&qword_811CFF4 - 257412));
LABEL_118:
    v43 = (unsigned int)v86[6];
    if ( __PAIR64__(v60, v35) >= (unsigned int)v43 )
      goto LABEL_150;
    v44 = _mm_add_epi64(si128, v64);
    if ( v43 < __PAIR64__(_mm_cvtsi128_si32(_mm_srli_epi64(v44, 0x20u)), _mm_cvtsi128_si32(v44)) )
      goto LABEL_150;
    v67 = v109;
    v45 = (char *)v86[7] + v35;
    v72.m128i_i32[0] = (__int32)v45;
    if ( !v70 )
    {
      qmemcpy(&v89, v45, v41);
      if ( v67 == 2 )
      {
        v62 = v41;
        sub_80D3200((unsigned __int64 *)&v89, &v89, v41);
        v41 = v62;
      }
    }
    v46 = v95;
    v47 = 11;
    v61 = v41;
    v89.m128i_i64[1] = 0;
    if ( _bittest(&v47, v95 & 0xF) )
    {
      if ( HIWORD(v95) )
      {
        v48 = HIWORD(v95) - 1;
        if ( v48 < v84[14] )
        {
          v49 = v84[13] + 100 * v48;
          if ( *(_DWORD *)(v49 + 16) )
          {
            if ( !strncmp(*(const char **)(v49 + 12), (const char *)&qword_811CFF4 - 276704, 7u) )
            {
              v50 = _mm_loadl_epi64(&v89);
              v89.m128i_i64[1] = v50.m128i_i64[0];
              if ( (v46 & 0xE) == 0 )
                v89.m128i_i64[1] = _mm_add_epi64(v50, _mm_loadl_epi64(&v96)).m128i_u64[0];
              if ( v77 == 243 )
              {
                v93.m128i_i64[0] = 0;
                v54 = v80;
                qmemcpy(&v93, (const void *)v72.m128i_i32[0], v61);
                if ( v54 > 0x24 )
                {
                  if ( (unsigned int)(v80 - 37) <= 3 )
                    v89.m128i_i64[1] = _mm_sub_epi64(
                                         _mm_loadl_epi64((const __m128i *)&v89.m128i_u64[1]),
                                         _mm_loadl_epi64(&v93)).m128i_u64[0];
                }
                else if ( v54 > 0x20 )
                {
                  v89.m128i_i64[1] = _mm_add_epi64(
                                       _mm_loadl_epi64((const __m128i *)&v89.m128i_u64[1]),
                                       _mm_loadl_epi64(&v93)).m128i_u64[0];
                }
              }
              qmemcpy((void *)v72.m128i_i32[0], &v89.m128i_u64[1], v61);
              if ( v67 == 2 )
                sub_80D3200((unsigned __int64 *)v72.m128i_i32[0], (const __m128i *)v72.m128i_i32[0], v61);
              goto LABEL_108;
            }
          }
        }
      }
    }
    v51 = (char *)v86[1];
    if ( v86[2] < v51 + 1 )
    {
      v55 = v86;
      *v55 = sub_80CF920((int)v86, *v86, (unsigned int)(v51 + 1), 8u);
      v51 = (char *)v55[1];
    }
    v52 = (int)v86;
    *((_QWORD *)*v86 + (unsigned int)v51) = v64.m128i_i64[0];
    v53 = v82;
    ++*(_DWORD *)(v52 + 4);
    *v53 = 212;
LABEL_103:
    memset(&v93, 0, 12);
    v94 = nullptr;
    v95 = 0;
    v96.m128i_i32[0] = 0;
    sub_806E9F0((int)v78, (__m128i **)&v93, v81);
    sub_805ED10(&v94, (char *)&qword_811CFF4 - 263288);
    sub_8069740();
    if ( v94 )
    {
      v95 = 0;
      sub_80CF780(v94);
    }
    if ( v93.m128i_i32[0] )
    {
      v93.m128i_i32[1] = 0;
      sub_80CF780((void *)v93.m128i_i32[0]);
    }
    v85.m128i_i32[0] = 1;
LABEL_108:
    ++v75;
  }
  while ( v69 != v75 );
  if ( (int)v73 > 0 )
  {
    v94 = nullptr;
    v95 = 0;
    v96.m128i_i32[0] = 0;
    sub_806E9F0((int)v78, &v94, v81);
    sub_8058290();
    if ( v94 )
    {
      v95 = 0;
      sub_80CF780(v94);
    }
  }
LABEL_58:
  if ( v90 )
  {
    v91 = 0;
    sub_80CF780(v90);
  }
LABEL_17:
  if ( v114 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v114 + 4))(v114);
  if ( v112 )
  {
    v113 = 0;
    sub_80CF780(v112);
  }
  v12 = v104;
  if ( v104 )
  {
    if ( v105 )
    {
      v86 = (void **)v105;
      for ( i = nullptr; i != v86; i = (void **)((char *)i + 1) )
      {
        v14 = &v12[68 * (_DWORD)i];
        v15 = *((void **)v14 + 3);
        if ( v15 )
        {
          *((_DWORD *)v14 + 4) = 0;
          sub_80CF780(v15);
        }
        v16 = *(void **)v14;
        if ( *(_DWORD *)v14 )
        {
          *((_DWORD *)v14 + 1) = 0;
          sub_80CF780(v16);
        }
        v12 = v104;
      }
    }
    v105 = 0;
    sub_80CF780(v12);
  }
  if ( v101 )
  {
    v102 = 0;
    sub_80CF780(v101);
  }
  if ( v98 )
  {
    v99 = 0;
    sub_80CF780(v98);
  }
  sub_80CD620(v83);
LABEL_36:
  if ( v115 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v85.m128i_i32[0];
}
// 80AF4EB: variable 'v58' is possibly undefined
// 80AF71F: variable 'v21' is possibly undefined
// 80AF79B: variable 'v24' is possibly undefined
// 80AFAC6: variable 'v37' is possibly undefined
// 80AFB15: variable 'v38' is possibly undefined
// 80AFE8D: variable 'v64' is possibly undefined
// 80B0143: variable 'v57' is possibly undefined
// 80B0143: variable 'v59' is possibly undefined
// 80B0270: variable 'v56' is possibly undefined
// 804B9D0: using guessed type __int64 __cdecl __udivmoddi4(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD);
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811E72C: using guessed type int dword_811E72C;
// 811F8A1: using guessed type char byte_811F8A1;

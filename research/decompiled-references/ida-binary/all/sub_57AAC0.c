_OWORD *__fastcall sub_57AAC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __int128 a8,
        __int128 a9)
{
  unsigned int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __m128i v20; // kr00_16
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // eax
  __int128 v28; // xmm5
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  __int64 v34; // r8
  __int64 v35; // rcx
  unsigned int v36; // ebx
  unsigned int v37; // ebp
  __int64 v38; // r12
  int v39; // r11d
  __int64 *v40; // r14
  unsigned __int64 v41; // rax
  __int64 v42; // rsi
  int v43; // r10d
  int v44; // r15d
  __int64 v45; // r13
  unsigned int v46; // r15d
  unsigned int v47; // r13d
  __m128i v48; // xmm0
  __m128i v49; // xmm2
  unsigned int v50; // eax
  __m128i v51; // xmm1
  unsigned int v52; // r12d
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  unsigned int v57; // eax
  bool v58; // r11
  __int64 v59; // rax
  __m128i v60; // xmm4
  bool v61; // al
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  bool v66; // bl
  int v67; // ecx
  bool v68; // r11
  char v69; // r12
  int v70; // r10d
  __m128 v71; // xmm0
  char v72; // r11
  _OWORD *v73; // rbx
  unsigned int v75; // ebp
  unsigned int v76; // r12d
  unsigned int v77; // r11d
  __int64 v78; // rax
  __m128i v79; // [rsp+0h] [rbp-188h]
  __m128i v80; // [rsp+0h] [rbp-188h]
  __m128i v81; // [rsp+0h] [rbp-188h]
  __m128i v82; // [rsp+0h] [rbp-188h]
  __m128i v83; // [rsp+0h] [rbp-188h]
  __int64 v84; // [rsp+28h] [rbp-160h]
  unsigned int v85; // [rsp+28h] [rbp-160h]
  __m128i v86; // [rsp+30h] [rbp-158h] BYREF
  __int64 v87; // [rsp+40h] [rbp-148h]
  unsigned int v88; // [rsp+48h] [rbp-140h]
  int v89; // [rsp+4Ch] [rbp-13Ch]
  unsigned int v90; // [rsp+50h] [rbp-138h]
  unsigned int v91; // [rsp+54h] [rbp-134h]
  __int64 v92; // [rsp+58h] [rbp-130h]
  __int64 v93; // [rsp+60h] [rbp-128h]
  unsigned int v94; // [rsp+68h] [rbp-120h]
  unsigned int v95; // [rsp+6Ch] [rbp-11Ch]
  __int64 v96; // [rsp+70h] [rbp-118h] BYREF
  __int64 *v97; // [rsp+78h] [rbp-110h]
  unsigned int v98; // [rsp+80h] [rbp-108h]
  unsigned int v99; // [rsp+84h] [rbp-104h]
  unsigned int v100; // [rsp+88h] [rbp-100h]
  unsigned int v101; // [rsp+8Ch] [rbp-FCh]
  __int64 v102; // [rsp+90h] [rbp-F8h]
  __int64 v103; // [rsp+98h] [rbp-F0h]
  char v104; // [rsp+A3h] [rbp-E5h]
  unsigned int v105; // [rsp+A4h] [rbp-E4h]
  __int64 *v106; // [rsp+A8h] [rbp-E0h]
  unsigned int v107; // [rsp+B0h] [rbp-D8h]
  unsigned int v108; // [rsp+B4h] [rbp-D4h]
  __int64 v109; // [rsp+B8h] [rbp-D0h]
  unsigned int v110; // [rsp+C0h] [rbp-C8h]
  bool v111; // [rsp+C7h] [rbp-C1h]
  _OWORD *v112; // [rsp+C8h] [rbp-C0h]
  __m128i v113; // [rsp+D0h] [rbp-B8h] BYREF
  __m128i v114; // [rsp+E0h] [rbp-A8h] BYREF
  __m128i v115; // [rsp+F0h] [rbp-98h] BYREF
  __m128i v116; // [rsp+100h] [rbp-88h] BYREF
  __m128i v117; // [rsp+110h] [rbp-78h] BYREF
  __m128i v118[2]; // [rsp+120h] [rbp-68h] BYREF
  __int64 *v119; // [rsp+140h] [rbp-48h]
  __int64 v120; // [rsp+148h] [rbp-40h]

  v104 = a2;
  v10 = sub_566CC0(
          a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          (__int128)_mm_loadu_si128((const __m128i *)&a8),
          (__int128)_mm_loadu_si128((const __m128i *)&a9));
  sub_57A9A0(
    &v113,
    a7,
    a2,
    v11,
    v12,
    v13,
    v14,
    (__int128)_mm_loadu_si128((const __m128i *)&a8),
    (__int128)_mm_loadu_si128((const __m128i *)&a9));
  v19 = v114.m128i_i64[1];
  v20 = v114;
  v93 = (unsigned __int128)v20 >> 64;
  v97 = (__int64 *)*(_OWORD *)&v20;
  v109 = 0;
  v106 = nullptr;
  v107 = 0;
  v108 = 0;
  v110 = 0;
  v105 = 0;
  v111 = 0;
  v112 = (_OWORD *)a1;
LABEL_2:
  v114.m128i_i64[0] = (__int64)v97;
  v114.m128i_i64[1] = v93;
  v79 = _mm_load_si128(&v113);
  if ( sub_567740(v19, a2, v15, v16, v17, v18, v79.m128i_i32[0], v79.m128i_i32[2], _mm_load_si128(&v114).m128i_i64[0]) )
  {
    v73 = v112;
    *v112 = 0;
    v73[1] = 0;
    return v73;
  }
  v22 = *v97;
  if ( (*v97 & 1) != 0 )
  {
    v102 = 0;
    v19 = 0;
    v35 = 0;
    v23 = 0;
    v34 = 0;
  }
  else
  {
    v23 = *(unsigned int *)(v22 + 36);
    if ( (_DWORD)v23 )
    {
      v24 = *(unsigned __int16 *)(v22 + 66);
      v102 = 0;
      v25 = *(_QWORD *)(v93 + 8);
      if ( (_DWORD)v24 )
      {
        v26 = (unsigned int)v24 * *(unsigned __int16 *)(v25 + 36);
        v24 = *(_QWORD *)(v25 + 128);
        v102 = v24 + 2 * v26;
      }
      v84 = v22;
      v27 = sub_565DC0(v19, a2, v24, v25, v22, v21, _mm_load_si128(&v113).m128i_u32[0]);
      v28 = (__int128)_mm_load_si128(&v113);
      v88 = v27;
      v33 = sub_565DD0(v19, a2, v29, v30, v31, v32, v28);
      v23 = v88;
      v34 = v84;
      v35 = (unsigned int)v33;
      v19 = HIDWORD(v33);
    }
    else
    {
      v102 = 0;
      v19 = 0;
      v35 = 0;
      v34 = 0;
    }
  }
  v95 = 0;
  v36 = 0;
  v37 = v10;
  v103 = 0;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  v101 = 0;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 2 )
      {
        while ( 2 )
        {
          if ( !v34 )
            goto LABEL_32;
LABEL_10:
          v38 = *(unsigned int *)(v34 + 36);
          v39 = *(_DWORD *)(v34 + 36);
          do
          {
            if ( v36 == v39 )
              goto LABEL_32;
            v40 = (__int64 *)(v34 + 8 * (v36 - v38));
            v41 = *v40;
            if ( (*v40 & 1) != 0 )
              v42 = (v41 >> 3) & 1;
            else
              LOBYTE(v42) = (*(_BYTE *)(v41 + 44) & 4) != 0;
            if ( (_BYTE)v42 )
            {
              v21 = 0;
              v43 = 0;
            }
            else
            {
              if ( v102 )
              {
                v21 = *(unsigned __int16 *)(v102 + 2LL * v95);
                v43 = *(unsigned __int16 *)(v102 + 2LL * v95);
              }
              else
              {
                v21 = 0;
                v43 = 0;
              }
              ++v95;
            }
            if ( v36 )
            {
              if ( (v41 & 1) != 0 )
              {
                v44 = BYTE6(v41);
                v45 = (v41 >> 40) & 0xF;
                a2 = BYTE4(v41);
              }
              else
              {
                v44 = *(_DWORD *)(v41 + 4);
                LODWORD(v45) = *(_DWORD *)(v41 + 8);
                a2 = *(unsigned int *)(v41 + 12);
              }
              v46 = v23 + v44;
              if ( (_DWORD)v45 )
              {
                v47 = v35 + v45;
              }
              else
              {
                a2 = (unsigned int)(v19 + a2);
                v47 = v35;
              }
            }
            else
            {
              a2 = (unsigned int)v19;
              v47 = v35;
              v46 = v23;
            }
            if ( (v41 & 1) != 0 )
            {
              LODWORD(v19) = HIBYTE(v41);
              v23 = (unsigned int)v19 + v46;
LABEL_25:
              v19 = (unsigned int)(a2 + v19);
              v35 = v47;
              goto LABEL_26;
            }
            v67 = *(_DWORD *)(v41 + 20);
            v19 = *(unsigned int *)(v41 + 24);
            v23 = v46 + *(_DWORD *)(v41 + 16);
            if ( !v67 )
              goto LABEL_25;
            v35 = v47 + v67;
LABEL_26:
            ++v36;
          }
          while ( v37 >= (unsigned int)v23 );
          v85 = a2;
          v88 = v21;
          v48 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v46), _mm_cvtsi32_si128(v47));
          v49 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(v21));
          v92 = v34;
          v94 = v19;
          v91 = v23;
          v90 = v35;
          v89 = v43;
          v96 = v49.m128i_i64[0];
          v87 = v48.m128i_i64[0];
          v86 = _mm_unpacklo_epi64(v48, v49);
          v50 = sub_565DC0(v19, a2, v23, v35, v34, v21, _mm_loadu_si128((const __m128i *)&a8).m128i_u32[0]);
          v51 = _mm_load_si128(&v86);
          v119 = v40;
          v52 = v50;
          v118[1] = v51;
          v120 = v93;
          v57 = sub_565DC0(v19, a2, v53, v54, v55, v56, v51.m128i_u32[0]);
          v35 = v90;
          v23 = v91;
          v58 = v52 >= v57;
          v19 = v94;
          v34 = v92;
          if ( v37 == v52 )
            v58 = v57 < v37;
          v59 = *v40;
          if ( v58 )
          {
            if ( v59 == *(_QWORD *)a9 )
              continue;
            v60 = _mm_load_si128(&v86);
            v97 = v40;
            v118[0].m128i_i64[0] = (__int64)v40;
            v118[0].m128i_i64[1] = v93;
            v103 = v93;
            v100 = v47;
            v98 = v88;
            v101 = v46;
            v99 = a2;
            v117 = v60;
            if ( v92 )
              goto LABEL_10;
LABEL_32:
            v10 = v37;
            v117.m128i_i64[0] = __PAIR64__(v100, v101);
            v117.m128i_i64[1] = __PAIR64__(v98, v99);
            v118[0].m128i_i64[0] = (__int64)v97;
            v118[0].m128i_i64[1] = v103;
            v80 = _mm_load_si128(&v117);
            v61 = sub_567740(
                    v19,
                    a2,
                    v23,
                    v35,
                    v34,
                    v21,
                    v80.m128i_i32[0],
                    v80.m128i_i32[2],
                    _mm_load_si128(v118).m128i_i64[0]);
            v93 = 0;
            v66 = v61;
            if ( v61 )
            {
              v97 = nullptr;
              v98 = 0;
              v99 = 0;
              v100 = 0;
              v101 = 0;
              goto LABEL_34;
            }
            v40 = nullptr;
            v47 = 0;
            v46 = 0;
            v88 = 0;
            v85 = 0;
            v96 = 0;
LABEL_63:
            v71 = _mm_loadh_ps((const double *)&v96);
            v116.m128i_i64[0] = (__int64)v40;
            v115 = (__m128i)v71;
            v116.m128i_i64[1] = v93;
            if ( sub_567740(
                   v19,
                   a2,
                   v62,
                   v63,
                   v64,
                   v65,
                   v71.m128_i32[0],
                   v71.m128_i32[2],
                   _mm_load_si128(&v116).m128i_i64[0]) )
            {
              v40 = v106;
              v47 = v110;
              v46 = v105;
              v93 = v109;
              v88 = v107;
              v85 = v108;
            }
            else
            {
              v111 = v66;
            }
            v106 = v40;
            v110 = v47;
            v109 = v93;
            v105 = v46;
            v93 = v103;
            v107 = v88;
            v108 = v85;
LABEL_37:
            v113.m128i_i64[0] = __PAIR64__(v100, v101);
            v113.m128i_i64[1] = __PAIR64__(v98, v99);
            goto LABEL_2;
          }
          break;
        }
        v68 = (*(_BYTE *)v40 & 4) != 0;
        v69 = (*(_BYTE *)v40 & 2) != 0;
        if ( v104 )
        {
          if ( (v59 & 1) == 0 )
            v69 = *(_BYTE *)(v59 + 44) & 1;
          v21 = v88;
          if ( !v88 && !v69 )
            goto LABEL_48;
          goto LABEL_61;
        }
        if ( !(_WORD)v89 )
        {
          if ( (v59 & 1) != 0 )
          {
            if ( (*(_BYTE *)v40 & 2) == 0 )
              goto LABEL_48;
          }
          else
          {
            v72 = *(_BYTE *)(v59 + 44);
            if ( (v72 & 1) == 0 )
              goto LABEL_48;
            v68 = (v72 & 2) != 0;
          }
          if ( !v68 )
            goto LABEL_48;
LABEL_61:
          v86.m128i_i64[0] = v87;
          v10 = v37;
          v117.m128i_i64[0] = __PAIR64__(v100, v101);
          v117.m128i_i64[1] = __PAIR64__(v98, v99);
          v118[0].m128i_i64[0] = (__int64)v97;
          v118[0].m128i_i64[1] = v103;
          v83 = _mm_load_si128(&v117);
          if ( !sub_567740(
                  v94,
                  a2,
                  v91,
                  v90,
                  v92,
                  v21,
                  v83.m128i_i32[0],
                  v83.m128i_i32[2],
                  _mm_load_si128(v118).m128i_i64[0]) )
          {
            v66 = 1;
            goto LABEL_63;
          }
          v75 = v85;
          v76 = v88;
          v77 = v46;
          v73 = v112;
          goto LABEL_81;
        }
        if ( (_WORD)v89 == 0xFFFF )
          goto LABEL_61;
        if ( (_WORD)v89 != 0xFFFE )
        {
          a2 = v93;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v93 + 8) + 104LL) + 3LL * (unsigned __int16)v89 + 1) )
            goto LABEL_61;
        }
LABEL_48:
        if ( (v59 & 1) != 0 )
          continue;
        break;
      }
      a2 = *(unsigned int *)(v59 + 36);
      if ( !(_DWORD)a2 )
        continue;
      break;
    }
    v70 = *(_DWORD *)(v59 + 52);
    if ( v104 )
      v70 = *(_DWORD *)(v59 + 48);
    if ( !v70 )
      continue;
    break;
  }
  v86.m128i_i64[0] = v87;
  v10 = v37;
  v117.m128i_i64[0] = __PAIR64__(v100, v101);
  v117.m128i_i64[1] = __PAIR64__(v98, v99);
  v118[0].m128i_i64[0] = (__int64)v97;
  v118[0].m128i_i64[1] = v103;
  v82 = _mm_load_si128(&v117);
  v66 = sub_567740(v94, a2, v91, v90, v92, v21, v82.m128i_i32[0], v82.m128i_i32[2], _mm_load_si128(v118).m128i_i64[0]);
  if ( !v66 )
    goto LABEL_63;
  v97 = v40;
  v100 = v47;
  v98 = v88;
  v101 = v46;
  v99 = v85;
LABEL_34:
  v115.m128i_i64[0] = __PAIR64__(v100, v101);
  v115.m128i_i64[1] = __PAIR64__(v98, v99);
  v116.m128i_i64[0] = (__int64)v97;
  v116.m128i_i64[1] = v93;
  v81 = _mm_load_si128(&v115);
  if ( !sub_567740(v19, a2, v62, v63, v64, v65, v81.m128i_i32[0], v81.m128i_i32[2], _mm_load_si128(&v116).m128i_i64[0]) )
    goto LABEL_37;
  if ( !v111 )
  {
    v101 = v105;
    v100 = v110;
    v99 = v108;
    v98 = v107;
    v93 = v109;
    v97 = v106;
    goto LABEL_37;
  }
  v73 = v112;
  v77 = v105;
  v47 = v110;
  v93 = v109;
  v75 = v108;
  v76 = v107;
  v40 = v106;
LABEL_81:
  v78 = v93;
  *(_DWORD *)v73 = v77;
  *((_DWORD *)v73 + 1) = v47;
  *((_DWORD *)v73 + 2) = v75;
  *((_DWORD *)v73 + 3) = v76;
  *((_QWORD *)v73 + 2) = v40;
  *((_QWORD *)v73 + 3) = v78;
  return v73;
}

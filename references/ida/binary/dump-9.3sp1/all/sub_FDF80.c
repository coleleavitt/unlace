__int64 __fastcall sub_FDF80(_QWORD *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rax
  __m128i v8; // xmm2
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r15
  bool v13; // zf
  unsigned __int8 *v14; // r12
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // r9d
  __int64 v19; // r13
  unsigned int v20; // r13d
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 i; // r15
  __int32 *v24; // r14
  __int32 *j; // r15
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // r13d
  __int64 v29; // r15
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  size_t v33; // r15
  int v34; // ecx
  int v35; // r8d
  int v36; // r9d
  __int64 v37; // rdx
  __int64 v38; // rcx
  int v39; // r13d
  __int64 v40; // rax
  __int64 v41; // r14
  __int64 v42; // r12
  __int64 v43; // rsi
  __int64 v44; // rdx
  __int64 v45; // rcx
  void *v46; // r15
  unsigned __int64 v47; // rbx
  __m128i v48; // xmm0
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // r12
  __int64 v52; // r15
  __int64 *v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // rdi
  unsigned __int64 v57; // r13
  int *v58; // rdx
  unsigned __int64 v59; // r15
  size_t v60; // rax
  unsigned __int64 v61; // r15
  __int64 v62; // r13
  int v63; // r15d
  __int64 v64; // rax
  _DWORD *v65; // rdi
  const void *v66; // r8
  void *v67; // rax
  void *v68; // rdi
  __int64 v69; // rax
  void *v70; // [rsp+0h] [rbp-2D0h]
  const void *v71; // [rsp+8h] [rbp-2C8h]
  __int64 v72; // [rsp+10h] [rbp-2C0h]
  __int64 v73; // [rsp+18h] [rbp-2B8h]
  __int64 v74; // [rsp+20h] [rbp-2B0h]
  __int64 v75; // [rsp+28h] [rbp-2A8h]
  int v76; // [rsp+30h] [rbp-2A0h]
  int v77; // [rsp+34h] [rbp-29Ch]
  const __m128i **v78; // [rsp+38h] [rbp-298h]
  __int64 v79; // [rsp+40h] [rbp-290h]
  size_t v80; // [rsp+48h] [rbp-288h]
  __m128i v81; // [rsp+50h] [rbp-280h] BYREF
  __int64 v82; // [rsp+60h] [rbp-270h] BYREF
  __int64 v83; // [rsp+68h] [rbp-268h]
  _DWORD *v84; // [rsp+70h] [rbp-260h] BYREF
  __int128 v85; // [rsp+78h] [rbp-258h]
  void *src; // [rsp+90h] [rbp-240h] BYREF
  size_t n[3]; // [rsp+98h] [rbp-238h]
  __int64 v88[2]; // [rsp+B0h] [rbp-220h] BYREF
  __int64 v89; // [rsp+C0h] [rbp-210h]
  void *dest[2]; // [rsp+C8h] [rbp-208h] BYREF
  __int128 v91; // [rsp+D8h] [rbp-1F8h]
  __int64 v92; // [rsp+E8h] [rbp-1E8h]
  __int128 v93; // [rsp+F0h] [rbp-1E0h]
  __int64 v94; // [rsp+100h] [rbp-1D0h]
  int v95; // [rsp+108h] [rbp-1C8h]
  int v96; // [rsp+10Ch] [rbp-1C4h]
  __int64 v97; // [rsp+110h] [rbp-1C0h]
  __m128i v98; // [rsp+120h] [rbp-1B0h] BYREF
  __int64 v99; // [rsp+130h] [rbp-1A0h]
  __int64 v100; // [rsp+138h] [rbp-198h]
  __int128 v101; // [rsp+140h] [rbp-190h]
  __int64 v102; // [rsp+150h] [rbp-180h]
  __int128 v103; // [rsp+158h] [rbp-178h]
  __int64 v104; // [rsp+168h] [rbp-168h]
  __int64 v105; // [rsp+170h] [rbp-160h]
  char v106[8]; // [rsp+178h] [rbp-158h] BYREF
  __int64 v107; // [rsp+180h] [rbp-150h]
  __int64 v108; // [rsp+188h] [rbp-148h]
  __int64 v109; // [rsp+198h] [rbp-138h]
  __int64 v110; // [rsp+1A0h] [rbp-130h]
  __int64 v111; // [rsp+1D0h] [rbp-100h]
  __int64 v112; // [rsp+1D8h] [rbp-F8h]
  __int64 v113; // [rsp+1E8h] [rbp-E8h]
  __int64 v114; // [rsp+1F0h] [rbp-E0h]
  __int64 v115; // [rsp+200h] [rbp-D0h]
  __int64 v116; // [rsp+208h] [rbp-C8h]
  __int64 v117; // [rsp+210h] [rbp-C0h]
  __int64 v118; // [rsp+218h] [rbp-B8h]
  __int64 v119; // [rsp+220h] [rbp-B0h]
  __int64 v120; // [rsp+228h] [rbp-A8h]
  __int128 v121; // [rsp+230h] [rbp-A0h]
  int v122; // [rsp+240h] [rbp-90h]
  __int16 v123; // [rsp+244h] [rbp-8Ch]
  __m128i si128; // [rsp+248h] [rbp-88h]
  __int128 v125; // [rsp+258h] [rbp-78h]
  __m128i v126; // [rsp+268h] [rbp-68h]
  __int128 v127; // [rsp+278h] [rbp-58h]
  int tinfo_property; // [rsp+288h] [rbp-48h]
  __int16 v129; // [rsp+28Ch] [rbp-44h]
  char v130; // [rsp+28Eh] [rbp-42h]
  unsigned __int64 v131; // [rsp+298h] [rbp-38h]

  v79 = a2;
  LODWORD(v72) = a3;
  v73 = a4;
  v131 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a4 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_383060(50101);
    goto LABEL_101;
  }
  v100 = 0;
  v102 = 0;
  v5 = *(_QWORD *)(a4 + 72);
  *(_DWORD *)(a2 + 24) |= 8u;
  v6 = *(_QWORD *)(a2 + 480);
  v75 = v5;
  v7 = *(_QWORD *)(v79 + 64);
  v104 = 0;
  v105 = 0;
  v8 = (__m128i)v7;
  v9 = *(_QWORD *)(v7 + 1496);
  v98 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v79, v8);
  v99 = v9;
  v101 = 0;
  v103 = 0;
  sub_D10B0((__int64)v106, v6, 0);
  v121 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v126 = 0;
  v115 = v79;
  v116 = 0;
  v117 = 0;
  v118 = 0;
  v119 = 0;
  v120 = 0;
  v122 = -1;
  v123 = 0;
  tinfo_property = 0;
  v129 = 0;
  v130 = 0;
  v125 = -1;
  v127 = 0;
  v10 = sub_D7360(v98.m128i_i64[0], *(_QWORD *)(v98.m128i_i64[0] + 56));
  v126 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  sub_E9680(&v98, v73, 0);
  if ( !si128.m128i_i8[0] )
  {
    copy_tinfo_t();
    DWORD1(v127) = get_tinfo_property();
    tinfo_property = get_tinfo_property();
  }
  v11 = sub_EFB00((__int64)&v98);
  v74 = v11;
  if ( !v11 )
  {
    if ( !under_debugger )
      sub_383060(50102);
    goto LABEL_101;
  }
  v12 = 0;
  v13 = *(_QWORD *)(v11 + 32) == 0;
  v77 = 0;
  v81.m128i_i64[0] = (__int64)&v82;
  v78 = (const __m128i **)&v84;
  if ( !v13 )
  {
    while ( 1 )
    {
      v14 = (unsigned __int8 *)(80 * v12 + *(_QWORD *)(v74 + 24));
      v15 = *v14;
      if ( (unsigned __int8)v15 > 0xFu )
        break;
      v16 = 32802;
      if ( !_bittest64(&v16, v15) )
        break;
      v17 = 80 * v12 + *(_QWORD *)(v74 + 24);
      v82 = 0;
      v83 = 0;
      if ( !(unsigned __int8)sub_1C5030(v17, v81.m128i_i64[0]) )
      {
        if ( !under_debugger )
          sub_383060(51878);
        goto LABEL_101;
      }
      if ( v12 >= *(_QWORD *)(v75 + 32) )
        goto LABEL_11;
      v19 = *(_QWORD *)(v75 + 24) + 80 * v12;
      if ( *(_BYTE *)v19 != 9 )
        goto LABEL_11;
      v58 = *(int **)(v19 + 8);
      v59 = v58[4];
      if ( *(_QWORD *)(*(_QWORD *)v58 + 440LL) < v59 )
      {
        if ( !under_debugger )
          sub_383060(51258);
        goto LABEL_101;
      }
      v80 = *(_QWORD *)(*(_QWORD *)v58 + 432LL);
      LODWORD(v71) = v19 + 56;
      if ( (unsigned int)compare_arglocs()
        || (v60 = v80 + 104 * v59, (*(_BYTE *)(v60 + 25) & 4) != 0)
        || *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8LL) + *(int *)(v19 + 4) > *(int *)(v60 + 88) )
      {
LABEL_11:
        v84 = nullptr;
        v85 = 0;
        v20 = *((_DWORD *)v14 + 1);
        v21 = a1[180];
        v88[0] = 0;
        v88[1] = 0;
        v89 = 0;
        *(_OWORD *)dest = 0;
        sub_1C31B0(v81.m128i_i32[0], (unsigned int)v88, v20, v21, 0, v18);
        if ( v75 )
        {
          v22 = *(_QWORD *)(v75 + 24);
          for ( i = v22 + 80LL * *(_QWORD *)(v75 + 32); i != v22; v22 += 80 )
          {
            if ( *(_BYTE *)v22 == 9
              && (unsigned __int8)sub_FDB60(
                                    v78,
                                    v88,
                                    (__int64)a1,
                                    v81.m128i_i64[0],
                                    v20,
                                    *(_DWORD *)(*(_QWORD *)(v22 + 8) + 16LL)) )
            {
              break;
            }
          }
        }
        v24 = (__int32 *)a1[57];
        for ( j = &v24[a1[58]]; j != v24; ++v24 )
        {
          if ( *(_DWORD *)(a1[54] + 104LL * *v24) == 1
            && (unsigned __int8)sub_FDB60(v78, v88, (__int64)a1, v81.m128i_i64[0], v20, *v24) )
          {
            break;
          }
        }
        if ( v89 )
        {
          dest[0] = nullptr;
          qfree(v89);
        }
        qfree(v88[0]);
        v28 = *((_DWORD *)v14 + 1);
        if ( (_QWORD)v85 == 1 && *v84 == v28 )
        {
          v62 = (int)v84[4];
          v63 = v84[6];
          *v14 = 9;
          v64 = j__qalloc_or_throw(24, (__int64)v88, v26, v27);
          *(_QWORD *)v64 = a1;
          v65 = v84;
          *(_QWORD *)(v64 + 8) = v62;
          *(_DWORD *)(v64 + 16) = v63;
          *((_QWORD *)v14 + 1) = v64;
          if ( v65 )
          {
            *(_QWORD *)&v85 = 0;
            qfree((__int64)v65);
          }
        }
        else
        {
          src = nullptr;
          *(_OWORD *)n = 0;
          v29 = *(_QWORD *)(v73 + 24);
          src = (void *)qvector_reserve((__int64)&src, 0, 1, 1);
          v30 = v81.m128i_i64[0];
          n[0] = 1;
          *(_BYTE *)src = 0;
          LODWORD(v88[0]) = 0;
          copy_argloc();
          v89 = v29;
          v33 = n[0];
          LODWORD(dest[0]) = 1;
          dest[1] = nullptr;
          v91 = 0;
          if ( n[0] )
          {
            dest[1] = (void *)qalloc_or_throw(n[0], v30, v31, v32);
            *((_QWORD *)&v91 + 1) = v33;
            memcpy(dest[1], src, v33);
            *(_QWORD *)&v91 = v33;
          }
          v92 = 0;
          v93 = 0;
          v94 = 0;
          copy_tinfo_t();
          v95 = v28;
          v96 = 0;
          v97 = 0;
          if ( src )
          {
            n[0] = 0;
            qfree((__int64)src);
          }
          if ( *((_QWORD *)v14 + 5) > 1u
            && !(unsigned __int8)sub_213140(a1, *((_QWORD *)v14 + 4), 4)
            && &dest[1] != (void **)(v14 + 32) )
          {
            v57 = *((_QWORD *)v14 + 5);
            if ( v57 > 1 )
            {
              v66 = *((const void **)v14 + 4);
              v67 = dest[1];
              if ( *((_QWORD *)&v91 + 1) < v57 )
              {
                v71 = *((const void **)v14 + 4);
                v67 = (void *)qvector_reserve((__int64)&dest[1], (__int64)dest[1], *((_QWORD *)v14 + 5), 1);
                dest[1] = v67;
                v66 = v71;
              }
              *(_QWORD *)&v91 = v57;
              memmove(v67, v66, v57 - 1);
              *((_BYTE *)dest[1] + v57 - 1) = 0;
            }
            else
            {
              *(_QWORD *)&v91 = 0;
            }
          }
          v39 = sub_1F6560(
                  (_DWORD)a1,
                  (unsigned int)v88,
                  0,
                  v34,
                  v35,
                  v36,
                  (_DWORD)v70,
                  (_DWORD)v71,
                  v72,
                  v73,
                  v74,
                  v75,
                  v76,
                  (_DWORD)v78,
                  v79,
                  (unsigned int)v88,
                  v81.m128i_i32[0],
                  v81.m128i_i32[2],
                  v82,
                  v83,
                  (__int64)v84);
          if ( v39 == -1 )
          {
            if ( !under_debugger )
              sub_383060(52628);
            goto LABEL_101;
          }
          *v14 = 9;
          v40 = j__qalloc_or_throw(24, (__int64)v88, v37, v38);
          *(_QWORD *)v40 = a1;
          *(_QWORD *)(v40 + 8) = 0;
          *(_DWORD *)(v40 + 16) = v39;
          *((_QWORD *)v14 + 1) = v40;
          v41 = v85;
          v42 = *(_QWORD *)(v73 + 24);
          v43 = *(_QWORD *)(v72 + 16);
          while ( v41 )
          {
            --v41;
            v43 = sub_D1D10(
                    v79,
                    v43,
                    v42,
                    (unsigned int)v84[8 * v41 + 6],
                    v39,
                    v84[8 * v41 + 4],
                    v84[8 * v41 + 5],
                    v84[8 * v41]);
          }
          clear_tinfo_t();
          if ( v92 )
          {
            *(_QWORD *)&v93 = 0;
            qfree(v92);
          }
          if ( dest[1] )
          {
            *(_QWORD *)&v91 = 0;
            qfree((__int64)dest[1]);
          }
          cleanup_argloc();
          if ( v84 )
          {
            *(_QWORD *)&v85 = 0;
            qfree((__int64)v84);
          }
        }
      }
      else
      {
        sub_125180(v14);
        *((_QWORD *)v14 + 2) = *(_QWORD *)(v19 + 16);
        copy_tinfo_t();
        if ( v14 + 32 != (unsigned __int8 *)(v19 + 32) )
        {
          v61 = *(_QWORD *)(v19 + 40);
          if ( v61 > 1 )
          {
            v68 = *((void **)v14 + 4);
            v70 = *(void **)(v19 + 32);
            if ( *((_QWORD *)v14 + 6) < v61 )
            {
              v69 = qvector_reserve((__int64)(v14 + 32), (__int64)v68, v61, 1);
              *((_QWORD *)v14 + 4) = v69;
              v68 = (void *)v69;
            }
            *((_QWORD *)v14 + 5) = v61;
            memmove(v68, v70, v61 - 1);
            *(_BYTE *)(*((_QWORD *)v14 + 4) + v61 - 1) = 0;
          }
          else
          {
            *((_QWORD *)v14 + 5) = 0;
          }
        }
        copy_argloc();
        *((_DWORD *)v14 + 18) = *(_DWORD *)(v19 + 72);
      }
      cleanup_argloc();
      v12 = ++v77;
      if ( (unsigned __int64)v77 >= *(_QWORD *)(v74 + 32) )
        goto LABEL_43;
    }
    if ( !under_debugger )
      sub_383060(50103);
LABEL_101:
    BUG();
  }
LABEL_43:
  *(_DWORD *)(v74 + 280) |= 1u;
  sub_648D0((__int64 *)(v74 + 240), (__int64 *)(v74 + 96));
  v46 = nullptr;
  v47 = *(_QWORD *)(v74 + 120);
  if ( v47 )
  {
    v46 = (void *)qalloc_or_throw(16 * v47, v74 + 96, v44, v45);
    memcpy(v46, *(const void **)(v74 + 112), 16 * v47);
  }
  v48 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
  v49 = *(_QWORD *)(v74 + 256);
  if ( v49 )
  {
    *(_QWORD *)(v74 + 264) = 0;
    v81 = v48;
    qfree(v49);
    v48 = _mm_load_si128(&v81);
  }
  *(_QWORD *)(v74 + 256) = v46;
  *(__m128i *)(v74 + 264) = v48;
  clear_tinfo_t();
  if ( v120 )
  {
    *(_QWORD *)&v121 = 0;
    qfree(v120);
  }
  qfree(v118);
  qfree(v116);
  if ( v113 )
  {
    v114 = 0;
    qfree(v113);
  }
  if ( v111 )
  {
    v112 = 0;
    qfree(v111);
  }
  if ( v109 )
  {
    v110 = 0;
    qfree(v109);
  }
  if ( v107 )
  {
    v108 = 0;
    qfree(v107);
  }
  qfree(v104);
  v50 = v102;
  if ( v102 )
  {
    v51 = v103;
    if ( (_QWORD)v103 )
    {
      v52 = 0;
      do
      {
        v53 = (__int64 *)(v50 + 48 * v52);
        v54 = v53[3];
        if ( v54 )
        {
          v53[4] = 0;
          qfree(v54);
        }
        v55 = *v53;
        if ( *v53 )
        {
          v53[1] = 0;
          qfree(v55);
        }
        v50 = v102;
        ++v52;
      }
      while ( v51 != v52 );
    }
    *(_QWORD *)&v103 = 0;
    qfree(v50);
  }
  if ( v100 )
  {
    *(_QWORD *)&v101 = 0;
    qfree(v100);
  }
  return v74;
}

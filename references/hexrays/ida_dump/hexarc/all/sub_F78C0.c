__int64 __fastcall sub_F78C0(_QWORD *a1, __int64 a2, int a3, __int64 a4, _QWORD *a5)
{
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int64 v9; // rax
  __m128i v10; // xmm2
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r15
  bool v15; // zf
  unsigned __int8 *v16; // r12
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  int v20; // r9d
  __int64 v21; // r13
  unsigned int v22; // r13d
  __int64 v23; // rcx
  __int64 v24; // r14
  __int64 i; // r15
  __int32 *v26; // r14
  __int32 *j; // r15
  int v28; // r13d
  __int64 v29; // r15
  __int64 v30; // rsi
  size_t v31; // r15
  int v32; // ecx
  int v33; // r8d
  int v34; // r9d
  int v35; // r13d
  __int64 v36; // rax
  __int64 v37; // r14
  __int64 v38; // r12
  _QWORD *v39; // rsi
  void *v40; // r15
  unsigned __int64 v41; // rbx
  __m128i v42; // xmm0
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // r12
  __int64 v46; // r15
  __int64 *v47; // rbx
  __int64 v48; // rdi
  __int64 v49; // rdi
  unsigned __int64 v51; // r13
  int *v52; // rdx
  unsigned __int64 v53; // r15
  size_t v54; // rax
  unsigned __int64 v55; // r15
  __int64 v56; // r13
  int v57; // r15d
  __int64 v58; // rax
  _DWORD *v59; // rdi
  const void *v60; // r8
  void *v61; // rax
  int tinfo_property; // eax
  __int64 v63; // rdi
  void *v64; // rdi
  __int64 v65; // rax
  void *v66; // [rsp+0h] [rbp-2D0h]
  const void *v67; // [rsp+8h] [rbp-2C8h]
  __int64 v68; // [rsp+10h] [rbp-2C0h]
  __int64 v69; // [rsp+18h] [rbp-2B8h]
  __int64 v70; // [rsp+20h] [rbp-2B0h]
  __int64 v71; // [rsp+28h] [rbp-2A8h]
  int v72; // [rsp+30h] [rbp-2A0h]
  int v73; // [rsp+34h] [rbp-29Ch]
  unsigned __int64 *v74; // [rsp+38h] [rbp-298h]
  __int64 v75; // [rsp+40h] [rbp-290h]
  size_t v76; // [rsp+48h] [rbp-288h]
  size_t v77; // [rsp+48h] [rbp-288h]
  __m128i v78; // [rsp+50h] [rbp-280h] BYREF
  __int64 v79; // [rsp+60h] [rbp-270h] BYREF
  __int64 v80; // [rsp+68h] [rbp-268h]
  _DWORD *v81; // [rsp+70h] [rbp-260h] BYREF
  __int128 v82; // [rsp+78h] [rbp-258h]
  void *src; // [rsp+90h] [rbp-240h] BYREF
  size_t n[3]; // [rsp+98h] [rbp-238h]
  __int64 v85[2]; // [rsp+B0h] [rbp-220h] BYREF
  __int64 v86; // [rsp+C0h] [rbp-210h]
  void *dest[2]; // [rsp+C8h] [rbp-208h] BYREF
  __int128 v88; // [rsp+D8h] [rbp-1F8h]
  __int64 v89; // [rsp+E8h] [rbp-1E8h]
  __int128 v90; // [rsp+F0h] [rbp-1E0h]
  __int64 v91; // [rsp+100h] [rbp-1D0h] BYREF
  int v92; // [rsp+108h] [rbp-1C8h]
  int v93; // [rsp+10Ch] [rbp-1C4h]
  __int64 v94; // [rsp+110h] [rbp-1C0h]
  __m128i v95; // [rsp+120h] [rbp-1B0h] BYREF
  __int64 v96; // [rsp+130h] [rbp-1A0h]
  __int64 v97; // [rsp+138h] [rbp-198h]
  __int128 v98; // [rsp+140h] [rbp-190h]
  __int64 v99; // [rsp+150h] [rbp-180h]
  __int128 v100; // [rsp+158h] [rbp-178h]
  __int64 v101; // [rsp+168h] [rbp-168h]
  __int64 v102; // [rsp+170h] [rbp-160h]
  char v103[8]; // [rsp+178h] [rbp-158h] BYREF
  __int64 v104; // [rsp+180h] [rbp-150h]
  __int64 v105; // [rsp+188h] [rbp-148h]
  __int64 v106; // [rsp+198h] [rbp-138h]
  __int64 v107; // [rsp+1A0h] [rbp-130h]
  __int64 v108; // [rsp+1D0h] [rbp-100h]
  __int64 v109; // [rsp+1D8h] [rbp-F8h]
  __int64 v110; // [rsp+1E8h] [rbp-E8h]
  __int64 v111; // [rsp+1F0h] [rbp-E0h]
  __int64 v112; // [rsp+200h] [rbp-D0h]
  __int64 v113; // [rsp+208h] [rbp-C8h]
  __int64 v114; // [rsp+210h] [rbp-C0h]
  __int64 v115; // [rsp+218h] [rbp-B8h]
  __int64 v116; // [rsp+220h] [rbp-B0h]
  __int64 v117; // [rsp+228h] [rbp-A8h]
  __int128 v118; // [rsp+230h] [rbp-A0h]
  int v119; // [rsp+240h] [rbp-90h]
  __int16 v120; // [rsp+244h] [rbp-8Ch]
  _OWORD v121[2]; // [rsp+248h] [rbp-88h] BYREF
  __m128i v122; // [rsp+268h] [rbp-68h]
  __int128 v123; // [rsp+278h] [rbp-58h]
  int v124; // [rsp+288h] [rbp-48h]
  __int16 v125; // [rsp+28Ch] [rbp-44h]
  char v126; // [rsp+28Eh] [rbp-42h]
  unsigned __int64 v127; // [rsp+298h] [rbp-38h]

  v75 = a2;
  LODWORD(v68) = a3;
  v69 = a4;
  v127 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a4 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_37B760(50101);
    goto LABEL_101;
  }
  v97 = 0;
  v99 = 0;
  v7 = *(_QWORD *)(a4 + 72);
  *(_DWORD *)(a2 + 24) |= 8u;
  v8 = *(_QWORD *)(a2 + 480);
  v71 = v7;
  v9 = *(_QWORD *)(v75 + 64);
  v101 = 0;
  v102 = 0;
  v10 = (__m128i)v9;
  v11 = *(_QWORD *)(v9 + 1496);
  v95 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v75, v10);
  v96 = v11;
  v98 = 0;
  v100 = 0;
  sub_CA9F0((__int64)v103, v8, 0);
  v118 = 0;
  v121[0] = _mm_load_si128((const __m128i *)&xmmword_3FA120);
  v122 = 0;
  v112 = v75;
  v113 = 0;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  v117 = 0;
  v119 = -1;
  v120 = 0;
  v124 = 0;
  v125 = 0;
  v126 = 0;
  v121[1] = -1;
  v123 = 0;
  v12 = sub_D0CA0(v95.m128i_i64[0], *(_QWORD *)(v95.m128i_i64[0] + 56));
  v122 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v12, (__m128i)(unsigned __int64)v12);
  sub_E2FC0(&v95, v69, 0);
  if ( !LOBYTE(v121[0]) )
  {
    copy_tinfo_t(v121, a5);
    tinfo_property = get_tinfo_property(*a5, 23);
    v63 = *a5;
    DWORD1(v123) = tinfo_property;
    v124 = get_tinfo_property(v63, 20);
  }
  v13 = sub_E9440((__int64)&v95);
  v70 = v13;
  if ( !v13 )
  {
    if ( !under_debugger )
      sub_37B760(50102);
    goto LABEL_101;
  }
  v14 = 0;
  v15 = *(_QWORD *)(v13 + 32) == 0;
  v73 = 0;
  v78.m128i_i64[0] = (__int64)&v79;
  v74 = (unsigned __int64 *)&v81;
  if ( !v15 )
  {
    while ( 1 )
    {
      v16 = (unsigned __int8 *)(80 * v14 + *(_QWORD *)(v70 + 24));
      v17 = *v16;
      if ( (unsigned __int8)v17 > 0xFu )
        break;
      v18 = 32802;
      if ( !_bittest64(&v18, v17) )
        break;
      v19 = 80 * v14 + *(_QWORD *)(v70 + 24);
      v79 = 0;
      v80 = 0;
      if ( !(unsigned __int8)sub_1BE7B0(v19, v78.m128i_i64[0]) )
      {
        if ( !under_debugger )
          sub_37B760(51878);
        goto LABEL_101;
      }
      if ( v14 >= *(_QWORD *)(v71 + 32) )
        goto LABEL_11;
      v21 = *(_QWORD *)(v71 + 24) + 80 * v14;
      if ( *(_BYTE *)v21 != 9 )
        goto LABEL_11;
      v52 = *(int **)(v21 + 8);
      v53 = v52[4];
      if ( *(_QWORD *)(*(_QWORD *)v52 + 440LL) < v53 )
      {
        if ( !under_debugger )
          sub_37B760(51258);
        goto LABEL_101;
      }
      v77 = *(_QWORD *)(*(_QWORD *)v52 + 432LL);
      v67 = (const void *)(v21 + 56);
      if ( (unsigned int)compare_arglocs(v21 + 56, v16 + 56)
        || (v54 = v77 + 104 * v53, (*(_BYTE *)(v54 + 25) & 4) != 0)
        || *(_QWORD *)(*(_QWORD *)(v21 + 8) + 8LL) + *(int *)(v21 + 4) > *(int *)(v54 + 88) )
      {
LABEL_11:
        v81 = nullptr;
        v82 = 0;
        v22 = *((_DWORD *)v16 + 1);
        v23 = a1[180];
        v85[0] = 0;
        v85[1] = 0;
        v86 = 0;
        *(_OWORD *)dest = 0;
        sub_1BC930(v78.m128i_i32[0], (unsigned int)v85, v22, v23, 0, v20);
        if ( v71 )
        {
          v24 = *(_QWORD *)(v71 + 24);
          for ( i = v24 + 80LL * *(_QWORD *)(v71 + 32); i != v24; v24 += 80 )
          {
            if ( *(_BYTE *)v24 == 9
              && (unsigned __int8)sub_F74A0(
                                    v74,
                                    v85,
                                    (__int64)a1,
                                    v78.m128i_i64[0],
                                    v22,
                                    *(_DWORD *)(*(_QWORD *)(v24 + 8) + 16LL)) )
            {
              break;
            }
          }
        }
        v26 = (__int32 *)a1[57];
        for ( j = &v26[a1[58]]; j != v26; ++v26 )
        {
          if ( *(_DWORD *)(a1[54] + 104LL * *v26) == 1
            && (unsigned __int8)sub_F74A0(v74, v85, (__int64)a1, v78.m128i_i64[0], v22, *v26) )
          {
            break;
          }
        }
        if ( v86 )
        {
          dest[0] = nullptr;
          qfree(v86);
        }
        qfree(v85[0]);
        v28 = *((_DWORD *)v16 + 1);
        if ( (_QWORD)v82 == 1 && *v81 == v28 )
        {
          v56 = (int)v81[4];
          v57 = v81[6];
          *v16 = 9;
          v58 = j__qalloc_or_throw(24);
          *(_QWORD *)v58 = a1;
          v59 = v81;
          *(_QWORD *)(v58 + 8) = v56;
          *(_DWORD *)(v58 + 16) = v57;
          *((_QWORD *)v16 + 1) = v58;
          if ( v59 )
          {
            *(_QWORD *)&v82 = 0;
            qfree(v59);
          }
        }
        else
        {
          src = nullptr;
          *(_OWORD *)n = 0;
          v29 = *(_QWORD *)(v69 + 24);
          src = (void *)qvector_reserve(&src, 0, 1, 1);
          v30 = v78.m128i_i64[0];
          n[0] = 1;
          *(_BYTE *)src = 0;
          LODWORD(v85[0]) = 0;
          copy_argloc(v85, v30);
          v86 = v29;
          v31 = n[0];
          LODWORD(dest[0]) = 1;
          dest[1] = nullptr;
          v88 = 0;
          if ( n[0] )
          {
            dest[1] = (void *)qalloc_or_throw(n[0]);
            *((_QWORD *)&v88 + 1) = v31;
            memcpy(dest[1], src, v31);
            *(_QWORD *)&v88 = v31;
          }
          v89 = 0;
          v90 = 0;
          v91 = 0;
          copy_tinfo_t(&v91, v16 + 24);
          v92 = v28;
          v93 = 0;
          v94 = 0;
          if ( src )
          {
            n[0] = 0;
            qfree(src);
          }
          if ( *((_QWORD *)v16 + 5) > 1u
            && !(unsigned __int8)sub_20BDC0(a1, *((_QWORD *)v16 + 4), 4)
            && &dest[1] != (void **)(v16 + 32) )
          {
            v51 = *((_QWORD *)v16 + 5);
            if ( v51 > 1 )
            {
              v60 = *((const void **)v16 + 4);
              v61 = dest[1];
              if ( *((_QWORD *)&v88 + 1) < v51 )
              {
                v67 = *((const void **)v16 + 4);
                v61 = (void *)qvector_reserve(&dest[1], dest[1], *((_QWORD *)v16 + 5), 1);
                dest[1] = v61;
                v60 = v67;
              }
              *(_QWORD *)&v88 = v51;
              memmove(v61, v60, v51 - 1);
              *((_BYTE *)dest[1] + v51 - 1) = 0;
            }
            else
            {
              *(_QWORD *)&v88 = 0;
            }
          }
          v35 = sub_1EF1E0(
                  (_DWORD)a1,
                  (unsigned int)v85,
                  0,
                  v32,
                  v33,
                  v34,
                  (_DWORD)v66,
                  (_DWORD)v67,
                  v68,
                  v69,
                  v70,
                  v71,
                  v72,
                  (_DWORD)v74,
                  v75,
                  (unsigned int)v85,
                  v78.m128i_i32[0],
                  v78.m128i_i32[2],
                  v79,
                  v80,
                  (__int64)v81);
          if ( v35 == -1 )
          {
            if ( !under_debugger )
              sub_37B760(52628);
            goto LABEL_101;
          }
          *v16 = 9;
          v36 = j__qalloc_or_throw(24);
          *(_QWORD *)v36 = a1;
          *(_QWORD *)(v36 + 8) = 0;
          *(_DWORD *)(v36 + 16) = v35;
          *((_QWORD *)v16 + 1) = v36;
          v37 = v82;
          v38 = *(_QWORD *)(v69 + 24);
          v39 = *(_QWORD **)(v68 + 16);
          while ( v37 )
          {
            --v37;
            v39 = (_QWORD *)sub_CB650(
                              v75,
                              v39,
                              v38,
                              v81[8 * v37 + 6],
                              v35,
                              v81[8 * v37 + 4],
                              v81[8 * v37 + 5],
                              v81[8 * v37]);
          }
          clear_tinfo_t(&v91);
          if ( v89 )
          {
            *(_QWORD *)&v90 = 0;
            qfree(v89);
          }
          if ( dest[1] )
          {
            *(_QWORD *)&v88 = 0;
            qfree(dest[1]);
          }
          cleanup_argloc(v76);
          if ( v81 )
          {
            *(_QWORD *)&v82 = 0;
            qfree(v81);
          }
        }
      }
      else
      {
        sub_11EAC0(v16);
        *((_QWORD *)v16 + 2) = *(_QWORD *)(v21 + 16);
        copy_tinfo_t(v16 + 24, v21 + 24);
        if ( v16 + 32 != (unsigned __int8 *)(v21 + 32) )
        {
          v55 = *(_QWORD *)(v21 + 40);
          if ( v55 > 1 )
          {
            v64 = *((void **)v16 + 4);
            v66 = *(void **)(v21 + 32);
            if ( *((_QWORD *)v16 + 6) < v55 )
            {
              v65 = qvector_reserve(v16 + 32, v64, v55, 1);
              *((_QWORD *)v16 + 4) = v65;
              v64 = (void *)v65;
            }
            *((_QWORD *)v16 + 5) = v55;
            memmove(v64, v66, v55 - 1);
            *(_BYTE *)(*((_QWORD *)v16 + 4) + v55 - 1) = 0;
          }
          else
          {
            *((_QWORD *)v16 + 5) = 0;
          }
        }
        copy_argloc(v16 + 56, v67);
        *((_DWORD *)v16 + 18) = *(_DWORD *)(v21 + 72);
      }
      cleanup_argloc(v78.m128i_i64[0]);
      v14 = ++v73;
      if ( (unsigned __int64)v73 >= *(_QWORD *)(v70 + 32) )
        goto LABEL_43;
    }
    if ( !under_debugger )
      sub_37B760(50103);
LABEL_101:
    BUG();
  }
LABEL_43:
  *(_DWORD *)(v70 + 280) |= 1u;
  sub_5E350((__int64 *)(v70 + 240), (__int64 *)(v70 + 96));
  v40 = nullptr;
  v41 = *(_QWORD *)(v70 + 120);
  if ( v41 )
  {
    v40 = (void *)qalloc_or_throw(16 * v41);
    memcpy(v40, *(const void **)(v70 + 112), 16 * v41);
  }
  v42 = _mm_unpacklo_epi64((__m128i)v41, (__m128i)v41);
  v43 = *(_QWORD *)(v70 + 256);
  if ( v43 )
  {
    *(_QWORD *)(v70 + 264) = 0;
    v78 = v42;
    qfree(v43);
    v42 = _mm_load_si128(&v78);
  }
  *(_QWORD *)(v70 + 256) = v40;
  *(__m128i *)(v70 + 264) = v42;
  clear_tinfo_t(v121);
  if ( v117 )
  {
    *(_QWORD *)&v118 = 0;
    qfree(v117);
  }
  qfree(v115);
  qfree(v113);
  if ( v110 )
  {
    v111 = 0;
    qfree(v110);
  }
  if ( v108 )
  {
    v109 = 0;
    qfree(v108);
  }
  if ( v106 )
  {
    v107 = 0;
    qfree(v106);
  }
  if ( v104 )
  {
    v105 = 0;
    qfree(v104);
  }
  qfree(v101);
  v44 = v99;
  if ( v99 )
  {
    v45 = v100;
    if ( (_QWORD)v100 )
    {
      v46 = 0;
      do
      {
        v47 = (__int64 *)(v44 + 48 * v46);
        v48 = v47[3];
        if ( v48 )
        {
          v47[4] = 0;
          qfree(v48);
        }
        v49 = *v47;
        if ( *v47 )
        {
          v47[1] = 0;
          qfree(v49);
        }
        v44 = v99;
        ++v46;
      }
      while ( v45 != v46 );
    }
    *(_QWORD *)&v100 = 0;
    qfree(v44);
  }
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    qfree(v97);
  }
  return v70;
}

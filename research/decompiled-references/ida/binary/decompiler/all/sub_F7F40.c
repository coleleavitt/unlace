__int64 __fastcall sub_F7F40(_QWORD *a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rax
  unsigned __int64 v13; // r15
  bool v14; // zf
  unsigned __int8 *v15; // r12
  unsigned __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  int v19; // r9d
  __int64 v20; // r13
  unsigned int v21; // r13d
  __int64 v22; // rcx
  __int64 v23; // r14
  __int64 i; // r15
  __int32 *v25; // r14
  __int32 *j; // r15
  int v27; // r13d
  __int64 v28; // r15
  size_t v29; // r15
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  int v33; // r13d
  __int64 v34; // rax
  __int64 v35; // r14
  __int64 v36; // r12
  _QWORD *v37; // rsi
  void *v38; // r15
  unsigned __int64 v39; // rbx
  __m128i v40; // xmm0
  __int64 v41; // rdi
  __int64 v42; // r12
  __int64 v43; // r15
  _QWORD *v44; // rbx
  unsigned __int64 v46; // r13
  int *v47; // rdx
  unsigned __int64 v48; // r15
  size_t v49; // rax
  unsigned __int64 v50; // r15
  __int64 v51; // r13
  int v52; // r15d
  __int64 v53; // rax
  _DWORD *v54; // rdi
  const void *v55; // r8
  void *v56; // rax
  void *v57; // rdi
  __int64 v58; // rax
  int v59; // [rsp+0h] [rbp-2E0h]
  void *v60; // [rsp+8h] [rbp-2D8h]
  __m128i *v61; // [rsp+10h] [rbp-2D0h]
  const void *v62; // [rsp+18h] [rbp-2C8h]
  __int64 v63; // [rsp+20h] [rbp-2C0h]
  __int64 v64; // [rsp+28h] [rbp-2B8h]
  __int64 v65; // [rsp+30h] [rbp-2B0h]
  __int64 v66; // [rsp+38h] [rbp-2A8h]
  int v67; // [rsp+40h] [rbp-2A0h]
  int v68; // [rsp+44h] [rbp-29Ch]
  unsigned __int64 *v69; // [rsp+48h] [rbp-298h]
  __int64 v70; // [rsp+50h] [rbp-290h]
  size_t v71; // [rsp+58h] [rbp-288h]
  __m128i v72; // [rsp+60h] [rbp-280h] BYREF
  __int64 v73[2]; // [rsp+70h] [rbp-270h] BYREF
  _DWORD *v74; // [rsp+80h] [rbp-260h] BYREF
  __int128 v75; // [rsp+88h] [rbp-258h]
  void *src; // [rsp+A0h] [rbp-240h]
  size_t n[3]; // [rsp+A8h] [rbp-238h]
  __int64 v78[2]; // [rsp+C0h] [rbp-220h] BYREF
  __int64 v79; // [rsp+D0h] [rbp-210h]
  void *dest[2]; // [rsp+D8h] [rbp-208h] BYREF
  __int128 v81; // [rsp+E8h] [rbp-1F8h]
  __int64 v82; // [rsp+F8h] [rbp-1E8h]
  __int128 v83; // [rsp+100h] [rbp-1E0h]
  __int64 v84; // [rsp+110h] [rbp-1D0h]
  int v85; // [rsp+118h] [rbp-1C8h]
  int v86; // [rsp+11Ch] [rbp-1C4h]
  __int64 v87; // [rsp+120h] [rbp-1C0h]
  __m128i v88; // [rsp+130h] [rbp-1B0h] BYREF
  __int64 v89; // [rsp+140h] [rbp-1A0h]
  __int64 v90; // [rsp+148h] [rbp-198h]
  __int128 v91; // [rsp+150h] [rbp-190h]
  __int64 v92; // [rsp+160h] [rbp-180h]
  __int128 v93; // [rsp+168h] [rbp-178h]
  __int64 v94; // [rsp+178h] [rbp-168h]
  __int64 v95; // [rsp+180h] [rbp-160h]
  __int64 v96; // [rsp+188h] [rbp-158h]
  __int64 v97; // [rsp+190h] [rbp-150h]
  __int128 v98; // [rsp+198h] [rbp-148h]
  __int64 v99; // [rsp+1A8h] [rbp-138h]
  __int128 v100; // [rsp+1B0h] [rbp-130h]
  __int128 v101; // [rsp+1C0h] [rbp-120h]
  __int64 v102; // [rsp+1D0h] [rbp-110h]
  __int64 v103; // [rsp+1D8h] [rbp-108h]
  __int64 v104; // [rsp+1E0h] [rbp-100h]
  __int128 v105; // [rsp+1E8h] [rbp-F8h]
  __int64 v106; // [rsp+1F8h] [rbp-E8h]
  __int128 v107; // [rsp+200h] [rbp-E0h]
  unsigned __int64 v108; // [rsp+210h] [rbp-D0h]
  __int64 v109; // [rsp+218h] [rbp-C8h]
  __int64 v110; // [rsp+220h] [rbp-C0h]
  __int64 v111; // [rsp+228h] [rbp-B8h]
  __int64 v112; // [rsp+230h] [rbp-B0h]
  __int64 v113; // [rsp+238h] [rbp-A8h]
  __int128 v114; // [rsp+240h] [rbp-A0h]
  int v115; // [rsp+250h] [rbp-90h]
  __int16 v116; // [rsp+254h] [rbp-8Ch]
  __m128i si128; // [rsp+258h] [rbp-88h]
  __int128 v118; // [rsp+268h] [rbp-78h]
  __m128i v119; // [rsp+278h] [rbp-68h]
  __int128 v120; // [rsp+288h] [rbp-58h]
  int tinfo_property; // [rsp+298h] [rbp-48h]
  __int16 v122; // [rsp+29Ch] [rbp-44h]
  char v123; // [rsp+29Eh] [rbp-42h]
  unsigned __int64 v124; // [rsp+2A8h] [rbp-38h]

  LODWORD(v70) = a2;
  LODWORD(v63) = a3;
  v64 = a4;
  v124 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a4 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_37EA20(50101);
    goto LABEL_105;
  }
  v90 = 0;
  v5 = *(_QWORD *)(a2 + 64);
  v108 = a2;
  v6 = *(_QWORD *)(a4 + 72);
  *(_DWORD *)(a2 + 24) |= 8u;
  v92 = 0;
  v66 = v6;
  v7 = *(_QWORD *)(v5 + 1496);
  v88 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)v5);
  v89 = v7;
  v8 = *(_QWORD *)(a2 + 480);
  v94 = 0;
  v95 = 0;
  v96 = 0;
  v97 = 0;
  v99 = 0;
  v102 = 0;
  v103 = v8;
  v104 = 0;
  v106 = 0;
  v109 = 0;
  v110 = 0;
  v91 = 0;
  v93 = 0;
  v98 = 0;
  v100 = 0;
  v101 = 0;
  v105 = 0;
  v107 = 0;
  v111 = 0;
  v116 = 0;
  v9 = *(_QWORD *)(a2 + 56);
  si128 = _mm_load_si128((const __m128i *)&xmmword_425BA0);
  v112 = 0;
  v113 = 0;
  v115 = -1;
  tinfo_property = 0;
  v122 = 0;
  v123 = 0;
  v114 = 0;
  v118 = -1;
  v119 = 0;
  v120 = 0;
  v10 = sub_1CD070(v5, *(_QWORD *)(v9 + 24));
  v11 = *(_DWORD *)(v9 + 4);
  if ( (v11 & 0x20) != 0 )
    v10 += *(int *)(*(_QWORD *)(v5 + 1504) + 80LL);
  if ( (v11 & 0x40) != 0 )
    v10 += *(int *)(*(_QWORD *)(a2 + 64) + 116LL);
  v61 = &v88;
  v119 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  sub_F55C0(&v88, v64, 0);
  if ( !si128.m128i_i8[0] )
  {
    copy_tinfo_t();
    DWORD1(v120) = get_tinfo_property();
    tinfo_property = get_tinfo_property();
  }
  v12 = sub_F0440((__int64)&v88);
  v65 = v12;
  if ( !v12 )
  {
    if ( !under_debugger )
      sub_37EA20(50102);
    goto LABEL_105;
  }
  v13 = 0;
  v14 = *(_QWORD *)(v12 + 32) == 0;
  v68 = 0;
  v72.m128i_i64[0] = (__int64)v73;
  v69 = (unsigned __int64 *)&v74;
  if ( !v14 )
  {
    while ( 1 )
    {
      v15 = (unsigned __int8 *)(80 * v13 + *(_QWORD *)(v65 + 24));
      v16 = *v15;
      if ( (unsigned __int8)v16 > 0xFu )
        break;
      v17 = 32802;
      if ( !_bittest64(&v17, v16) )
        break;
      v18 = 80 * v13 + *(_QWORD *)(v65 + 24);
      v73[0] = 0;
      v73[1] = 0;
      if ( !(unsigned __int8)sub_1C2590(v18, v72.m128i_i64[0]) )
      {
        if ( !under_debugger )
          sub_37EA20(51878);
        goto LABEL_105;
      }
      if ( v13 >= *(_QWORD *)(v66 + 32) )
        goto LABEL_15;
      v20 = *(_QWORD *)(v66 + 24) + 80 * v13;
      if ( *(_BYTE *)v20 != 9 )
        goto LABEL_15;
      v47 = *(int **)(v20 + 8);
      v48 = v47[4];
      if ( *(_QWORD *)(*(_QWORD *)v47 + 440LL) < v48 )
      {
        if ( !under_debugger )
          sub_37EA20(51258);
        goto LABEL_105;
      }
      v71 = *(_QWORD *)(*(_QWORD *)v47 + 432LL);
      LODWORD(v62) = v20 + 56;
      if ( (unsigned int)compare_arglocs()
        || (v49 = v71 + 104 * v48, (*(_BYTE *)(v49 + 25) & 4) != 0)
        || *(_QWORD *)(*(_QWORD *)(v20 + 8) + 8LL) + *(int *)(v20 + 4) > *(int *)(v49 + 88) )
      {
LABEL_15:
        v74 = 0;
        v75 = 0;
        v21 = *((_DWORD *)v15 + 1);
        v22 = a1[180];
        v78[0] = 0;
        v78[1] = 0;
        v79 = 0;
        *(_OWORD *)dest = 0;
        sub_1C07A0(v72.m128i_i32[0], (unsigned int)v78, v21, v22, 0, v19);
        if ( v66 )
        {
          v23 = *(_QWORD *)(v66 + 24);
          for ( i = v23 + 80LL * *(_QWORD *)(v66 + 32); i != v23; v23 += 80 )
          {
            if ( *(_BYTE *)v23 == 9
              && (unsigned __int8)sub_D4FE0(
                                    v69,
                                    v78,
                                    (__int64)a1,
                                    v72.m128i_i64[0],
                                    v21,
                                    *(_DWORD *)(*(_QWORD *)(v23 + 8) + 16LL)) )
            {
              break;
            }
          }
        }
        v25 = (__int32 *)a1[57];
        for ( j = &v25[a1[58]]; j != v25; ++v25 )
        {
          if ( *(_DWORD *)(a1[54] + 104LL * *v25) == 1
            && (unsigned __int8)sub_D4FE0(v69, v78, (__int64)a1, v72.m128i_i64[0], v21, *v25) )
          {
            break;
          }
        }
        if ( v79 )
        {
          dest[0] = 0;
          qfree();
        }
        qfree();
        v27 = *((_DWORD *)v15 + 1);
        if ( (_QWORD)v75 == 1 && *v74 == v27 )
        {
          v51 = (int)v74[4];
          v52 = v74[6];
          *v15 = 9;
          v53 = j__qalloc_or_throw();
          *(_QWORD *)v53 = a1;
          v54 = v74;
          *(_QWORD *)(v53 + 8) = v51;
          *(_DWORD *)(v53 + 16) = v52;
          *((_QWORD *)v15 + 1) = v53;
          if ( v54 )
          {
            *(_QWORD *)&v75 = 0;
            qfree();
          }
        }
        else
        {
          src = 0;
          *(_OWORD *)n = 0;
          v28 = *(_QWORD *)(v64 + 24);
          src = (void *)qvector_reserve();
          n[0] = 1;
          *(_BYTE *)src = 0;
          LODWORD(v78[0]) = 0;
          copy_argloc();
          v79 = v28;
          v29 = n[0];
          LODWORD(dest[0]) = 1;
          dest[1] = 0;
          v81 = 0;
          if ( n[0] )
          {
            dest[1] = (void *)qalloc_or_throw();
            *((_QWORD *)&v81 + 1) = v29;
            memcpy(dest[1], src, v29);
            *(_QWORD *)&v81 = v29;
          }
          v82 = 0;
          v83 = 0;
          v84 = 0;
          copy_tinfo_t();
          v85 = v27;
          v86 = 0;
          v87 = 0;
          if ( src )
          {
            n[0] = 0;
            qfree();
          }
          if ( *((_QWORD *)v15 + 5) > 1u
            && !(unsigned __int8)sub_20FCB0(a1, *((_QWORD *)v15 + 4), 4)
            && &dest[1] != (void **)(v15 + 32) )
          {
            v46 = *((_QWORD *)v15 + 5);
            if ( v46 > 1 )
            {
              v55 = (const void *)*((_QWORD *)v15 + 4);
              v56 = dest[1];
              if ( *((_QWORD *)&v81 + 1) < v46 )
              {
                v62 = (const void *)*((_QWORD *)v15 + 4);
                v56 = (void *)qvector_reserve();
                dest[1] = v56;
                v55 = v62;
              }
              *(_QWORD *)&v81 = v46;
              memmove(v56, v55, v46 - 1);
              *((_BYTE *)dest[1] + v46 - 1) = 0;
            }
            else
            {
              *(_QWORD *)&v81 = 0;
            }
          }
          v33 = sub_1F38A0(
                  (_DWORD)a1,
                  (unsigned int)v78,
                  0,
                  v30,
                  v31,
                  v32,
                  v59,
                  (_DWORD)v60,
                  (_DWORD)v61,
                  (_DWORD)v62,
                  v63,
                  v64,
                  v65,
                  v66,
                  v67,
                  (_DWORD)v69,
                  v70,
                  (unsigned int)v78,
                  v72.m128i_i32[0],
                  v72.m128i_i32[2],
                  v73[0]);
          if ( v33 == -1 )
          {
            if ( !under_debugger )
              sub_37EA20(52628);
            goto LABEL_105;
          }
          *v15 = 9;
          v34 = j__qalloc_or_throw();
          *(_QWORD *)v34 = a1;
          *(_QWORD *)(v34 + 8) = 0;
          *(_DWORD *)(v34 + 16) = v33;
          *((_QWORD *)v15 + 1) = v34;
          v35 = v75;
          v36 = *(_QWORD *)(v64 + 24);
          v37 = *(_QWORD **)(v63 + 16);
          while ( v35 )
          {
            --v35;
            v37 = (_QWORD *)sub_D71D0(
                              v70,
                              v37,
                              v36,
                              v74[8 * v35 + 6],
                              v33,
                              v74[8 * v35 + 4],
                              v74[8 * v35 + 5],
                              v74[8 * v35]);
          }
          clear_tinfo_t();
          if ( v82 )
          {
            *(_QWORD *)&v83 = 0;
            qfree();
          }
          if ( dest[1] )
          {
            *(_QWORD *)&v81 = 0;
            qfree();
          }
          cleanup_argloc();
          if ( v74 )
          {
            *(_QWORD *)&v75 = 0;
            qfree();
          }
        }
      }
      else
      {
        sub_122C80(v15);
        *((_QWORD *)v15 + 2) = *(_QWORD *)(v20 + 16);
        copy_tinfo_t();
        if ( v15 + 32 != (unsigned __int8 *)(v20 + 32) )
        {
          v50 = *(_QWORD *)(v20 + 40);
          if ( v50 > 1 )
          {
            v57 = (void *)*((_QWORD *)v15 + 4);
            v60 = *(void **)(v20 + 32);
            if ( *((_QWORD *)v15 + 6) < v50 )
            {
              v58 = qvector_reserve();
              *((_QWORD *)v15 + 4) = v58;
              v57 = (void *)v58;
            }
            *((_QWORD *)v15 + 5) = v50;
            memmove(v57, v60, v50 - 1);
            *(_BYTE *)(*((_QWORD *)v15 + 4) + v50 - 1) = 0;
          }
          else
          {
            *((_QWORD *)v15 + 5) = 0;
          }
        }
        copy_argloc();
        *((_DWORD *)v15 + 18) = *(_DWORD *)(v20 + 72);
      }
      cleanup_argloc();
      v13 = ++v68;
      if ( (unsigned __int64)v68 >= *(_QWORD *)(v65 + 32) )
        goto LABEL_47;
    }
    if ( !under_debugger )
      sub_37EA20(50103);
LABEL_105:
    BUG();
  }
LABEL_47:
  *(_DWORD *)(v65 + 280) |= 1u;
  sub_63FD0((__int64 *)(v65 + 240), (__int64 *)(v65 + 96));
  v38 = 0;
  v39 = *(_QWORD *)(v65 + 120);
  if ( v39 )
  {
    v38 = (void *)qalloc_or_throw();
    memcpy(v38, *(const void **)(v65 + 112), 16 * v39);
  }
  v40 = _mm_unpacklo_epi64((__m128i)v39, (__m128i)v39);
  if ( *(_QWORD *)(v65 + 256) )
  {
    *(_QWORD *)(v65 + 264) = 0;
    v72 = v40;
    qfree();
    v40 = _mm_load_si128(&v72);
  }
  *(_QWORD *)(v65 + 256) = v38;
  *(__m128i *)(v65 + 264) = v40;
  clear_tinfo_t();
  if ( v113 )
  {
    *(_QWORD *)&v114 = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree();
  }
  if ( v104 )
  {
    *(_QWORD *)&v105 = 0;
    qfree();
  }
  if ( v99 )
  {
    *(_QWORD *)&v100 = 0;
    qfree();
  }
  if ( v97 )
  {
    *(_QWORD *)&v98 = 0;
    qfree();
  }
  qfree();
  v41 = v92;
  if ( v92 )
  {
    v42 = v93;
    if ( (_QWORD)v93 )
    {
      v43 = 0;
      do
      {
        v44 = (_QWORD *)(v41 + 48 * v43);
        if ( v44[3] )
        {
          v44[4] = 0;
          qfree();
        }
        if ( *v44 )
        {
          v44[1] = 0;
          qfree();
        }
        v41 = v92;
        ++v43;
      }
      while ( v42 != v43 );
    }
    *(_QWORD *)&v93 = 0;
    qfree();
  }
  if ( v90 )
  {
    *(_QWORD *)&v91 = 0;
    qfree();
  }
  return v65;
}

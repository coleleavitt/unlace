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
  int v26; // r13d
  __int64 v27; // r15
  size_t v28; // r15
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  int v32; // r13d
  __int64 v33; // rax
  __int64 v34; // r14
  __int64 v35; // r12
  _QWORD *v36; // rsi
  void *v37; // r15
  unsigned __int64 v38; // rbx
  __m128i v39; // xmm0
  __int64 v40; // rdi
  __int64 v41; // r12
  __int64 v42; // r15
  _QWORD *v43; // rbx
  unsigned __int64 v45; // r13
  int *v46; // rdx
  unsigned __int64 v47; // r15
  size_t v48; // rax
  unsigned __int64 v49; // r15
  __int64 v50; // r13
  int v51; // r15d
  __int64 v52; // rax
  _DWORD *v53; // rdi
  const void *v54; // r8
  void *v55; // rax
  void *v56; // rdi
  __int64 v57; // rax
  void *v58; // [rsp+0h] [rbp-2D0h]
  const void *v59; // [rsp+8h] [rbp-2C8h]
  __int64 v60; // [rsp+10h] [rbp-2C0h]
  __int64 v61; // [rsp+18h] [rbp-2B8h]
  __int64 v62; // [rsp+20h] [rbp-2B0h]
  __int64 v63; // [rsp+28h] [rbp-2A8h]
  int v64; // [rsp+30h] [rbp-2A0h]
  int v65; // [rsp+34h] [rbp-29Ch]
  unsigned __int64 *v66; // [rsp+38h] [rbp-298h]
  __int64 v67; // [rsp+40h] [rbp-290h]
  size_t v68; // [rsp+48h] [rbp-288h]
  __m128i v69; // [rsp+50h] [rbp-280h] BYREF
  __int64 v70; // [rsp+60h] [rbp-270h] BYREF
  __int64 v71; // [rsp+68h] [rbp-268h]
  _DWORD *v72; // [rsp+70h] [rbp-260h] BYREF
  __int128 v73; // [rsp+78h] [rbp-258h]
  void *src; // [rsp+90h] [rbp-240h]
  size_t n[3]; // [rsp+98h] [rbp-238h]
  __int64 v76[2]; // [rsp+B0h] [rbp-220h] BYREF
  __int64 v77; // [rsp+C0h] [rbp-210h]
  void *dest[2]; // [rsp+C8h] [rbp-208h] BYREF
  __int128 v79; // [rsp+D8h] [rbp-1F8h]
  __int64 v80; // [rsp+E8h] [rbp-1E8h]
  __int128 v81; // [rsp+F0h] [rbp-1E0h]
  __int64 v82; // [rsp+100h] [rbp-1D0h]
  int v83; // [rsp+108h] [rbp-1C8h]
  int v84; // [rsp+10Ch] [rbp-1C4h]
  __int64 v85; // [rsp+110h] [rbp-1C0h]
  __m128i v86; // [rsp+120h] [rbp-1B0h] BYREF
  __int64 v87; // [rsp+130h] [rbp-1A0h]
  __int64 v88; // [rsp+138h] [rbp-198h]
  __int128 v89; // [rsp+140h] [rbp-190h]
  __int64 v90; // [rsp+150h] [rbp-180h]
  __int128 v91; // [rsp+158h] [rbp-178h]
  __int64 v92; // [rsp+168h] [rbp-168h]
  __int64 v93; // [rsp+170h] [rbp-160h]
  char v94[8]; // [rsp+178h] [rbp-158h] BYREF
  __int64 v95; // [rsp+180h] [rbp-150h]
  __int64 v96; // [rsp+188h] [rbp-148h]
  __int64 v97; // [rsp+198h] [rbp-138h]
  __int64 v98; // [rsp+1A0h] [rbp-130h]
  __int64 v99; // [rsp+1D0h] [rbp-100h]
  __int64 v100; // [rsp+1D8h] [rbp-F8h]
  __int64 v101; // [rsp+1E8h] [rbp-E8h]
  __int64 v102; // [rsp+1F0h] [rbp-E0h]
  __int64 v103; // [rsp+200h] [rbp-D0h]
  __int64 v104; // [rsp+208h] [rbp-C8h]
  __int64 v105; // [rsp+210h] [rbp-C0h]
  __int64 v106; // [rsp+218h] [rbp-B8h]
  __int64 v107; // [rsp+220h] [rbp-B0h]
  __int64 v108; // [rsp+228h] [rbp-A8h]
  __int128 v109; // [rsp+230h] [rbp-A0h]
  int v110; // [rsp+240h] [rbp-90h]
  __int16 v111; // [rsp+244h] [rbp-8Ch]
  __m128i si128; // [rsp+248h] [rbp-88h]
  __int128 v113; // [rsp+258h] [rbp-78h]
  __m128i v114; // [rsp+268h] [rbp-68h]
  __int128 v115; // [rsp+278h] [rbp-58h]
  int tinfo_property; // [rsp+288h] [rbp-48h]
  __int16 v117; // [rsp+28Ch] [rbp-44h]
  char v118; // [rsp+28Eh] [rbp-42h]
  unsigned __int64 v119; // [rsp+298h] [rbp-38h]

  v67 = a2;
  LODWORD(v60) = a3;
  v61 = a4;
  v119 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a4 + 64) != 8 )
  {
    if ( !under_debugger )
      sub_383060(50101);
    goto LABEL_101;
  }
  v88 = 0;
  v90 = 0;
  v5 = *(_QWORD *)(a4 + 72);
  *(_DWORD *)(a2 + 24) |= 8u;
  v6 = *(_QWORD *)(a2 + 480);
  v63 = v5;
  v7 = *(_QWORD *)(v67 + 64);
  v92 = 0;
  v93 = 0;
  v8 = (__m128i)v7;
  v9 = *(_QWORD *)(v7 + 1496);
  v86 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v67, v8);
  v87 = v9;
  v89 = 0;
  v91 = 0;
  sub_D10B0((__int64)v94, v6, 0);
  v109 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_424800);
  v114 = 0;
  v103 = v67;
  v104 = 0;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v110 = -1;
  v111 = 0;
  tinfo_property = 0;
  v117 = 0;
  v118 = 0;
  v113 = -1;
  v115 = 0;
  v10 = sub_D7360(v86.m128i_i64[0], *(_QWORD *)(v86.m128i_i64[0] + 56));
  v114 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v10, (__m128i)(unsigned __int64)v10);
  sub_E9680(&v86, v61, 0);
  if ( !si128.m128i_i8[0] )
  {
    copy_tinfo_t();
    DWORD1(v115) = get_tinfo_property();
    tinfo_property = get_tinfo_property();
  }
  v11 = sub_EFB00((__int64)&v86);
  v62 = v11;
  if ( !v11 )
  {
    if ( !under_debugger )
      sub_383060(50102);
    goto LABEL_101;
  }
  v12 = 0;
  v13 = *(_QWORD *)(v11 + 32) == 0;
  v65 = 0;
  v69.m128i_i64[0] = (__int64)&v70;
  v66 = (unsigned __int64 *)&v72;
  if ( !v13 )
  {
    while ( 1 )
    {
      v14 = (unsigned __int8 *)(80 * v12 + *(_QWORD *)(v62 + 24));
      v15 = *v14;
      if ( (unsigned __int8)v15 > 0xFu )
        break;
      v16 = 32802;
      if ( !_bittest64(&v16, v15) )
        break;
      v17 = 80 * v12 + *(_QWORD *)(v62 + 24);
      v70 = 0;
      v71 = 0;
      if ( !(unsigned __int8)sub_1C5030(v17, v69.m128i_i64[0]) )
      {
        if ( !under_debugger )
          sub_383060(51878);
        goto LABEL_101;
      }
      if ( v12 >= *(_QWORD *)(v63 + 32) )
        goto LABEL_11;
      v19 = *(_QWORD *)(v63 + 24) + 80 * v12;
      if ( *(_BYTE *)v19 != 9 )
        goto LABEL_11;
      v46 = *(int **)(v19 + 8);
      v47 = v46[4];
      if ( *(_QWORD *)(*(_QWORD *)v46 + 440LL) < v47 )
      {
        if ( !under_debugger )
          sub_383060(51258);
        goto LABEL_101;
      }
      v68 = *(_QWORD *)(*(_QWORD *)v46 + 432LL);
      LODWORD(v59) = v19 + 56;
      if ( (unsigned int)compare_arglocs()
        || (v48 = v68 + 104 * v47, (*(_BYTE *)(v48 + 25) & 4) != 0)
        || *(_QWORD *)(*(_QWORD *)(v19 + 8) + 8LL) + *(int *)(v19 + 4) > *(int *)(v48 + 88) )
      {
LABEL_11:
        v72 = nullptr;
        v73 = 0;
        v20 = *((_DWORD *)v14 + 1);
        v21 = a1[180];
        v76[0] = 0;
        v76[1] = 0;
        v77 = 0;
        *(_OWORD *)dest = 0;
        sub_1C31B0(v69.m128i_i32[0], (unsigned int)v76, v20, v21, 0, v18);
        if ( v63 )
        {
          v22 = *(_QWORD *)(v63 + 24);
          for ( i = v22 + 80LL * *(_QWORD *)(v63 + 32); i != v22; v22 += 80 )
          {
            if ( *(_BYTE *)v22 == 9
              && (unsigned __int8)sub_FDB60(
                                    v66,
                                    v76,
                                    (__int64)a1,
                                    v69.m128i_i64[0],
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
            && (unsigned __int8)sub_FDB60(v66, v76, (__int64)a1, v69.m128i_i64[0], v20, *v24) )
          {
            break;
          }
        }
        if ( v77 )
        {
          dest[0] = nullptr;
          qfree();
        }
        qfree();
        v26 = *((_DWORD *)v14 + 1);
        if ( (_QWORD)v73 == 1 && *v72 == v26 )
        {
          v50 = (int)v72[4];
          v51 = v72[6];
          *v14 = 9;
          v52 = j__qalloc_or_throw();
          *(_QWORD *)v52 = a1;
          v53 = v72;
          *(_QWORD *)(v52 + 8) = v50;
          *(_DWORD *)(v52 + 16) = v51;
          *((_QWORD *)v14 + 1) = v52;
          if ( v53 )
          {
            *(_QWORD *)&v73 = 0;
            qfree();
          }
        }
        else
        {
          src = nullptr;
          *(_OWORD *)n = 0;
          v27 = *(_QWORD *)(v61 + 24);
          src = (void *)qvector_reserve();
          n[0] = 1;
          *(_BYTE *)src = 0;
          LODWORD(v76[0]) = 0;
          copy_argloc();
          v77 = v27;
          v28 = n[0];
          LODWORD(dest[0]) = 1;
          dest[1] = nullptr;
          v79 = 0;
          if ( n[0] )
          {
            dest[1] = (void *)qalloc_or_throw();
            *((_QWORD *)&v79 + 1) = v28;
            memcpy(dest[1], src, v28);
            *(_QWORD *)&v79 = v28;
          }
          v80 = 0;
          v81 = 0;
          v82 = 0;
          copy_tinfo_t();
          v83 = v26;
          v84 = 0;
          v85 = 0;
          if ( src )
          {
            n[0] = 0;
            qfree();
          }
          if ( *((_QWORD *)v14 + 5) > 1u
            && !(unsigned __int8)sub_213140(a1, *((_QWORD *)v14 + 4), 4)
            && &dest[1] != (void **)(v14 + 32) )
          {
            v45 = *((_QWORD *)v14 + 5);
            if ( v45 > 1 )
            {
              v54 = *((const void **)v14 + 4);
              v55 = dest[1];
              if ( *((_QWORD *)&v79 + 1) < v45 )
              {
                v59 = *((const void **)v14 + 4);
                v55 = (void *)qvector_reserve();
                dest[1] = v55;
                v54 = v59;
              }
              *(_QWORD *)&v79 = v45;
              memmove(v55, v54, v45 - 1);
              *((_BYTE *)dest[1] + v45 - 1) = 0;
            }
            else
            {
              *(_QWORD *)&v79 = 0;
            }
          }
          v32 = sub_1F6560(
                  (_DWORD)a1,
                  (unsigned int)v76,
                  0,
                  v29,
                  v30,
                  v31,
                  (_DWORD)v58,
                  (_DWORD)v59,
                  v60,
                  v61,
                  v62,
                  v63,
                  v64,
                  (_DWORD)v66,
                  v67,
                  (unsigned int)v76,
                  v69.m128i_i32[0],
                  v69.m128i_i32[2],
                  v70,
                  v71,
                  (__int64)v72);
          if ( v32 == -1 )
          {
            if ( !under_debugger )
              sub_383060(52628);
            goto LABEL_101;
          }
          *v14 = 9;
          v33 = j__qalloc_or_throw();
          *(_QWORD *)v33 = a1;
          *(_QWORD *)(v33 + 8) = 0;
          *(_DWORD *)(v33 + 16) = v32;
          *((_QWORD *)v14 + 1) = v33;
          v34 = v73;
          v35 = *(_QWORD *)(v61 + 24);
          v36 = *(_QWORD **)(v60 + 16);
          while ( v34 )
          {
            --v34;
            v36 = (_QWORD *)sub_D1D10(
                              v67,
                              v36,
                              v35,
                              v72[8 * v34 + 6],
                              v32,
                              v72[8 * v34 + 4],
                              v72[8 * v34 + 5],
                              v72[8 * v34]);
          }
          clear_tinfo_t();
          if ( v80 )
          {
            *(_QWORD *)&v81 = 0;
            qfree();
          }
          if ( dest[1] )
          {
            *(_QWORD *)&v79 = 0;
            qfree();
          }
          cleanup_argloc();
          if ( v72 )
          {
            *(_QWORD *)&v73 = 0;
            qfree();
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
          v49 = *(_QWORD *)(v19 + 40);
          if ( v49 > 1 )
          {
            v56 = *((void **)v14 + 4);
            v58 = *(void **)(v19 + 32);
            if ( *((_QWORD *)v14 + 6) < v49 )
            {
              v57 = qvector_reserve();
              *((_QWORD *)v14 + 4) = v57;
              v56 = (void *)v57;
            }
            *((_QWORD *)v14 + 5) = v49;
            memmove(v56, v58, v49 - 1);
            *(_BYTE *)(*((_QWORD *)v14 + 4) + v49 - 1) = 0;
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
      v12 = ++v65;
      if ( (unsigned __int64)v65 >= *(_QWORD *)(v62 + 32) )
        goto LABEL_43;
    }
    if ( !under_debugger )
      sub_383060(50103);
LABEL_101:
    BUG();
  }
LABEL_43:
  *(_DWORD *)(v62 + 280) |= 1u;
  sub_648D0((__int64 *)(v62 + 240), (__int64 *)(v62 + 96));
  v37 = nullptr;
  v38 = *(_QWORD *)(v62 + 120);
  if ( v38 )
  {
    v37 = (void *)qalloc_or_throw();
    memcpy(v37, *(const void **)(v62 + 112), 16 * v38);
  }
  v39 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
  if ( *(_QWORD *)(v62 + 256) )
  {
    *(_QWORD *)(v62 + 264) = 0;
    v69 = v39;
    qfree();
    v39 = _mm_load_si128(&v69);
  }
  *(_QWORD *)(v62 + 256) = v37;
  *(__m128i *)(v62 + 264) = v39;
  clear_tinfo_t();
  if ( v108 )
  {
    *(_QWORD *)&v109 = 0;
    qfree();
  }
  qfree();
  qfree();
  if ( v101 )
  {
    v102 = 0;
    qfree();
  }
  if ( v99 )
  {
    v100 = 0;
    qfree();
  }
  if ( v97 )
  {
    v98 = 0;
    qfree();
  }
  if ( v95 )
  {
    v96 = 0;
    qfree();
  }
  qfree();
  v40 = v90;
  if ( v90 )
  {
    v41 = v91;
    if ( (_QWORD)v91 )
    {
      v42 = 0;
      do
      {
        v43 = (_QWORD *)(v40 + 48 * v42);
        if ( v43[3] )
        {
          v43[4] = 0;
          qfree();
        }
        if ( *v43 )
        {
          v43[1] = 0;
          qfree();
        }
        v40 = v90;
        ++v42;
      }
      while ( v41 != v42 );
    }
    *(_QWORD *)&v91 = 0;
    qfree();
  }
  if ( v88 )
  {
    *(_QWORD *)&v89 = 0;
    qfree();
  }
  return v62;
}

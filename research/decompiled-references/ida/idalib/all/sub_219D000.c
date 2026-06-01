__int64 *__fastcall sub_219D000(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _BYTE *a5,
        __int32 a6,
        unsigned __int64 a7,
        std::__detail::_List_node_base *a8)
{
  __int64 *v9; // rbx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v25; // rax
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __int32 v29; // r13d
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 m128i_i64; // rcx
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __m128i v37; // xmm0
  int v38; // edi
  __m128i v39; // xmm1
  __m128i v40; // xmm2
  __m128i v41; // xmm3
  __m128i v42; // xmm4
  __int64 v43; // rcx
  bool v44; // r11
  unsigned __int64 v45; // rsi
  unsigned __int64 v46; // r10
  __int64 v47; // rax
  const __m128i *v48; // rbx
  __int64 v49; // rax
  const char *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 v60; // rdx
  __int64 v61; // rcx
  const char *v62; // rax
  bool v63; // bp
  size_t v64; // r12
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  const char *v82; // rax
  unsigned __int64 v85; // [rsp+30h] [rbp-3E8h]
  int v86; // [rsp+48h] [rbp-3D0h]
  __m128i v87[2]; // [rsp+50h] [rbp-3C8h] BYREF
  __int16 v88; // [rsp+70h] [rbp-3A8h]
  __m128i v89[2]; // [rsp+80h] [rbp-398h] BYREF
  __int16 v90; // [rsp+A0h] [rbp-378h]
  __m128i v91[3]; // [rsp+B0h] [rbp-368h] BYREF
  __m128i v92[2]; // [rsp+E0h] [rbp-338h] BYREF
  __int16 v93; // [rsp+100h] [rbp-318h]
  __m128i v94[3]; // [rsp+110h] [rbp-308h] BYREF
  __m128i v95[2]; // [rsp+140h] [rbp-2D8h] BYREF
  __int16 v96; // [rsp+160h] [rbp-2B8h]
  __m128i v97[2]; // [rsp+170h] [rbp-2A8h] BYREF
  __int16 v98; // [rsp+190h] [rbp-288h]
  __m128i v99[2]; // [rsp+1A0h] [rbp-278h] BYREF
  __int16 v100; // [rsp+1C0h] [rbp-258h]
  __m128i v101[2]; // [rsp+1D0h] [rbp-248h] BYREF
  __int16 v102; // [rsp+1F0h] [rbp-228h]
  __m128i v103[2]; // [rsp+200h] [rbp-218h] BYREF
  __int16 v104; // [rsp+220h] [rbp-1F8h]
  __m128i v105[2]; // [rsp+230h] [rbp-1E8h] BYREF
  __int16 v106; // [rsp+250h] [rbp-1C8h]
  __m128i v107[2]; // [rsp+260h] [rbp-1B8h] BYREF
  __int16 v108; // [rsp+280h] [rbp-198h]
  char s[16]; // [rsp+290h] [rbp-188h] BYREF
  __m128i v110; // [rsp+2A0h] [rbp-178h]
  __m128i v111; // [rsp+2B0h] [rbp-168h]
  __m128i v112; // [rsp+2C0h] [rbp-158h]
  __int64 v113; // [rsp+2D0h] [rbp-148h]
  __m128i v114; // [rsp+2E0h] [rbp-138h] BYREF
  __m128i v115; // [rsp+2F0h] [rbp-128h] BYREF
  __m128i v116; // [rsp+300h] [rbp-118h] BYREF
  __m128i v117; // [rsp+310h] [rbp-108h] BYREF
  __int64 v118; // [rsp+320h] [rbp-F8h]
  char v119; // [rsp+328h] [rbp-F0h]
  __m128i v120; // [rsp+330h] [rbp-E8h] BYREF
  __m128i v121; // [rsp+340h] [rbp-D8h] BYREF
  __m128i v122; // [rsp+350h] [rbp-C8h] BYREF
  __m128i v123; // [rsp+360h] [rbp-B8h] BYREF
  __m128i v124; // [rsp+370h] [rbp-A8h] BYREF
  __m128i v125[5]; // [rsp+380h] [rbp-98h] BYREF
  char v126; // [rsp+3D0h] [rbp-48h]

  v9 = a1;
  if ( *(_DWORD *)(a3 + 12) <= 0x47u )
  {
    v120.m128i_i64[0] = (__int64)" cmdsize too small";
    *(_QWORD *)s = "LC_SEGMENT_64";
    v122.m128i_i16[0] = 259;
    v111.m128i_i16[0] = 259;
    v105[0].m128i_i64[0] = (__int64)" ";
    v106 = 259;
    v102 = 265;
    v99[0].m128i_i64[0] = (__int64)"load command ";
    v100 = 259;
    v101[0].m128i_i32[0] = a6;
    sub_A41580(v103, v99, v101, a4, 259, 265);
    sub_A41580(v107, v103, v105, v10, v11, v12);
    sub_A41580(&v114, v107, (const __m128i *)s, v13, v14, v15);
    sub_A41580(v125, &v114, &v120, v16, v17, v18);
    sub_21967F0(a1, v125[0].m128i_i64, v19, v20);
    return v9;
  }
  sub_21973E0(&v114, a2, *(const __m128i **)a3);
  if ( (v119 & 1) != 0 )
  {
    v25 = v114.m128i_i64[0];
    v114.m128i_i64[0] = 0;
    *a1 = v25;
LABEL_6:
    sub_219CFC0(v114.m128i_i64);
    return v9;
  }
  *(__m128i *)s = _mm_load_si128(&v114);
  v110 = _mm_load_si128(&v115);
  v111 = _mm_load_si128(&v116);
  v112 = _mm_load_si128(&v117);
  v113 = v118;
  sub_215DEC0(a2);
  v85 = v28;
  v86 = v113;
  if ( (unsigned int)v113 > 0x3333333 || 80 * (int)v113 > (unsigned int)(*(_DWORD *)(a3 + 12) - 72) )
  {
    v122.m128i_i16[0] = 259;
    v106 = 259;
    v120.m128i_i64[0] = (__int64)" for the number of sections";
    v105[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
    v50 = " inconsistent cmdsize in ";
    goto LABEL_37;
  }
  if ( !(_DWORD)v113 )
    goto LABEL_55;
  v29 = 0;
  do
  {
    v48 = (const __m128i *)(*(_QWORD *)a3
                          + ((unsigned int)(*(_DWORD *)(a2 + 8) - 19) < 2 ? 0x10 : 0)
                          + v29 * ((unsigned int)(*(_DWORD *)(a2 + 8) - 19) < 2 ? 80 : 68)
                          + 56LL);
    v49 = *(unsigned int *)(a4 + 8);
    if ( v49 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
    {
      sub_2237220(a4, a4 + 16, v49 + 1, 8);
      v49 = *(unsigned int *)(a4 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a4 + 8 * v49) = v48;
    ++*(_DWORD *)(a4 + 8);
    if ( (unsigned __int64)v48 < sub_215DEC0(a2)
      || (v30 = sub_215DEC0(a2), m128i_i64 = (__int64)v48[5].m128i_i64, (unsigned __int64)&v48[5] > v31 + v30) )
    {
      v9 = a1;
      v120.m128i_i64[0] = (__int64)"Structure read out-of-range";
      v122.m128i_i16[0] = 259;
      sub_21967F0(v107[0].m128i_i64, v120.m128i_i64, v31, m128i_i64);
      v126 |= 1u;
      v125[0].m128i_i64[0] = 0;
      *a1 = v107[0].m128i_i64[0];
      goto LABEL_35;
    }
    v35 = *(unsigned int *)(a2 + 8);
    v120 = _mm_loadu_si128(v48);
    v121 = _mm_loadu_si128(v48 + 1);
    v122 = _mm_loadu_si128(v48 + 2);
    v123 = _mm_loadu_si128(v48 + 3);
    v124 = _mm_loadu_si128(v48 + 4);
    if ( (unsigned int)v35 <= 0x14 )
    {
      v36 = 1398784;
      if ( _bittest64(&v36, v35) )
        sub_2198410((__int64)&v120);
    }
    v37 = _mm_load_si128(&v120);
    v38 = *(_DWORD *)(a2 + 60);
    v39 = _mm_load_si128(&v121);
    v126 &= ~1u;
    v40 = _mm_load_si128(&v122);
    v125[0] = v37;
    v41 = _mm_load_si128(&v123);
    v42 = _mm_load_si128(&v124);
    v125[1] = v39;
    v125[3] = v41;
    v125[2] = v40;
    v43 = v40.m128i_i64[1];
    v125[4] = v42;
    if ( v38 == 9 )
    {
      if ( v111.m128i_i64[0] )
      {
        if ( v40.m128i_i64[1] )
        {
          v43 = v122.m128i_i64[0] + v40.m128i_i64[1];
          if ( v122.m128i_i64[0] + v40.m128i_i64[1] > (unsigned __int64)(v110.m128i_i64[1] + v111.m128i_i64[0]) )
          {
LABEL_41:
            v107[0].m128i_i64[0] = (__int64)" greater than than the segment's vmaddr plus vmsize";
            v32 = 259;
            v33 = 259;
            v99[0].m128i_i64[0] = (__int64)" command ";
            v108 = 259;
            v9 = a1;
            v104 = 265;
            v103[0].m128i_i32[0] = a6;
            v100 = 259;
            v96 = 259;
            v93 = 259;
            v90 = 265;
            v89[0].m128i_i32[0] = v29;
            v95[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
            v92[0].m128i_i64[0] = (__int64)" in ";
            v62 = "addr field plus size of section ";
LABEL_67:
            v87[0].m128i_i64[0] = (__int64)v62;
            v88 = 259;
            sub_A41580(v91, v87, v89, v43, v32, v33);
            sub_A41580(v94, v91, v92, v65, v66, v67);
            sub_A41580(v97, v94, v95, v68, v69, v70);
            sub_A41580(v101, v97, v99, v71, v72, v73);
            sub_A41580(v105, v101, v103, v74, v75, v76);
            sub_A41580(&v120, v105, v107, v77, v78, v79);
            sub_21967F0(v9, v120.m128i_i64, v80, v81);
            goto LABEL_35;
          }
        }
      }
      goto LABEL_27;
    }
    LOBYTE(v32) = v124.m128i_i32[0] != 1;
    LOBYTE(v33) = v124.m128i_i32[0] != 18;
    v44 = v38 != 10;
    if ( v124.m128i_i32[0] != 18 && v124.m128i_i32[0] != 1 && v38 != 10 )
    {
      if ( v85 < v41.m128i_u32[0] )
      {
        v9 = a1;
        v82 = " extends past the end of the file";
      }
      else
      {
        if ( v111.m128i_i64[1] || a7 <= v41.m128i_u32[0] || !v40.m128i_i64[1] )
        {
          if ( v85 < v40.m128i_i64[1] + (unsigned __int64)v41.m128i_u32[0] )
          {
            v9 = a1;
            v108 = 259;
            v107[0].m128i_i64[0] = (__int64)" extends past the end of the file";
            v99[0].m128i_i64[0] = (__int64)" command ";
            v95[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
            v92[0].m128i_i64[0] = (__int64)" in ";
            v62 = "offset field plus size field of section ";
            v104 = 265;
            v103[0].m128i_i32[0] = a6;
            v100 = 259;
            v96 = 259;
            v93 = 259;
            v90 = 265;
            v89[0].m128i_i32[0] = v29;
            goto LABEL_67;
          }
          if ( v40.m128i_i64[1] > (unsigned __int64)v112.m128i_i64[0] )
          {
            v9 = a1;
            v108 = 259;
            v107[0].m128i_i64[0] = (__int64)" greater than the segment";
            v99[0].m128i_i64[0] = (__int64)" command ";
            v95[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
            v92[0].m128i_i64[0] = (__int64)" in ";
            v62 = "size field of section ";
            v104 = 265;
            v103[0].m128i_i32[0] = a6;
            v100 = 259;
            v96 = 259;
            v93 = 259;
            v90 = 265;
            v89[0].m128i_i32[0] = v29;
            goto LABEL_67;
          }
          if ( v40.m128i_i64[1] )
            goto LABEL_20;
LABEL_52:
          sub_2197C60(v120.m128i_i64, a8, v41.m128i_u32[0], v40.m128i_i64[1], "section contents");
          v47 = v120.m128i_i64[0];
          if ( !v120.m128i_i64[0] )
            goto LABEL_27;
LABEL_53:
          v9 = a1;
          *a1 = v47;
LABEL_35:
          sub_219CFE0(v125[0].m128i_i64);
          goto LABEL_6;
        }
        v9 = a1;
        v82 = " not past the headers of the file";
      }
      v107[0].m128i_i64[0] = (__int64)v82;
      v99[0].m128i_i64[0] = (__int64)" command ";
      v100 = 259;
      v95[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
      v96 = 259;
      v92[0].m128i_i64[0] = (__int64)" in ";
      v93 = 259;
      v90 = 265;
      v62 = "offset field of section ";
      v108 = 259;
      v104 = 265;
      v103[0].m128i_i32[0] = a6;
      v89[0].m128i_i32[0] = v29;
      goto LABEL_67;
    }
    if ( v38 == 10 )
    {
      v32 = v111.m128i_i64[0];
      if ( !v111.m128i_i64[0] )
        goto LABEL_27;
      v45 = v40.m128i_i64[1] + v122.m128i_i64[0];
      v46 = v111.m128i_i64[0] + v110.m128i_i64[1];
      if ( !v40.m128i_i64[1] )
        goto LABEL_27;
      goto LABEL_23;
    }
    if ( !v40.m128i_i64[1] )
      goto LABEL_27;
LABEL_20:
    if ( v122.m128i_i64[0] < (unsigned __int64)v110.m128i_i64[1] )
    {
      v108 = 259;
      v107[0].m128i_i64[0] = (__int64)" less than the segment's vmaddr";
      v9 = a1;
      v99[0].m128i_i64[0] = (__int64)" command ";
      v104 = 265;
      v103[0].m128i_i32[0] = a6;
      v100 = 259;
      v96 = 259;
      v93 = 259;
      v90 = 265;
      v89[0].m128i_i32[0] = v29;
      v95[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
      v92[0].m128i_i64[0] = (__int64)" in ";
      v62 = "addr field of section ";
      goto LABEL_67;
    }
    if ( v111.m128i_i64[0] )
    {
      v45 = v40.m128i_i64[1] + v122.m128i_i64[0];
      v46 = v110.m128i_i64[1] + v111.m128i_i64[0];
LABEL_23:
      if ( v45 > v46 )
        goto LABEL_41;
      v44 = v38 != 10;
      LOBYTE(v32) = v124.m128i_i32[0] != 1;
      LOBYTE(v33) = v124.m128i_i32[0] != 18;
    }
    if ( ((unsigned __int8)v32 & v44) != 0 && (_BYTE)v33 )
      goto LABEL_52;
LABEL_27:
    if ( v85 < v41.m128i_u32[2] )
    {
      v9 = a1;
      v107[0].m128i_i64[0] = (__int64)" extends past the end of the file";
      v108 = 259;
      v104 = 265;
      v99[0].m128i_i64[0] = (__int64)" command ";
      v100 = 259;
      v95[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
      v96 = 259;
      v92[0].m128i_i64[0] = (__int64)" in ";
      v93 = 259;
      v62 = "reloff field of section ";
      v103[0].m128i_i32[0] = a6;
      v90 = 265;
      v89[0].m128i_i32[0] = v29;
      goto LABEL_67;
    }
    v43 = 8LL * v41.m128i_u32[3];
    if ( v85 < (unsigned __int64)v41.m128i_u32[2] + v43 )
    {
      v107[0].m128i_i64[0] = (__int64)" extends past the end of the file";
      v99[0].m128i_i64[0] = (__int64)" command ";
      v9 = a1;
      v95[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
      v103[0].m128i_i32[0] = a6;
      v92[0].m128i_i64[0] = (__int64)" in ";
      v90 = 265;
      v62 = "reloff field plus nreloc field times sizeof(struct relocation_info) of section ";
      v108 = 259;
      v104 = 265;
      v100 = 259;
      v96 = 259;
      v93 = 259;
      v89[0].m128i_i32[0] = v29;
      goto LABEL_67;
    }
    sub_2197C60(v120.m128i_i64, a8, v41.m128i_u32[2], v43, "section relocation entries");
    v47 = v120.m128i_i64[0];
    if ( v120.m128i_i64[0] )
      goto LABEL_53;
    ++v29;
    sub_219CFE0(v125[0].m128i_i64);
  }
  while ( v86 != v29 );
  v9 = a1;
LABEL_55:
  if ( v85 < v111.m128i_i64[1] )
  {
    v26 = 259;
    v27 = 259;
    v120.m128i_i64[0] = (__int64)" extends past the end of the file";
    v105[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
    v50 = " fileoff field in ";
    v122.m128i_i16[0] = 259;
    v106 = 259;
    goto LABEL_37;
  }
  if ( v85 < v112.m128i_i64[0] + v111.m128i_i64[1] )
  {
    v120.m128i_i64[0] = (__int64)" extends past the end of the file";
    v105[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
    v50 = " fileoff field plus filesize field in ";
    v122.m128i_i16[0] = 259;
    v106 = 259;
    goto LABEL_37;
  }
  v63 = v111.m128i_i64[0] != 0 && v112.m128i_i64[0] > (unsigned __int64)v111.m128i_i64[0];
  if ( v63 )
  {
    v122.m128i_i16[0] = 259;
    v120.m128i_i64[0] = (__int64)" greater than vmsize field";
    v105[0].m128i_i64[0] = (__int64)"LC_SEGMENT_64";
    v50 = " filesize field in ";
    v106 = 259;
LABEL_37:
    v101[0].m128i_i64[0] = (__int64)v50;
    v102 = 259;
    v98 = 265;
    v95[0].m128i_i64[0] = (__int64)"load command ";
    v96 = 259;
    v97[0].m128i_i32[0] = a6;
    sub_A41580(v99, v95, v97, 259, v26, v27);
    sub_A41580(v103, v99, v101, v51, v52, v53);
    sub_A41580(v107, v103, v105, v54, v55, v56);
    sub_A41580(v125, v107, &v120, v57, v58, v59);
    sub_21967F0(v9, v125[0].m128i_i64, v60, v61);
    goto LABEL_6;
  }
  v64 = j__strlen(&s[8]);
  if ( v64 == j__strlen("__PAGEZERO") )
  {
    if ( v64 )
      v63 = memcmp("__PAGEZERO", &s[8], v64) == 0;
    else
      v63 = 1;
  }
  *a5 |= v63;
  sub_219CFC0(v114.m128i_i64);
  *v9 = 0;
  return v9;
}

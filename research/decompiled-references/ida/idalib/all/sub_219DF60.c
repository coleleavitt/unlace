__int64 *__fastcall sub_219DF60(
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
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  unsigned __int32 v28; // r13d
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  int v35; // esi
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __m128i v38; // xmm2
  __m128i v39; // xmm3
  unsigned __int32 v40; // ebx
  __int64 v41; // r8
  bool v42; // r10
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // r10
  __int64 v45; // rax
  const __m128i *v46; // rbx
  __int64 v47; // rax
  const char *v48; // rax
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  const char *v60; // rax
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // r9
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  bool v78; // bp
  size_t v79; // r12
  const char *v80; // rax
  int v82; // [rsp+1Ch] [rbp-3CCh]
  unsigned __int64 v83; // [rsp+38h] [rbp-3B0h]
  bool v84; // [rsp+4Bh] [rbp-39Dh]
  __m128i v85[2]; // [rsp+50h] [rbp-398h] BYREF
  __int16 v86; // [rsp+70h] [rbp-378h]
  __m128i v87[2]; // [rsp+80h] [rbp-368h] BYREF
  __int16 v88; // [rsp+A0h] [rbp-348h]
  __m128i v89[3]; // [rsp+B0h] [rbp-338h] BYREF
  __m128i v90[2]; // [rsp+E0h] [rbp-308h] BYREF
  __int16 v91; // [rsp+100h] [rbp-2E8h]
  __m128i v92[3]; // [rsp+110h] [rbp-2D8h] BYREF
  __m128i v93[2]; // [rsp+140h] [rbp-2A8h] BYREF
  __int16 v94; // [rsp+160h] [rbp-288h]
  __m128i v95[2]; // [rsp+170h] [rbp-278h] BYREF
  __int16 v96; // [rsp+190h] [rbp-258h]
  __m128i v97[2]; // [rsp+1A0h] [rbp-248h] BYREF
  __int16 v98; // [rsp+1C0h] [rbp-228h]
  __m128i v99[2]; // [rsp+1D0h] [rbp-218h] BYREF
  __int16 v100; // [rsp+1F0h] [rbp-1F8h]
  __m128i v101[2]; // [rsp+200h] [rbp-1E8h] BYREF
  __int16 v102; // [rsp+220h] [rbp-1C8h]
  __m128i v103[2]; // [rsp+230h] [rbp-1B8h] BYREF
  __int16 v104; // [rsp+250h] [rbp-198h]
  __m128i v105[2]; // [rsp+260h] [rbp-188h] BYREF
  __int16 v106; // [rsp+280h] [rbp-168h]
  char s[16]; // [rsp+290h] [rbp-158h] BYREF
  __m128i v108; // [rsp+2A0h] [rbp-148h]
  __m128i v109; // [rsp+2B0h] [rbp-138h]
  __int64 v110; // [rsp+2C0h] [rbp-128h]
  __m128i v111; // [rsp+2D0h] [rbp-118h] BYREF
  __m128i v112; // [rsp+2E0h] [rbp-108h] BYREF
  __m128i v113; // [rsp+2F0h] [rbp-F8h] BYREF
  __int64 v114; // [rsp+300h] [rbp-E8h]
  char v115; // [rsp+308h] [rbp-E0h]
  __m128i v116; // [rsp+310h] [rbp-D8h] BYREF
  __m128i v117; // [rsp+320h] [rbp-C8h] BYREF
  __m128i v118; // [rsp+330h] [rbp-B8h] BYREF
  __m128i v119; // [rsp+340h] [rbp-A8h] BYREF
  __int32 v120; // [rsp+350h] [rbp-98h]
  __m128i v121[4]; // [rsp+360h] [rbp-88h] BYREF
  __int32 v122; // [rsp+3A0h] [rbp-48h]
  char v123; // [rsp+3A8h] [rbp-40h]

  v9 = a1;
  if ( *(_DWORD *)(a3 + 12) <= 0x37u )
  {
    v116.m128i_i64[0] = (__int64)" cmdsize too small";
    *(_QWORD *)s = "LC_SEGMENT";
    v103[0].m128i_i64[0] = (__int64)" ";
    v98 = 259;
    v118.m128i_i16[0] = 259;
    v109.m128i_i16[0] = 259;
    v104 = 259;
    v100 = 265;
    v97[0].m128i_i64[0] = (__int64)"load command ";
    v99[0].m128i_i32[0] = a6;
    sub_A41580(v101, v97, v99, a4, 259, 259);
    sub_A41580(v105, v101, v103, v10, v11, v12);
    sub_A41580(&v111, v105, (const __m128i *)s, v13, v14, v15);
    sub_A41580(v121, &v111, &v116, v16, v17, v18);
    sub_21967F0(a1, v121[0].m128i_i64, v19, v20);
    return v9;
  }
  sub_21969B0(&v111, a2, *(const __m128i **)a3);
  if ( (v115 & 1) != 0 )
  {
    v25 = v111.m128i_i64[0];
    v111.m128i_i64[0] = 0;
    *a1 = v25;
LABEL_6:
    sub_219DF20(v111.m128i_i64);
    return v9;
  }
  *(__m128i *)s = _mm_load_si128(&v111);
  v108 = _mm_load_si128(&v112);
  v109 = _mm_load_si128(&v113);
  v110 = v114;
  sub_215DEC0(a2);
  v83 = v27;
  v82 = v110;
  if ( (unsigned int)v110 > 0x3C3C3C3 || 68 * (int)v110 > (unsigned int)(*(_DWORD *)(a3 + 12) - 56) )
  {
    v118.m128i_i16[0] = 259;
    v104 = 259;
    v116.m128i_i64[0] = (__int64)" for the number of sections";
    v103[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
    v48 = " inconsistent cmdsize in ";
    goto LABEL_37;
  }
  v26 = (unsigned int)v110;
  if ( !(_DWORD)v110 )
    goto LABEL_57;
  v28 = 0;
  do
  {
    v46 = (const __m128i *)(*(_QWORD *)a3
                          + ((unsigned int)(*(_DWORD *)(a2 + 8) - 19) < 2 ? 0x10 : 0)
                          + v28 * ((unsigned int)(*(_DWORD *)(a2 + 8) - 19) < 2 ? 80 : 68)
                          + 56LL);
    v47 = *(unsigned int *)(a4 + 8);
    if ( v47 + 1 > (unsigned __int64)*(unsigned int *)(a4 + 12) )
    {
      sub_2237220(a4, a4 + 16, v47 + 1, 8);
      v47 = *(unsigned int *)(a4 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a4 + 8 * v47) = v46;
    ++*(_DWORD *)(a4 + 8);
    if ( (unsigned __int64)v46 < sub_215DEC0(a2)
      || (v29 = sub_215DEC0(a2), v31 = (__int64)v46[4].m128i_i64 + 4, (unsigned __int64)v46[4].m128i_u64 + 4 > v32 + v29) )
    {
      v9 = a1;
      v116.m128i_i64[0] = (__int64)"Structure read out-of-range";
      v118.m128i_i16[0] = 259;
      sub_21967F0(v105[0].m128i_i64, v116.m128i_i64, 259, v31);
      v123 |= 1u;
      v121[0].m128i_i64[0] = 0;
      *a1 = v105[0].m128i_i64[0];
LABEL_35:
      sub_219DF40(v121[0].m128i_i64);
      goto LABEL_6;
    }
    v116 = _mm_loadu_si128(v46);
    v117 = _mm_loadu_si128(v46 + 1);
    v118 = _mm_loadu_si128(v46 + 2);
    v119 = _mm_loadu_si128(v46 + 3);
    v120 = v46[4].m128i_i32[0];
    v33 = *(unsigned int *)(a2 + 8);
    if ( (unsigned int)v33 <= 0x14 )
    {
      v34 = 1398784;
      if ( _bittest64(&v34, v33) )
        sub_2198460((unsigned int *)&v116);
    }
    v35 = *(_DWORD *)(a2 + 60);
    v36 = _mm_load_si128(&v116);
    v37 = _mm_load_si128(&v117);
    v122 = v120;
    v38 = _mm_load_si128(&v118);
    v123 &= ~1u;
    v39 = _mm_load_si128(&v119);
    v121[0] = v36;
    v40 = v119.m128i_i32[0];
    v121[2] = v38;
    v121[3] = v39;
    v41 = v39.m128i_u32[2];
    v121[1] = v37;
    if ( v35 != 9 )
    {
      LOBYTE(v30) = v39.m128i_i32[2] != 1;
      LOBYTE(v31) = v35 != 10;
      v42 = v39.m128i_i32[2] != 18;
      v84 = v35 != 10;
      if ( v39.m128i_i32[2] == 18 || v39.m128i_i32[2] == 1 || v35 == 10 )
      {
        v31 = v38.m128i_u32[1];
        if ( v35 == 10 )
        {
          v30 = v108.m128i_u32[3];
          if ( !v108.m128i_i32[3] )
            goto LABEL_27;
          v43 = v38.m128i_u32[1] + (unsigned __int64)v118.m128i_u32[0];
          v44 = v108.m128i_u32[3] + (unsigned __int64)v108.m128i_u32[2];
          if ( !v38.m128i_i32[1] )
            goto LABEL_27;
          goto LABEL_23;
        }
        if ( !v38.m128i_i32[1] )
          goto LABEL_27;
LABEL_20:
        if ( v118.m128i_i32[0] < (unsigned __int32)v108.m128i_i32[2] )
        {
          v9 = a1;
          v106 = 259;
          v105[0].m128i_i64[0] = (__int64)" less than the segment's vmaddr";
          v97[0].m128i_i64[0] = (__int64)" command ";
          v93[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
          v90[0].m128i_i64[0] = (__int64)" in ";
          v60 = "addr field of section ";
          v102 = 265;
          v101[0].m128i_i32[0] = a6;
          v98 = 259;
          v94 = 259;
          v91 = 259;
          v88 = 265;
          v87[0].m128i_i32[0] = v28;
          goto LABEL_42;
        }
        if ( !v108.m128i_i32[3] )
        {
LABEL_25:
          if ( ((unsigned __int8)v30 & v84) == 0 || !v42 )
            goto LABEL_27;
          goto LABEL_54;
        }
        v30 = v108.m128i_u32[2];
        v43 = v31 + v118.m128i_u32[0];
        v44 = v108.m128i_u32[2] + (unsigned __int64)v108.m128i_u32[3];
LABEL_23:
        if ( v43 > v44 )
          goto LABEL_41;
        v84 = v35 != 10;
        LOBYTE(v30) = v39.m128i_i32[2] != 1;
        v42 = v39.m128i_i32[2] != 18;
        goto LABEL_25;
      }
      if ( v83 < v38.m128i_u32[2] )
      {
        v9 = a1;
        v80 = " extends past the end of the file";
      }
      else
      {
        v31 = v109.m128i_u32[0];
        if ( v109.m128i_i32[0] || !v38.m128i_i32[1] || a7 <= v38.m128i_u32[2] )
        {
          v31 = v38.m128i_u32[1];
          if ( v83 < v38.m128i_u32[1] + (unsigned __int64)v38.m128i_u32[2] )
          {
            v9 = a1;
            v106 = 259;
            v105[0].m128i_i64[0] = (__int64)" extends past the end of the file";
            v97[0].m128i_i64[0] = (__int64)" command ";
            v93[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
            v90[0].m128i_i64[0] = (__int64)" in ";
            v60 = "offset field plus size field of section ";
            v102 = 265;
            v101[0].m128i_i32[0] = a6;
            v98 = 259;
            v94 = 259;
            v91 = 259;
            v88 = 265;
            v87[0].m128i_i32[0] = v28;
            goto LABEL_42;
          }
          if ( v38.m128i_i32[1] > (unsigned __int32)v109.m128i_i32[1] )
          {
            v9 = a1;
            v106 = 259;
            v105[0].m128i_i64[0] = (__int64)" greater than the segment";
            v97[0].m128i_i64[0] = (__int64)" command ";
            v93[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
            v90[0].m128i_i64[0] = (__int64)" in ";
            v60 = "size field of section ";
            v102 = 265;
            v101[0].m128i_i32[0] = a6;
            v98 = 259;
            v94 = 259;
            v91 = 259;
            v88 = 265;
            v87[0].m128i_i32[0] = v28;
            goto LABEL_42;
          }
          if ( !v38.m128i_i32[1] )
          {
            v31 = 0;
LABEL_54:
            sub_2197C60(v116.m128i_i64, a8, v38.m128i_u32[2], v31, "section contents");
            v45 = v116.m128i_i64[0];
            if ( v116.m128i_i64[0] )
            {
LABEL_55:
              v9 = a1;
              *a1 = v45;
              goto LABEL_35;
            }
            goto LABEL_27;
          }
          goto LABEL_20;
        }
        v9 = a1;
        v80 = " not past the headers of the file";
      }
      v105[0].m128i_i64[0] = (__int64)v80;
      v106 = 259;
      v102 = 265;
      v97[0].m128i_i64[0] = (__int64)" command ";
      v98 = 259;
      v93[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
      v94 = 259;
      v90[0].m128i_i64[0] = (__int64)" in ";
      v91 = 259;
      v88 = 265;
      v60 = "offset field of section ";
      v101[0].m128i_i32[0] = a6;
      v87[0].m128i_i32[0] = v28;
      goto LABEL_42;
    }
    if ( v108.m128i_i32[3]
      && v38.m128i_i32[1]
      && v38.m128i_u32[1] + (unsigned __int64)v118.m128i_u32[0] > v108.m128i_u32[3]
                                                                + (unsigned __int64)v108.m128i_u32[2] )
    {
LABEL_41:
      v31 = v28;
      v30 = 259;
      v105[0].m128i_i64[0] = (__int64)" greater than than the segment's vmaddr plus vmsize";
      v106 = 259;
      v97[0].m128i_i64[0] = (__int64)" command ";
      v9 = a1;
      v102 = 265;
      v101[0].m128i_i32[0] = a6;
      v98 = 259;
      v94 = 259;
      v91 = 259;
      v88 = 265;
      v87[0].m128i_i32[0] = v28;
      v93[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
      v90[0].m128i_i64[0] = (__int64)" in ";
      v60 = "addr field plus size of section ";
LABEL_42:
      v85[0].m128i_i64[0] = (__int64)v60;
      v86 = 259;
      sub_A41580(v89, v85, v87, v31, v41, v30);
      sub_A41580(v92, v89, v90, v61, v62, v63);
      sub_A41580(v95, v92, v93, v64, v65, v66);
      sub_A41580(v99, v95, v97, v67, v68, v69);
      sub_A41580(v103, v99, v101, v70, v71, v72);
      sub_A41580(&v116, v103, v105, v73, v74, v75);
      sub_21967F0(v9, v116.m128i_i64, v76, v77);
      goto LABEL_35;
    }
LABEL_27:
    if ( v83 < v40 )
    {
      v31 = 259;
      v105[0].m128i_i64[0] = (__int64)" extends past the end of the file";
      v106 = 259;
      v41 = 265;
      v9 = a1;
      v97[0].m128i_i64[0] = (__int64)" command ";
      v102 = 265;
      v101[0].m128i_i32[0] = a6;
      v98 = 259;
      v94 = 259;
      v91 = 259;
      v88 = 265;
      v87[0].m128i_i32[0] = v28;
      v93[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
      v90[0].m128i_i64[0] = (__int64)" in ";
      v60 = "reloff field of section ";
      goto LABEL_42;
    }
    v31 = 8LL * v39.m128i_u32[1];
    if ( v83 < (unsigned __int64)v40 + v31 )
    {
      v9 = a1;
      v105[0].m128i_i64[0] = (__int64)" extends past the end of the file";
      v102 = 265;
      v97[0].m128i_i64[0] = (__int64)" command ";
      v98 = 259;
      v93[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
      v94 = 259;
      v90[0].m128i_i64[0] = (__int64)" in ";
      v91 = 259;
      v88 = 265;
      v60 = "reloff field plus nreloc field times sizeof(struct relocation_info) of section ";
      v106 = 259;
      v101[0].m128i_i32[0] = a6;
      v87[0].m128i_i32[0] = v28;
      goto LABEL_42;
    }
    sub_2197C60(v116.m128i_i64, a8, v40, v31, "section relocation entries");
    v45 = v116.m128i_i64[0];
    if ( v116.m128i_i64[0] )
      goto LABEL_55;
    ++v28;
    sub_219DF40(v121[0].m128i_i64);
  }
  while ( v82 != v28 );
  v9 = a1;
LABEL_57:
  if ( v83 < v109.m128i_u32[0] )
  {
    v116.m128i_i64[0] = (__int64)" extends past the end of the file";
    v103[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
    v48 = " fileoff field in ";
    v118.m128i_i16[0] = 259;
    v104 = 259;
    goto LABEL_37;
  }
  if ( v83 < v109.m128i_u32[1] + (unsigned __int64)v109.m128i_u32[0] )
  {
    v116.m128i_i64[0] = (__int64)" extends past the end of the file";
    v103[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
    v48 = " fileoff field plus filesize field in ";
    v118.m128i_i16[0] = 259;
    v104 = 259;
    goto LABEL_37;
  }
  v78 = v109.m128i_i32[1] > (unsigned __int32)v108.m128i_i32[3] && v108.m128i_i32[3] != 0;
  if ( v78 )
  {
    v118.m128i_i16[0] = 259;
    v116.m128i_i64[0] = (__int64)" greater than vmsize field";
    v103[0].m128i_i64[0] = (__int64)"LC_SEGMENT";
    v48 = " filesize field in ";
    v104 = 259;
LABEL_37:
    v99[0].m128i_i64[0] = (__int64)v48;
    v100 = 259;
    v96 = 265;
    v93[0].m128i_i64[0] = (__int64)"load command ";
    v94 = 259;
    v95[0].m128i_i32[0] = a6;
    sub_A41580(v97, v93, v95, v26, 265, 259);
    sub_A41580(v101, v97, v99, v49, v50, v51);
    sub_A41580(v105, v101, v103, v52, v53, v54);
    sub_A41580(v121, v105, &v116, v55, v56, v57);
    sub_21967F0(v9, v121[0].m128i_i64, v58, v59);
    goto LABEL_6;
  }
  v79 = j__strlen(&s[8]);
  if ( v79 == j__strlen("__PAGEZERO") )
  {
    if ( v79 )
      v78 = memcmp("__PAGEZERO", &s[8], v79) == 0;
    else
      v78 = 1;
  }
  *a5 |= v78;
  sub_219DF20(v111.m128i_i64);
  *v9 = 0;
  return v9;
}

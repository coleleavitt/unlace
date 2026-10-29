void __fastcall sub_1717E90(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  char v17; // al
  _QWORD *v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int *v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // r8
  __int64 *v30; // r9
  __m128i *v31; // rax
  unsigned __int64 v32; // rdx
  bool v33; // zf
  __m128i *v34; // rax
  __m128i *v35; // rsi
  size_t v36; // r15
  _QWORD *v37; // rax
  size_t v38; // rbx
  __int64 v39; // rdx
  __m128i *v40; // rcx
  __int64 v41; // rbx
  size_t v42; // r8
  __int64 v43; // r9
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // r14
  _QWORD *v50; // r15
  _QWORD *v51; // rdi
  __int64 v52; // rax
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rsi
  __int64 v56; // rcx
  size_t v57; // rdx
  int v58; // eax
  __int64 v59; // rax
  __int64 v60; // rax
  __m128i v61; // xmm1
  char **v62; // r14
  __int64 v63; // rax
  __m128i v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  char *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  char *v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __int64 v77; // [rsp-10h] [rbp-3E8h]
  char v78; // [rsp+0h] [rbp-3D8h]
  __int64 v79; // [rsp+0h] [rbp-3D8h]
  __int64 v81; // [rsp+10h] [rbp-3C8h]
  __m128i *v82; // [rsp+18h] [rbp-3C0h]
  size_t v83; // [rsp+20h] [rbp-3B8h]
  unsigned __int64 v84; // [rsp+38h] [rbp-3A0h]
  __m128i v85; // [rsp+40h] [rbp-398h] BYREF
  void *v86; // [rsp+50h] [rbp-388h] BYREF
  __int64 v87; // [rsp+58h] [rbp-380h]
  _WORD v88[8]; // [rsp+60h] [rbp-378h] BYREF
  void *s1; // [rsp+70h] [rbp-368h] BYREF
  __m128i *v90; // [rsp+78h] [rbp-360h]
  _QWORD v91[2]; // [rsp+80h] [rbp-358h] BYREF
  const void **v92[2]; // [rsp+90h] [rbp-348h] BYREF
  __m128i si128; // [rsp+A0h] [rbp-338h]
  int v94; // [rsp+B0h] [rbp-328h]
  __int128 v95; // [rsp+B8h] [rbp-320h] BYREF
  __int64 v96; // [rsp+C8h] [rbp-310h]
  char v97; // [rsp+D0h] [rbp-308h]
  __int64 v98; // [rsp+D8h] [rbp-300h]
  __int64 v99; // [rsp+E0h] [rbp-2F8h]
  __int64 v100; // [rsp+E8h] [rbp-2F0h]
  __m128i v101; // [rsp+F0h] [rbp-2E8h] BYREF
  __int128 v102; // [rsp+100h] [rbp-2D8h]
  __int64 v103; // [rsp+110h] [rbp-2C8h]
  void *v104[2]; // [rsp+118h] [rbp-2C0h]
  __int64 v105; // [rsp+128h] [rbp-2B0h]
  char v106; // [rsp+130h] [rbp-2A8h] BYREF
  __int64 v107; // [rsp+138h] [rbp-2A0h]
  __int64 v108; // [rsp+140h] [rbp-298h]
  __int64 v109; // [rsp+148h] [rbp-290h]
  _QWORD *v110; // [rsp+150h] [rbp-288h]
  __int64 v111; // [rsp+158h] [rbp-280h]
  int v112; // [rsp+160h] [rbp-278h]
  char v113; // [rsp+164h] [rbp-274h]
  _QWORD v114[3]; // [rsp+168h] [rbp-270h] BYREF
  __int64 v115; // [rsp+180h] [rbp-258h] BYREF
  __int64 v116; // [rsp+1B0h] [rbp-228h] BYREF
  __m128i *v117; // [rsp+1B8h] [rbp-220h]
  __m128i v118[2]; // [rsp+268h] [rbp-170h] BYREF
  unsigned __int64 v119; // [rsp+290h] [rbp-148h]
  __int64 v120[9]; // [rsp+298h] [rbp-140h] BYREF
  int v121[62]; // [rsp+2E0h] [rbp-F8h] BYREF

  v7 = (_QWORD *)a1[1];
  v101.m128i_i32[0] = 0;
  v101.m128i_i8[4] = 0;
  v101.m128i_i64[1] = 0;
  v102 = 0u;
  v103 = 0;
  v110 = v114;
  v8 = *v7;
  v9 = *(__int64 (**)(void))(*v7 + 48LL);
  LOBYTE(v109) = 0;
  v111 = 8;
  v112 = 0;
  v113 = 1;
  if ( (char *)v9 != (char *)sub_15A1860 )
  {
    v59 = v9();
    v7 = (_QWORD *)a1[1];
    v11 = v59;
    v10 = *(__int64 (__fastcall **)(__int64))(*v7 + 40LL);
    if ( v10 == sub_15A1850 )
      goto LABEL_3;
LABEL_65:
    v79 = v11;
    v60 = ((__int64 (*)(void))v10)();
    v11 = v79;
    v12 = v60;
    goto LABEL_4;
  }
  v10 = *(__int64 (__fastcall **)(__int64))(v8 + 40);
  v11 = (__int64)(v7 + 3);
  if ( v10 != sub_15A1850 )
    goto LABEL_65;
LABEL_3:
  v12 = v7[6];
LABEL_4:
  sub_16FF270((__int64)&v116, *a1, v12, v11, (unsigned int *)&v101, a6, 0);
  sub_17038E0((__int64)&v101);
  v16 = *(_QWORD *)(*a1 + 544);
  if ( v16 && (*(_BYTE *)(v16 + 8) & 0x7Fu) - 19 <= 4 && v16 != 48 )
  {
    v17 = *(_BYTE *)(v16 - 20) & 0x7F;
    if ( v17 == 21 )
    {
      v81 = *(_QWORD *)(v16 + 40);
    }
    else
    {
      if ( v17 != 22 )
        goto LABEL_47;
      v81 = *(_QWORD *)(sub_BADE20(v16 - 48, v77, v16, v13, v14, v15) + 88);
    }
    v18 = (_QWORD *)sub_168B6C0((__int64)a1);
    v19 = sub_A8A250(v18);
    v23 = *(_QWORD *)(v19 + 48);
    if ( v23 )
      v84 = v23 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v84 = sub_A7AA70((__int64)v18, v19, 0, v20, v21, v22);
    if ( v81 )
    {
      v24 = sub_BAD2F0(v81, a3, 1, v20, v21, v22);
      if ( v24 )
      {
        v92[0] = *(const void ***)(v24 + 56);
        v101.m128i_i64[0] = sub_C1BEF0((__int64)v92, a3, v25, v26);
        v84 = sub_6D5440(&v101);
        v119 = *(_QWORD *)&byte_8[v84 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
             | ((unsigned __int8)*(_QWORD *)&byte_8[v84 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v84) & 7;
      }
    }
    sub_16FF160((__int64)v120, (std::__detail::_List_node_base *)v120);
    v88[0] = 95;
    v86 = v88;
    v27 = *(unsigned int **)(a3 + 16);
    v87 = 1;
    sub_9EE560(&v86, (_BYTE *)v27 + 16, *v27);
    v31 = *(__m128i **)(a3 + 16);
    v32 = v31->m128i_u32[0];
    v33 = &v31[1] == nullptr;
    v34 = v31 + 1;
    v35 = v34;
    if ( v33 )
    {
      LOBYTE(v91[0]) = 0;
      v36 = 0;
      v38 = 1;
      v37 = v91;
      s1 = v91;
    }
    else
    {
      s1 = v91;
      sub_1700210(&s1, v34, (__int64)v34->m128i_i64 + v32);
      v36 = (size_t)v90;
      v37 = s1;
      v28 = v91;
      v38 = (size_t)v90->m128i_u64 + 1;
      if ( s1 == v91 )
        v32 = 15;
      else
        v32 = v91[0];
      if ( v38 > v32 )
      {
        v35 = v90;
        sub_998B30((__int64)&s1, (size_t)v90, 0, nullptr, 1u);
        v37 = s1;
      }
    }
    *((_BYTE *)v37 + v36) = 95;
    v90 = (__m128i *)v38;
    v78 = 0;
    *((_BYTE *)s1 + v38) = 0;
    if ( !v81 )
      goto LABEL_68;
    do
    {
      v41 = sub_BAC730(v81, (__int64)v35, v32, (__int64)v28, v29, (__int64)v30);
      if ( v41 )
      {
        while ( 1 )
        {
          v44 = *(_QWORD *)(*a1 + 544);
          LODWORD(v102) = sub_16FE9F0((__int64)&v116, v41);
          *(_OWORD *)v104 = 0;
          v101.m128i_i64[0] = v41;
          *(_QWORD *)((char *)&v102 + 4) = 0;
          v106 = v106 & 0x80 | 0x40;
          LODWORD(v103) = 0;
          v105 = 0;
          v107 = 0;
          v108 = 0;
          v109 = 0;
          sub_15A3440((unsigned int *)&v101, 1, v45, v46, v47, v48);
          v35 = &v101;
          sub_1715C60((__int64)&v116, (__int64)&v101, v44, 0, 0, 0);
          v49 = v104[1];
          v50 = v104[0];
          if ( v104[1] != v104[0] )
          {
            do
            {
              while ( 1 )
              {
                v51 = (_QWORD *)v50[3];
                if ( v51 == v50 + 5 )
                  break;
                operator delete(v51);
                v50 += 8;
                if ( v50 == v49 )
                  goto LABEL_25;
              }
              v50 += 8;
            }
            while ( v49 != v50 );
LABEL_25:
            v50 = v104[0];
          }
          if ( v50 )
            operator delete(v50);
          v52 = *(_QWORD *)(v41 + 40);
          if ( (v52 & 7) != 0 )
            break;
          v53 = v52 & 0xFFFFFFFFFFFFFFF8LL;
          if ( a3 == v53 )
            goto LABEL_30;
          v39 = v87;
          if ( !v53 )
          {
            if ( !v87 )
              goto LABEL_30;
            goto LABEL_60;
          }
          v35 = *(__m128i **)(v53 + 16);
          v42 = v35->m128i_u32[0];
          v40 = v35 + 1;
          if ( v87 == v42
            && (!v35->m128i_i32[0]
             || (v57 = v35->m128i_u32[0],
                 ++v35,
                 v83 = v42,
                 v82 = v40,
                 v58 = memcmp(v86, v35, v57),
                 v40 = v82,
                 v42 = v83,
                 !v58))
            || (__m128i *)v42 == v90 && (!v42 || (v35 = v40, !memcmp(s1, v40, v42))) )
          {
LABEL_30:
            v40 = v117;
            v39 = v116;
            v78 = 1;
            v35 = (__m128i *)0xAAAAAAAAAAAAAAABLL;
            v54 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v117->m128i_i64 - v116) >> 5);
            if ( (_DWORD)v54 )
            {
              v40 = nullptr;
              if ( (__m128i *)v116 == v117 )
                v39 = 0;
              v39 += 96LL * (unsigned int)(v54 - 1);
              if ( !*(_DWORD *)(v39 + 24) && *(_QWORD *)v39 == v41 )
                --*(_DWORD *)(v39 + 16);
            }
          }
LABEL_36:
          v41 = *(_QWORD *)(v41 + 80);
          if ( !v41 )
            goto LABEL_37;
        }
        if ( !v87 )
          goto LABEL_30;
LABEL_60:
        if ( !v90 )
          goto LABEL_30;
        goto LABEL_36;
      }
LABEL_37:
      v81 = sub_BAB630(v81, (__int64)v35, v39, (__int64)v40, v42, v43);
    }
    while ( v81 );
    if ( !v78 )
    {
LABEL_68:
      v61 = _mm_loadu_si128(v118);
      v102 = 0x24u;
      v104[1] = &v106;
      v62 = (char **)v118[0].m128i_i64[0];
      v105 = 0x400000000LL;
      v114[1] = &v115;
      v114[2] = 0x200000000LL;
      v63 = *a1;
      v101 = v61;
      v103 = 0;
      v104[0] = nullptr;
      v64.m128i_i64[0] = sub_16FEC70(*(_QWORD **)(v63 + 240), *(_QWORD **)(v63 + 248), v32, (__int64)v28, v29, v30);
      v85 = v64;
      sub_168B6C0((__int64)a1);
      v68 = sub_16FEFA0(v84, &v85, v62, v65, v66, v67);
      sub_15A3150((__int64)&v101, (__int64)v68);
      LOWORD(v94) = 260;
      v92[0] = (const void **)&v86;
      v72 = sub_15A4EB0(v62, v92, 260, v69, v70, v71);
      sub_15A2F70((__int64)&v101, (__int64)v72);
      v92[1] = (const void **)sub_15A5CA0((__int64)&v101, (__int64)v72, v73, v74, v75, v76);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23AA9D0);
      v95 = 0;
      v92[0] = nullptr;
      v97 = v97 & 0x80 | 0x40;
      v94 = 0;
      v96 = 0;
      v98 = 0;
      v99 = 0;
      v100 = 0;
      sub_1706C30((__int64)&v116, (__int64)v92);
      sub_1705410((__int64)&v95);
      sub_1704B40(&v101);
    }
    sub_16FF8C0((__int64)v120, v120[1]);
    v55 = a1[1];
    v56 = 0;
    if ( (__m128i *)v116 != v117 )
      v56 = v116;
    if ( v55 )
      sub_1700D50(*a1, v55, v121, v56, -1431655765 * (((__int64)v117->m128i_i64 - v116) >> 5));
    if ( s1 != v91 )
      operator delete(s1);
    if ( v86 != v88 )
      operator delete(v86);
  }
LABEL_47:
  sub_1700A70((__int64)&v116);
}

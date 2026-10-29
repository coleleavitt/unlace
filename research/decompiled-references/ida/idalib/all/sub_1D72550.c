__int64 __fastcall sub_1D72550(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        char a10,
        _BYTE *a11)
{
  unsigned int v11; // r15d
  __int64 v12; // r12
  __int64 *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r8
  char *v18; // rdi
  __int64 v19; // rdx
  _QWORD *v20; // r14
  size_t v21; // r13
  unsigned __int64 v22; // rbx
  int v23; // eax
  __int64 v24; // rsi
  char *v25; // rdi
  __int64 v26; // rdx
  _QWORD *v27; // r14
  size_t v28; // r13
  unsigned __int64 v29; // rbx
  int v30; // eax
  int v31; // ebx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // r13
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // r13
  __int64 v39; // roff
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  char *v42; // rdx
  __m128i *v43; // rcx
  __m128i *v44; // rax
  int v45; // eax
  int v46; // esi
  unsigned __int64 v47; // rsi
  int v48; // edx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbp
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbp
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rax
  __int64 v64; // r8
  __int64 v65; // r9
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rax
  _QWORD *v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rax
  _QWORD *v75; // rax
  bool v77; // [rsp+10h] [rbp-568h]
  unsigned __int8 v78; // [rsp+10h] [rbp-568h]
  __int64 v79; // [rsp+10h] [rbp-568h]
  __int64 v80; // [rsp+18h] [rbp-560h]
  __int64 v82; // [rsp+20h] [rbp-558h]
  __int64 v83; // [rsp+40h] [rbp-538h]
  _BYTE *v84; // [rsp+48h] [rbp-530h]
  char v85; // [rsp+54h] [rbp-524h] BYREF
  __int64 v86; // [rsp+58h] [rbp-520h] BYREF
  __int64 v87; // [rsp+68h] [rbp-510h] BYREF
  _BYTE v88[16]; // [rsp+70h] [rbp-508h] BYREF
  void *v89; // [rsp+80h] [rbp-4F8h] BYREF
  __int64 v90; // [rsp+88h] [rbp-4F0h]
  _BYTE v91[96]; // [rsp+90h] [rbp-4E8h] BYREF
  __m128i v92; // [rsp+F0h] [rbp-488h] BYREF
  __int64 *v93; // [rsp+100h] [rbp-478h]
  char *v94; // [rsp+108h] [rbp-470h]
  unsigned __int8 *v95[11]; // [rsp+110h] [rbp-468h] BYREF
  char v96; // [rsp+168h] [rbp-410h]
  unsigned int v97; // [rsp+170h] [rbp-408h]
  char v98; // [rsp+174h] [rbp-404h]
  void *v99; // [rsp+180h] [rbp-3F8h] BYREF
  __int64 v100; // [rsp+188h] [rbp-3F0h]
  _BYTE dest[192]; // [rsp+190h] [rbp-3E8h] BYREF
  __m128i v102; // [rsp+250h] [rbp-328h] BYREF
  _BYTE v103[96]; // [rsp+260h] [rbp-318h] BYREF
  void *ptr; // [rsp+2C0h] [rbp-2B8h]
  __int64 v105; // [rsp+2C8h] [rbp-2B0h]
  _WORD v106[49]; // [rsp+2D0h] [rbp-2A8h] BYREF
  char v107; // [rsp+332h] [rbp-246h]
  void *v108[2]; // [rsp+340h] [rbp-238h] BYREF
  unsigned int v109; // [rsp+350h] [rbp-228h] BYREF
  __int16 v110; // [rsp+354h] [rbp-224h]
  int v111; // [rsp+358h] [rbp-220h]
  int v112; // [rsp+35Ch] [rbp-21Ch]
  __int64 *v113; // [rsp+360h] [rbp-218h]
  __int64 v114; // [rsp+368h] [rbp-210h]
  __int64 v115; // [rsp+370h] [rbp-208h] BYREF
  __int64 v116; // [rsp+3F0h] [rbp-188h]
  _QWORD v117[3]; // [rsp+3F8h] [rbp-180h] BYREF
  _QWORD v118[3]; // [rsp+410h] [rbp-168h] BYREF
  int v119; // [rsp+428h] [rbp-150h]
  char v120; // [rsp+42Ch] [rbp-14Ch]
  _QWORD *v121; // [rsp+430h] [rbp-148h]
  __int64 v122; // [rsp+438h] [rbp-140h]
  _QWORD v123[12]; // [rsp+440h] [rbp-138h] BYREF
  _WORD v124[52]; // [rsp+4A0h] [rbp-D8h] BYREF
  __int64 *v125; // [rsp+508h] [rbp-70h]
  __int64 v126; // [rsp+510h] [rbp-68h]
  __int64 v127; // [rsp+518h] [rbp-60h] BYREF

  v11 = 0;
  v12 = a2;
  v14 = *(__int64 **)(a4 + 56);
  v15 = *(unsigned int *)(a2 + 8);
  v16 = *(unsigned int *)(a2 + 16);
  v86 = a4;
  v85 = a10;
  v80 = (__int64)v14;
  sub_1DC37A0(v88, a1, a6, a3, v15 | (v16 << 32));
  if ( !v88[8] )
  {
    v18 = dest;
    v20 = sub_BC1290(v14, *(_QWORD *)(a1 + 248));
    v99 = dest;
    v21 = 24 * v19;
    v100 = 0x800000000LL;
    v22 = 0xAAAAAAAAAAAAAAABLL * ((24 * v19) >> 3);
    v23 = 0;
    if ( v22 > 8 )
    {
      sub_2237220(&v99, dest, 0xAAAAAAAAAAAAAAABLL * ((24 * v19) >> 3), 24);
      v23 = v100;
      v18 = (char *)v99 + 24 * (unsigned int)v100;
    }
    if ( v21 )
    {
      memcpy(v18, v20, v21);
      v23 = v100;
    }
    v24 = *(_QWORD *)(a1 + 248);
    LODWORD(v100) = v23 + v22;
    v25 = v91;
    v27 = sub_BC1290((__int64 *)v12, v24);
    v89 = v91;
    v28 = 24 * v26;
    v90 = 0x400000000LL;
    v29 = 0xAAAAAAAAAAAAAAABLL * ((24 * v26) >> 3);
    v30 = 0;
    if ( v29 > 4 )
    {
      sub_2237220(&v89, v91, 0xAAAAAAAAAAAAAAABLL * ((24 * v26) >> 3), 24);
      v30 = v90;
      v25 = (char *)v89 + 24 * (unsigned int)v90;
    }
    if ( v28 )
    {
      memcpy(v25, v27, v28);
      v30 = v90;
    }
    v31 = v30 + v29;
    v32 = *(_QWORD *)(v12 + 12);
    LODWORD(v90) = v31;
    v123[2] = v32;
    LODWORD(v32) = *(_DWORD *)(v12 + 20);
    v108[0] = &v109;
    v108[1] = (void *)0x800000000LL;
    v33 = v32 & 0x1FFFFFFF;
    if ( v33 )
    {
      v34 = v12 + 24;
      v35 = v12 + 8LL * (unsigned int)(v33 - 1) + 32;
      v83 = v12;
      v36 = 0;
      v37 = v34;
      v38 = v35;
      do
      {
        a8 = (__m128)_mm_loadu_si128((const __m128i *)((char *)v89 + v36));
        v92 = (__m128i)a8;
        v93 = *(__int64 **)((char *)v89 + v36 + 16);
        if ( (a8.m128_i32[0] & 0x7FFFFFFF) == 9 )
        {
          v39 = v92.m128i_i64[1];
          v92 = _mm_loadu_si128((const __m128i *)v92.m128i_i64[1]);
          v93 = *(__int64 **)(v39 + 16);
        }
        sub_1D37A30(&v102, a1, &v92, 0, *(unsigned int *)(*(_QWORD *)v37 + 24LL), 0, *(double *)a7.m128_u64, a8);
        v40 = LODWORD(v108[1]);
        v41 = LODWORD(v108[1]) + 1LL;
        if ( v41 > HIDWORD(v108[1]) )
        {
          if ( v108[0] > &v102 || &v102 >= (__m128i *)((char *)v108[0] + 32 * LODWORD(v108[1])) )
          {
            sub_2237220(v108, &v109, v41, 32);
            v42 = (char *)v108[0];
            v40 = LODWORD(v108[1]);
            v43 = &v102;
          }
          else
          {
            v84 = v108[0];
            sub_2237220(v108, &v109, v41, 32);
            v42 = (char *)v108[0];
            v40 = LODWORD(v108[1]);
            v43 = (__m128i *)((char *)v108[0] + (char *)&v102 - v84);
          }
        }
        else
        {
          v42 = (char *)v108[0];
          v43 = &v102;
        }
        a9 = _mm_loadu_si128(v43);
        v37 += 8;
        v36 += 24;
        v44 = (__m128i *)&v42[32 * v40];
        *v44 = a9;
        v44[1] = _mm_loadu_si128(v43 + 1);
        ++LODWORD(v108[1]);
      }
      while ( v38 != v37 );
      v12 = v83;
    }
    LODWORD(v90) = 0;
    v106[48] = 256;
    v102.m128i_i64[0] = (__int64)v103;
    v102.m128i_i64[1] = 0x400000000LL;
    ptr = v106;
    v105 = 0x400000000LL;
    v107 = 0;
    sub_1D3CA30((char ***)&v102, (char ***)&v89);
    v11 = sub_1CCEE60(a1, v86, a6, (__int64)v108, a5, 0, a7, a8, (__int64)&v102, 1, nullptr);
    if ( (_BYTE)v11 )
    {
      if ( ptr != v106 )
        free(ptr);
      if ( (_BYTE *)v102.m128i_i64[0] != v103 )
        free((void *)v102.m128i_i64[0]);
      if ( v108[0] != &v109 )
        free(v108[0]);
      v11 = 0;
    }
    else
    {
      sub_1D3CA30((char ***)&v89, (char ***)&v102);
      if ( a11 )
        *a11 |= v107;
      if ( ptr != v106 )
        free(ptr);
      if ( (_BYTE *)v102.m128i_i64[0] != v103 )
        free((void *)v102.m128i_i64[0]);
      if ( v108[0] != &v109 )
        free(v108[0]);
      v45 = sub_BBD7B0(v80);
      v110 = 0;
      v111 = v45;
      v117[0] &= 0xFFFFFFFE00000000LL;
      v118[0] &= 0xFFFFFFFE00000000LL;
      v109 = a6;
      v113 = &v115;
      v121 = v123;
      *(_OWORD *)v108 = 0;
      v112 = 0;
      v114 = 0x400000000LL;
      v116 = 0;
      v119 = 0;
      v120 = 0;
      v122 = 0x800000000LL;
      v123[9] = 0;
      v123[10] = v124;
      v123[11] = 0x400000000LL;
      v124[48] = 0;
      v126 = 0x400000000LL;
      v102.m128i_i64[1] = 0x400000000LL;
      v46 = *(_DWORD *)(v80 + 20);
      v125 = &v127;
      v117[1] = 0;
      v118[1] = 0;
      v123[8] = 0;
      v102.m128i_i64[0] = (__int64)v103;
      v47 = v46 & 0x1FFFFFFF;
      if ( (_DWORD)v47 )
        sub_1D37240((__int64)&v102, v47);
      switch ( sub_1D70940(
                 a1,
                 v80,
                 (__int64)v99,
                 (unsigned int)v100,
                 (__int64)v89,
                 (unsigned int)v90,
                 0.0,
                 *(double *)a8.m128_u64,
                 a9,
                 (__int64)v108,
                 v102.m128i_i64,
                 0,
                 1,
                 2 - (unsigned int)(v85 != 0)) )
      {
        case 0LL:
          if ( a11 && HIBYTE(v110) )
            *a11 = 1;
          goto LABEL_53;
        case 5LL:
          sub_168B9F0((__int64)&v92, (__int64 *)(a1 + 8), *(_DWORD *)((v116 & 0xFFFFFFFFFFFFFFF8LL) + 24), 0xF85u, 0);
          if ( v96 )
            goto LABEL_49;
          goto LABEL_46;
        case 10LL:
          sub_168B9F0((__int64)&v92, (__int64 *)(a1 + 8), *(_DWORD *)(v86 + 24), 0x10C6u, 0);
          if ( v96 )
          {
LABEL_49:
            sub_F21D50(v95, v117);
          }
          else
          {
LABEL_46:
            if ( !v98 )
              goto LABEL_47;
            v51 = sub_168B9E0(&v92);
            v54 = (__int64)v93;
            if ( v93 )
              v54 = (*(__int64 (__fastcall **)(__int64 *))(*v93 + 32))(v93);
            v87 = v54;
            v55 = sub_1587BC0(v51, &v87, v49, v50, v52, v53);
            sub_F21D50(*v55 + 32LL * v97 + 8, v117);
          }
          if ( v96 )
          {
            sub_F21D50(v95, v118);
          }
          else if ( v98 )
          {
            v58 = sub_168B9E0(&v92);
            v61 = (__int64)v93;
            if ( v93 )
              v61 = (*(__int64 (__fastcall **)(__int64 *))(*v93 + 32))(v93);
            v87 = v61;
            v62 = sub_1587BC0(v58, &v87, v56, v57, v59, v60);
            sub_F21D50(*v62 + 32LL * v97 + 8, v118);
          }
LABEL_47:
          sub_15F7200(&v92);
          goto LABEL_34;
        case 16LL:
          sub_168B9F0((__int64)&v92, (__int64 *)(a1 + 8), *(_DWORD *)(v86 + 24), 0x1418u, 0);
          if ( v96 )
          {
            sub_AE9DF0(v95, (*(_DWORD *)(v12 + 20) & 0x1FFFFFFFu) < (*(_DWORD *)(v80 + 20) & 0x1FFFFFFFu), 2u);
          }
          else
          {
            if ( !v98 )
              goto LABEL_33;
            v77 = (*(_DWORD *)(v12 + 20) & 0x1FFFFFFFu) < (*(_DWORD *)(v80 + 20) & 0x1FFFFFFFu);
            v63 = sub_168B9E0(&v92);
            v66 = v77;
            v67 = v63;
            v68 = (__int64)v93;
            if ( v93 )
            {
              v82 = v67;
              v68 = (*(__int64 (__fastcall **)(__int64 *, __int64, bool))(*v93 + 32))(v93, *v93, v77);
              v67 = v82;
              v66 = v77;
            }
            v78 = v66;
            v87 = v68;
            v69 = sub_1587BC0(v67, &v87, v66, v67, v64, v65);
            sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v97 + 8), v78, 2u);
          }
          if ( v96 )
          {
            sub_AE9DF0(v95, 1, 2u);
          }
          else if ( v98 )
          {
            v70 = sub_168B9E0(&v92);
            v74 = (__int64)v93;
            if ( v93 )
            {
              v79 = v70;
              v74 = (*(__int64 (__fastcall **)(__int64 *))(*v93 + 32))(v93);
              v70 = v79;
            }
            v87 = v74;
            v75 = sub_1587BC0(v70, &v87, v70, v71, v72, v73);
            sub_AE9DF0((unsigned __int8 **)(*v75 + 32LL * v97 + 8), 1, 2u);
          }
LABEL_33:
          v48 = *(_DWORD *)(v80 + 8);
          HIDWORD(v87) = *(_DWORD *)(v12 + 16);
          LODWORD(v87) = v48;
          sub_1587DB0((__int64)&v92, &v87);
          sub_15F7200(&v92);
LABEL_34:
          if ( (_BYTE *)v102.m128i_i64[0] != v103 )
            free((void *)v102.m128i_i64[0]);
          sub_19A2E00((__int64)v108);
          break;
        case 18LL:
          goto LABEL_34;
        default:
LABEL_53:
          v92.m128i_i64[0] = (__int64)&v87;
          v93 = &v86;
          v94 = &v85;
          v92.m128i_i64[1] = a1;
          v95[0] = (unsigned __int8 *)&v99;
          v95[2] = (unsigned __int8 *)&v102;
          v95[1] = (unsigned __int8 *)&v89;
          v95[3] = (unsigned __int8 *)v108;
          sub_15F0FC0(a1, v109, (__int64 (__fastcall *)(__int64))sub_1D69F60, (__int64)&v92);
          switch ( (int)v87 )
          {
            case 0:
              v11 = 1;
              break;
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
            case 7:
            case 8:
            case 9:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
            case 16:
            case 17:
            case 18:
              goto LABEL_34;
          }
          goto LABEL_34;
      }
    }
    if ( v89 != v91 )
      free(v89);
    if ( v99 != dest )
      free(v99);
  }
  sub_1DBADA0(v88);
  return v11;
}

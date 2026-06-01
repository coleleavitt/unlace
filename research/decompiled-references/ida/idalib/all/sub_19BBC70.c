__int64 *__fastcall sub_19BBC70(
        __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        char a9)
{
  int v9; // r11d
  __int64 *v10; // rbx
  __int64 *v13; // rbp
  void **p_ptr; // r12
  char *v15; // rdx
  __m128 v16; // xmm0
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  __int64 v21; // rax
  __int32 v22; // r10d
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 *v32; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  _QWORD *v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // r8
  __int64 v46; // rbp
  void *v47; // rax
  __int64 v48; // rcx
  void *v49; // rax
  __m128i si128; // xmm0
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rbx
  __int64 *v60; // rbx
  __int64 *v61; // r12
  __int64 v62; // rcx
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // rdx
  unsigned __int64 v66; // rdx
  __int64 v67; // rbp
  __int64 v68; // rax
  unsigned int v69; // edx
  __int64 v70; // r15
  _QWORD *v71; // rsi
  int v72; // eax
  int v73; // edx
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  char *v77; // rdi
  void *v78; // rdx
  __int64 v79; // rcx
  __int64 v80; // r8
  __int64 v81; // r9
  void *v82; // rax
  __int64 v83; // rcx
  _QWORD *v84; // rax
  __int64 *v85; // rax
  __int64 v86; // r15
  unsigned int *v87; // rax
  __int64 v88; // rdx
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // r8
  __int64 v92; // r9
  __int64 v93; // rdx
  void *v94; // rax
  __m128 v95; // [rsp+0h] [rbp-308h] BYREF
  __int64 *v96; // [rsp+18h] [rbp-2F0h]
  __int64 *v97; // [rsp+20h] [rbp-2E8h]
  __int64 *v98; // [rsp+28h] [rbp-2E0h]
  void *v99; // [rsp+30h] [rbp-2D8h]
  std::nothrow_t *v100; // [rsp+38h] [rbp-2D0h]
  __int64 v101; // [rsp+40h] [rbp-2C8h] BYREF
  char v102; // [rsp+48h] [rbp-2C0h] BYREF
  int v103[4]; // [rsp+4Ch] [rbp-2BCh] BYREF
  char v104; // [rsp+5Eh] [rbp-2AAh] BYREF
  char v105; // [rsp+5Fh] [rbp-2A9h] BYREF
  __int64 v106; // [rsp+60h] [rbp-2A8h] BYREF
  __int64 v107; // [rsp+68h] [rbp-2A0h] BYREF
  void *v108[2]; // [rsp+70h] [rbp-298h] BYREF
  __int64 v109; // [rsp+80h] [rbp-288h] BYREF
  __m128i v110; // [rsp+90h] [rbp-278h] BYREF
  int *v111; // [rsp+A0h] [rbp-268h]
  __int64 v112; // [rsp+A8h] [rbp-260h]
  __int16 v113; // [rsp+B0h] [rbp-258h]
  _QWORD v114[6]; // [rsp+C0h] [rbp-248h] BYREF
  __m128 v115; // [rsp+F0h] [rbp-218h] BYREF
  __int64 v116; // [rsp+100h] [rbp-208h]
  char *v117; // [rsp+108h] [rbp-200h]
  _QWORD *v118; // [rsp+110h] [rbp-1F8h]
  int *v119; // [rsp+118h] [rbp-1F0h]
  _QWORD *v120; // [rsp+120h] [rbp-1E8h]
  __int64 v121; // [rsp+130h] [rbp-1D8h] BYREF
  char v122; // [rsp+138h] [rbp-1D0h]
  __int64 v123; // [rsp+13Ch] [rbp-1CCh]
  char v124; // [rsp+144h] [rbp-1C4h]
  void *v125; // [rsp+148h] [rbp-1C0h]
  __int64 v126; // [rsp+150h] [rbp-1B8h]
  _BYTE v127[24]; // [rsp+158h] [rbp-1B0h] BYREF
  void *ptr; // [rsp+170h] [rbp-198h] BYREF
  __int64 v129; // [rsp+178h] [rbp-190h]
  _BYTE v130[64]; // [rsp+180h] [rbp-188h] BYREF
  void *v131[2]; // [rsp+1C0h] [rbp-148h] BYREF
  int v132; // [rsp+1D0h] [rbp-138h]
  char v133; // [rsp+1D4h] [rbp-134h]
  __int64 v134; // [rsp+1D8h] [rbp-130h] BYREF
  __int128 v135; // [rsp+220h] [rbp-E8h] BYREF
  void *v136[2]; // [rsp+230h] [rbp-D8h]
  __int128 v137; // [rsp+240h] [rbp-C8h] BYREF
  char v138; // [rsp+298h] [rbp-70h]
  unsigned int v139; // [rsp+2A0h] [rbp-68h]
  char v140; // [rsp+2A4h] [rbp-64h]

  v9 = *(_DWORD *)a5;
  v103[0] = a3;
  v101 = a4;
  v102 = a9;
  if ( v9 )
  {
    if ( *(_DWORD *)(a5 + 4) )
    {
      v10 = nullptr;
      if ( !*(_QWORD *)(a5 + 8) )
        return v10;
    }
  }
  v13 = (__int64 *)a1;
  v104 = 0;
  p_ptr = &ptr;
  v131[1] = byte_8;
  v133 = 1;
  ptr = v130;
  v129 = 0x800000000LL;
  v131[0] = &v134;
  v132 = 0;
  if ( a6 )
    v106 = sub_1E5F010(a6, 0);
  else
    v106 = 0;
  v15 = &v105;
  v114[1] = a1;
  v96 = &v106;
  v114[0] = &v106;
  v95.m128_u64[0] = (unsigned __int64)&v105;
  v114[5] = &v104;
  v117 = &v102;
  v16 = _mm_loadh_ps((const double *)v95.m128_u64);
  v120 = v114;
  v95.m128_u64[0] = (unsigned __int64)v114;
  v17 = *(_QWORD *)(a5 + 8);
  v114[2] = v131;
  v114[3] = &ptr;
  v114[4] = v103;
  v105 = 0;
  v115 = v16;
  v116 = a1;
  v118 = a2;
  v119 = v103;
  if ( v17 )
  {
    v18 = *(_QWORD *)(v17 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v18 )
    {
      v19 = *(_QWORD *)(a5 + 16);
      v16 = 0;
      v135 = 0;
      *(_OWORD *)v136 = 0;
      v137 = 0;
      sub_15AB8B0((__int64)&v135, v18, v19);
      if ( !*(_BYTE *)v115.m128_u64[0] )
      {
        v34 = sub_19A8D50((__int64)&v115, (__int64)&v135, (__int64)v15, a4, a5, a6, 0.0, a8);
        if ( v34 )
        {
          v10 = (__int64 *)v34;
          if ( HIDWORD(v136[1]) )
            free(v136[0]);
          goto LABEL_26;
        }
      }
      if ( HIDWORD(v136[1]) )
        free(v136[0]);
      goto LABEL_11;
    }
  }
  if ( !v101 )
  {
    v35 = v106 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (v106 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      goto LABEL_37;
LABEL_12:
    if ( !v105 )
    {
      v20 = (unsigned int)v129;
      v21 = *(_QWORD *)(a5 + 8);
      v97 = (__int64 *)(a1 + 8);
      v22 = v129;
      if ( !v21 )
      {
        v45 = 8LL * (unsigned int)v129;
        v95.m128_u64[0] = (unsigned __int64)ptr;
        v98 = (__int64 *)((char *)ptr + v45);
        goto LABEL_41;
      }
      if ( *(_BYTE *)v115.m128_u64[0] )
      {
        if ( (*(_QWORD *)(v21 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v76 = (unsigned int)v129;
          goto LABEL_98;
        }
      }
      else
      {
        v100 = (std::nothrow_t *)(unsigned int)v129;
        LODWORD(v99) = v129;
        v85 = (__int64 *)sub_19A8D50(
                           (__int64)&v115,
                           a5,
                           v115.m128_i64[0],
                           a1 + 8,
                           a5,
                           (unsigned int)v129,
                           *(double *)v16.m128_u64,
                           a8);
        v22 = (int)v99;
        v20 = (unsigned __int64)v100;
        v98 = v85;
        if ( v85 )
        {
          sub_168B9F0((__int64)&v135, v97, *(_DWORD *)(a5 + 4), 0x15A2u, 0);
          v107 = *(_QWORD *)a5;
          v86 = sub_1587DB0((__int64)&v135, &v107);
          v87 = (unsigned int *)a2[2];
          v88 = *v87;
          v113 = 1283;
          v111 = (int *)(v87 + 4);
          v110.m128i_i64[0] = (__int64)"::";
          v112 = v88;
          sub_2253560(v108, &v110);
          sub_9EC740((__int64)&v121, *(_DWORD *)(a5 + 4), (_BYTE *)v108[0], (__int64)v108[1], 0);
          sub_1589170(v86, &v121);
          if ( v125 != v127 )
            operator delete(v125);
          if ( v108[0] != &v109 )
            operator delete(v108[0]);
          sub_15F7200(&v135);
          v10 = v98;
          goto LABEL_26;
        }
        v75 = *(_QWORD *)(a5 + 8);
        if ( !v75 || (*(_QWORD *)(v75 + 8) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          goto LABEL_68;
      }
      if ( !v104 )
      {
        if ( v101 )
        {
          v99 = (void *)v20;
          LODWORD(v98) = v22;
          sub_199FDE0((__int64)&v135, a1, (__int64)a2, v103[0], 5);
          sub_1A49A10(a1, &v135, v101, 0, 0);
          v95.m128_u64[0] = sub_19A8630(v95.m128_i64[0], (__int64)&v135, v16, a8, v23, v24, v25, v26);
          sub_169D230((__int64)&v135);
          v22 = (int)v98;
          v20 = (unsigned __int64)v99;
          if ( v95.m128_u64[0] )
          {
            sub_168B9F0((__int64)&v135, v97, *(_DWORD *)(a5 + 4), 0x161Au, 0);
            v27 = *(_QWORD *)a5;
            v124 = 0;
            v123 = 0;
            v125 = v127;
            v126 = 0;
            v127[0] = 0;
            v127[16] = 0;
            v121 = v27;
            v122 = 1;
            sub_1589170((__int64)&v135, &v121);
            if ( v125 != v127 )
              operator delete(v125);
            sub_15F7200(&v135);
            sub_168B9F0((__int64)&v135, v97, *(_DWORD *)(*((_QWORD *)ptr + (unsigned int)v129 - 1) + 24LL), 0x171Cu, 0);
            v10 = (__int64 *)v95.m128_u64[0];
            v121 = sub_1E5F010(v95.m128_u64[0], 0);
            sub_162B6D0((__int64)&v135, &v121);
            sub_15F7200(&v135);
            goto LABEL_26;
          }
        }
      }
LABEL_68:
      v76 = (unsigned int)v129;
      if ( v20 != (unsigned int)v129 )
      {
        v45 = 8 * v20;
        if ( v20 < (unsigned int)v129 )
        {
          LODWORD(v129) = v22;
          v95.m128_u64[0] = (unsigned __int64)ptr;
          v98 = (__int64 *)((char *)ptr + v45);
        }
        else
        {
          if ( v20 > HIDWORD(v129) )
          {
            v98 = (__int64 *)(8 * v20);
            v95.m128_i32[0] = v22;
            sub_2237220(&ptr, v130, v20, 8);
            v76 = (unsigned int)v129;
            v45 = (__int64)v98;
            v22 = v95.m128_i32[0];
          }
          v77 = (char *)ptr + 8 * v76;
          v95.m128_u64[0] = (unsigned __int64)ptr;
          v98 = (__int64 *)((char *)ptr + v45);
          if ( v77 != (char *)ptr + v45 )
          {
            v98 = (__int64 *)v45;
            LODWORD(v99) = v22;
            memset(v77, 0, 8 * ((unsigned __int64)(v45 - 8 - 8 * v76) >> 3) + 8);
            v45 = (__int64)v98;
            v22 = (int)v99;
            v95.m128_u64[0] = (unsigned __int64)ptr;
            v98 = (__int64 *)((char *)ptr + (_QWORD)v98);
          }
          LODWORD(v129) = v22;
        }
LABEL_41:
        v100 = (std::nothrow_t *)&std::nothrow;
        if ( v45 )
        {
          v99 = v13;
          v46 = v45 >> 3;
          do
          {
            v47 = (void *)operator new(8 * v46, (const std::nothrow_t *)&std::nothrow);
            if ( v47 )
            {
              v48 = v46;
              v13 = (__int64 *)v99;
              v99 = v47;
              sub_19BBBB0((__int64 *)v95.m128_u64[0], v98, (__int64 *)v47, v48);
              v49 = v99;
              goto LABEL_46;
            }
            v46 >>= 1;
          }
          while ( v46 );
          v13 = (__int64 *)v99;
        }
        sub_19A1120((__int64 *)v95.m128_u64[0], v98);
        v49 = nullptr;
LABEL_46:
        v95.m128_u64[0] = (unsigned __int64)&v101;
        v95 = _mm_loadh_ps((const double *)v95.m128_u64);
        operator delete(v49, v100);
        si128 = _mm_load_si128((const __m128i *)&v95);
        v51 = 5343;
        v111 = v103;
        v110 = si128;
        if ( (_DWORD)v129 )
        {
          if ( (v106 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          {
            v52 = 3684;
            goto LABEL_49;
          }
          v52 = 3680;
          if ( (_DWORD)v129 != 1 )
          {
LABEL_49:
            sub_168B9F0((__int64)&v135, v97, v103[0], v52, 0);
            v108[0] = a2;
            v53 = sub_19A7D80((__int64)&v135, (__int64 *)v108);
LABEL_50:
            v54 = sub_1605D30(v53, v96);
LABEL_51:
            v59 = v54;
            sub_19A13E0((__int64)&v121, (__int64)&v110, v55, v56, v57, v58);
            sub_1589170(v59, &v121);
            if ( v125 != v127 )
              operator delete(v125);
            sub_15F7200(&v135);
            v60 = (__int64 *)ptr;
            v98 = (__int64 *)&v137;
            if ( ptr != (char *)ptr + 8 * (unsigned int)v129 )
            {
              v96 = (__int64 *)&ptr;
              v61 = (__int64 *)((char *)ptr + 8 * (unsigned int)v129);
              v95.m128_u64[0] = (unsigned __int64)v13;
              do
              {
                v67 = *v60;
                v68 = sub_16C47B0(*v60);
                v69 = *(_DWORD *)(v67 + 24);
                v70 = v68;
                if ( (*(_BYTE *)(v68 + 28) & 0x7Fu) - 58 <= 9 )
                {
                  sub_168B9F0((__int64)&v135, v97, v69, 0x171Cu, 0);
                  v65 = *(_QWORD *)(v70 + 48);
                  if ( v65 )
                    v66 = v65 & 0xFFFFFFFFFFFFFFF0LL;
                  else
                    v66 = sub_A7AA70(*(_QWORD *)(v95.m128_u64[0] + 248), v70, 0, v62, v63, v64);
                  v121 = v66;
                  sub_162B6D0((__int64)&v135, &v121);
                  sub_15F7200(&v135);
                }
                else
                {
                  sub_168B9F0((__int64)&v135, v97, v69, 0x171Bu, 0);
                  if ( v138 )
                  {
                    sub_AE9DF0((unsigned __int8 **)v98, v67, 0xAu);
                  }
                  else if ( v140 )
                  {
                    v78 = (void *)sub_168B9E0(&v135);
                    v82 = v136[0];
                    if ( v136[0] )
                    {
                      v83 = *(_QWORD *)v136[0];
                      v99 = v78;
                      v82 = (void *)(*(__int64 (__fastcall **)(void *))(v83 + 32))(v136[0]);
                      v78 = v99;
                    }
                    v121 = (__int64)v82;
                    v84 = sub_1587BC0((__int64)v78, &v121, (__int64)v78, v79, v80, v81);
                    sub_AE9DF0((unsigned __int8 **)(*v84 + 32LL * v139 + 8), v67, 0xAu);
                  }
                  sub_15F7200(&v135);
                }
                ++v60;
              }
              while ( v61 != v60 );
              p_ptr = (void **)v96;
            }
            goto LABEL_32;
          }
          v89 = sub_16C47B0(*(_QWORD *)ptr);
          if ( (*(_BYTE *)(v89 + 28) & 0x7Fu) - 58 <= 9 )
          {
            v93 = *(_QWORD *)(v89 + 48);
            if ( v93 )
              v94 = (void *)(v93 & 0xFFFFFFFFFFFFFFF0LL);
            else
              v94 = (void *)sub_A7AA70(v13[31], v89, 0, v90, v91, v92);
            v108[0] = v94;
            sub_168B9F0((__int64)&v135, v97, v103[0], 0xE62u, 0);
            v53 = sub_1605D30((__int64)&v135, (__int64 *)v108);
            goto LABEL_50;
          }
          v51 = 3681;
        }
        sub_168B9F0((__int64)&v135, v97, v103[0], v51, 0);
        v108[0] = a2;
        v54 = sub_19A7D80((__int64)&v135, (__int64 *)v108);
        goto LABEL_51;
      }
LABEL_98:
      v45 = 8 * v76;
      v95.m128_u64[0] = (unsigned __int64)ptr;
      v98 = (__int64 *)((char *)ptr + 8 * v76);
      goto LABEL_41;
    }
    v71 = *(_QWORD **)(a1 + 248);
    *(_QWORD *)&v135 = 0;
    v72 = sub_15AB9E0(a5, v71, (__int64)v15, a4, a5, a6);
    v74 = sub_1CD6010(a1, 6, 0, v72, v73, (_DWORD)a2, v103[0], (__int64)&v135, 1);
    if ( (v74 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v32 = (__int64 *)sub_1E61050(a1, v74, v135, *(double *)v16.m128_u64, *(double *)a8.m128_u64);
      goto LABEL_25;
    }
LABEL_32:
    v10 = nullptr;
    goto LABEL_26;
  }
  sub_199FDE0((__int64)&v135, a1, (__int64)a2, v103[0], 5);
  sub_1A49A10(a1, &v135, v101, 0, 0);
  v97 = (__int64 *)sub_19A8630(v95.m128_i64[0], (__int64)&v135, v16, a8, v28, v29, v30, v31);
  sub_169D230((__int64)&v135);
  v32 = v97;
  if ( v97 )
    goto LABEL_25;
  if ( v104 )
    goto LABEL_32;
  v35 = v106 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (v106 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    goto LABEL_12;
LABEL_37:
  v105 |= (*(_BYTE *)(*(_QWORD *)v35 + 17LL) & 4) != 0;
  sub_199FDE0((__int64)&v135, a1, (__int64)a2, v103[0], 5);
  v40 = sub_169D2C0(a1, v106, v36, v37, v38, v39);
  if ( !v40 )
  {
    sub_169D230((__int64)&v135);
    goto LABEL_11;
  }
  sub_1A48440(a1, &v135, v40, 0);
  v97 = (__int64 *)sub_19A8630(v95.m128_i64[0], (__int64)&v135, v16, a8, v41, v42, v43, v44);
  sub_169D230((__int64)&v135);
  v32 = v97;
  if ( !v97 )
  {
LABEL_11:
    if ( v104 )
      goto LABEL_32;
    goto LABEL_12;
  }
LABEL_25:
  v10 = v32;
LABEL_26:
  if ( !v133 )
    free(v131[0]);
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v10;
}

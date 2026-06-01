void __fastcall sub_186FAF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // r15
  __int64 v9; // rdx
  char *v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int8 v14; // al
  char *v15; // rax
  char *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __int64 v23; // r14
  unsigned __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  char *v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdi
  __int64 v34; // r15
  unsigned __int64 v35; // rax
  char *v36; // rax
  char *v37; // rax
  __int64 v38; // rax
  __m128 v39; // xmm0
  __int64 v40; // r14
  __int64 *v41; // rbx
  __int64 *v42; // rbp
  __int64 *v43; // r12
  unsigned __int64 v44; // r15
  _WORD *v45; // r14
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // r12
  void *v52; // r8
  char *v53; // r15
  char *v54; // rbx
  unsigned __int64 v55; // r13
  __int64 v56; // rsi
  __int64 v57; // rdi
  unsigned __int64 v58; // r13
  _QWORD *v59; // rcx
  __int64 v60; // rdx
  _QWORD *v61; // rax
  unsigned __int64 v62; // r12
  void *v63; // rsi
  void **v64; // rcx
  __int64 v65; // rdx
  int v66; // edi
  void **v67; // rax
  char *v68; // rax
  char *v69; // rax
  _QWORD *v70; // rax
  unsigned int v71; // eax
  __int64 v72; // rax
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // r12
  void **v78; // rcx
  void **v79; // r13
  unsigned __int64 v80; // r14
  void *v81; // rsi
  __int64 v82; // rdi
  __int64 v83; // rax
  _WORD **v84; // rax
  _WORD **v85; // r13
  __int64 v86; // rdx
  __int64 v87; // rdx
  _WORD *v88; // rsi
  unsigned __int64 v89; // r13
  _QWORD *v90; // rcx
  __int64 v91; // rdx
  _QWORD *v92; // rax
  __int64 v93; // rdx
  _QWORD *v94; // rax
  unsigned int v95; // eax
  _QWORD *v96; // rax
  __int64 v97; // rdi
  void *v98; // rdx
  _QWORD *v99; // rax
  unsigned int v100; // esi
  __int64 v101; // rdx
  _QWORD *v102; // rax
  unsigned int v103; // esi
  __int64 v104; // rdx
  void **v105; // [rsp+0h] [rbp-198h] BYREF
  unsigned __int64 *v106; // [rsp+8h] [rbp-190h]
  __int64 *v107; // [rsp+10h] [rbp-188h]
  __int64 *v108; // [rsp+18h] [rbp-180h]
  __int64 v109; // [rsp+20h] [rbp-178h]
  __int64 *v110; // [rsp+28h] [rbp-170h]
  _WORD **v111; // [rsp+30h] [rbp-168h] BYREF
  __int64 v112; // [rsp+38h] [rbp-160h]
  __int64 v113; // [rsp+40h] [rbp-158h]
  void *v114; // [rsp+50h] [rbp-148h] BYREF
  __int64 v115; // [rsp+58h] [rbp-140h]
  int v116; // [rsp+60h] [rbp-138h]
  char v117; // [rsp+64h] [rbp-134h]
  __int64 v118; // [rsp+68h] [rbp-130h] BYREF
  void *v119; // [rsp+90h] [rbp-108h] BYREF
  __int64 v120; // [rsp+98h] [rbp-100h]
  int v121; // [rsp+A0h] [rbp-F8h]
  char v122; // [rsp+A4h] [rbp-F4h]
  __int64 v123; // [rsp+A8h] [rbp-F0h] BYREF
  _QWORD v124[2]; // [rsp+D0h] [rbp-C8h] BYREF
  __m128 v125; // [rsp+E0h] [rbp-B8h]
  void *v126; // [rsp+F0h] [rbp-A8h]
  __int64 v127; // [rsp+F8h] [rbp-A0h]
  char v128; // [rsp+100h] [rbp-98h] BYREF
  __int64 v129; // [rsp+120h] [rbp-78h]
  char v130; // [rsp+128h] [rbp-70h]
  __int64 v131; // [rsp+130h] [rbp-68h]
  void *ptr; // [rsp+138h] [rbp-60h]
  __int64 v133; // [rsp+140h] [rbp-58h]
  char v134; // [rsp+148h] [rbp-50h] BYREF

  if ( (unsigned __int8)sub_FD3830(
                          *(_QWORD *)(*(_QWORD *)(a1 + 264) + 32LL),
                          0x1AECu,
                          *(unsigned int *)(a2 + 24),
                          *(_QWORD *)(a1 + 264),
                          a5,
                          a6) != 1
    && *(char *)(a2 + 28) >= 0 )
  {
    v8 = sub_B72690(a2 + 72);
    if ( v8 )
      v8 -= 64LL;
    if ( !(unsigned __int8)sub_B8E180(v8 + 64) )
    {
      v115 = 4;
      v116 = 0;
      v114 = &v118;
      v117 = 1;
      v11 = sub_B8E970(v8 + 64);
      if ( v11 )
      {
        while ( 1 )
        {
          v14 = *(_BYTE *)(v11 + 28) & 0x7F;
          v9 = (unsigned int)v14 - 49;
          if ( (unsigned int)v9 <= 2 )
            break;
          if ( v14 != 32
            || ((v68 = (char *)sub_1703870(
                                 (__int64)&v114,
                                 *(_QWORD *)(*(_QWORD *)(v11 + 56) + 8LL * *(unsigned int *)(v11 + 64) - 8)),
                 v9 = (__int64)v114,
                 v117)
              ? (v10 = (char *)v114 + 8 * HIDWORD(v115))
              : (v10 = (char *)v114 + 8 * (unsigned int)v115),
                v68 == v10 || *(_QWORD *)v68 < 0xFFFFFFFFFFFFFFFELL) )
          {
LABEL_15:
            v11 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v11 )
              goto LABEL_16;
          }
          else
          {
            v69 = v68 + 8;
            while ( 1 )
            {
              v9 = (__int64)v69;
              if ( v10 == v69 )
                break;
              v69 += 8;
              if ( *(_QWORD *)v9 < 0xFFFFFFFFFFFFFFFELL )
                goto LABEL_15;
            }
            v11 = *(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v11 )
              goto LABEL_16;
          }
        }
        v15 = (char *)sub_1703870((__int64)&v114, v11);
        v9 = (__int64)v114;
        if ( v117 )
          v10 = (char *)v114 + 8 * HIDWORD(v115);
        else
          v10 = (char *)v114 + 8 * (unsigned int)v115;
        if ( v15 != v10 && *(_QWORD *)v15 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v16 = v15 + 8;
          do
          {
            v9 = (__int64)v16;
            if ( v10 == v16 )
              break;
            v16 += 8;
          }
          while ( *(_QWORD *)v9 >= 0xFFFFFFFFFFFFFFFELL );
        }
        goto LABEL_15;
      }
LABEL_16:
      v17 = *(_QWORD *)(v8 + 104);
      v120 = 4;
      v122 = 1;
      v119 = &v123;
      v121 = 0;
      sub_7052B0((__int64 *)(v17 + 96), v17, v9, (__int64)v10, v12, v13);
      v22 = *(_QWORD *)(v8 + 128);
      if ( (*(_BYTE *)(v22 + 24) & 1) != 0 )
        v23 = sub_B96980(v22);
      else
        v23 = *(_QWORD *)(v22 + 24);
      sub_7052B0((__int64 *)(*(_QWORD *)(v8 + 104) + 96LL), *(_QWORD *)(v8 + 104), v18, v19, v20, v21);
      v24 = *(_QWORD *)(v8 + 104);
      v25 = v23 + 24LL * *(unsigned int *)(*(_QWORD *)(v8 + 128) + 16LL);
      sub_7052B0((__int64 *)(v24 + 96), v24, v26, v27, v28, v29);
      v33 = *(_QWORD *)(v8 + 128);
      if ( (*(_BYTE *)(v33 + 24) & 1) != 0 )
        v34 = sub_B96980(v33);
      else
        v34 = *(_QWORD *)(v33 + 24);
      for ( ; v34 != v25; v34 += 24 )
      {
        v35 = sub_1839D10(*(__int64 **)(v34 + 16), v24, (__int64)v30, v31, v32);
        v24 = *(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
            | ((unsigned __int8)*(_QWORD *)&byte_8[v35 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v35) & 7;
        v36 = (char *)sub_1703870((__int64)&v119, v24);
        if ( v122 )
        {
          v31 = HIDWORD(v120);
          v30 = (char *)v119 + 8 * HIDWORD(v120);
        }
        else
        {
          v31 = (unsigned int)v120;
          v30 = (char *)v119 + 8 * (unsigned int)v120;
        }
        if ( v36 != v30 && *(_QWORD *)v36 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v37 = v36 + 8;
          do
          {
            v31 = (__int64)v37;
            if ( v30 == v37 )
              break;
            v37 += 8;
          }
          while ( *(_QWORD *)v31 >= 0xFFFFFFFFFFFFFFFELL );
        }
      }
      if ( HIDWORD(v115) != v116 || HIDWORD(v120) != v121 )
      {
        v105 = &v114;
        v38 = *(_QWORD *)(a1 + 248);
        v105 = &v119;
        v124[0] = v38;
        v126 = &v128;
        v39 = _mm_loadh_ps((const double *)&v105);
        v110 = v124;
        v125 = v39;
        ptr = &v134;
        v124[1] = a1;
        v127 = 0x400000000LL;
        v129 = 0;
        v130 = 0;
        v131 = 0;
        v133 = 0x400000000LL;
        v40 = sub_B98F20(a2) + 8LL * (unsigned __int16)(*(_DWORD *)(a2 + 84) >> 13);
        v107 = (__int64 *)v40;
        v41 = (__int64 *)sub_B98F20(a2);
        v106 = (unsigned __int64 *)&v111;
        if ( (__int64 *)v40 != v41 )
        {
          v109 = a2;
          v42 = v110;
          while ( 1 )
          {
            while ( 1 )
            {
              v43 = (__int64 *)*v41;
              if ( HIDWORD(v115) == v116 && HIDWORD(v120) == v121 )
                goto LABEL_67;
              v44 = v43[1];
              if ( !v44 )
                goto LABEL_66;
              if ( (*(_WORD *)v44 & 0x1FF) != 0x6F )
                break;
              v45 = (_WORD *)sub_C94CC0((_QWORD *)v43[1]);
              if ( !v45 )
                goto LABEL_66;
              v46 = sub_B98AD0((__int64)v43);
              v49 = *v43;
              v105 = (void **)v46;
              v50 = (v49 >> 1) & 3;
              if ( v50 == 1 )
              {
                v49 &= 0xFFFFFFFFFFFFFFF8LL;
                v51 = v49;
              }
              else
              {
                v51 = 0;
                if ( v50 == 2 )
                {
                  v49 &= 0xFFFFFFFFFFFFFFF8LL;
                  v47 = *(unsigned int *)(v49 + 64);
                  v51 = *(_QWORD *)(*(_QWORD *)(v49 + 56) + 8 * v47 - 8);
                }
              }
              v52 = v126;
              if ( v126 != (char *)v126 + 8 * (unsigned int)v127 )
              {
                v108 = v41;
                v53 = (char *)v126 + 8 * (unsigned int)v127;
                v54 = (char *)v126;
                do
                {
                  v55 = v125.m128_u64[0];
                  v56 = *(_QWORD *)v54;
                  if ( *(_BYTE *)(v125.m128_u64[0] + 20) )
                  {
                    v49 = *(unsigned int *)(v125.m128_u64[0] + 12);
                    v47 = *(_QWORD *)v125.m128_u64[0];
                    v57 = *(_QWORD *)v125.m128_u64[0] + 8 * v49;
                    if ( *(_QWORD *)v125.m128_u64[0] != v57 )
                    {
                      v49 = *(_QWORD *)v125.m128_u64[0];
                      if ( *(_QWORD *)v47 == v56 )
                      {
LABEL_91:
                        v71 = *(_DWORD *)(v125.m128_u64[0] + 12) - 1;
                        *(_DWORD *)(v125.m128_u64[0] + 12) = v71;
                        *(_QWORD *)v49 = *(_QWORD *)(v47 + 8LL * v71);
                      }
                      else
                      {
                        while ( 1 )
                        {
                          v49 += 8;
                          if ( v57 == v49 )
                            break;
                          if ( v56 == *(_QWORD *)v49 )
                            goto LABEL_91;
                        }
                      }
                    }
                  }
                  else
                  {
                    v70 = (_QWORD *)sub_2236570(v125.m128_u64[0], v56);
                    if ( v70 )
                    {
                      *v70 = -2;
                      ++*(_DWORD *)(v55 + 16);
                    }
                  }
                  v54 += 8;
                }
                while ( v53 != v54 );
                v41 = v108;
              }
              LODWORD(v127) = 0;
              v129 = v109;
              if ( (*v45 & 0x1FF) == 0x35 )
              {
                if ( !v51 )
                {
                  v130 = 0;
                  sub_186F230(v42, (unsigned __int64)v45, v49, v47, (__int64)v52, v48);
                  goto LABEL_59;
                }
                v130 = 1;
                v131 = v51;
                LODWORD(v133) = 0;
                sub_186F640((__int64)v42, (__int64)v45, v49, v47, (__int64)v52, v48);
              }
              else
              {
                v130 = 0;
                sub_186F230(v42, (unsigned __int64)v45, v49, v47, (__int64)v52, v48);
                if ( !v51 )
                  goto LABEL_59;
              }
              v58 = v125.m128_u64[0];
              if ( *(_BYTE *)(v125.m128_u64[0] + 20) )
              {
                v59 = *(_QWORD **)v125.m128_u64[0];
                v60 = *(_QWORD *)v125.m128_u64[0] + 8LL * *(unsigned int *)(v125.m128_u64[0] + 12);
                if ( *(_QWORD *)v125.m128_u64[0] != v60 )
                {
                  v61 = *(_QWORD **)v125.m128_u64[0];
                  if ( v51 == *v59 )
                  {
LABEL_160:
                    v103 = *(_DWORD *)(v125.m128_u64[0] + 12) - 1;
                    v104 = v59[v103];
                    *(_DWORD *)(v125.m128_u64[0] + 12) = v103;
                    *v61 = v104;
                  }
                  else
                  {
                    while ( (_QWORD *)v60 != ++v61 )
                    {
                      if ( v51 == *v61 )
                        goto LABEL_160;
                    }
                  }
                }
              }
              else
              {
                v102 = (_QWORD *)sub_2236570(v125.m128_u64[0], v51);
                if ( v102 )
                {
                  *v102 = -2;
                  ++*(_DWORD *)(v58 + 16);
                }
              }
LABEL_59:
              if ( !v105 )
                goto LABEL_66;
              v62 = v125.m128_u64[1];
              v63 = v105[1];
              if ( !*(_BYTE *)(v125.m128_u64[1] + 20) )
                goto LABEL_149;
              v64 = *(void ***)v125.m128_u64[1];
              v65 = *(_QWORD *)v125.m128_u64[1] + 8LL * *(unsigned int *)(v125.m128_u64[1] + 12);
              v66 = *(_DWORD *)(v125.m128_u64[1] + 12);
              if ( *(_QWORD *)v125.m128_u64[1] == v65 )
                goto LABEL_66;
              v67 = *(void ***)v125.m128_u64[1];
              if ( v63 != *v64 )
              {
                do
                {
                  if ( (void **)v65 == ++v67 )
                    goto LABEL_66;
                }
                while ( v63 != *v67 );
              }
LABEL_152:
              v97 = (unsigned int)(v66 - 1);
              ++v41;
              v98 = v64[v97];
              *(_DWORD *)(v62 + 12) = v97;
              *v67 = v98;
              if ( v107 == v41 )
                goto LABEL_67;
            }
            v72 = sub_B98AD0(*v41);
            v75 = *v43;
            v108 = (__int64 *)v72;
            v76 = (v75 >> 1) & 3;
            if ( v76 == 1 )
            {
              v75 &= 0xFFFFFFFFFFFFFFF8LL;
              v77 = v75;
            }
            else
            {
              v77 = 0;
              if ( v76 == 2 )
              {
                v75 &= 0xFFFFFFFFFFFFFFF8LL;
                v77 = *(_QWORD *)(*(_QWORD *)(v75 + 56) + 8LL * *(unsigned int *)(v75 + 64) - 8);
              }
            }
            v78 = (void **)v126;
            v79 = (void **)v126;
            v105 = (void **)((char *)v126 + 8 * (unsigned int)v127);
            if ( v126 != v105 )
            {
              do
              {
                v80 = v125.m128_u64[0];
                v81 = *v79;
                if ( *(_BYTE *)(v125.m128_u64[0] + 20) )
                {
                  v75 = *(unsigned int *)(v125.m128_u64[0] + 12);
                  v78 = *(void ***)v125.m128_u64[0];
                  v82 = *(_QWORD *)v125.m128_u64[0] + 8 * v75;
                  if ( *(_QWORD *)v125.m128_u64[0] != v82 )
                  {
                    v75 = *(_QWORD *)v125.m128_u64[0];
                    if ( v81 == *v78 )
                    {
LABEL_135:
                      v95 = *(_DWORD *)(v125.m128_u64[0] + 12) - 1;
                      *(_DWORD *)(v125.m128_u64[0] + 12) = v95;
                      *(_QWORD *)v75 = v78[v95];
                    }
                    else
                    {
                      while ( 1 )
                      {
                        v75 += 8;
                        if ( v82 == v75 )
                          break;
                        if ( v81 == *(void **)v75 )
                          goto LABEL_135;
                      }
                    }
                  }
                }
                else
                {
                  v94 = (_QWORD *)sub_2236570(v125.m128_u64[0], v81);
                  if ( v94 )
                  {
                    *v94 = -2;
                    ++*(_DWORD *)(v80 + 16);
                  }
                }
                ++v79;
              }
              while ( v105 != v79 );
            }
            LODWORD(v127) = 0;
            v129 = 0;
            if ( (*(_WORD *)v44 & 0x1FF) != 0x35 )
            {
              v130 = 0;
              sub_186F230(v42, v44, v75, (__int64)v78, v73, v74);
              if ( v77 )
                goto LABEL_119;
              goto LABEL_125;
            }
            if ( !v77 )
            {
              v130 = 0;
              sub_186F230(v42, v44, v75, (__int64)v78, v73, v74);
              goto LABEL_125;
            }
            v83 = 0;
            v130 = 1;
            v131 = v77;
            LODWORD(v133) = 0;
            if ( !HIDWORD(v133) )
            {
              sub_2237220(v42 + 13, v42 + 15, 1, 4);
              v83 = 4LL * (unsigned int)v133;
            }
            *(_DWORD *)((char *)ptr + v83) = 0;
            LODWORD(v133) = v133 + 1;
            v84 = *(_WORD ***)(v44 + 16);
            v85 = *(_WORD ***)(v44 + 24);
            if ( v84 == v85 )
            {
              v85 = nullptr;
              v84 = nullptr;
            }
            v111 = v84;
            v86 = 0;
            v112 = 0;
            v113 = 0;
            while ( 1 )
            {
              if ( v85 == v84 )
                goto LABEL_117;
LABEL_111:
              v87 = v86 & 3;
              if ( (_DWORD)v87 )
                v84 = (_WORD **)sub_EF2B30((__int64)v106);
              v88 = *v84;
              if ( (**v84 & 0x1FF) == 0x35 )
                sub_186F640((__int64)v42, (__int64)v88, v87, (__int64)v78, v73, v74);
              else
                sub_186F230(v42, (unsigned __int64)v88, v87, (__int64)v78, v73, v74);
              ++*((_DWORD *)ptr + (unsigned int)v133 - 1);
              v86 = v112;
              if ( (v112 & 3) == 0 )
                break;
              if ( (v112 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
                sub_EF2960((__int64)v106);
              else
                sub_EF2750(v106, 1);
              v84 = v111;
              v86 = v112;
            }
            v84 = v111 + 1;
            v111 = v84;
            if ( v85 != v84 )
              goto LABEL_111;
LABEL_117:
            if ( v86 )
              goto LABEL_111;
            LODWORD(v133) = v133 - 1;
LABEL_119:
            v89 = v125.m128_u64[0];
            if ( *(_BYTE *)(v125.m128_u64[0] + 20) )
            {
              v90 = *(_QWORD **)v125.m128_u64[0];
              v91 = *(_QWORD *)v125.m128_u64[0] + 8LL * *(unsigned int *)(v125.m128_u64[0] + 12);
              if ( *(_QWORD *)v125.m128_u64[0] != v91 )
              {
                v92 = *(_QWORD **)v125.m128_u64[0];
                if ( v77 == *v90 )
                {
LABEL_157:
                  v100 = *(_DWORD *)(v125.m128_u64[0] + 12) - 1;
                  v101 = v90[v100];
                  *(_DWORD *)(v125.m128_u64[0] + 12) = v100;
                  *v92 = v101;
                }
                else
                {
                  while ( (_QWORD *)v91 != ++v92 )
                  {
                    if ( v77 == *v92 )
                      goto LABEL_157;
                  }
                }
              }
            }
            else
            {
              v99 = (_QWORD *)sub_2236570(v125.m128_u64[0], v77);
              if ( v99 )
              {
                *v99 = -2;
                ++*(_DWORD *)(v89 + 16);
              }
            }
LABEL_125:
            if ( !v108 )
              goto LABEL_66;
            v62 = v125.m128_u64[1];
            v63 = (void *)v108[1];
            if ( *(_BYTE *)(v125.m128_u64[1] + 20) )
            {
              v64 = *(void ***)v125.m128_u64[1];
              v93 = *(_QWORD *)v125.m128_u64[1] + 8LL * *(unsigned int *)(v125.m128_u64[1] + 12);
              v66 = *(_DWORD *)(v125.m128_u64[1] + 12);
              if ( *(_QWORD *)v125.m128_u64[1] != v93 )
              {
                v67 = *(void ***)v125.m128_u64[1];
                if ( v63 == *v64 )
                  goto LABEL_152;
                while ( (void **)v93 != ++v67 )
                {
                  if ( v63 == *v67 )
                    goto LABEL_152;
                }
              }
LABEL_66:
              if ( v107 == ++v41 )
                break;
            }
            else
            {
LABEL_149:
              v96 = (_QWORD *)sub_2236570(v62, v63);
              if ( !v96 )
                goto LABEL_66;
              *v96 = -2;
              ++v41;
              ++*(_DWORD *)(v62 + 16);
              if ( v107 == v41 )
                break;
            }
          }
        }
LABEL_67:
        if ( ptr != v110 + 15 )
          free(ptr);
        if ( v126 != v110 + 6 )
          free(v126);
      }
      if ( !v122 )
        free(v119);
      if ( !v117 )
        free(v114);
    }
  }
}

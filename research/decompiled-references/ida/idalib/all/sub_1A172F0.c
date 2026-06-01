void __fastcall sub_1A172F0(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __m128i *a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9,
        unsigned __int8 a10)
{
  __int64 v10; // r15
  __int64 *v11; // r14
  _DWORD *v12; // r13
  unsigned __int64 v13; // rbx
  _QWORD **v14; // r12
  __int64 v15; // rbp
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 *v18; // r12
  __int64 v19; // rsi
  __int64 v20; // rdx
  _DWORD *v21; // rcx
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // r8
  unsigned __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r8
  int v36; // r11d
  __int64 v37; // rax
  __int64 v38; // r11
  __int64 v39; // rsi
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // r9
  unsigned int v44; // eax
  __int64 v45; // rbp
  unsigned __int64 v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rdi
  char v49; // bl
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // r12
  _DWORD *v53; // rbx
  __int64 *v54; // rbp
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // r14
  unsigned __int64 v58; // r14
  _QWORD *v59; // rdi
  __int64 v60; // rsi
  unsigned __int64 v61; // r12
  __int64 v62; // rax
  _QWORD *v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  size_t v67; // rax
  __int64 v68; // rbx
  __int64 v69; // rax
  __int32 v70; // ebx
  unsigned __int64 v72; // rax
  unsigned __int64 v73; // rcx
  unsigned int v74; // eax
  __int64 v75; // r8
  __int64 v76; // r9
  unsigned __int64 v77; // r9
  __int64 v78; // rax
  __int64 v79; // rax
  char v80; // dl
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // r8
  _DWORD *v84; // rcx
  __int64 v85; // rdi
  bool v86; // al
  int v87; // r8d
  bool v88; // al
  __int64 v89; // rdi
  unsigned int v90; // edx
  int v91; // edx
  __int64 v92; // rcx
  __int64 v93; // r8
  unsigned __int64 v94; // rax
  _WORD *v95; // rax
  __int64 v96; // rax
  unsigned __int64 v97; // r8
  unsigned __int64 v98; // rcx
  __int64 v99; // rdi
  __int64 v100; // r8
  char v101; // cl
  bool v102; // al
  __int32 v103; // eax
  __int64 v104; // rbp
  __int64 v105; // rbx
  int v106; // eax
  __int64 v107; // r12
  __int64 v108; // rax
  __int64 v109; // r15
  char v110; // r13
  __int64 v111; // r14
  char v112; // al
  unsigned __int8 v113; // al
  __int32 v114; // eax
  __int64 v115; // r13
  __int64 v116; // rsi
  unsigned __int64 v117; // rax
  __int64 v118; // rdi
  _DWORD *v119; // rsi
  __int64 v120; // rsi
  __int64 v121; // rax
  __int64 v122; // rcx
  unsigned __int8 v123; // bl
  char v124; // bl
  unsigned __int64 v125; // rax
  unsigned __int8 v126; // dl
  int v127; // eax
  __int64 v128; // rbx
  __int64 v129; // rcx
  __int64 v130; // r8
  _QWORD *v131; // rbx
  __int64 v132; // rbp
  __int64 v133; // r12
  __int64 v134; // r15
  unsigned int v135; // eax
  __int64 v136; // r8
  __int64 v137; // r9
  __int64 v138; // rcx
  __int64 v139; // r8
  unsigned __int64 v140; // rax
  bool v141; // al
  __int64 v142; // rax
  __int64 v143; // rcx
  __int64 v144; // r8
  __int64 v145; // r9
  __int64 v146; // rdx
  __int64 v147; // rbp
  __int64 v148; // rax
  _QWORD *v149; // rax
  bool v150; // al
  __int64 *v152; // [rsp+8h] [rbp-1F0h]
  __int64 v154; // [rsp+10h] [rbp-1E8h]
  __int64 v155; // [rsp+18h] [rbp-1E0h]
  _QWORD *v156; // [rsp+20h] [rbp-1D8h]
  __int64 v157; // [rsp+20h] [rbp-1D8h]
  unsigned __int64 v158; // [rsp+28h] [rbp-1D0h]
  _DWORD *v159; // [rsp+28h] [rbp-1D0h]
  __int64 v160; // [rsp+28h] [rbp-1D0h]
  __int64 *v161; // [rsp+30h] [rbp-1C8h]
  unsigned int v162; // [rsp+38h] [rbp-1C0h]
  bool v163; // [rsp+38h] [rbp-1C0h]
  unsigned __int64 v164; // [rsp+38h] [rbp-1C0h]
  _DWORD *v165; // [rsp+38h] [rbp-1C0h]
  _DWORD *v166; // [rsp+38h] [rbp-1C0h]
  char v167; // [rsp+38h] [rbp-1C0h]
  _DWORD *v168; // [rsp+38h] [rbp-1C0h]
  __int64 v169; // [rsp+40h] [rbp-1B8h]
  __int64 v170; // [rsp+40h] [rbp-1B8h]
  char *v171; // [rsp+48h] [rbp-1B0h]
  unsigned int v172; // [rsp+48h] [rbp-1B0h]
  unsigned __int8 v173; // [rsp+48h] [rbp-1B0h]
  _DWORD *v174; // [rsp+48h] [rbp-1B0h]
  __int64 v175; // [rsp+50h] [rbp-1A8h]
  __int64 v176; // [rsp+50h] [rbp-1A8h]
  __int64 *v177; // [rsp+58h] [rbp-1A0h]
  __int64 v178; // [rsp+58h] [rbp-1A0h]
  __int64 v179; // [rsp+58h] [rbp-1A0h]
  _DWORD *v180; // [rsp+68h] [rbp-190h] BYREF
  unsigned __int64 v181; // [rsp+70h] [rbp-188h] BYREF
  unsigned __int64 v182; // [rsp+78h] [rbp-180h] BYREF
  __m128i v183; // [rsp+80h] [rbp-178h] BYREF
  _BYTE v184[16]; // [rsp+90h] [rbp-168h] BYREF
  __int64 v185; // [rsp+A0h] [rbp-158h]
  __m128i ptr; // [rsp+120h] [rbp-D8h] BYREF
  _BYTE v187[8]; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v188; // [rsp+138h] [rbp-C0h]
  __int64 v189; // [rsp+140h] [rbp-B8h]
  __int64 v190; // [rsp+148h] [rbp-B0h]
  __int64 v191; // [rsp+150h] [rbp-A8h]

  v10 = a2;
  v11 = (__int64 *)a5;
  v12 = a1;
  v13 = a6;
  v156 = *(_QWORD **)(a2 + 248);
  if ( !(_DWORD)a6 )
  {
LABEL_8:
    v155 = *(_QWORD *)(a3 + 16);
    v18 = (__int64 *)(v155 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (*(_BYTE *)(*(_QWORD *)(v155 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
      || (v19 = v13, (unsigned __int8)sub_BFE470((_DWORD **)v11, v13)) )
    {
      *a1 = 1;
      return;
    }
    *a1 = 2;
    v180 = nullptr;
    if ( v13 == 1 )
    {
      v21 = (_DWORD *)*v11;
      v40 = *(_QWORD *)(v10 + 232);
      v180 = (_DWORD *)*v11;
      if ( (*(_BYTE *)(v40 + 2) & 4) != 0 )
      {
        v54 = *(__int64 **)(v10 + 736);
        v164 = *((_QWORD *)v21 + 1);
        v19 = (unsigned int)sub_EEB7E0((unsigned __int64)v21, v13, *(double *)a7.m128_u64);
        if ( (unsigned __int8)sub_19E21D0(v54, v19, v155, v164, (unsigned __int64 *)&v180, 1u, a7, a8)
          || (v19 = v155,
              (unsigned __int8)sub_19DC760(*(__int64 **)(v10 + 736), v155, (unsigned __int64 *)&v180, 1u, a7, a8)) )
        {
          v21 = v180;
          *v11 = (__int64)v180;
        }
        else
        {
          v21 = v180;
        }
      }
      if ( (*(_WORD *)v21 & 0x1FF) == 0x35 )
      {
        if ( a4->m128i_i8[0] )
        {
          sub_1A16120(v10, a3, a4, (__int64)v21, (__int64)a1, a10, a7, a8);
          return;
        }
        v169 = 0;
        goto LABEL_34;
      }
      v169 = *((_QWORD *)v21 + 1);
      v23 = a4->m128i_u8[0];
      if ( !a4->m128i_i8[0] )
        goto LABEL_34;
    }
    else
    {
      v169 = 0;
      v23 = a4->m128i_u8[0];
      if ( !a4->m128i_i8[0] )
        goto LABEL_34;
    }
    v24 = *v18;
    v20 = *(_QWORD *)(v10 + 232);
    v25 = *v18;
    if ( (*(_BYTE *)(v20 + 1) & 8) != 0 || v23 != 3 )
    {
LABEL_35:
      v38 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v39 = *(unsigned __int8 *)(v38 + 16);
      if ( (unsigned int)(v39 - 43) <= 1 )
      {
        if ( v13 == 1 )
        {
          v53 = (_DWORD *)*v11;
          if ( (*(_WORD *)*v11 & 0x1FF) == 0x35 )
          {
            *v12 = 0;
            v12[46] = 1;
          }
          else
          {
            v55 = *(_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF0LL);
            v56 = (unsigned int)*(unsigned __int8 *)(v55 + 16) - 43;
            if ( (unsigned int)v56 > 1 )
              goto LABEL_84;
            while ( 1 )
            {
              v57 = *(_QWORD *)(v55 + 32);
              if ( (*(_BYTE *)(v55 + 18) & 0x10) == 0 )
                break;
              v58 = v57 & 0xFFFFFFFFFFFFFFF0LL;
              v55 = *(_QWORD *)v58;
              v56 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v58 + 16LL) - 43;
              if ( (unsigned int)v56 > 1 )
LABEL_84:
                v55 = sub_F63050(v55, v39, v56, v21);
            }
            v59 = *(_QWORD **)(v10 + 248);
            v60 = *(_QWORD *)(v55 + 32);
            v181 = 0;
            v61 = sub_A725A0(v59, v60, (__int64 *)&v181, (__int64)v21, v25);
            v62 = sub_1E5F5F0(v10);
            v63 = *(_QWORD **)(v10 + 248);
            v183.m128i_i64[0] = 0;
            v182 = v62;
            ptr.m128i_i64[0] = sub_A725A0(v63, v62, v183.m128i_i64, v64, v65);
            if ( !(unsigned __int8)sub_1A0D460(v10, (__int64)v53, (__int64 *)&v182, (unsigned __int64 *)&ptr, v61, v12) )
              sub_1A0E5F0(
                (_QWORD *)v10,
                a3,
                (__int64)a4,
                (unsigned __int64)v53,
                v57,
                v61,
                a7,
                v181,
                v182,
                ptr.m128i_i64[0],
                v183.m128i_u64[0],
                v12,
                a9);
          }
        }
        else
        {
          *v12 = 0;
          v12[46] = 0;
        }
        return;
      }
      v41 = a4->m128i_u8[0];
      if ( v41 == 4 || (LOBYTE(v20) = v13 == 0, v163 = v13 == 0 && v41 == 0) )
      {
        sub_1A15F40(v10, a3, a4->m128i_i8, v12, 0, (__m128i)a7, *(double *)a8.m128_u64);
        return;
      }
      if ( v41 != 3 )
      {
        if ( (unsigned __int8)(v39 - 2) > 4u || (_BYTE)v39 == 3 )
        {
          v42 = *(_QWORD *)(v10 + 232);
          v43 = 0;
          if ( (*(_BYTE *)(v42 + 107) & 4) != 0 )
          {
            v44 = *(_DWORD *)a3;
            LOBYTE(v43) = *(_DWORD *)a3 == 19;
            LOBYTE(v44) = *(_DWORD *)a3 == 1;
            v43 = v44 | (unsigned int)v43;
          }
          if ( (*(_BYTE *)(v42 + 47) & 0x20) != 0 && (_BYTE)v39 == 13 )
          {
            v158 = (unsigned __int64)v180;
            if ( ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) != 0x1EC )
            {
              if ( (*(_BYTE *)(v42 + 1) & 8) == 0 )
              {
                if ( !(_BYTE)v43 )
                  goto LABEL_92;
                goto LABEL_55;
              }
              goto LABEL_105;
            }
            v173 = v43;
            if ( (unsigned __int8)sub_C3EA40((unsigned __int64)v180, *(_QWORD *)(v10 + 248), nullptr, v42, v25, v43)
              || (v43 = v173,
                  v81 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v158 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL),
                  *(_BYTE *)(v81 + 16) == 13)
              && ((*(_WORD *)(v81 + 18) >> 3) & 0x1FF) == 0x1EC )
            {
              ptr.m128i_i32[0] = 35;
LABEL_134:
              ptr.m128i_i64[1] = v155;
              sub_1A0C040((__int64)(v12 + 2), &ptr);
              return;
            }
            v42 = *(_QWORD *)(v10 + 232);
          }
          if ( (*(_BYTE *)(v42 + 1) & 8) == 0 )
          {
            v158 = (unsigned __int64)v180;
            if ( !(_BYTE)v43 )
            {
LABEL_90:
              if ( (*(_BYTE *)(v42 + 47) & 0x20) == 0 )
              {
LABEL_135:
                ptr.m128i_i32[0] = 22;
                ptr.m128i_i64[1] = v155;
                sub_1A0C040((__int64)(v12 + 2), &ptr);
                sub_1A0C0E0(v10, (__int64)v12, (unsigned int *)a3, v82, v83);
                return;
              }
              v24 = *v18;
LABEL_92:
              v66 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL);
              if ( *(_BYTE *)(v66 + 16) == 13 && ((*(_WORD *)(v66 + 18) >> 3) & 0x1FD) == 0x1ED
                || (v154 = v42,
                    v67 = j__strlen("cl_intel_device_side_avc_motion_estimation"),
                    sub_FF8450(v10 + 200, (__int64)"cl_intel_device_side_avc_motion_estimation", v67, v154))
                && (v68 = *v18, sub_1A0B100(*v18))
                && ((v69 = *(_QWORD *)(*(_QWORD *)(v68 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v69 + 16) != 13)
                 || (((*(_WORD *)(v69 + 18) >> 3) + 476) & 0x1FB) != 0) )
              {
                sub_C3EB00((__int64)&ptr, v158, *(_QWORD *)(v10 + 248), nullptr, v25, v43);
                if ( v187[0] )
                {
                  v70 = ptr.m128i_i32[2];
                  if ( ptr.m128i_i32[2] <= 0x40u ? ptr.m128i_i64[0] == 0 : v70 == (unsigned int)sub_2206780(&ptr) )
                  {
                    sub_98E4B0((__int64)&ptr);
                    ptr.m128i_i32[0] = 36;
                    ptr.m128i_i64[1] = v155;
                    sub_1A0C040((__int64)(v12 + 2), &ptr);
                    return;
                  }
                }
                sub_98E4B0((__int64)&ptr);
              }
              goto LABEL_135;
            }
LABEL_55:
            v45 = 0;
            v46 = *(_QWORD *)(v158 + 8);
            v47 = sub_A72040(*(_QWORD **)(v10 + 248), v46);
            if ( v47 )
            {
              v45 = *(_QWORD *)(v47 + 32);
              v163 = 1;
              v46 = sub_A70010(*(_QWORD *)(v10 + 248), v45);
            }
            v48 = *(_QWORD *)(v10 + 736);
            v182 = 0;
            v49 = sub_1A86660(v48, v46, *(_QWORD *)(a3 + 16), &v182);
            if ( v49 )
            {
              v50 = sub_1A0B620(a3);
              if ( v50 && (*(_BYTE *)(v50 + 97) & 0x10) != 0 )
                v49 = ((*(_DWORD *)(v50 + 96) >> 13) & 0x7F) != 4;
              if ( v163 )
              {
                ptr.m128i_i32[0] = 6;
                ptr.m128i_i64[1] = 0;
                sub_1BCD530(v187);
                if ( (ptr.m128i_i32[0] & 0x7FFFFFFF) == 3 )
                  sub_1BD22E0(v187);
                ptr.m128i_i32[0] &= 0x80000000;
                sub_1BCD530(v187);
                v118 = *(_QWORD *)(v10 + 248);
                v187[0] = 2;
                v117 = sub_A70010(v118, v45);
              }
              else
              {
                if ( (*(_BYTE *)(v158 + 1) & 6) == 0 )
                {
LABEL_63:
                  ptr.m128i_i64[1] = *(_QWORD *)(a3 + 16);
                  ptr.m128i_i32[0] = (v49 == 0) + 30;
                  sub_1A0C040((__int64)(v12 + 2), &ptr);
                  return;
                }
                ptr.m128i_i32[0] = 6;
                ptr.m128i_i64[1] = 0;
                sub_1BCD530(v187);
                if ( (ptr.m128i_i32[0] & 0x7FFFFFFF) == 3 )
                  sub_1BD22E0(v187);
                ptr.m128i_i32[0] &= 0x80000000;
                sub_1BCD530(v187);
                v187[0] = 1;
                v116 = *(_QWORD *)(v10 + 248);
                v183.m128i_i64[0] = *(_QWORD *)(v158 + 8);
                v117 = sub_F67970(&v183, v116);
              }
              sub_1A0BA10((__int64)v12, &ptr, v117, 0);
              if ( (ptr.m128i_i32[0] & 0x7FFFFFFF) == 3 )
                sub_1BD22E0(v187);
              goto LABEL_63;
            }
            v42 = *(_QWORD *)(v10 + 232);
            v158 = (unsigned __int64)v180;
            goto LABEL_90;
          }
          v25 = *v18;
          v72 = *(_QWORD *)(*v18 + 8) & 0xFFFFFFFFFFFFFFF0LL;
          v38 = *(_QWORD *)v72;
          v39 = *(unsigned __int8 *)(*(_QWORD *)v72 + 16LL);
          if ( (_BYTE)v39 != 48 )
          {
LABEL_105:
            if ( (*(_BYTE *)(v42 + 89) & 1) != 0 )
            {
              if ( v13 > 1 )
              {
                if ( (_BYTE)v39 == 58 )
                {
                  if ( (v169 & 0xFFFFFFFFFFFFFFF0LL) == 0 || (v39 = v155, !sub_1A0A350(v169, v155)) )
                  {
                    ptr.m128i_i64[0] = (__int64)v187;
                    ptr.m128i_i64[1] = 0x600000000LL;
                    v161 = &v11[v13];
                    if ( v11 != v161 )
                    {
                      v152 = v11;
                      v174 = v12;
                      v176 = v10;
                      v177 = v11;
                      do
                      {
                        v104 = *v152;
                        v105 = *(_QWORD *)(*(_QWORD *)(*v152 + 8) & 0xFFFFFFFFFFFFFFF0LL);
                        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v105 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 58 )
                        {
                          if ( *(_BYTE *)(v105 + 16) != 58 )
                            v105 = sub_F63050(*(_QWORD *)(*(_QWORD *)(*v152 + 8) & 0xFFFFFFFFFFFFFFF0LL), v39, v20, v42);
                          v106 = *(_DWORD *)(v105 + 20);
                          if ( v106 )
                          {
                            v107 = 0;
                            v170 = (unsigned int)(v106 - 1);
                            while ( 1 )
                            {
                              v115 = v156[2340];
                              v183.m128i_i32[2] = sub_AAC1F0((__int64)v156, v115, v20, v42, v25);
                              if ( v183.m128i_i32[2] <= 0x40u )
                                v183.m128i_i64[0] = v107;
                              else
                                sub_2205470(&v183, v107, 0);
                              v108 = sub_C0C5D0(v156, (__int64)&v183, v115, 0);
                              v39 = (__int64)v156;
                              v109 = *(_QWORD *)(v105 + 32);
                              v110 = *(_BYTE *)(v104 + 1);
                              v160 = v108;
                              v111 = sub_EEE9A0(32, v156, 8u);
                              *(_WORD *)v111 = *(_WORD *)v111 & 0xFE00 | 0x7B;
                              if ( unk_2CD7484 )
                                sub_EE9B50(123);
                              v112 = *(_BYTE *)(v111 + 1);
                              *(_QWORD *)(v111 + 8) = v109;
                              *(_BYTE *)(v111 + 2) &= 0xF8u;
                              *(_QWORD *)(v111 + 16) = v104;
                              *(_DWORD *)(v111 + 4) = 0;
                              *(_BYTE *)(v111 + 1) = v110 & 0x3E | v112 & 1;
                              *(_QWORD *)(v111 + 24) = v160;
                              v113 = sub_B62950(v111);
                              *(_BYTE *)(v111 + 1) = (v113 << 6) | *(_BYTE *)(v111 + 1) & 0x3F;
                              *(_BYTE *)(v111 + 2) = *(_BYTE *)(v111 + 2) & 0xF8 | (v113 >> 2) & 7;
                              v42 = ptr.m128i_u32[2];
                              v114 = ptr.m128i_i32[2];
                              if ( ptr.m128i_i32[3] <= (unsigned __int32)ptr.m128i_i32[2] )
                              {
                                v39 = v111;
                                sub_14B7B40((__int64)&ptr, v111);
                              }
                              else
                              {
                                v20 = ptr.m128i_i64[0];
                                *(_QWORD *)(ptr.m128i_i64[0] + 8LL * ptr.m128i_u32[2]) = v111;
                                ptr.m128i_i32[2] = v114 + 1;
                              }
                              if ( v183.m128i_i32[2] > 0x40u && v183.m128i_i64[0] )
                                operator delete[]((void *)v183.m128i_i64[0]);
                              if ( v107 == v170 )
                                break;
                              ++v107;
                            }
                          }
                        }
                        else
                        {
                          v42 = ptr.m128i_u32[2];
                          v103 = ptr.m128i_i32[2];
                          if ( ptr.m128i_i32[3] <= (unsigned __int32)ptr.m128i_i32[2] )
                          {
                            v39 = *v152;
                            sub_14B7B40((__int64)&ptr, *v152);
                          }
                          else
                          {
                            v20 = ptr.m128i_i64[0];
                            *(_QWORD *)(ptr.m128i_i64[0] + 8LL * ptr.m128i_u32[2]) = v104;
                            ptr.m128i_i32[2] = v103 + 1;
                          }
                        }
                        ++v152;
                      }
                      while ( v161 != v152 );
                      v12 = v174;
                      v10 = v176;
                      v11 = v177;
                    }
                    v131 = *(_QWORD **)(v10 + 248);
                    v132 = ptr.m128i_i64[0];
                    v133 = ptr.m128i_u32[2];
                    v134 = sub_EEE9A0(64, v156, 8u);
                    sub_C0B340(v134, v131, 0, v132, v133, 0);
                    *v11 = v134;
                    v183.m128i_i32[0] = 16;
                    v183.m128i_i64[1] = v155;
                    sub_1A0C040((__int64)(v12 + 2), &v183);
                    if ( (_BYTE *)ptr.m128i_i64[0] != v187 )
                      free((void *)ptr.m128i_i64[0]);
                    return;
                  }
                }
LABEL_108:
                *v12 = 0;
                v12[46] = 25;
                return;
              }
            }
            else if ( v13 > 1 )
            {
              goto LABEL_108;
            }
            if ( (*(_WORD *)*v11 & 0x1FF) == 0x35 )
            {
              *v12 = 0;
              v12[46] = 26;
              return;
            }
            if ( (v169 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
            {
              v91 = (int)v180;
              goto LABEL_160;
            }
            v121 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v169 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
            v122 = *(unsigned __int8 *)(v121 + 16);
            if ( (_BYTE)v122 != 48 )
            {
              v91 = (int)v180;
              if ( (_BYTE)v122 == 13
                && ((*(_WORD *)(v121 + 18) >> 3) & 0x1FF) == 0x1E8
                && (_BYTE)v39 == 13
                && ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) == 0x1B4
                && !a4->m128i_i8[0] )
              {
                v123 = *((_BYTE *)v180 + 1);
                ptr.m128i_i32[0] = 6;
                ptr.m128i_i64[1] = 0;
                sub_1BCD530(v187);
                v124 = (v123 >> 1) & 3;
                if ( (ptr.m128i_i32[0] & 0x7FFFFFFF) == 3 )
                  sub_1BD22E0(v187);
                ptr.m128i_i32[0] &= 0x80000000;
                sub_1BCD530(v187);
                v188 = v169;
                if ( v124 )
                  v187[0] = 1;
                v187[1] = 15;
                v189 = v169;
                v190 = v155;
                v191 = v155;
                sub_1A0BA10((__int64)v12, &ptr, v155, 0);
                if ( (ptr.m128i_i32[0] & 0x7FFFFFFF) == 3 )
                  sub_1BD22E0(v187);
                return;
              }
LABEL_160:
              sub_1BFA460((unsigned int)&v183, v10, v91, v155, 1, 0, 0, a4->m128i_i8[1] > 3u, v43);
              if ( (v183.m128i_i32[0] & 0x7FFFFFFF) == 0 )
              {
                if ( v184[1] != 25 )
                {
LABEL_162:
                  sub_1A0BA10((__int64)v12, &v183, v155, a9);
                  sub_1A0C0E0(v10, (__int64)v12, (unsigned int *)a3, v92, v93);
                  goto LABEL_163;
                }
                v125 = sub_1A0B620(a3);
                v126 = v184[0] - 1;
                if ( v125 && (*(_BYTE *)(v125 + 97) & 0x10) != 0 )
                {
                  LOBYTE(v13) = ((*(_DWORD *)(v125 + 96) >> 13) & 0x7F) != 4;
                  if ( v126 > 1u )
                  {
LABEL_246:
                    v127 = ((int)((_DWORD)v13 << 31) >> 31) + 31;
LABEL_247:
                    ptr.m128i_i32[0] = v127;
                    ptr.m128i_i64[1] = v155;
                    sub_1A0C040((__int64)(v12 + 2), &ptr);
                    goto LABEL_163;
                  }
                }
                else
                {
                  if ( v126 > 1u )
                  {
                    v127 = 30;
                    goto LABEL_247;
                  }
                  LODWORD(v13) = 1;
                }
                ptr.m128i_i32[0] = 6;
                ptr.m128i_i64[1] = 0;
                sub_1BCD530(v187);
                if ( (ptr.m128i_i32[0] & 0x7FFFFFFF) == 3 )
                  sub_1BD22E0(v187);
                ptr.m128i_i32[0] &= 0x80000000;
                sub_1BCD530(v187);
                v189 = v185;
                v187[0] = v184[0];
                v190 = v185;
                v191 = v185;
                sub_1A0BA10((__int64)v12, &ptr, v185, 0);
                if ( (ptr.m128i_i32[0] & 0x7FFFFFFF) == 3 )
                  sub_1BD22E0(v187);
                goto LABEL_246;
              }
              if ( (v183.m128i_i32[0] & 0x7FFFFFFF) != 5 )
                goto LABEL_162;
              v119 = v180;
              if ( *((_QWORD *)v180 + 1) == v156[2385] )
              {
                if ( !sub_1BE7B70(v10, v180, v155, 0, &ptr, 0) )
                {
                  *v12 = 0;
                  v12[46] = 12;
                  goto LABEL_163;
                }
                v119 = v180;
              }
              if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v119 + 1)
                                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 25 > 1
                || (*(_WORD *)v119 & 0x1FF) != 0x47
                || (v120 = *((_QWORD *)v119 + 2), (*(_BYTE *)(v120 + 28) & 0x7Fu) - 34 > 5)
                || (unsigned __int8)sub_1BE0140(v10, v120, 0, 0) )
              {
                *v12 = 0;
                v12[46] = 23;
              }
              else
              {
                *v12 = 0;
                v12[46] = 37;
              }
LABEL_163:
              if ( (v183.m128i_i32[0] & 0x7FFFFFFF) == 3 )
                sub_1BD22E0(v184);
              return;
            }
            if ( *(_BYTE *)(v25 + 16) != 7 && ((_BYTE)v39 != 7 || (v25 = sub_F63050(v25, v39, v20, v122)) == 0) )
            {
LABEL_268:
              sub_1A0CC50(v10, v155, a4, (unsigned __int64)v180, v12, a9, a7);
              sub_1A0C0E0(v10, (__int64)v12, (unsigned int *)a3, v138, v139);
              return;
            }
            v128 = *(_QWORD *)(v25 + 32);
            v157 = v25;
            if ( !sub_1A0A350(v169, v128) )
            {
              v135 = sub_EEB7E0((unsigned __int64)v180, v128, *(double *)a7.m128_u64);
              if ( !(unsigned __int8)sub_183BD10(v10, v135, v169, v128, v136, v137) )
                goto LABEL_268;
              v128 = *(_QWORD *)(v157 + 32);
            }
            sub_1A0CC50(v10, v128, a4, (unsigned __int64)v180, v12, a9, a7);
            sub_1A0C0E0(v10, (__int64)v12, (unsigned int *)a3, v129, v130);
            if ( *v12 )
            {
              ptr.m128i_i32[0] = 13;
              ptr.m128i_i64[1] = *(_QWORD *)(a3 + 16);
              sub_1A0C040((__int64)(v12 + 2), &ptr);
            }
            return;
          }
          if ( a4->m128i_i8[0] )
          {
            if ( a4->m128i_i8[0] != 2 )
              goto LABEL_115;
            if ( !sub_1A0A350(v169, v155) )
            {
              v73 = (unsigned __int64)v180;
              if ( !v180 )
              {
LABEL_116:
                sub_1A0CC50(v10, v155, a4, v73, v12, a9, a7);
                return;
              }
              v74 = sub_EEB7E0((unsigned __int64)v180, v155, *(double *)a7.m128_u64);
              if ( !(unsigned __int8)sub_183BD10(v10, v74, v169, v155, v75, v76) )
              {
LABEL_115:
                v73 = (unsigned __int64)v180;
                goto LABEL_116;
              }
            }
          }
          sub_1A24D50(v10, a3, (_DWORD)a4, (_DWORD)v11, v13, v155, (__int64)v12, 0);
          return;
        }
        v51 = sub_A72040(v156, v155);
        v52 = v51;
        if ( !v180 )
        {
LABEL_124:
          v79 = *(_QWORD *)(v10 + 232);
LABEL_125:
          v80 = *(_BYTE *)(v79 + 1);
LABEL_126:
          if ( v80 >= 0 || a9 || a4->m128i_i8[0] )
          {
            if ( (unsigned __int8)sub_F57EE0(*(_QWORD *)(*(_QWORD *)(v52 + 32) & 0xFFFFFFFFFFFFFFF0LL)) )
            {
              *v12 = 0;
              v12[46] = 3;
            }
            else
            {
              v102 = sub_1A0A130(*(_QWORD *)(v52 + 32), v156);
              *v12 = 0;
              if ( v102 )
                v12[46] = 4;
              else
                v12[46] = 2;
            }
          }
          else
          {
            sub_1A219C0(v10, a3, (_DWORD)a4, (_DWORD)v11, v13, (_DWORD)v12, 1, 0);
          }
          return;
        }
        if ( *(_BYTE *)(v51 + 16) == 6 )
        {
          *v12 = 0;
          v12[46] = 34;
          return;
        }
        switch ( sub_1A0A380((__int64)v180, v51) )
        {
          case 0LL:
            ptr.m128i_i32[0] = 23;
            ptr.m128i_i64[1] = *(_QWORD *)(a3 + 16);
            sub_1A0C040((__int64)(v12 + 2), &ptr);
            return;
          case 1LL:
            *v12 = 0;
            v12[46] = 5;
            return;
          case 2LL:
            *v12 = 0;
            v12[46] = 6;
            return;
          case 3LL:
            *v12 = 0;
            v12[46] = 7;
            return;
          case 4LL:
            *v12 = 0;
            v12[46] = 9;
            return;
          case 5LL:
            *v12 = 0;
            v12[46] = 8;
            return;
          default:
            v79 = *(_QWORD *)(v10 + 232);
            v84 = v180;
            if ( (*(_BYTE *)(v79 + 89) & 1) == 0 )
              goto LABEL_270;
            if ( !v180 )
              goto LABEL_125;
            if ( (unsigned int)*(unsigned __int8 *)(v52 + 16) - 2 > 1 )
              goto LABEL_152;
            v85 = *(_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF0LL);
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v85 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 3 )
            {
              v140 = sub_F56FF0(v85, (__int64)v156);
              v168 = v180;
              v141 = sub_1A0A350(v155, v140);
              v84 = v168;
              if ( !v141 )
              {
LABEL_270:
                if ( !v84 )
                  goto LABEL_124;
                v87 = *(unsigned __int8 *)(v52 + 16);
                goto LABEL_141;
              }
            }
            else
            {
              v165 = v180;
              v86 = sub_1A0A350(v155, *(_QWORD *)(a3 + 16));
              v84 = v165;
              if ( !v86 )
              {
LABEL_141:
                if ( (unsigned int)(v87 - 2) <= 1 )
                {
                  v166 = v84;
                  v88 = sub_1A0A350(*((_QWORD *)v84 + 1), *(_QWORD *)(a3 + 16));
                  v84 = v166;
                  if ( v88 )
                  {
                    v89 = a3;
                    while ( 1 )
                    {
                      v90 = *(_DWORD *)v89;
                      if ( *(_DWORD *)v89 == 6 )
                        break;
                      if ( v90 <= 6 )
                      {
                        if ( v90 )
                          goto LABEL_151;
                        v94 = sub_1A0B620(v89);
                        v84 = v166;
                        v88 = (*(_BYTE *)(v94 + 28) & 0x7F) == 46;
                        goto LABEL_148;
                      }
                      if ( v90 != 7 )
                      {
                        if ( v90 != 16 )
                          goto LABEL_151;
LABEL_148:
                        if ( !v88 )
                          goto LABEL_151;
                        goto LABEL_149;
                      }
                      v89 = *(_QWORD *)(v89 + 8);
                      if ( !v89 )
                        goto LABEL_151;
                    }
                    if ( *(_BYTE *)(v89 + 40) )
                      goto LABEL_149;
                  }
                }
LABEL_151:
                v79 = *(_QWORD *)(v10 + 232);
LABEL_152:
                v80 = *(_BYTE *)(v79 + 1);
                if ( (v80 & 8) != 0 )
                {
                  if ( *(_DWORD *)a3 == 6 && (*(_WORD *)v84 & 0x1FF) == 0x35 )
                  {
                    sub_1A16120(v10, a3, a4, (__int64)v84, (__int64)v12, a10, a7, a8);
                    ptr.m128i_i32[0] = 29;
                    goto LABEL_134;
                  }
                  goto LABEL_126;
                }
                v167 = *(_BYTE *)(v79 + 1);
                v159 = v84;
                v95 = (_WORD *)sub_BFB9F0((__int64)v84);
                v80 = v167;
                if ( (*v95 & 0x1FF) != 0x4C
                  || (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v159 + 1)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
                                     - 2) > 4u )
                {
                  goto LABEL_126;
                }
                v96 = sub_A72040(v156, *((_QWORD *)v159 + 1));
                v98 = v52 & 0xFFFFFFFFFFFFFFF0LL;
                if ( *(_QWORD *)&byte_8[v52 & 0xFFFFFFFFFFFFFFF0LL] == *(_QWORD *)&byte_8[v96 & 0xFFFFFFFFFFFFFFF0LL]
                  || (v99 = *(_QWORD *)&byte_8[*(_QWORD *)(v96 + 32) & 0xFFFFFFFFFFFFFFF0LL],
                      v100 = *(_QWORD *)&byte_8[*(_QWORD *)(v52 + 32) & 0xFFFFFFFFFFFFFFF0LL],
                      v101 = v100 | *(_QWORD *)(v52 + 32),
                      v97 = v100 & 0xFFFFFFFFFFFFFFF8LL,
                      v98 = v97 | v101 & 7,
                      v98 == (v99 & 0xFFFFFFFFFFFFFFF8LL
                            | ((unsigned __int8)v99 | (unsigned __int8)*(_QWORD *)(v96 + 32)) & 7))
                  && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v96 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                   - 2 <= 1
                  && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v52 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 5 )
                {
                  if ( !(unsigned __int8)sub_C01160((unsigned __int64)v180, *(_QWORD *)(v10 + 248), 1, v98, v97) )
                  {
                    ptr.m128i_i32[0] = 28;
                    goto LABEL_134;
                  }
                  *v12 = 0;
                  v12[46] = 11;
                }
                else
                {
                  *v12 = 0;
                  v12[46] = 10;
                }
                return;
              }
            }
LABEL_149:
            sub_1A18FC0(v10, (_DWORD)a4, a3, (_DWORD)v84, v155, (_DWORD)v12, a10);
            return;
        }
      }
      v77 = sub_A71450(*(_QWORD *)(v10 + 248), *(_QWORD *)(a3 + 16));
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v77 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 48 )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 232) + 1LL) & 8) != 0 )
        {
          sub_1A155A0(
            v10,
            a3,
            a4->m128i_i8,
            nullptr,
            0,
            v77,
            (__m128i)a7,
            *(double *)a8.m128_u64,
            *(_QWORD *)(a3 + 16),
            (__int64)v12,
            0,
            0);
          return;
        }
      }
      else
      {
        if ( (v77 & 1) == 0 )
        {
          v78 = *(_QWORD *)&byte_8[v77 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v78 & 1) == 0 )
          {
LABEL_166:
            if ( (v78 & 8) != 0 && (*(__int64 *)((char *)&qword_18 + (v78 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) != 0 )
            {
              ptr.m128i_i32[0] = 21;
              ptr.m128i_i64[1] = *(_QWORD *)(a3 + 16);
              sub_1A0C040((__int64)(v12 + 2), &ptr);
            }
            return;
          }
        }
        if ( (*(_BYTE *)(*(_QWORD *)(v10 + 232) + 1LL) & 8) != 0 )
        {
          if ( *(_DWORD *)a3
            || !(unsigned __int8)sub_1A0DC20(v10, (__int64)v12, a3, (__m128i)a7, *(double *)a8.m128_u64) )
          {
            *v12 = 0;
            v12[46] = 32;
          }
          return;
        }
      }
      v78 = *(_QWORD *)&byte_8[v77 & 0xFFFFFFFFFFFFFFF0LL];
      goto LABEL_166;
    }
    v171 = (char *)sub_F63240(v24, v19, v20, (__int64)v21, v25, v22);
    if ( v171 )
    {
      v26 = sub_1A0B620(a3);
      v175 = v26;
      if ( v26 )
      {
        if ( (*(_BYTE *)(v26 + 28) & 0x7Fu) - 40 <= 6 )
        {
          v21 = v180;
          if ( (v171[76] & 4) != 0 )
          {
            if ( v180 )
              goto LABEL_34;
            v29 = *(_DWORD *)(*(_QWORD *)(v10 + 4616) + 640LL * *(unsigned int *)(v10 + 4624) - 640);
            if ( v29 == 3 || v29 <= 1 )
            {
LABEL_27:
              if ( (unsigned __int8)v171[73] >> 5 != 2 && v171[28] >= 0 )
              {
                v182 = sub_1A0A220((__int64)v171, v19, v20, (__int64)v21, v27, v28);
                if ( v182 )
                {
                  if ( !sub_9B48E0(v175) && (*(_BYTE *)(v175 + 96) & 0x18) == 0
                    || (v150 = sub_9B48E0(v175), v36 = 6811, !v150) && (*(_BYTE *)(v175 + 96) & 0x18) != 0 )
                  {
                    v36 = 6810;
                  }
                  v172 = v36;
                  v162 = *(_DWORD *)(v175 + 24);
                  LOBYTE(v181) = (unsigned __int8)sub_FD3830(
                                                    *(_QWORD *)(*(_QWORD *)(v10 + 264) + 32LL),
                                                    0x1A83u,
                                                    v162,
                                                    *(_QWORD *)(v10 + 264),
                                                    v35,
                                                    v162) != 1;
                  sub_168B9F0((__int64)&ptr, (__int64 *)(v10 + 8), v162, v172, 0);
                  v183.m128i_i64[0] = *(_QWORD *)(v175 + 48);
                  v37 = sub_162B6D0((__int64)&ptr, v183.m128i_i64);
                  sub_15890D0(v37, (unsigned __int8 *)&v181);
                  sub_15F7200(&ptr);
                  sub_168B9F0((__int64)&ptr, (__int64 *)(v10 + 8), *(_DWORD *)(v182 + 24), 0x16FAu, 0);
                  sub_18DFF20((__int64)&ptr, (__int64 *)&v182);
                  sub_15F7200(&ptr);
                }
              }
              goto LABEL_34;
            }
            sub_168B9F0((__int64)&ptr, (__int64 *)(v10 + 8), *(_DWORD *)(v175 + 24), 0x1AEDu, 0);
            LODWORD(v182) = 1;
            v30 = sub_1587D10((__int64)&ptr, (int *)&v182);
            if ( *(_BYTE *)(v30 + 120) )
            {
              sub_AE9DF0((unsigned __int8 **)(v30 + 32), (__int64)v171, 0xAu);
            }
            else if ( *(_BYTE *)(v30 + 132) )
            {
              v178 = v30;
              v142 = sub_168B9E0((_QWORD *)v30);
              v146 = v178;
              v147 = v142;
              v148 = *(_QWORD *)(v178 + 16);
              if ( v148 )
              {
                v148 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v148 + 32LL))(*(_QWORD *)(v178 + 16));
                v146 = v178;
              }
              v183.m128i_i64[0] = v148;
              v179 = v146;
              v149 = sub_1587BC0(v147, v183.m128i_i64, v146, v143, v144, v145);
              sub_AE9DF0((unsigned __int8 **)(*v149 + 32LL * *(unsigned int *)(v179 + 128) + 8), (__int64)v171, 0xAu);
            }
            sub_15F7200(&ptr);
            v19 = (__int64)v171;
            sub_1A0F360(v10, (__int64)v171, v31, v32, v33, v34);
            v21 = v180;
          }
          if ( !v21 )
            goto LABEL_27;
        }
      }
    }
LABEL_34:
    v24 = *v18;
    v25 = *v18;
    goto LABEL_35;
  }
  v14 = (_QWORD **)a5;
  v15 = a5 + 8LL * (unsigned int)(a6 - 1) + 8;
  while ( 1 )
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)((*v14)[1] & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v16 + 16) == 13 && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FFu) > 0x1F2 )
        break;
      if ( (_QWORD **)v15 == ++v14 )
        goto LABEL_8;
    }
    v17 = sub_1907C70(a2, *v14, (__m128i)a7, a8, a3, (__int64)a4, a5, a6);
    if ( v17 == 1 )
      break;
    *v14++ = (_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFELL);
    if ( (_QWORD **)v15 == v14 )
      goto LABEL_8;
  }
  *a1 = 0;
  a1[46] = 36;
}

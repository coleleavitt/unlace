__int64 __fastcall sub_19225E0(
        __int64 *a1,
        unsigned __int64 *a2,
        __int64 *a3,
        __int64 *a4,
        _DWORD *a5,
        _DWORD *a6,
        __m128 a7,
        __m128 a8,
        unsigned int a9)
{
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rsi
  __int64 v25; // rdx
  _QWORD *v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // rax
  __int64 v34; // r12
  unsigned __int64 v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // rsi
  __int64 v42; // rdx
  char v43; // al
  unsigned __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 *v47; // r12
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 *v51; // rsi
  unsigned int v52; // ecx
  __int64 v53; // rax
  unsigned __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // rdx
  unsigned __int64 v59; // rbp
  __int64 v60; // rax
  __int64 *v61; // rsi
  unsigned int v62; // ecx
  __int64 v63; // r12
  unsigned __int64 v64; // rdi
  __int64 v65; // r12
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // r9
  _QWORD *v70; // rsi
  unsigned __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdx
  __int64 v75; // rcx
  __int64 v76; // r8
  __int64 v77; // rcx
  void *v78; // rdx
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // r12
  size_t v82; // rax
  size_t v83; // r15
  __int64 *v84; // rax
  __int64 v85; // r15
  size_t v86; // rax
  void *v87; // rdi
  __int64 v88; // r15
  size_t v89; // rax
  void *v90; // rdi
  __int64 v91; // r14
  _BYTE *v92; // r15
  __int64 v93; // rdx
  __int64 *v94; // rdi
  __int64 v95; // r12
  __int64 *v96; // rdx
  __int64 *v97; // rbx
  __int64 v98; // r12
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  __int64 v103; // rax
  _QWORD *v104; // rax
  __int64 v105; // rax
  __int64 v106; // rsi
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  __int64 v110; // r9
  char v111; // r12
  __int64 v112; // rdx
  __int64 v113; // rcx
  __int64 v114; // r8
  char v115; // al
  __int64 v116; // rdx
  __int64 v117; // rcx
  __int64 v118; // r8
  __int64 v119; // r9
  __int64 v120; // r12
  unsigned __int64 v121; // rax
  __int64 v122; // rdi
  __int64 v123; // rdx
  unsigned __int64 v124; // rax
  __int64 v125; // r13
  _QWORD *v126; // r12
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r8
  __int64 v130; // r9
  __int64 v131; // rcx
  unsigned __int16 v132; // cx
  __int64 v133; // rax
  char v134; // r9
  unsigned int v135; // eax
  __int64 v136; // rax
  __int64 v137; // rax
  unsigned int v138; // eax
  __int64 v139; // rax
  _QWORD *v140; // rbx
  unsigned __int64 v141; // rbp
  unsigned __int64 v142; // rax
  unsigned int v143; // eax
  unsigned int v144; // eax
  __int64 v145; // r12
  __int64 v146; // rbp
  __int64 v147; // rcx
  unsigned __int64 v148; // rdx
  __int64 v149; // rsi
  char v150; // al
  unsigned __int64 v151; // rax
  __int64 v152; // rdi
  __int64 v153; // rax
  __int64 v154; // r13
  __int64 v155; // r13
  unsigned __int64 v156; // rcx
  __int64 v157; // r13
  __int64 v158; // rax
  __int64 *v159; // r13
  __int64 v160; // r12
  __int64 v161; // rax
  __int64 v162; // rsi
  __int64 v163; // rdx
  int v164; // eax
  __int64 v165; // rdx
  __int64 v166; // rax
  unsigned __int64 v167; // rax
  __int64 v168; // rax
  unsigned __int64 v169; // rax
  unsigned __int64 v170; // [rsp+8h] [rbp-1C0h]
  unsigned int v171; // [rsp+10h] [rbp-1B8h]
  signed __int64 v172; // [rsp+10h] [rbp-1B8h]
  size_t v173; // [rsp+10h] [rbp-1B8h]
  size_t v174; // [rsp+10h] [rbp-1B8h]
  __int64 v175; // [rsp+18h] [rbp-1B0h]
  __int64 v176; // [rsp+28h] [rbp-1A0h] BYREF
  __int64 v177; // [rsp+30h] [rbp-198h] BYREF
  __int64 v178; // [rsp+38h] [rbp-190h] BYREF
  void *v179[2]; // [rsp+40h] [rbp-188h] BYREF
  __int64 v180; // [rsp+50h] [rbp-178h] BYREF
  __int64 v181; // [rsp+60h] [rbp-168h] BYREF
  int v182; // [rsp+68h] [rbp-160h]
  __int128 v183; // [rsp+70h] [rbp-158h]
  void *dest; // [rsp+80h] [rbp-148h]
  char v185; // [rsp+88h] [rbp-140h]
  int v186; // [rsp+8Ch] [rbp-13Ch]
  void **p_ptr; // [rsp+90h] [rbp-138h]
  void *ptr; // [rsp+A0h] [rbp-128h] BYREF
  __m128i si128; // [rsp+A8h] [rbp-120h]
  _BYTE v190[72]; // [rsp+B8h] [rbp-110h] BYREF
  __int64 v191[25]; // [rsp+100h] [rbp-C8h] BYREF

  v15 = sub_1907C70(
          (__int64)a1,
          (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL),
          (__m128i)a7,
          a8,
          (__int64)a3,
          (__int64)a4,
          (__int64)a5,
          (__int64)a6);
  if ( v15 <= 1 )
    return 0;
  *a3 = v15;
  v21 = sub_1907C70((__int64)a1, (_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFFELL), (__m128i)a7, a8, v16, v17, v18, v19);
  if ( v21 <= 1 )
    return 0;
  *a4 = v21;
  if ( (*(_BYTE *)(a1[29] + 1) & 8) != 0 )
    return sub_19C2170((_DWORD)a1, (_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (_DWORD)a5, (_DWORD)a6, a9);
  *a5 = 0;
  v24 = *a2;
  *a6 = 0;
  v25 = a1[31];
  v26 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFELL);
  v27 = *(_QWORD *)(v25 + 2320);
  if ( (*(_BYTE *)(v27 + 1) & 8) != 0 || (*(_BYTE *)(v27 + 20) & 4) != 0 )
  {
    if ( (*(_DWORD *)v26 & 0x10000) != 0 )
      return *(_QWORD *)(v25 + 19072);
    v27 = *(_DWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL) & 0x10000;
    if ( (*(_DWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL) & 0x10000) != 0
      || (*(_DWORD *)(v21 & 0xFFFFFFFFFFFFFFFELL) & 0x10000) != 0 )
    {
      return *(_QWORD *)(v25 + 19072);
    }
  }
  v28 = v26[1];
  if ( (*(_BYTE *)(a1[29] + 47) & 0x20) != 0
    && (v25 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                           & 0xFFFFFFFFFFFFFFF0LL)
                                               + 16LL)
            - 57,
        (unsigned int)v25 <= 1)
    || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 58 )
  {
    v29 = sub_19179A0((__int64)a1, v26, 1u, v27, v22, v23, a7, a8);
    *a2 = v29;
    v32 = 0;
    if ( v29 != 1 )
    {
      v33 = v29 & 0xFFFFFFFFFFFFFFFELL;
      v34 = *(_QWORD *)(v33 + 8);
      v35 = v33;
      v36 = *(_QWORD *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
      v37 = (unsigned int)*(unsigned __int8 *)(v36 + 16) - 57;
      if ( (unsigned int)v37 > 1 )
        v36 = sub_18BBF30(v36, (__int64)v26, v37, v30);
      if ( sub_9EC890(*(_QWORD *)(*(_QWORD *)(v36 + 32) & 0xFFFFFFFFFFFFFFF0LL), (__int64)v26, v37, v30, v31) )
      {
        v41 = (_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFFELL);
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 57 <= 1
          || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a4
                                                                                               & 0xFFFFFFFFFFFFFFFELL)
                                                                                              + 8)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 57 <= 1 )
        {
          v42 = a1[29];
          v43 = 0;
          if ( (*(_BYTE *)(v42 + 47) & 0x20) == 0 )
            v43 = (*(_BYTE *)(v42 + 52) & 1) == 0;
          v44 = sub_1918B10(a1, a3, a4, a9, 0, 1, a7, a8, 0, v43, 1);
          v32 = v44;
          if ( (v44 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          {
            v181 = v34;
            v47 = (__int64 *)(v34 & 0xFFFFFFFFFFFFFFF0LL);
            ptr = (void *)v44;
            v48 = *v47;
            if ( (unsigned int)*(unsigned __int8 *)(*v47 + 16) - 57 > 1 )
              v48 = sub_18BBF30(*v47, (__int64)a3, v45, v46);
            v49 = *(_QWORD *)((unsigned __int64)ptr & 0xFFFFFFFFFFFFFFF0LL);
            v50 = (unsigned int)*(unsigned __int8 *)(v49 + 16) - 57;
            if ( (unsigned int)v50 > 1 )
              v49 = sub_18BBF30(v49, (__int64)a3, v50, v46);
            if ( *(_DWORD *)(v48 + 20) == *(_DWORD *)(v49 + 20) )
            {
              v96 = (__int64 *)(*(_QWORD *)(v48 + 32) & 0xFFFFFFFFFFFFFFF0LL);
              v97 = (__int64 *)(*(_QWORD *)(v49 + 32) & 0xFFFFFFFFFFFFFFF0LL);
              v98 = sub_A97D20(a1[31], *v96);
              if ( v98 == sub_A97D20(a1[31], *v97) )
                return v32;
              v51 = a1 + 1;
              v52 = 3454;
            }
            else
            {
              v51 = a1 + 1;
              v52 = 3458;
            }
            sub_168B9F0((__int64)v191, v51, a9, v52, 0);
            v53 = sub_1605D30((__int64)v191, &v181);
            sub_1605D30(v53, (__int64 *)&ptr);
            sub_15F7200(v191);
          }
        }
        else
        {
          v176 = v34;
          v66 = sub_19179A0((__int64)a1, v41, 1u, v38, v39, v40, a7, a8);
          *a3 = v66;
          if ( v66 != 1 )
          {
            v70 = (_QWORD *)(*a4 & 0xFFFFFFFFFFFFFFFELL);
            v71 = sub_19179A0((__int64)a1, v70, 1u, v67, v68, v69, a7, a8);
            *a4 = v71;
            if ( v71 != 1 )
            {
              v179[0] = (void *)(*(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8)
                                                              & 0xFFFFFFFFFFFFFFF0LL]
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               & 0xFFFFFFFFFFFFFFF0LL);
              v181 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)((v71 & 0xFFFFFFFFFFFFFFFELL) + 8) & 0xFFFFFFFFFFFFFFF0LL]
                               & 0xFFFFFFFFFFFFFFF0LL)
                   & 0xFFFFFFFFFFFFFFF0LL;
              if ( sub_9EC890(*(_QWORD *)v179[0], (__int64)v70, (__int64)v179[0], v72, v73)
                || sub_F58100(*(_QWORD *)((unsigned __int64)v179[0] & 0xFFFFFFFFFFFFFFF0LL)) )
              {
                if ( sub_9EC890(*(_QWORD *)(v181 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v70, v74, v75, v76)
                  || sub_F58100(*(_QWORD *)(v181 & 0xFFFFFFFFFFFFFFF0LL)) )
                {
                  v78 = v179[0];
                  v79 = v181;
                  if ( v179[0] != (void *)v181 )
                  {
                    if ( sub_F58100(*(_QWORD *)((unsigned __int64)v179[0] & 0xFFFFFFFFFFFFFFF0LL))
                      || sub_F58100(*(_QWORD *)(v181 & 0xFFFFFFFFFFFFFFF0LL)) )
                    {
                      v70 = a3;
                      v79 = sub_18BE010(
                              (__int64)a1,
                              a3,
                              a4,
                              (__int64)v179[0],
                              v181,
                              0,
                              *(double *)a7.m128_u64,
                              *(double *)a8.m128_u64);
                    }
                    else
                    {
                      v70 = a3;
                      v79 = sub_18BAEC0(
                              (__int64)a1,
                              a3,
                              a4,
                              (__int64)v179[0],
                              v181,
                              0,
                              *(double *)a7.m128_u64,
                              *(double *)a8.m128_u64);
                    }
                  }
                  v177 = v79;
                  v32 = v79 & 0xFFFFFFFFFFFFFFF0LL;
                  if ( (v79 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
                    return v32;
                  v80 = *(_QWORD *)(v176 & 0xFFFFFFFFFFFFFFF0LL);
                  if ( (unsigned int)*(unsigned __int8 *)(v80 + 16) - 57 > 1 )
                    v80 = sub_18BBF30(*(_QWORD *)(v176 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v70, (__int64)v78, v77);
                  v171 = *(_DWORD *)(v80 + 20);
                  v32 = sub_A76A60(a1[31], v177, v171);
                  v81 = sub_A97D20(a1[31], *(_QWORD *)(*(_QWORD *)(v80 + 32) & 0xFFFFFFFFFFFFFFF0LL));
                  if ( v81 == sub_A97D20(a1[31], *(_QWORD *)(v177 & 0xFFFFFFFFFFFFFFF0LL)) )
                  {
                    *a3 = sub_160A600(
                            (__int64)a1,
                            *a3 & 0xFFFFFFFFFFFFFFFELL,
                            v32,
                            0x1Au,
                            0,
                            0,
                            *(double *)a7.m128_u64,
                            *(double *)a8.m128_u64,
                            0);
                    v105 = sub_160A600(
                             (__int64)a1,
                             *a4 & 0xFFFFFFFFFFFFFFFELL,
                             v32,
                             0x1Au,
                             0,
                             0,
                             *(double *)a7.m128_u64,
                             *(double *)a8.m128_u64,
                             0);
LABEL_89:
                    *a4 = v105;
                    return v32;
                  }
                  v191[0] = sub_6D5440(&v177);
                  sub_F78400((__int64)v179, v191);
                  ptr = v190;
                  v182 = 2;
                  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
                  v183 = 0;
                  v181 = (__int64)&off_2BEBEE0;
                  v185 = 0;
                  v186 = 1;
                  dest = nullptr;
                  p_ptr = &ptr;
                  sub_227B8B0(&v181, 0, 0, 0);
                  v82 = j__strlen("(vector of ");
                  v83 = v82;
                  if ( v82 > *((_QWORD *)&v183 + 1) - (_QWORD)dest )
                  {
                    v84 = (__int64 *)sub_227BF10(&v181, "(vector of ", v82);
                  }
                  else
                  {
                    v84 = &v181;
                    if ( v83 )
                    {
                      memcpy(dest, "(vector of ", v83);
                      dest = (char *)dest + v83;
                      v84 = &v181;
                    }
                  }
                  v85 = sub_227B910(v84, v171);
                  v86 = j__strlen(" '");
                  v87 = *(void **)(v85 + 32);
                  if ( v86 > *(_QWORD *)(v85 + 24) - (_QWORD)v87 )
                  {
                    v85 = sub_227BF10(v85, " '", v86);
                  }
                  else if ( v86 )
                  {
                    v173 = v86;
                    memcpy(v87, " '", v86);
                    *(_QWORD *)(v85 + 32) += v173;
                  }
                  v88 = sub_227BF10(v85, v179[0], v179[1]);
                  v89 = j__strlen("' values)");
                  v90 = *(void **)(v88 + 32);
                  if ( v89 > *(_QWORD *)(v88 + 24) - (_QWORD)v90 )
                  {
                    sub_227BF10(v88, "' values)", v89);
                  }
                  else if ( v89 )
                  {
                    v174 = v89;
                    memcpy(v90, "' values)", v89);
                    *(_QWORD *)(v88 + 32) += v174;
                  }
                  sub_168B9F0((__int64)v191, a1 + 1, a9, 0xD7Eu, 0);
                  v91 = sub_1605D30((__int64)v191, &v176);
                  v92 = *p_ptr;
                  v172 = (signed __int64)p_ptr[1];
                  if ( *(_BYTE *)(v91 + 120) )
                  {
                    sub_AEC220((unsigned __int8 **)(v91 + 32), v92, (signed __int64)p_ptr[1]);
                  }
                  else if ( *(_BYTE *)(v91 + 132) )
                  {
                    v175 = sub_168B9E0((_QWORD *)v91);
                    v103 = *(_QWORD *)(v91 + 16);
                    if ( v103 )
                      v103 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v103 + 32LL))(*(_QWORD *)(v91 + 16));
                    v178 = v103;
                    v104 = sub_1587BC0(v175, &v178, v99, v100, v101, v102);
                    sub_AEC220((unsigned __int8 **)(*v104 + 32LL * *(unsigned int *)(v91 + 128) + 8), v92, v172);
                  }
                  sub_15F7200(v191);
                  v181 = (__int64)&unk_2C76288;
                  sub_227B7A0(&v181);
                  if ( ptr != v190 )
                    free(ptr);
                  if ( v179[0] != &v180 )
                    operator delete(v179[0]);
                }
                else
                {
                  sub_168B9F0((__int64)v191, a1 + 1, a9, 0x147Bu, 0);
                  v145 = sub_1605D30((__int64)v191, &v181);
                  ptr = (void *)sub_EEC8C0(*a4 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v181, *(double *)a7.m128_u64);
                  sub_1587DB0(v145, (__int64 *)&ptr);
                  sub_15F7200(v191);
                }
              }
              else
              {
                sub_168B9F0((__int64)v191, a1 + 1, a9, 0x147Bu, 0);
                v146 = sub_1605D30((__int64)v191, (__int64 *)v179);
                ptr = (void *)sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)v179, *(double *)a7.m128_u64);
                sub_1587DB0(v146, (__int64 *)&ptr);
                sub_15F7200(v191);
              }
            }
          }
        }
        return 0;
      }
      else
      {
        sub_168B9F0((__int64)v191, a1 + 1, a9, 0x147Cu, 0);
        v181 = *(_QWORD *)(v35 + 8);
        v64 = v35;
        v32 = 0;
        v65 = sub_162B6D0((__int64)v191, &v181);
        ptr = (void *)sub_EEC8C0(v64, (__int64)&v181, *(double *)a7.m128_u64);
        sub_1587DB0(v65, (__int64 *)&ptr);
        sub_15F7200(v191);
      }
    }
    return v32;
  }
  v54 = sub_191BD20((__int64)a1, v26, a7, a8, v25, v27, v22, v23);
  *a2 = v54;
  if ( v54 == 1 )
    return 0;
  v58 = a1[29];
  v59 = v54 & 0xFFFFFFFFFFFFFFFELL;
  v60 = *(_QWORD *)((v54 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v181 = v60;
  if ( (*(_BYTE *)(v58 + 47) & 0x20) != 0 && sub_F58060(*(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    v61 = a1 + 1;
    v62 = 5244;
    goto LABEL_38;
  }
  if ( !sub_F61140(*(_QWORD *)(v181 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v26, v58, v55, v56, v57) )
  {
    v61 = a1 + 1;
    v62 = 5245;
LABEL_38:
    sub_168B9F0((__int64)v191, v61, a9, v62, 0);
    v63 = sub_1605D30((__int64)v191, &v181);
    ptr = (void *)sub_EEC8C0(v59, (__int64)&v181, *(double *)a7.m128_u64);
    sub_1587DB0(v63, (__int64 *)&ptr);
    sub_15F7200(v191);
    return 0;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL)
                                                                                        + 8)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)((*a4 & 0xFFFFFFFFFFFFFFFELL)
                                                                                        + 8)
                                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 57 <= 1 )
  {
    return sub_1918B10(a1, a3, a4, a9, 0, 1, a7, a8, 0, 0, 1);
  }
  v32 = sub_191F280((__int64)a1, a3, a4, a9, 3u, a7, a8);
  if ( *a3 == 1 )
    return 0;
  v93 = *a4;
  if ( *a4 == 1 )
    return 0;
  v176 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v177 = *(_QWORD *)((v93 & 0xFFFFFFFFFFFFFFFELL) + 8);
  if ( sub_F65F60(*(_QWORD *)(v176 & 0xFFFFFFFFFFFFFFF0LL)) || sub_F65F60(*(_QWORD *)(v177 & 0xFFFFFFFFFFFFFFF0LL)) )
  {
    sub_168B9F0((__int64)v191, a1 + 1, a9, 0x1562u, 0);
    v94 = v191;
    v181 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)(a1 + 1), *(double *)a7.m128_u64);
LABEL_77:
    v95 = sub_1587DB0((__int64)v94, &v181);
    ptr = (void *)sub_EEC8C0(*a4 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v181, *(double *)a7.m128_u64);
    sub_1587DB0(v95, (__int64 *)&ptr);
    sub_15F7200(v191);
    return 0;
  }
  v106 = v176;
  if ( (unsigned __int8)sub_18BD220((_QWORD **)a1 + 31, v176, v177) )
    goto LABEL_118;
  if ( (*(_BYTE *)(a1[29] + 47) & 0x20) != 0 )
  {
    v111 = sub_18BBE90((__int64)a1, *a3 & 0xFFFFFFFFFFFFFFFELL, v107, v108, v109);
    v106 = *a4 & 0xFFFFFFFFFFFFFFFELL;
    v115 = sub_18BBE90((__int64)a1, v106, v112, v113, v114);
    if ( v111 || v115 )
      return 0;
  }
  if ( sub_F610C0(*(_QWORD *)(v176 & 0xFFFFFFFFFFFFFFF0LL), v106, v107, v108, v109, v110)
    && sub_F610C0(*(_QWORD *)(v177 & 0xFFFFFFFFFFFFFFF0LL), v106, v116, v117, v118, v119) )
  {
    if ( (v32 & 0xFFFFFFFFFFFFFFF0LL) != 0
      || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v176 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 10
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v177 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 10 )
    {
      v143 = sub_18D1110(a1, (unsigned __int64 *)a3, v32, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
      *a3 = sub_160A600(
              (__int64)a1,
              *a3 & 0xFFFFFFFFFFFFFFFELL,
              v32,
              v143,
              0,
              0,
              *(double *)a7.m128_u64,
              *(double *)a8.m128_u64,
              0);
      v144 = sub_18D1110(a1, (unsigned __int64 *)a4, v32, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
      v136 = sub_160A600(
               (__int64)a1,
               *a4 & 0xFFFFFFFFFFFFFFFELL,
               v32,
               v144,
               0,
               0,
               *(double *)a7.m128_u64,
               *(double *)a8.m128_u64,
               0);
      goto LABEL_105;
    }
LABEL_118:
    sub_168B9F0((__int64)v191, a1 + 1, a9, 0x147Eu, 0);
    v139 = sub_1605D30((__int64)v191, &v176);
    v94 = (__int64 *)sub_1605D30(v139, &v177);
    v181 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v177, *(double *)a7.m128_u64);
    goto LABEL_77;
  }
  v120 = v176;
  v121 = *(_QWORD *)(*(_QWORD *)(v176 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
  v122 = *(_QWORD *)v121;
  if ( *(_BYTE *)(*(_QWORD *)v121 + 16LL) == 48 )
  {
    v123 = v177;
    v124 = *(_QWORD *)(*(_QWORD *)(v177 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v125 = *(_QWORD *)v124;
    if ( *(_BYTE *)(*(_QWORD *)v124 + 16LL) != 48 )
    {
LABEL_112:
      v137 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v123 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v137 + 16) != 13 || ((*(_WORD *)(v137 + 18) >> 3) & 0x1FF) != 0x1B3 )
        goto LABEL_110;
LABEL_114:
      v32 = v123;
      if ( ((*(_WORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v123 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 18LL) >> 3)
          & 0x1FF) == 0x1B3 )
      {
        v138 = sub_EEB7E0(*a4 & 0xFFFFFFFFFFFFFFFELL, v106, *(double *)a7.m128_u64);
        sub_168B9F0((__int64)v191, a1 + 1, v138, 0x1641u, 0);
        ptr = (void *)sub_EEC8C0(*a4 & 0xFFFFFFFFFFFFFFFELL, (__int64)(a1 + 1), *(double *)a7.m128_u64);
        sub_1587DB0((__int64)v191, (__int64 *)&ptr);
        sub_15F7200(v191);
        goto LABEL_104;
      }
LABEL_103:
      v135 = sub_EEB7E0(*a3 & 0xFFFFFFFFFFFFFFFELL, v106, *(double *)a7.m128_u64);
      sub_168B9F0((__int64)v191, a1 + 1, v135, 0x1641u, 0);
      ptr = (void *)sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)(a1 + 1), *(double *)a7.m128_u64);
      sub_1587DB0((__int64)v191, (__int64 *)&ptr);
      v32 = v120;
      sub_15F7200(v191);
LABEL_104:
      *a3 = sub_160A600(
              (__int64)a1,
              *a3 & 0xFFFFFFFFFFFFFFFELL,
              v32,
              0x18u,
              0,
              0,
              *(double *)a7.m128_u64,
              *(double *)a8.m128_u64,
              0);
      v136 = sub_160A600(
               (__int64)a1,
               *a4 & 0xFFFFFFFFFFFFFFFELL,
               v32,
               0x18u,
               0,
               0,
               *(double *)a7.m128_u64,
               *(double *)a8.m128_u64,
               0);
LABEL_105:
      *a4 = v136;
      return v32;
    }
    v126 = sub_F60F10(v122, v106, v177, v117, v118, v119);
    if ( sub_F60F10(v125, v106, v127, v128, v129, v130) == v126 )
    {
      v140 = (_QWORD *)a1[31];
      v141 = sub_6D5440(&v177);
      v142 = sub_6D5440(&v176);
      return sub_ABBE20(v140, v142, v141, 0);
    }
    v120 = v176;
  }
  v123 = v177;
  v106 = v177 & 0xFFFFFFFFFFFFFFF0LL;
  v131 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v120 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v131 + 16) != 13 )
    goto LABEL_112;
  v132 = *(_WORD *)(v131 + 18);
  v133 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v177 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v134 = *(_BYTE *)(v133 + 16);
  if ( ((v132 >> 3) & 0x1FF) == 0x1B3 )
  {
    if ( v134 == 13 && ((*(_WORD *)(v133 + 18) >> 3) & 0x1FF) == 0x1B3 )
    {
      v32 = sub_ABBE20((_QWORD *)a1[31], v120, v177, 0);
      goto LABEL_104;
    }
    goto LABEL_103;
  }
  if ( v134 == 13 && ((*(_WORD *)(v133 + 18) >> 3) & 0x1FF) == 0x1B3 )
    goto LABEL_114;
  if ( ((v132 >> 3) & 0x1FF) == 0x1E8
    && (*(_QWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v120 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v120) & 7) == (*(_QWORD *)&byte_8[v177 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)*(_QWORD *)&byte_8[v177 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v177) & 7) )
  {
    return v32;
  }
LABEL_110:
  if ( !(unsigned __int8)sub_18BAC00((__int64)a1, a4, v176, *(double *)a7.m128_u64, *(double *)a8.m128_u64) )
    return v176;
  if ( !(unsigned __int8)sub_18BAC00((__int64)a1, a3, v177, *(double *)a7.m128_u64, *(double *)a8.m128_u64) )
    return v177;
  result = sub_19D30C0(a1[92], a3, a4, a9);
  v147 = *a3;
  if ( *a3 == 1 || *a4 == 1 )
    return 0;
  v32 = result & 0xFFFFFFFFFFFFFFF0LL;
  if ( (result & 0xFFFFFFFFFFFFFFF0LL) == 0 )
  {
    v148 = *a4 & 0xFFFFFFFFFFFFFFFELL;
    v149 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v176 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                          & 0xFFFFFFFFFFFFFFF0LL)
                              + 16LL);
    if ( (_BYTE)v149 != 11 )
    {
      v150 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v177 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL);
      if ( v150 != 11 )
      {
        if ( v150 != 42 || (_BYTE)v149 != 42 )
        {
          if ( !(unsigned __int8)sub_18CF390(
                                   (__int64)a1,
                                   a3,
                                   v148,
                                   a9,
                                   1,
                                   *(double *)a7.m128_u64,
                                   *(double *)a8.m128_u64) )
          {
            if ( !(unsigned __int8)sub_18CF390(
                                     (__int64)a1,
                                     a4,
                                     *a3 & 0xFFFFFFFFFFFFFFFELL,
                                     a9,
                                     0,
                                     *(double *)a7.m128_u64,
                                     *(double *)a8.m128_u64) )
            {
              if ( (unsigned __int8)sub_18F90D0(
                                      (__int64)a1,
                                      *a3 & 0xFFFFFFFFFFFFFFFELL,
                                      *a4 & 0xFFFFFFFFFFFFFFFELL,
                                      a9,
                                      *(double *)a7.m128_u64,
                                      *(double *)a8.m128_u64) )
                return 0;
              if ( (*(_QWORD *)&byte_8[v176 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                  | ((unsigned __int8)v176 | (unsigned __int8)*(_QWORD *)&byte_8[v176 & 0xFFFFFFFFFFFFFFF0LL]) & 7) == (*(_QWORD *)&byte_8[v177 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v177 | (unsigned __int8)*(_QWORD *)&byte_8[v177 & 0xFFFFFFFFFFFFFFF0LL]) & 7) )
                return sub_ABBE20((_QWORD *)a1[31], v176, v177, 0);
              goto LABEL_118;
            }
            return v176;
          }
          return v177;
        }
        v156 = v147 & 0xFFFFFFFFFFFFFFFELL;
        v157 = *(_QWORD *)(v148 + 8);
        v158 = *(_QWORD *)(*(_QWORD *)(v156 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v158 + 16) != 42 )
          v158 = sub_F63050(*(_QWORD *)(*(_QWORD *)(v156 + 8) & 0xFFFFFFFFFFFFFFF0LL), v149, v148, v156);
        v159 = (__int64 *)(v157 & 0xFFFFFFFFFFFFFFF0LL);
        v160 = *(_QWORD *)(v158 + 32);
        v161 = *v159;
        if ( *(_BYTE *)(*v159 + 16) != 42 )
          v161 = sub_F63050(*v159, v149, v148, v156);
        v162 = *(_QWORD *)(v161 + 32);
        v163 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v160 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v164 = *(unsigned __int8 *)(v163 + 16);
        if ( (_BYTE)v164 == 13
          && ((*(_WORD *)(v163 + 18) >> 3) & 0x1FF) == 0x1B3
          && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v162 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 25 > 1 )
        {
          v168 = *(_QWORD *)&byte_8[v162 & 0xFFFFFFFFFFFFFFF0LL];
          if ( (v168 & 8) != 0 )
            v32 = *(__int64 *)((char *)&qword_18 + (v168 & 0xFFFFFFFFFFFFFFF0LL));
          v169 = sub_A70F20(a1[31], v160, v32 | ((unsigned __int8)v162 | (unsigned __int8)v168) & 7);
          v32 = sub_A70010(a1[31], v169);
          *a3 = sub_160A600(
                  (__int64)a1,
                  *a3 & 0xFFFFFFFFFFFFFFFELL,
                  v32,
                  5u,
                  0,
                  0,
                  *(double *)a7.m128_u64,
                  *(double *)a8.m128_u64,
                  0);
          v136 = sub_160A600(
                   (__int64)a1,
                   *a4 & 0xFFFFFFFFFFFFFFFELL,
                   v32,
                   1u,
                   0,
                   0,
                   *(double *)a7.m128_u64,
                   *(double *)a8.m128_u64,
                   0);
          goto LABEL_105;
        }
        v165 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v162 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v165 + 16) != 13
          || ((*(_WORD *)(v165 + 18) >> 3) & 0x1FF) != 0x1B3
          || (unsigned int)(v164 - 25) <= 1 )
        {
          return sub_18D19A0(a1, a3, a4, a9, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
        }
        v166 = *(_QWORD *)&byte_8[v160 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v166 & 8) != 0 )
          v32 = *(__int64 *)((char *)&qword_18 + (v166 & 0xFFFFFFFFFFFFFFF0LL));
        v167 = sub_A70F20(a1[31], v162, v32 | ((unsigned __int8)v160 | (unsigned __int8)v166) & 7);
        v170 = sub_A70010(a1[31], v167);
        *a4 = sub_160A600(
                (__int64)a1,
                *a4 & 0xFFFFFFFFFFFFFFFELL,
                v170,
                5u,
                0,
                0,
                *(double *)a7.m128_u64,
                *(double *)a8.m128_u64,
                0);
        *a3 = sub_160A600(
                (__int64)a1,
                *a3 & 0xFFFFFFFFFFFFFFFELL,
                v170,
                1u,
                0,
                0,
                *(double *)a7.m128_u64,
                *(double *)a8.m128_u64,
                0);
        return v170;
      }
    }
    v178 = *(_QWORD *)((v147 & 0xFFFFFFFFFFFFFFFELL) + 8);
    v151 = *(_QWORD *)(v148 + 8);
    v179[0] = (void *)v151;
    v152 = *(_QWORD *)(v178 & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v152 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 11
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v151 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 11 )
    {
      return sub_18D19A0(a1, a3, a4, a9, *(double *)a7.m128_u64, *(double *)a8.m128_u64);
    }
    if ( !sub_F67340(v152) && !sub_F67340(*(_QWORD *)((unsigned __int64)v179[0] & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      sub_168B9F0((__int64)v191, a1 + 1, a9, 0x147Eu, 0);
      v153 = sub_1605D30((__int64)v191, &v178);
      v154 = sub_1605D30(v153, (__int64 *)v179);
      ptr = (void *)sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, (__int64)v179, *(double *)a7.m128_u64);
      v155 = sub_1587DB0(v154, (__int64 *)&ptr);
      v181 = sub_EEC8C0(*a4 & 0xFFFFFFFFFFFFFFFELL, (__int64)&ptr, *(double *)a7.m128_u64);
      sub_1587DB0(v155, &v181);
      sub_15F7200(v191);
      return v32;
    }
    v32 = sub_A70010(a1[31], *(_QWORD *)(a1[31] + 18632));
    *a3 = sub_160A600(
            (__int64)a1,
            *a3 & 0xFFFFFFFFFFFFFFFELL,
            v32,
            1u,
            0,
            0,
            *(double *)a7.m128_u64,
            *(double *)a8.m128_u64,
            0);
    v105 = sub_160A600(
             (__int64)a1,
             *a4 & 0xFFFFFFFFFFFFFFFELL,
             v32,
             1u,
             0,
             0,
             *(double *)a7.m128_u64,
             *(double *)a8.m128_u64,
             0);
    goto LABEL_89;
  }
  return result;
}

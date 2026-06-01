void __fastcall sub_16ADFE0(_QWORD *a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // dl
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // rbp
  __int64 v13; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  int v22; // r14d
  int v23; // r12d
  unsigned __int64 v24; // rax
  __int16 v25; // dx
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // r13
  char v29; // r15
  __int64 v30; // rdx
  __int64 v31; // rcx
  char v32; // al
  int v33; // eax
  char *v34; // r13
  signed __int64 v35; // rdx
  signed __int64 v36; // r15
  size_t v37; // rdx
  size_t v38; // r14
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rax
  unsigned int v42; // r15d
  __int64 v43; // rax
  unsigned __int64 v44; // rdx
  __int64 v45; // rax
  char *v46; // rdi
  __int64 (__fastcall ***v47)(); // rcx
  unsigned __int64 v48; // rax
  bool v49; // al
  unsigned __int16 v50; // cx
  __int64 v51; // rdx
  const void *v52; // rax
  size_t v53; // rdx
  size_t v54; // rbx
  _BYTE *v55; // rax
  __int64 v56; // rax
  void *v57; // rdi
  __int64 (__fastcall ***v58)(); // rcx
  bool v59; // al
  unsigned __int16 v60; // cx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  void *v66; // rax
  _QWORD *v67; // rax
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // r13
  void *v73; // rax
  _QWORD *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rbp
  __int64 v79; // r8
  __int64 v80; // r9
  __int64 v81; // rax
  _QWORD *v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rax
  _QWORD *v88; // rax
  __int64 v89; // rax
  __int64 (__fastcall **v90)(); // rax
  char *src; // [rsp+0h] [rbp-278h]
  __int64 v92; // [rsp+8h] [rbp-270h]
  __int64 v93; // [rsp+8h] [rbp-270h]
  __int64 v94; // [rsp+8h] [rbp-270h]
  const void *v95; // [rsp+8h] [rbp-270h]
  __int64 *v96; // [rsp+18h] [rbp-260h]
  _WORD *v97; // [rsp+28h] [rbp-250h]
  _WORD *v98; // [rsp+28h] [rbp-250h]
  __int64 (__fastcall ***v99)(); // [rsp+28h] [rbp-250h]
  __int64 (__fastcall ***v100)(); // [rsp+28h] [rbp-250h]
  __int64 v101; // [rsp+30h] [rbp-248h] BYREF
  int v102; // [rsp+38h] [rbp-240h]
  void *v103[2]; // [rsp+40h] [rbp-238h] BYREF
  _BYTE v104[16]; // [rsp+50h] [rbp-228h] BYREF
  __int64 (__fastcall **v105)(); // [rsp+60h] [rbp-218h] BYREF
  int v106; // [rsp+68h] [rbp-210h]
  __int128 v107; // [rsp+70h] [rbp-208h]
  unsigned __int64 v108; // [rsp+80h] [rbp-1F8h]
  char v109; // [rsp+88h] [rbp-1F0h]
  int v110; // [rsp+8Ch] [rbp-1ECh]
  void **p_ptr; // [rsp+90h] [rbp-1E8h]
  __int64 v112; // [rsp+A0h] [rbp-1D8h] BYREF
  char v113; // [rsp+A8h] [rbp-1D0h]
  __int64 v114; // [rsp+ACh] [rbp-1CCh]
  char v115; // [rsp+B4h] [rbp-1C4h]
  void *v116[2]; // [rsp+B8h] [rbp-1C0h] BYREF
  _BYTE v117[16]; // [rsp+C8h] [rbp-1B0h] BYREF
  char v118; // [rsp+D8h] [rbp-1A0h]
  void *ptr; // [rsp+E0h] [rbp-198h] BYREF
  __m128i si128; // [rsp+E8h] [rbp-190h]
  _BYTE v121[72]; // [rsp+F8h] [rbp-180h] BYREF
  void *v122; // [rsp+140h] [rbp-138h] BYREF
  __int64 v123; // [rsp+148h] [rbp-130h]
  _BYTE v124[96]; // [rsp+150h] [rbp-128h] BYREF
  _QWORD v125[2]; // [rsp+1B0h] [rbp-C8h] BYREF
  void *v126; // [rsp+1C0h] [rbp-B8h]
  unsigned __int8 *v127[11]; // [rsp+1D0h] [rbp-A8h] BYREF
  char v128; // [rsp+228h] [rbp-50h]
  unsigned int v129; // [rsp+230h] [rbp-48h]
  char v130; // [rsp+234h] [rbp-44h]

  v5 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *a2;
  v101 = a4;
  v7 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
  v102 = a5;
  v8 = *(_QWORD *)((v6 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v9 = v7 | a3;
  v10 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  v11 = v10 | v9 & 7;
  v12 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[v8 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)v8) & 7) != v11 )
  {
    v13 = *v12;
    if ( *(_BYTE *)(*v12 + 16) == 42
      || (v26 = *(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v26 + 16) == 42)
      && (v13 = sub_F63050(*v12, a2, v26, v10)) != 0 )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 32)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 <= 1
        && sub_C1BF80(*v5, (__int64)a2, v11, v10) )
      {
        v17 = *v12;
        if ( *(_BYTE *)(*v12 + 16) != 42 )
          v17 = sub_F63050(*v12, a2, v15, v16);
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( (unsigned int)*(unsigned __int8 *)(v18 + 16) - 25 > 1 )
          v18 = sub_F63050(v18, a2, v15, v16);
        v19 = *v5;
        if ( *(_BYTE *)(*v5 + 16) != 42 )
          v19 = sub_F63050(*v5, a2, v15, v16);
        v20 = *(_QWORD *)(*(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v21 = (unsigned int)*(unsigned __int8 *)(v20 + 16) - 25;
        if ( (unsigned int)v21 > 1 )
          v20 = sub_F63050(v20, a2, v21, v16);
        v22 = (*(_WORD *)(v18 + 20) >> 2) & 0x3F;
        v23 = (*(_WORD *)(v20 + 20) >> 2) & 0x3F;
        if ( v23 != v22 )
        {
          v24 = sub_BFBAE0(*a2 & 0xFFFFFFFFFFFFFFFELL);
          v25 = *(_WORD *)v24 & 0x1FF;
          if ( v25 == 4 )
          {
            if ( *(_BYTE *)(v24 + 2) >> 3 != 4 )
              return;
            v24 = sub_BFBAE0(*(_QWORD *)(v24 + 16));
            v25 = *(_WORD *)v24 & 0x1FF;
          }
          if ( v25 == 71 )
          {
            v27 = *(_QWORD *)(v24 + 16);
            if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 34 <= 5 )
            {
              v28 = a1[31];
              v29 = sub_B72F20(v27);
              v32 = sub_B748A0(v27, (__int64)a2, v30, v31);
              v33 = sub_A64670(v28, v32, v29, 0);
              if ( v33 != v23 && v33 == v22 )
              {
                v34 = sub_F5C3D0(v22);
                v36 = v35;
                src = sub_F5C3D0(v23);
                v38 = v37;
                v96 = a1 + 1;
                sub_168B9F0((__int64)v125, a1 + 1, v101, 0x19FFu, 0);
                if ( v128 )
                {
                  sub_AEC220(v127, v34, v36);
                }
                else
                {
                  if ( !v130 )
                    goto LABEL_27;
                  v62 = sub_168B9E0(v125);
                  v66 = v126;
                  if ( v126 )
                  {
                    v93 = v62;
                    v66 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v126 + 32LL))(v126);
                    v62 = v93;
                  }
                  v122 = v66;
                  v67 = sub_1587BC0(v62, (__int64 *)&v122, v62, v63, v64, v65);
                  sub_AEC220((unsigned __int8 **)(*v67 + 32LL * v129 + 8), v34, v36);
                }
                if ( v128 )
                {
                  sub_AEC220(v127, src, v38);
                }
                else if ( v130 )
                {
                  v72 = sub_168B9E0(v125);
                  v73 = v126;
                  if ( v126 )
                    v73 = (void *)(*(__int64 (__fastcall **)(void *))(*(_QWORD *)v126 + 32LL))(v126);
                  v122 = v73;
                  v74 = sub_1587BC0(v72, (__int64 *)&v122, v68, v69, v70, v71);
                  sub_AEC220((unsigned __int8 **)(*v74 + 32LL * v129 + 8), src, v38);
                }
LABEL_27:
                sub_16AAEC0((__int64)v125, (unsigned int *)&v101);
                sub_15F7200(v125);
                if ( (unsigned __int8)sub_FD3830(
                                        *(_QWORD *)(a1[33] + 32LL),
                                        0x19FFu,
                                        (unsigned int)v101,
                                        a1[33],
                                        v39,
                                        v40) == 1 )
                  return;
                v41 = *(_QWORD *)(v27 + 112);
                v106 = 2;
                v42 = *(_DWORD *)(v41 + 24);
                v43 = a1[30];
                si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
                v92 = v43;
                v122 = v124;
                v123 = 0x600000000LL;
                ptr = v121;
                p_ptr = &ptr;
                v109 = 0;
                v105 = &off_2BEBEE0;
                v110 = 1;
                v108 = 0;
                v107 = 0;
                sub_227B8B0(&v105, 0, 0, 0);
                v44 = v108;
                if ( *(char *)a1[29] < 0 )
                {
                  if ( *((_QWORD *)&v107 + 1) - v108 > 1 )
                  {
                    v58 = &v105;
                    *(_WORD *)v108 = 24415;
                    v57 = (void *)(v108 + 2);
                    v108 += 2LL;
                  }
                  else
                  {
                    v56 = sub_227BF10(&v105, "__", 2);
                    v57 = *(void **)(v56 + 32);
                    v58 = (__int64 (__fastcall ***)())v56;
                  }
                  if ( v38 > (char *)v58[3] - (_BYTE *)v57 )
                  {
                    sub_227BF10(v58, src, v38);
                  }
                  else if ( v38 )
                  {
                    v100 = v58;
                    memcpy(v57, src, v38);
                    v100[4] = (__int64 (__fastcall **)())((char *)v100[4] + v38);
                  }
                  v98 = (_WORD *)sub_6F3470(v92 + 552, *p_ptr, (size_t)p_ptr[1]);
                  v59 = sub_FDE0B0(v98, a1[29]);
                  v60 = 5;
                  v61 = (__int64)v98;
                  if ( v59 )
                  {
                    v61 = 0;
                    v60 = *v98 & 0x1FF;
                  }
                  sub_16A9610((__int64)&v122, v60, v61);
                }
                else
                {
                  if ( *((_QWORD *)&v107 + 1) - v108 > 0xE )
                  {
                    *(_DWORD *)(v108 + 8) = 1600484469;
                    *(_WORD *)(v44 + 12) = 10335;
                    v47 = &v105;
                    *(_QWORD *)v44 = 0x6269727474615F5FLL;
                    *(_BYTE *)(v44 + 14) = 40;
                    v46 = (char *)(v108 + 15);
                    v108 += 15LL;
                  }
                  else
                  {
                    v45 = sub_227BF10(&v105, "__attribute__((", 15);
                    v46 = *(char **)(v45 + 32);
                    v47 = (__int64 (__fastcall ***)())v45;
                  }
                  v48 = (char *)v47[3] - v46;
                  if ( v38 > v48 )
                  {
                    v89 = sub_227BF10(v47, src, v38);
                    v46 = *(char **)(v89 + 32);
                    v47 = (__int64 (__fastcall ***)())v89;
                    v48 = *(_QWORD *)(v89 + 24) - (_QWORD)v46;
                  }
                  else if ( v38 )
                  {
                    v99 = v47;
                    memcpy(v46, src, v38);
                    v47 = v99;
                    v90 = v99[3];
                    v46 = (char *)v99[4] + v38;
                    v99[4] = (__int64 (__fastcall **)())v46;
                    v48 = (char *)v90 - v46;
                  }
                  if ( v48 > 1 )
                  {
                    *(_WORD *)v46 = 10537;
                    v47[4] = (__int64 (__fastcall **)())((char *)v47[4] + 2);
                  }
                  else
                  {
                    sub_227BF10(v47, "))", 2);
                  }
                  sub_16A9610((__int64)&v122, 189, 0);
                  sub_16A9610((__int64)&v122, 22, 0);
                  sub_16A9610((__int64)&v122, 22, 0);
                  v97 = (_WORD *)sub_6F3470(v92 + 552, src, v38);
                  v49 = sub_FDE0B0(v97, a1[29]);
                  v50 = 5;
                  v51 = (__int64)v97;
                  if ( v49 )
                  {
                    v51 = 0;
                    v50 = *v97 & 0x1FF;
                  }
                  sub_16A9610((__int64)&v122, v50, v51);
                  sub_16A9610((__int64)&v122, 23, 0);
                  sub_16A9610((__int64)&v122, 23, 0);
                }
                v52 = (const void *)sub_145F790(v92, v42, v122, (unsigned int)v123);
                v54 = v53;
                if ( v53 )
                {
                  si128.m128i_i64[0] = 0;
                  v75 = 0;
                  if ( v54 > si128.m128i_i64[1] )
                  {
                    v95 = v52;
                    sub_2236E10(&ptr, v121, v54, 1);
                    v75 = si128.m128i_i64[0];
                    v52 = v95;
                  }
                  memcpy((char *)ptr + v75, v52, v54);
                  si128.m128i_i64[0] += v54;
                }
                v55 = (_BYTE *)v108;
                if ( v108 >= *((_QWORD *)&v107 + 1) )
                {
                  sub_227BA10(&v105, 32);
                }
                else
                {
                  ++v108;
                  *v55 = 32;
                }
                sub_168B9F0((__int64)v125, v96, v42, 0x16BFu, 0);
                if ( v128 )
                {
                  sub_AE9DF0(v127, v27, 0xAu);
                }
                else
                {
                  if ( !v130 )
                  {
LABEL_44:
                    v116[0] = v117;
                    v114 = 0;
                    v115 = 0;
                    v116[1] = nullptr;
                    v117[0] = 0;
                    v118 = 0;
                    LODWORD(v112) = v42;
                    HIDWORD(v112) = v42;
                    v113 = 0;
                    v103[0] = v104;
                    sub_16A7CB0(v103, ptr, (__int64)ptr + si128.m128i_i64[0]);
                    sub_A0AAD0((__int64)v116, v103);
                    if ( v103[0] != v104 )
                      operator delete(v103[0]);
                    v118 = 0;
                    sub_1589170((__int64)v125, &v112);
                    if ( v116[0] != v117 )
                      operator delete(v116[0]);
                    sub_15F7200(v125);
                    v105 = (__int64 (__fastcall **)())&unk_2C76288;
                    sub_227B7A0(&v105);
                    if ( ptr != v121 )
                      free(ptr);
                    if ( v122 != v124 )
                      free(v122);
                    return;
                  }
                  v83 = sub_168B9E0(v125);
                  v87 = (__int64)v126;
                  if ( v126 )
                  {
                    v94 = v83;
                    v87 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v126 + 32LL))(v126);
                    v83 = v94;
                  }
                  v112 = v87;
                  v88 = sub_1587BC0(v83, &v112, v83, v84, v85, v86);
                  sub_AE9DF0((unsigned __int8 **)(*v88 + 32LL * v129 + 8), v27, 0xAu);
                }
                if ( v128 )
                {
                  sub_AEC220(v127, src, v38);
                }
                else if ( v130 )
                {
                  v78 = sub_168B9E0(v125);
                  v81 = (__int64)v126;
                  if ( v126 )
                    v81 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v126 + 32LL))(v126);
                  v112 = v81;
                  v82 = sub_1587BC0(v78, &v112, v76, v77, v79, v80);
                  sub_AEC220((unsigned __int8 **)(*v82 + 32LL * v129 + 8), src, v38);
                }
                goto LABEL_44;
              }
            }
          }
        }
      }
    }
  }
}

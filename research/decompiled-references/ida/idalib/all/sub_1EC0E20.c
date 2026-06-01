__int64 __fastcall sub_1EC0E20(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 v4; // r8
  __int64 result; // rax
  __int64 v6; // r15
  void **v7; // rbx
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // r8
  _BYTE **v16; // r12
  int v17; // r14d
  unsigned int v18; // r13d
  char v19; // r9
  signed __int64 v20; // rax
  __int64 v21; // rdi
  unsigned __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 *v24; // r8
  __int64 v25; // r9
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int8 v30; // r11
  __int64 v31; // r8
  __int32 v32; // eax
  unsigned __int64 v33; // rax
  __int64 v34; // rdx
  _BYTE *v35; // rax
  __m128i v36; // xmm1
  __int64 v37; // rcx
  __m128i *v38; // rsi
  __int128 *v39; // rdi
  __m128i *v40; // rdi
  __m128i *v41; // rsi
  unsigned __int64 *v42; // rax
  char v43; // r9
  __int64 v44; // r11
  unsigned __int64 *v45; // rdx
  unsigned __int64 *v46; // rax
  __int64 v47; // rcx
  int v48; // esi
  __int64 v49; // r14
  int v50; // r10d
  unsigned int v51; // edi
  unsigned __int64 *v52; // rsi
  __int64 v53; // rdi
  unsigned __int64 *v54; // rax
  char v55; // al
  unsigned __int64 v56; // r8
  __int64 v57; // rax
  __int64 v58; // rax
  bool v59; // zf
  void **v60; // rax
  void **v61; // rsi
  __m128i *v62; // rdi
  int v63; // r13d
  void **v64; // rdx
  _QWORD *v65; // rdi
  __int64 v66; // rcx
  __int64 v67; // rsi
  int v68; // r9d
  char v69; // r12
  __int8 v70; // bp
  __int32 v71; // ebx
  __int64 v72; // r14
  _BYTE *v73; // rax
  __int64 v74; // rsi
  signed __int64 v75; // rax
  int v76; // edx
  __int64 v77; // rdx
  __int64 v78; // rsi
  char v79; // r8
  unsigned __int64 v80; // rax
  __int64 v81; // rbx
  unsigned int v82; // r14d
  __int64 v83; // rbp
  __int64 v84; // rax
  __int64 v85; // rax
  int v86; // r9d
  unsigned __int64 *v87; // rsi
  __int64 v88; // r9
  int v89; // esi
  unsigned int i; // eax
  unsigned __int64 *v91; // rdi
  unsigned int v92; // eax
  __int64 v93; // rcx
  void **v94; // rsi
  __int128 *v95; // rdi
  __int128 v96; // [rsp-30h] [rbp-278h] BYREF
  __int128 v97; // [rsp-20h] [rbp-268h]
  __int64 v98; // [rsp-10h] [rbp-258h]
  _BYTE *v99; // [rsp+0h] [rbp-248h]
  void **v100; // [rsp+8h] [rbp-240h]
  signed __int64 v101; // [rsp+10h] [rbp-238h]
  void **p_ptr; // [rsp+18h] [rbp-230h]
  unsigned __int64 v103; // [rsp+20h] [rbp-228h]
  void **v104; // [rsp+28h] [rbp-220h]
  __m128i v105; // [rsp+30h] [rbp-218h] BYREF
  __m128i v106; // [rsp+40h] [rbp-208h] BYREF
  __int64 v107; // [rsp+50h] [rbp-1F8h]
  _BYTE v108[2]; // [rsp+6Ch] [rbp-1DCh] BYREF
  __int8 v109; // [rsp+6Eh] [rbp-1DAh]
  unsigned __int8 v110; // [rsp+6Fh] [rbp-1D9h]
  void *v111; // [rsp+70h] [rbp-1D8h] BYREF
  unsigned __int64 *v112; // [rsp+78h] [rbp-1D0h] BYREF
  _QWORD v113[2]; // [rsp+80h] [rbp-1C8h] BYREF
  void **v114; // [rsp+90h] [rbp-1B8h] BYREF
  __int64 v115; // [rsp+98h] [rbp-1B0h]
  unsigned __int64 **v116; // [rsp+A0h] [rbp-1A8h]
  _BYTE *v117; // [rsp+A8h] [rbp-1A0h]
  void *v118[2]; // [rsp+B0h] [rbp-198h] BYREF
  __int64 v119; // [rsp+C0h] [rbp-188h] BYREF
  void *v120[4]; // [rsp+D0h] [rbp-178h] BYREF
  __m128i v121; // [rsp+F0h] [rbp-158h] BYREF
  __m128i v122; // [rsp+100h] [rbp-148h]
  __int64 v123; // [rsp+110h] [rbp-138h]
  _BYTE *v124; // [rsp+120h] [rbp-128h] BYREF
  char *v125; // [rsp+128h] [rbp-120h]
  void *ptr; // [rsp+150h] [rbp-F8h] BYREF
  __int64 v127; // [rsp+158h] [rbp-F0h]
  _QWORD v128[4]; // [rsp+160h] [rbp-E8h] BYREF
  void *v129[7]; // [rsp+180h] [rbp-C8h] BYREF
  unsigned __int8 v130; // [rsp+1B8h] [rbp-90h]
  unsigned __int8 v131; // [rsp+1B9h] [rbp-8Fh]
  void *v132; // [rsp+1C0h] [rbp-88h] BYREF
  _BYTE *v133; // [rsp+1C8h] [rbp-80h]
  char v134; // [rsp+1D0h] [rbp-78h] BYREF
  unsigned __int64 v135; // [rsp+1D8h] [rbp-70h]
  char v136; // [rsp+1E0h] [rbp-68h]

  v108[0] = a4;
  if ( !a3 )
    return 0;
  v4 = *(_QWORD *)(a2 + 1224);
  if ( a3 > (unsigned __int64)((*(_QWORD *)(a2 + 1232) - v4) >> 3) )
    return 0;
  v6 = a3 - 1;
  result = *(_QWORD *)(v4 + 8 * v6);
  if ( (result & 0xFFFFFFFFFFFFFFF8LL) == 0 )
  {
    if ( result >> 1 == 3 )
      return 0;
    v7 = (void **)a2;
    v9 = a1;
    v10 = *(_QWORD *)(a2 + 880);
    v11 = *(unsigned int *)(a2 + 896);
    v113[0] = a2 + 864;
    v12 = 8 * v10 - v11;
    v13 = *(_QWORD *)(a2 + 1208);
    v113[1] = v12;
    sub_1EAF7C0((__int64 *)v129, a2 + 864, *(_QWORD *)(*(_QWORD *)(a2 + 1216) + 8 * v6) + v13);
    if ( v129[0] )
    {
      v132 = v129[0];
      v129[0] = nullptr;
      sub_A0E8E0((_QWORD **)&v132);
      if ( v132 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v132 + 8LL))(v132);
      if ( v129[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v129[0] + 8LL))(v129[0]);
    }
    sub_1EC0940((__int64)v129, a2, a3);
    v14 = *(_QWORD *)(a2 + 80);
    v15 = *(_QWORD *)(a2 + 72);
    v16 = &v124;
    v17 = v130;
    v18 = v131;
    v100 = (void **)v129[5];
    v99 = v129[6];
    sub_1EAAE30((__int64)&v124, a1 + 13296, v129[0], (size_t)v129[1], v15, v14);
    v19 = *(_BYTE *)(a2 + 209);
    v111 = v129[4];
    v20 = **(_QWORD **)(*(_QWORD *)(a1 + 136) + 104LL);
    v101 = v20;
    if ( v19 )
    {
      v21 = *(_QWORD *)(a1 + 88);
      if ( (*(_BYTE *)(v20 + 625) & 2) == 0 )
      {
        LOBYTE(p_ptr) = v19;
        v18 |= v17;
        v42 = (unsigned __int64 *)sub_12ED8B0(v21, v124, (size_t)v125, 0, 1u);
        v43 = (char)p_ptr;
        v112 = v42;
        if ( v42 )
        {
          if ( (_BYTE)v18 )
          {
            v115 = v9;
            v25 = v18;
            v114 = &v111;
            v116 = &v112;
            v117 = v108;
            goto LABEL_57;
          }
          goto LABEL_56;
        }
LABEL_72:
        v53 = *(_QWORD *)(v9 + 88);
        LOBYTE(p_ptr) = v43;
        v54 = (unsigned __int64 *)sub_FDBF00(v53, v124, v125, (__int64)v100, (__int64)v99);
        v25 = (unsigned __int8)p_ptr;
        v24 = v54;
        v112 = v54;
        if ( !v54 )
        {
LABEL_73:
          if ( v108[0] )
          {
            sub_1EAA040(&v132, "could not find file '");
            if ( (unsigned __int64)v125 > 0x7FFFFFFFFFFFFFFFLL - (__int64)v133 )
              std::__throw_length_error("basic_string::append");
            sub_9EE560(&v132, v124, (size_t)v125);
            sub_9EE7C0(&v132, "' referenced by AST file '");
            sub_9EE560(&v132, *(_BYTE **)(a2 + 8), *(_QWORD *)(a2 + 16));
            sub_9EE7C0(&v132, "'");
            sub_1EAD680(v9, v132, (signed __int64)v133);
            if ( v132 != &v134 )
              operator delete(v132);
          }
LABEL_77:
          *((_QWORD *)v7[153] + v6) = 6;
          v35 = nullptr;
          goto LABEL_38;
        }
        if ( (_BYTE)v18 )
        {
          v115 = v9;
          v114 = &v111;
          v116 = &v112;
          v117 = v108;
          if ( (_BYTE)p_ptr )
            goto LABEL_57;
          goto LABEL_18;
        }
        if ( !(_BYTE)p_ptr )
        {
          v44 = *(_QWORD *)(v9 + 80);
          LOBYTE(v18) = v17;
LABEL_60:
          v45 = v24;
          while ( 1 )
          {
            v46 = (unsigned __int64 *)v45[1];
            if ( !v46 )
              break;
            v46 = (unsigned __int64 *)((unsigned __int64)v46 & 0xFFFFFFFFFFFFFFF8LL);
            v47 = v45[1] & 4;
            v45 = v46;
            if ( !v47 || !v46 )
              goto LABEL_64;
          }
          v45 = nullptr;
LABEL_64:
          v23 = *(_QWORD *)(v44 + 152);
          if ( !v23 )
            goto LABEL_70;
          v48 = *(_DWORD *)(v23 + 40);
          v49 = *(_QWORD *)(v23 + 24);
          if ( !v48 )
            goto LABEL_127;
          v50 = v48 - 1;
          v51 = (v48 - 1) & (((unsigned int)v46 >> 9) ^ ((unsigned int)v46 >> 4));
          v52 = *(unsigned __int64 **)(v49 + 8LL * v51);
          if ( v52 == v45 )
            goto LABEL_67;
          v86 = 1;
          if ( v52 == (unsigned __int64 *)-4096LL )
          {
LABEL_127:
            v88 = *(_QWORD *)v23;
            v23 = *(unsigned int *)(v23 + 16);
            if ( !(_DWORD)v23 )
              goto LABEL_70;
            v23 = (unsigned int)(v23 - 1);
            v89 = 1;
            for ( i = v23 & (((unsigned int)v46 >> 4) ^ ((unsigned int)v46 >> 9)); ; i = v23 & v92 )
            {
              v91 = *(unsigned __int64 **)(v88 + 16LL * i);
              if ( v91 == v45 )
                break;
              if ( v91 == (unsigned __int64 *)-4096LL )
                goto LABEL_70;
              v92 = v89 + i;
              ++v89;
            }
          }
          else
          {
            while ( 1 )
            {
              v51 = v50 & (v86 + v51);
              LODWORD(p_ptr) = v86 + 1;
              v87 = *(unsigned __int64 **)(v49 + 8LL * v51);
              if ( v87 == v45 )
                break;
              v86 = (int)p_ptr;
              if ( v87 == (unsigned __int64 *)-4096LL )
                goto LABEL_127;
            }
          }
LABEL_67:
          if ( v108[0] )
          {
            p_ptr = (void **)v44;
            sub_1EACE50(v9, 922, v124, (signed __int64)v125, nullptr, 0, nullptr, 0);
            v44 = (__int64)p_ptr;
          }
          v112 = (unsigned __int64 *)sub_10233B0(v44, v112);
          v24 = v112;
          if ( !v112 )
            goto LABEL_77;
LABEL_70:
          v115 = v9;
          LOBYTE(v17) = v18;
          v25 = 0;
          v114 = &v111;
          v116 = &v112;
          v117 = v108;
LABEL_19:
          v26 = (unsigned __int64)v24;
          while ( 1 )
          {
            v27 = *(_QWORD *)(v26 + 8);
            if ( !v27 )
              break;
            v26 = v27 & 0xFFFFFFFFFFFFFFF8LL;
            v27 &= 4u;
            if ( !(_DWORD)v27 || !v26 )
              goto LABEL_23;
          }
          v26 = 0;
LABEL_23:
          if ( v100 != *(void ***)(v26 + 32) )
          {
            while ( 1 )
            {
              v28 = v24[1];
              if ( !v28 )
                break;
              v24 = (unsigned __int64 *)(v28 & 0xFFFFFFFFFFFFFFF8LL);
              if ( (v28 & 4) == 0 || !v24 )
                goto LABEL_27;
            }
            v24 = nullptr;
LABEL_27:
            v29 = v24[4];
            v30 = 1;
            v31 = 1;
            v103 = v29;
            v32 = 0;
LABEL_28:
            if ( (*(_BYTE *)(v101 + 625) & 2) != 0 )
            {
              if ( !*(_BYTE *)(v9 + 9264) )
                goto LABEL_40;
              if ( !*((_BYTE *)v7 + 209) || v32 != 3 )
              {
                if ( v99 )
                  goto LABEL_40;
LABEL_33:
                if ( v32 != 3 )
                {
                  if ( !(_BYTE)v17 )
                  {
LABEL_35:
                    if ( v108[0] )
                    {
                      v63 = *((_DWORD *)v7 + 818);
                      v64 = v7;
                      p_ptr = &ptr;
                      v65 = v128;
                      ptr = v128;
                      v128[0] = v7;
                      v127 = 0x400000001LL;
                      if ( v63 )
                      {
                        v66 = 2;
                        v67 = 2;
                        v64 = *(void ***)v7[408];
                        LODWORD(v127) = 2;
                        v68 = *((_DWORD *)v64 + 818);
                        v128[1] = v64;
                        if ( v68 )
                        {
                          v99 = &v124;
                          v69 = v31;
                          v101 = v9;
                          v70 = v30;
                          v104 = v7;
                          v71 = v32;
                          do
                          {
                            v72 = *(_QWORD *)v64[408];
                            if ( v67 + 1 > (unsigned __int64)HIDWORD(v127) )
                            {
                              sub_2237220(p_ptr, v128, v67 + 1, 8);
                              v65 = ptr;
                              v66 = (unsigned int)v127;
                            }
                            v65[v66] = v72;
                            v65 = ptr;
                            v66 = (unsigned int)(v127 + 1);
                            v67 = (unsigned int)v66;
                            LODWORD(v127) = v127 + 1;
                            v64 = *((void ***)ptr + (unsigned int)v66 - 1);
                          }
                          while ( *((_DWORD *)v64 + 818) );
                          v32 = v71;
                          v30 = v70;
                          LOBYTE(v31) = v69;
                          v9 = v101;
                          v16 = (_BYTE **)v99;
                          v7 = v104;
                        }
                      }
                      LODWORD(v104) = v32;
                      v73 = v64[1];
                      v74 = *(_QWORD *)(v9 + 104);
                      v110 = v31;
                      v99 = v73;
                      v75 = (signed __int64)v64[2];
                      v76 = *(_DWORD *)(v9 + 504);
                      v109 = v30;
                      v101 = v75;
                      sub_FC70B0((__int64)&v132, v74, v76, 920);
                      sub_AEC220((unsigned __int8 **)&v132, v124, (signed __int64)v125);
                      v77 = 1LL << *(_DWORD *)(*((_QWORD *)ptr + (unsigned int)v127 - 1) + 4LL);
                      v78 = v77 & 0x23;
                      if ( (v77 & 0x23) != 0 )
                      {
                        v78 = 1;
                      }
                      else if ( (v77 & 4) == 0 )
                      {
                        v78 = 2;
                      }
                      sub_AE9DF0((unsigned __int8 **)&v132, v78, 3u);
                      sub_AEC220((unsigned __int8 **)&v132, v99, v101);
                      sub_AE9DF0((unsigned __int8 **)&v132, (int)v104, 2u);
                      LOBYTE(v104) = v110;
                      if ( v109 )
                      {
                        sub_AE9DF0((unsigned __int8 **)&v132, v110, 2u);
                        v79 = (char)v104;
                      }
                      else
                      {
                        sub_AE9DF0((unsigned __int8 **)&v132, 0, 2u);
                        v79 = (char)v104;
                        v100 = nullptr;
                      }
                      LOBYTE(v104) = v79;
                      sub_1EAA710(v118, (unsigned __int64)v100);
                      sub_AEC220((unsigned __int8 **)&v132, (_BYTE *)v118[0], (signed __int64)v118[1]);
                      v80 = 0;
                      if ( (_BYTE)v104 )
                        v80 = v103;
                      v100 = v120;
                      sub_1EAA710(v120, v80);
                      sub_AEC220((unsigned __int8 **)&v132, (_BYTE *)v120[0], (signed __int64)v120[1]);
                      if ( v120[0] != v100 + 2 )
                        operator delete(v120[0]);
                      if ( v118[0] != &v119 )
                        operator delete(v118[0]);
                      sub_AEA040((__int64)&v132);
                      if ( (unsigned int)v127 > 1 )
                      {
                        sub_FC70B0((__int64)&v132, *(_QWORD *)(v9 + 104), *(_DWORD *)(v9 + 504), 937);
                        sub_AEC220((unsigned __int8 **)&v132, v124, (signed __int64)v125);
                        sub_AEC220(
                          (unsigned __int8 **)&v132,
                          *(_BYTE **)(*(_QWORD *)ptr + 8LL),
                          *(_QWORD *)(*(_QWORD *)ptr + 16LL));
                        sub_AEA040((__int64)&v132);
                        if ( (unsigned int)v127 > 1 )
                        {
                          v100 = v7;
                          v81 = v9;
                          v82 = 1;
                          v83 = 1;
                          do
                          {
                            sub_FC70B0((__int64)&v132, *(_QWORD *)(v81 + 104), *(_DWORD *)(v81 + 504), 937);
                            v84 = *((_QWORD *)ptr + v82 - 1);
                            sub_AEC220((unsigned __int8 **)&v132, *(_BYTE **)(v84 + 8), *(_QWORD *)(v84 + 16));
                            v85 = *((_QWORD *)ptr + v83);
                            v83 = ++v82;
                            sub_AEC220((unsigned __int8 **)&v132, *(_BYTE **)(v85 + 8), *(_QWORD *)(v85 + 16));
                            sub_AEA040((__int64)&v132);
                          }
                          while ( v82 < (unsigned int)v127 );
                          v9 = v81;
                          v7 = v100;
                        }
                      }
                      sub_FC70B0((__int64)&v132, *(_QWORD *)(v9 + 104), *(_DWORD *)(v9 + 504), 936);
                      sub_AEC220((unsigned __int8 **)&v132, v99, v101);
                      sub_AEA040((__int64)&v132);
                      if ( ptr != p_ptr + 2 )
                        free(ptr);
                    }
                    v33 = (unsigned __int64)v112;
                    v34 = 4;
                    goto LABEL_37;
                  }
LABEL_42:
                  v33 = (unsigned __int64)v112;
                  v34 = 2LL * (unsigned __int8)v25;
LABEL_37:
                  v35 = (_BYTE *)(v34 | v33 & 0xFFFFFFFFFFFFFFF9LL);
                  *((_QWORD *)v7[153] + v6) = v35;
LABEL_38:
                  v99 = v35;
                  sub_1EADF80(v16 + 2);
                  sub_1EAF840((__int64)v113);
                  return (__int64)v99;
                }
                LOBYTE(v99) = v25;
                v121.m128i_i32[0] = 3;
                v121.m128i_i64[1] = (__int64)v100;
                v122.m128i_i8[0] = v30;
                v122.m128i_i64[1] = v103;
                LOBYTE(v123) = v31;
                *((_QWORD *)&v97 + 1) = v103;
                *(_QWORD *)&v97 = v122.m128i_i64[0];
                *((_QWORD *)&v96 + 1) = v100;
                *(_QWORD *)&v96 = v121.m128i_i64[0];
                sub_1EBEEA0(&v105, (__int64)&v114, v27, v23, v31, v25, v96, v97, v123);
                v36 = _mm_loadu_si128(&v106);
                LOBYTE(v31) = v107;
                v32 = v105.m128i_i32[0];
                v121 = _mm_loadu_si128(&v105);
                v30 = v106.m128i_i8[0];
                v122 = v36;
                v100 = (void **)v121.m128i_i64[1];
                v123 = v107;
                v103 = v36.m128i_u64[1];
                LOBYTE(v25) = (_BYTE)v99;
LABEL_40:
                if ( !(_BYTE)v17 && v32 != 3 )
                  goto LABEL_35;
                goto LABEL_42;
              }
              LOBYTE(v101) = v25;
              v37 = 10;
              v121.m128i_i32[0] = 3;
              v121.m128i_i64[1] = (__int64)v100;
              v122.m128i_i8[0] = v30;
              v122.m128i_i64[1] = v103;
              LOBYTE(v123) = v31;
              v38 = &v121;
              v39 = &v96;
              while ( v37 )
              {
                *(_DWORD *)v39 = v38->m128i_i32[0];
                v38 = (__m128i *)((char *)v38 + 4);
                v39 = (__int128 *)((char *)v39 + 4);
                --v37;
              }
              sub_1EBEEA0(&v105, (__int64)&v114, v27, 0, v31, v25, v96, v97, v98);
              v40 = &v121;
              v23 = 10;
              v41 = &v105;
              while ( v23 )
              {
                v40->m128i_i32[0] = v41->m128i_i32[0];
                v41 = (__m128i *)((char *)v41 + 4);
                v40 = (__m128i *)((char *)v40 + 4);
                --v23;
              }
              v32 = v121.m128i_i32[0];
              v30 = v122.m128i_i8[0];
              v31 = (unsigned __int8)v123;
              v100 = (void **)v121.m128i_i64[1];
              v103 = v122.m128i_u64[1];
              v25 = (unsigned __int8)v101;
            }
            if ( v99 || !*(_BYTE *)(v9 + 9264) )
              goto LABEL_40;
            goto LABEL_33;
          }
          LOBYTE(p_ptr) = v25;
          v55 = sub_1EAADD0(v9, (__int64)v7);
          v25 = (unsigned __int8)p_ptr;
          if ( v99 && v55 != 1 )
          {
            v27 = v56;
            do
            {
              v57 = *(_QWORD *)(v27 + 8);
              if ( !v57 )
                break;
              v27 = v57 & 0xFFFFFFFFFFFFFFF8LL;
              if ( (v57 & 4) == 0 )
                break;
            }
            while ( v27 );
            if ( v99 != *(_BYTE **)((v57 & 0xFFFFFFFFFFFFFFF8LL) + 40) )
            {
              v132 = nullptr;
              do
              {
                v58 = *(_QWORD *)(v56 + 8);
                if ( !v58 )
                  break;
                v56 = v58 & 0xFFFFFFFFFFFFFFF8LL;
                if ( (v58 & 4) == 0 )
                  break;
              }
              while ( v56 );
              v59 = *(_BYTE *)(v9 + 9264) == 0;
              v103 = *(_QWORD *)((v58 & 0xFFFFFFFFFFFFFFF8LL) + 40);
              if ( v59 )
              {
                v60 = (void **)v99;
                LODWORD(v132) = 1;
                v61 = &v132;
                v134 = 1;
                v23 = 10;
                v31 = 1;
                v30 = 1;
                v133 = v99;
                v135 = v103;
                v62 = &v121;
                v136 = 1;
                while ( v23 )
                {
                  v62->m128i_i32[0] = *(_DWORD *)v61;
                  v61 = (void **)((char *)v61 + 4);
                  v62 = (__m128i *)((char *)v62 + 4);
                  --v23;
                }
                v100 = v60;
                v32 = 1;
              }
              else
              {
                v93 = 10;
                LODWORD(v132) = 1;
                v133 = v99;
                v134 = 1;
                v135 = v103;
                v136 = 1;
                v94 = &v132;
                v95 = &v96;
                while ( v93 )
                {
                  *(_DWORD *)v95 = *(_DWORD *)v94;
                  v94 = (void **)((char *)v94 + 4);
                  v95 = (__int128 *)((char *)v95 + 4);
                  --v93;
                }
                sub_1EBEEA0(&v121, (__int64)&v114, (__int64)&v114, 0, v56, v25, v96, v97, v98);
                v32 = v121.m128i_i32[0];
                v30 = v122.m128i_i8[0];
                v31 = (unsigned __int8)v123;
                v100 = (void **)v121.m128i_i64[1];
                v103 = v122.m128i_u64[1];
                v25 = (unsigned __int8)p_ptr;
              }
              goto LABEL_28;
            }
          }
LABEL_57:
          v31 = 0;
          v30 = 0;
          v32 = 3;
          goto LABEL_28;
        }
LABEL_56:
        v115 = v9;
        v25 = 0;
        v114 = &v111;
        v116 = &v112;
        v117 = v108;
        goto LABEL_57;
      }
      LOBYTE(v17) = 0;
    }
    else
    {
      LOBYTE(v18) = v17 | v18;
      v21 = *(_QWORD *)(a1 + 88);
    }
    v22 = (unsigned __int64 *)sub_12ED8B0(v21, v124, (size_t)v125, 0, 1u);
    v112 = v22;
    if ( !(_BYTE)v18 )
    {
      v24 = v22;
      if ( !v22 )
        goto LABEL_73;
      v44 = *(_QWORD *)(v9 + 80);
      goto LABEL_60;
    }
    if ( v112 )
    {
      v115 = v9;
      v114 = &v111;
      v116 = &v112;
      v117 = v108;
LABEL_18:
      v24 = v112;
      v25 = 1;
      goto LABEL_19;
    }
    v43 = 0;
    goto LABEL_72;
  }
  return result;
}

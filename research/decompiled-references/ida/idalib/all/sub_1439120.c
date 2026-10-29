__int64 __fastcall sub_1439120(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  int v6; // r10d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int64 v12; // r9
  __int64 *v13; // r15
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rdi
  __int64 v24; // rax
  char v26; // dl
  _QWORD *v27; // rdi
  int v28; // ebp
  char *v29; // rax
  __int64 v30; // rdx
  _BYTE *v31; // r15
  signed __int64 v32; // r13
  unsigned __int8 *v33; // rbp
  _QWORD *v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  void **v39; // r13
  _BYTE *v40; // rdi
  __int64 v41; // rax
  unsigned __int8 *v42; // rbp
  _QWORD *v43; // rdx
  __int64 v44; // rax
  _BYTE *v45; // rdi
  void **v46; // rbp
  _QWORD *v47; // rax
  void **v48; // r12
  void **v49; // rbx
  void **v50; // rdi
  void **v51; // rdi
  void **v52; // rbx
  void **v53; // r12
  __int64 v54; // rax
  unsigned __int64 v55; // r11
  __int64 v56; // rax
  _QWORD *v57; // r12
  _QWORD *v58; // rdi
  __int64 v59; // rax
  int v60; // eax
  unsigned __int64 v61; // r8
  __int64 v62; // rax
  _QWORD *v63; // r15
  size_t v64; // rdx
  __int64 v65; // rdx
  char v66; // cl
  unsigned __int64 v67; // rbp
  __int64 v68; // rax
  _QWORD *v69; // r12
  char v70; // dl
  unsigned __int64 v71; // rbp
  __int64 v72; // rax
  _QWORD *v73; // r12
  _QWORD *v74; // rdx
  int v75; // eax
  _QWORD *v76; // rdx
  int v77; // eax
  char v78; // dl
  __int64 v79; // rax
  __int64 v80; // r14
  __int64 v81; // rdx
  __int64 v82; // r14
  void *v83; // rdi
  __int64 v84; // rax
  __int64 v85; // r13
  __int64 v86; // r14
  __int64 v87; // r13
  void *v88; // rdi
  char v89; // dl
  unsigned __int64 v90; // r8
  __int64 v91; // rax
  _QWORD *v92; // r15
  __int64 *v93; // rdi
  __int64 v94; // rcx
  _DWORD *v95; // rax
  _DWORD *v96; // rdx
  __int64 *v97; // rdi
  __int64 v98; // rcx
  _DWORD *v99; // rax
  _DWORD *v100; // rdx
  __int64 *v101; // rdi
  __int64 v102; // rcx
  _DWORD *v103; // rax
  _DWORD *v104; // rdx
  __int64 *v105; // rdi
  __int64 v106; // rcx
  _DWORD *v107; // rax
  _DWORD *v108; // rdx
  __int64 *v109; // rdi
  __int64 v110; // rcx
  _DWORD *v111; // rax
  _DWORD *v112; // rdx
  __int64 v114; // [rsp+8h] [rbp-110h]
  int v115; // [rsp+8h] [rbp-110h]
  int v116; // [rsp+8h] [rbp-110h]
  int v117; // [rsp+14h] [rbp-104h]
  int v118; // [rsp+18h] [rbp-100h]
  int v119; // [rsp+1Ch] [rbp-FCh]
  void *src[2]; // [rsp+20h] [rbp-F8h] BYREF
  _BYTE v121[16]; // [rsp+30h] [rbp-E8h] BYREF
  void *v122; // [rsp+40h] [rbp-D8h]
  size_t v123; // [rsp+48h] [rbp-D0h]
  _QWORD v124[2]; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v125[2]; // [rsp+60h] [rbp-B8h] BYREF
  char v126; // [rsp+80h] [rbp-98h]
  void *v127[2]; // [rsp+90h] [rbp-88h] BYREF
  __int64 v128; // [rsp+A0h] [rbp-78h]
  void *v129; // [rsp+B0h] [rbp-68h]
  __int64 v130; // [rsp+C0h] [rbp-58h] BYREF
  __int16 v131; // [rsp+D0h] [rbp-48h]

  v6 = a5;
  v10 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 1176) - *(_QWORD *)(a1 + 1168)) >> 3);
  v11 = *(unsigned int *)(a1 + 2328);
  ++*(_DWORD *)(a1 + 2324);
  if ( v11 < v10 )
    *(_DWORD *)(a1 + 2328) = v10;
  v12 = (unsigned int)(a2 + 1);
  v13 = *(__int64 **)(a1 + 88);
  LOBYTE(v127[0]) = 0;
  if ( (unsigned int)v12 > 1 )
  {
    if ( a2 >= 0 )
    {
      v14 = v13[23] + 24LL * (unsigned int)a2;
      goto LABEL_6;
    }
    v55 = (unsigned int)(-2 - a2);
    v56 = *(_QWORD *)(v13[40] + 8LL * ((unsigned int)(-2 - a2) >> 6));
    if ( _bittest64(&v56, v55) )
    {
      v57 = (_QWORD *)(v13[34] + 8 * ((unsigned __int64)(int)v55 >> 5));
      if ( *v57 )
      {
        v14 = *v57 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
LABEL_6:
        if ( v14 && *(char *)(v14 + 3) >= 0 )
        {
          v117 = v6;
          sub_101D9A0(v125, (__int64 *)(*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFF8LL), v13[1], v13[2], v6);
          v6 = v117;
          if ( v126 )
          {
            v15 = *(_QWORD *)(a1 + 760);
            if ( !v15 )
            {
LABEL_21:
              v20 = operator new(0xD0u);
              sub_13D4AD0(v20, a2, v125[0].m128i_i64, a1, a6);
              if ( *(_QWORD *)(a1 + 32) && *(_DWORD *)(a1 + 2392) != a2 )
              {
                v23 = *(_QWORD **)(a1 + 88);
                LOBYTE(v127[0]) = 0;
                if ( a2 >= 0 )
                {
                  v24 = v23[23] + 24LL * (unsigned int)a2;
LABEL_25:
                  if ( v24 && *(char *)(v24 + 3) >= 0 && *(_QWORD *)((*(_QWORD *)(v24 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8) )
                  {
                    (*(void (__fastcall **)(void **))(**(_QWORD **)(a1 + 32) + 8LL))(v127);
                    if ( (_BYTE)v128 )
                      *(__m128i *)(v20 + 184) = _mm_load_si128((const __m128i *)v127);
                  }
                  goto LABEL_30;
                }
                v71 = (unsigned int)(-2 - a2);
                v72 = *(_QWORD *)(v23[40] + 8LL * ((unsigned int)v71 >> 6));
                if ( _bittest64(&v72, v71) )
                {
                  v73 = (_QWORD *)(v23[34] + 8 * ((unsigned __int64)(int)v71 >> 5));
                  if ( *v73 )
                  {
                    v24 = *v73 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
                    goto LABEL_25;
                  }
                  v101 = (__int64 *)(v23[36] & 0xFFFFFFFFFFFFFFF8LL);
                  v102 = *v101;
                  v101[10] += 768;
                  v103 = (_DWORD *)((v102 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                  if ( v101[1] >= (unsigned __int64)(v103 + 192) && v102 )
                    *v101 = (__int64)(v103 + 192);
                  else
                    v103 = (_DWORD *)sub_986170((__int64)v101, 768, 768, 3, v21, v22);
                  *v73 = v103;
                  v104 = v103 + 192;
                  do
                  {
                    *v103 = 0;
                    v103 += 6;
                    *((_OWORD *)v103 - 1) = 0;
                    *((_QWORD *)v103 - 1) = 0;
                  }
                  while ( v103 != v104 );
                  v78 = (char)v127[0];
                  v24 = *v73 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
                }
                else
                {
                  v24 = sub_101F930((__int64)v23, v71, v127);
                  v78 = (char)v127[0];
                }
                if ( !v78 )
                  goto LABEL_25;
              }
LABEL_30:
              sub_1437090(a1, v20, a3, a4);
              return 0;
            }
            v16 = *(_QWORD **)(a1 + 88);
            LOBYTE(v127[0]) = 0;
            if ( a2 >= 0 )
            {
              v17 = v16[23] + 24LL * (unsigned int)a2;
              goto LABEL_12;
            }
            v61 = (unsigned int)(-2 - a2);
            v62 = *(_QWORD *)(v16[40] + 8LL * ((unsigned int)(-2 - a2) >> 6));
            if ( _bittest64(&v62, v61) )
            {
              v63 = (_QWORD *)(v16[34] + 8 * ((unsigned __int64)(int)v61 >> 5));
              if ( *v63 )
              {
                v17 = *v63 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
LABEL_12:
                if ( v17 && *(char *)(v17 + 3) >= 0 )
                {
                  v18 = *(_QWORD *)((*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFF8LL) + 8);
                  if ( !v18 )
                    goto LABEL_20;
                  v19 = *(_QWORD *)(v18 + 8);
                  if ( v19 )
                  {
                    while ( 1 )
                    {
                      v18 = v19 & 0xFFFFFFFFFFFFFFF8LL;
                      if ( (v19 & 4) == 0 || !v18 )
                        break;
                      v19 = *(_QWORD *)(v18 + 8);
                      if ( !v19 )
                        goto LABEL_19;
                    }
LABEL_20:
                    if ( v18 != v15 )
                      goto LABEL_21;
                    v58 = *(_QWORD **)(a1 + 88);
                    LOBYTE(v127[0]) = 0;
                    if ( a2 >= 0 )
                    {
                      v59 = v58[23] + 24LL * (unsigned int)a2;
LABEL_86:
                      if ( v59 && *(char *)(v59 + 3) >= 0 )
                      {
                        v60 = *(_DWORD *)v59 & 0x7FFFFFFF;
LABEL_89:
                        *(_DWORD *)(a1 + 776) = v60;
                        *(_DWORD *)(a1 + 772) = *(_DWORD *)(a1 + 768) + v60;
                        goto LABEL_21;
                      }
LABEL_113:
                      v60 = 0;
                      goto LABEL_89;
                    }
                    v90 = (unsigned int)(-2 - a2);
                    v91 = *(_QWORD *)(v58[40] + 8LL * ((unsigned int)(-2 - a2) >> 6));
                    if ( _bittest64(&v91, v90) )
                    {
                      v92 = (_QWORD *)(v58[34] + 8 * ((unsigned __int64)(int)v90 >> 5));
                      if ( *v92 )
                      {
                        v59 = *v92 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
                        goto LABEL_86;
                      }
                      v109 = (__int64 *)(v58[36] & 0xFFFFFFFFFFFFFFF8LL);
                      v110 = *v109;
                      v109[10] += 768;
                      v111 = (_DWORD *)((v110 + 7) & 0xFFFFFFFFFFFFFFF8LL);
                      if ( v109[1] >= (unsigned __int64)(v111 + 192) && v110 )
                      {
                        *v109 = (__int64)(v111 + 192);
                      }
                      else
                      {
                        v111 = (_DWORD *)sub_986170((__int64)v109, 768, 768, 3, v90, v12);
                        LOBYTE(v90) = -2 - a2;
                      }
                      *v92 = v111;
                      v112 = v111 + 192;
                      do
                      {
                        *v111 = 0;
                        v111 += 6;
                        *((_OWORD *)v111 - 1) = 0;
                        *((_QWORD *)v111 - 1) = 0;
                      }
                      while ( v111 != v112 );
                      v70 = (char)v127[0];
                      v59 = *v92 + 24 * (v90 & 0x1F);
                    }
                    else
                    {
                      v59 = sub_101F930((__int64)v58, v90, v127);
                      v70 = (char)v127[0];
                    }
                    if ( v70 )
                      goto LABEL_113;
                    goto LABEL_86;
                  }
                }
LABEL_19:
                v18 = 0;
                goto LABEL_20;
              }
              v97 = (__int64 *)(v16[36] & 0xFFFFFFFFFFFFFFF8LL);
              v98 = *v97;
              v97[10] += 768;
              v99 = (_DWORD *)((v98 + 7) & 0xFFFFFFFFFFFFFFF8LL);
              if ( v97[1] >= (unsigned __int64)(v99 + 192) && v98 )
              {
                *v97 = (__int64)(v99 + 192);
              }
              else
              {
                v99 = (_DWORD *)sub_986170((__int64)v97, 768, 768, 3, v61, v12);
                LOBYTE(v61) = -2 - a2;
              }
              *v63 = v99;
              v100 = v99 + 192;
              do
              {
                *v99 = 0;
                v99 += 6;
                *((_OWORD *)v99 - 1) = 0;
                *((_QWORD *)v99 - 1) = 0;
              }
              while ( v99 != v100 );
              v66 = (char)v127[0];
              v15 = *(_QWORD *)(a1 + 760);
              v17 = *v63 + 24 * (v61 & 0x1F);
            }
            else
            {
              v17 = sub_101F930((__int64)v16, v61, v127);
              v66 = (char)v127[0];
              v15 = *(_QWORD *)(a1 + 760);
            }
            if ( v66 )
              goto LABEL_19;
            goto LABEL_12;
          }
        }
        else
        {
          v126 = 0;
        }
        LOBYTE(v127[0]) = 0;
        v27 = *(_QWORD **)(a1 + 88);
        goto LABEL_72;
      }
      v93 = (__int64 *)(v13[36] & 0xFFFFFFFFFFFFFFF8LL);
      v94 = *v93;
      v93[10] += 768;
      v95 = (_DWORD *)((v94 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v93[1] >= (unsigned __int64)(v95 + 192) && v94 )
      {
        *v93 = (__int64)(v95 + 192);
      }
      else
      {
        v119 = a5;
        v95 = (_DWORD *)sub_986170((__int64)v93, 768, 768, 3, a5, v12);
        v6 = v119;
        LOBYTE(v55) = -2 - a2;
        v12 = (unsigned int)(a2 + 1);
      }
      *v57 = v95;
      v96 = v95 + 192;
      do
      {
        *v95 = 0;
        v95 += 6;
        *((_OWORD *)v95 - 1) = 0;
        *((_QWORD *)v95 - 1) = 0;
      }
      while ( v95 != v96 );
      v26 = (char)v127[0];
      v14 = *v57 + 24 * (v55 & 0x1F);
    }
    else
    {
      v118 = a5;
      v14 = sub_101F930((__int64)v13, v55, v127);
      v12 = (unsigned int)(a2 + 1);
      v6 = v118;
      v26 = (char)v127[0];
    }
    if ( !v26 )
      goto LABEL_6;
  }
  v126 = 0;
  v27 = *(_QWORD **)(a1 + 88);
  LOBYTE(v127[0]) = 0;
  if ( (unsigned int)v12 <= 1 )
    goto LABEL_34;
LABEL_72:
  if ( a2 < 0 )
  {
    v67 = (unsigned int)(-2 - a2);
    v68 = *(_QWORD *)(v27[40] + 8LL * ((unsigned int)v67 >> 6));
    if ( _bittest64(&v68, v67) )
    {
      v69 = (_QWORD *)(v27[34] + 8 * ((unsigned __int64)(int)v67 >> 5));
      if ( *v69 )
      {
        v54 = *v69 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
        goto LABEL_74;
      }
      v105 = (__int64 *)(v27[36] & 0xFFFFFFFFFFFFFFF8LL);
      v106 = *v105;
      v105[10] += 768;
      v107 = (_DWORD *)((v106 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v105[1] >= (unsigned __int64)(v107 + 192) && v106 )
      {
        *v105 = (__int64)(v107 + 192);
      }
      else
      {
        v116 = v6;
        v107 = (_DWORD *)sub_986170((__int64)v105, 768, 768, 3, a5, v12);
        v6 = v116;
      }
      *v69 = v107;
      v108 = v107 + 192;
      do
      {
        *v107 = 0;
        v107 += 6;
        *((_OWORD *)v107 - 1) = 0;
        *((_QWORD *)v107 - 1) = 0;
      }
      while ( v107 != v108 );
      v89 = (char)v127[0];
      v54 = *v69 + 24LL * ((-2 - (_BYTE)a2) & 0x1F);
    }
    else
    {
      v115 = v6;
      v54 = sub_101F930((__int64)v27, v67, v127);
      v89 = (char)v127[0];
      v6 = v115;
    }
    if ( !v89 )
      goto LABEL_74;
LABEL_34:
    v28 = 0;
    goto LABEL_35;
  }
  v54 = v27[23] + 24LL * (unsigned int)a2;
LABEL_74:
  if ( !v54 || *(char *)(v54 + 3) < 0 )
    goto LABEL_34;
  v28 = *(_DWORD *)v54 & 0x7FFFFFFF;
LABEL_35:
  sub_FC70B0((__int64)v127, *(_QWORD *)(a1 + 48), v6, 1119);
  v29 = (char *)sub_1020040(*(_QWORD *)(a1 + 88), v28, nullptr);
  src[0] = v121;
  sub_1436330(src, v29, (__int64)&v29[v30]);
  v31 = src[0];
  v32 = (signed __int64)src[1];
  v33 = (unsigned __int8 *)v127[0];
  if ( !v127[0] )
  {
    v76 = v127[1];
    v77 = *((_DWORD *)v127[1] + 3744);
    if ( v77 )
    {
      v79 = (unsigned int)(v77 - 1);
      *((_DWORD *)v127[1] + 3744) = v79;
      v33 = (unsigned __int8 *)v76[v79 + 1856];
      v80 = *((unsigned int *)v33 + 134);
      *v33 = 0;
      v81 = *((_QWORD *)v33 + 66);
      *((_DWORD *)v33 + 106) = 0;
      v82 = v81 + (v80 << 6);
      while ( v81 != v82 )
      {
        while ( 1 )
        {
          v82 -= 64;
          v83 = *(void **)(v82 + 24);
          if ( v83 == (void *)(v82 + 40) )
            break;
          v114 = v81;
          operator delete(v83);
          v81 = v114;
          if ( v114 == v82 )
            goto LABEL_132;
        }
      }
LABEL_132:
      *((_DWORD *)v33 + 134) = 0;
    }
    else
    {
      v33 = (unsigned __int8 *)operator new(0x3A0u);
      *v33 = 0;
      *((_QWORD *)v33 + 12) = v33 + 112;
      *((_QWORD *)v33 + 16) = v33 + 144;
      *((_QWORD *)v33 + 20) = v33 + 176;
      *((_QWORD *)v33 + 24) = v33 + 208;
      *((_QWORD *)v33 + 28) = v33 + 240;
      *((_QWORD *)v33 + 32) = v33 + 272;
      *((_QWORD *)v33 + 36) = v33 + 304;
      *((_QWORD *)v33 + 40) = v33 + 336;
      *((_QWORD *)v33 + 44) = v33 + 368;
      *((_QWORD *)v33 + 48) = v33 + 400;
      *((_QWORD *)v33 + 52) = v33 + 432;
      *((_QWORD *)v33 + 13) = 0;
      v33[112] = 0;
      *((_QWORD *)v33 + 17) = 0;
      v33[144] = 0;
      *((_QWORD *)v33 + 21) = 0;
      v33[176] = 0;
      *((_QWORD *)v33 + 25) = 0;
      v33[208] = 0;
      *((_QWORD *)v33 + 29) = 0;
      v33[240] = 0;
      *((_QWORD *)v33 + 33) = 0;
      v33[272] = 0;
      *((_QWORD *)v33 + 37) = 0;
      v33[304] = 0;
      *((_QWORD *)v33 + 41) = 0;
      v33[336] = 0;
      *((_QWORD *)v33 + 45) = 0;
      v33[368] = 0;
      *((_QWORD *)v33 + 49) = 0;
      v33[400] = 0;
      *((_QWORD *)v33 + 53) = 0x800000000LL;
      *((_QWORD *)v33 + 66) = v33 + 544;
      *((_QWORD *)v33 + 67) = 0x600000000LL;
    }
    v127[0] = v33;
  }
  v33[*v33 + 1] = 0;
  v122 = v124;
  if ( &v31[v32] && !v31 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  if ( (unsigned __int64)v32 > 0xF )
  {
    if ( v32 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v34 = (_QWORD *)operator new(v32 + 1);
    v124[0] = v32;
    v122 = v34;
LABEL_94:
    memcpy(v34, v31, v32);
    v34 = v122;
    goto LABEL_41;
  }
  if ( v32 == 1 )
  {
    LOBYTE(v124[0]) = *v31;
    v34 = v124;
    goto LABEL_41;
  }
  v34 = v124;
  if ( v32 )
    goto LABEL_94;
LABEL_41:
  v123 = v32;
  *((_BYTE *)v34 + v32) = 0;
  v35 = v127[0];
  v36 = *(unsigned __int8 *)v127[0];
  *(_BYTE *)v127[0] = v36 + 1;
  v37 = (unsigned __int8)v36;
  v38 = 4 * (v36 + 3);
  v39 = (void **)&v35[v38];
  v40 = (_BYTE *)v35[v38];
  if ( v122 == v124 )
  {
    v64 = v123;
    if ( v123 )
    {
      if ( v123 == 1 )
        *v40 = v124[0];
      else
        memcpy(v40, v122, v123);
      v64 = v123;
      v40 = *v39;
    }
    v39[1] = (void *)v64;
    v40[v64] = 0;
    v40 = v122;
    goto LABEL_45;
  }
  if ( v40 == (_BYTE *)&v35[v38 + 2] )
  {
    *v39 = v122;
    v39[1] = (void *)v123;
    v39[2] = (void *)v124[0];
    goto LABEL_115;
  }
  v41 = v35[4 * v37 + 14];
  *v39 = v122;
  v39[1] = (void *)v123;
  v39[2] = (void *)v124[0];
  if ( !v40 )
  {
LABEL_115:
    v40 = v124;
    v122 = v124;
    goto LABEL_45;
  }
  v122 = v40;
  v124[0] = v41;
LABEL_45:
  v123 = 0;
  *v40 = 0;
  if ( v122 != v124 )
    operator delete(v122);
  v42 = (unsigned __int8 *)v127[0];
  if ( !v127[0] )
  {
    v74 = v127[1];
    v75 = *((_DWORD *)v127[1] + 3744);
    if ( v75 )
    {
      v84 = (unsigned int)(v75 - 1);
      *((_DWORD *)v127[1] + 3744) = v84;
      v42 = (unsigned __int8 *)v74[v84 + 1856];
      v85 = *((unsigned int *)v42 + 134);
      *v42 = 0;
      v86 = *((_QWORD *)v42 + 66);
      *((_DWORD *)v42 + 106) = 0;
      v87 = v86 + (v85 << 6);
      while ( v86 != v87 )
      {
        while ( 1 )
        {
          v87 -= 64;
          v88 = *(void **)(v87 + 24);
          if ( v88 == (void *)(v87 + 40) )
            break;
          operator delete(v88);
          if ( v86 == v87 )
            goto LABEL_137;
        }
      }
LABEL_137:
      *((_DWORD *)v42 + 134) = 0;
    }
    else
    {
      v42 = (unsigned __int8 *)operator new(0x3A0u);
      *v42 = 0;
      *((_QWORD *)v42 + 12) = v42 + 112;
      *((_QWORD *)v42 + 16) = v42 + 144;
      *((_QWORD *)v42 + 20) = v42 + 176;
      *((_QWORD *)v42 + 24) = v42 + 208;
      *((_QWORD *)v42 + 28) = v42 + 240;
      *((_QWORD *)v42 + 32) = v42 + 272;
      *((_QWORD *)v42 + 36) = v42 + 304;
      *((_QWORD *)v42 + 40) = v42 + 336;
      *((_QWORD *)v42 + 44) = v42 + 368;
      *((_QWORD *)v42 + 48) = v42 + 400;
      *((_QWORD *)v42 + 52) = v42 + 432;
      *((_QWORD *)v42 + 13) = 0;
      v42[112] = 0;
      *((_QWORD *)v42 + 17) = 0;
      v42[144] = 0;
      *((_QWORD *)v42 + 21) = 0;
      v42[176] = 0;
      *((_QWORD *)v42 + 25) = 0;
      v42[208] = 0;
      *((_QWORD *)v42 + 29) = 0;
      v42[240] = 0;
      *((_QWORD *)v42 + 33) = 0;
      v42[272] = 0;
      *((_QWORD *)v42 + 37) = 0;
      v42[304] = 0;
      *((_QWORD *)v42 + 41) = 0;
      v42[336] = 0;
      *((_QWORD *)v42 + 45) = 0;
      v42[368] = 0;
      *((_QWORD *)v42 + 49) = 0;
      v42[400] = 0;
      *((_QWORD *)v42 + 53) = 0x800000000LL;
      *((_QWORD *)v42 + 66) = v42 + 544;
      *((_QWORD *)v42 + 67) = 0x600000000LL;
    }
    v127[0] = v42;
  }
  v42[*v42 + 1] = 1;
  v43 = v127[0];
  v44 = *(unsigned __int8 *)v127[0];
  *(_BYTE *)v127[0] = v44 + 1;
  v45 = src[0];
  v43[v44 + 2] = &byte_22F0C30;
  if ( v45 != v121 )
    operator delete(v45);
  if ( (_BYTE)v131 )
  {
    sub_FC7790(v128, (__int64 *)v127, SHIBYTE(v131));
    v128 = 0;
    v131 = 0;
  }
  if ( v129 != &v130 )
    operator delete(v129);
  v46 = (void **)v127[0];
  if ( v127[0] )
  {
    v47 = v127[1];
    if ( v127[1] )
    {
      if ( v127[0] < v127[1] || v127[0] > (char *)v127[1] + 14848 )
      {
        v48 = *((void ***)v127[0] + 66);
        v49 = &v48[8 * (unsigned __int64)*((unsigned int *)v127[0] + 134)];
        if ( v48 != v49 )
        {
          do
          {
            while ( 1 )
            {
              v49 -= 8;
              v50 = (void **)v49[3];
              if ( v50 == v49 + 5 )
                break;
              operator delete(v50);
              if ( v48 == v49 )
                goto LABEL_60;
            }
          }
          while ( v48 != v49 );
LABEL_60:
          v49 = (void **)v46[66];
        }
        if ( v49 != v46 + 68 )
          free(v49);
        v51 = (void **)v46[52];
        v52 = v46 + 52;
        if ( v51 != v46 + 54 )
          free(v51);
        v53 = v46 + 12;
        do
        {
          while ( 1 )
          {
            v52 -= 4;
            if ( *v52 == v52 + 2 )
              break;
            operator delete(*v52);
            if ( v52 == v53 )
              goto LABEL_68;
          }
        }
        while ( v52 != v53 );
LABEL_68:
        operator delete(v46, 0x3A0u);
      }
      else
      {
        v65 = *((unsigned int *)v127[1] + 3744);
        *((_DWORD *)v127[1] + 3744) = v65 + 1;
        v47[v65 + 1856] = v46;
      }
    }
  }
  return 1;
}

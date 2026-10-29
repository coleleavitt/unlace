__int64 __fastcall sub_10A7270(__int64 a1, __int64 *a2, __int64 a3)
{
  char v4; // al
  void **v5; // rdi
  _QWORD *v6; // r12
  __int64 v7; // r14
  void *v8; // rdi
  __int64 v9; // r15
  size_t v10; // r13
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // r14
  unsigned __int8 *v18; // rbx
  _QWORD *v19; // rdx
  __int64 v20; // rax
  void **v21; // rbp
  size_t v22; // rax
  void **v23; // r12
  void **v24; // rbx
  void **v25; // rdi
  void **v26; // rdi
  void **v27; // rbx
  void **v28; // r12
  _BYTE *v29; // rax
  __int64 v30; // rdx
  __int64 *v31; // rdi
  __int64 v32; // rdx
  void **v33; // r12
  void **p_src; // r14
  unsigned __int8 *v35; // rbx
  _BYTE *v36; // r13
  void *v37; // r15
  _QWORD *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  char *v42; // rbp
  _BYTE *v43; // rdi
  __int64 v44; // rax
  void **v45; // rbx
  size_t v46; // rax
  void **v47; // r12
  void **v48; // rbp
  void **v49; // rdi
  void **v50; // rdi
  void **v51; // r12
  void **v52; // rbp
  void **v53; // rbp
  _QWORD **v54; // rbx
  _QWORD **v55; // rax
  _QWORD **v56; // r15
  _QWORD *v57; // rbp
  _QWORD *v58; // r13
  bool v59; // zf
  __int64 v60; // rax
  __int64 *v61; // r9
  __int64 *v62; // rax
  __int64 *v63; // rbx
  _QWORD *v64; // r12
  __int64 *v65; // rbp
  __int64 v66; // rdx
  char *v67; // rsi
  char *v68; // rsi
  __int64 v69; // rax
  char v70; // al
  char *v71; // rsi
  void *v72; // rax
  char *v73; // rsi
  char *v74; // rsi
  char *v75; // rsi
  int v76; // eax
  bool v77; // cl
  size_t v78; // rdx
  __int64 v79; // rdx
  size_t v80; // rdx
  int v81; // eax
  size_t v82; // rdx
  int v83; // eax
  __int64 v84; // rax
  __int64 v85; // rbp
  __int64 v86; // rax
  __int64 v87; // rbp
  void **v88; // r14
  unsigned __int8 *v89; // r12
  __int64 v90; // rbx
  void *v91; // rdi
  __int64 v92; // rdx
  __int64 v93; // rax
  __int64 v94; // rbp
  __int64 v95; // r13
  __int64 v96; // rbp
  void *v97; // rdi
  unsigned __int8 v98; // [rsp+0h] [rbp-158h]
  void **v99; // [rsp+8h] [rbp-150h] BYREF
  void ***v100; // [rsp+10h] [rbp-148h]
  void **v101; // [rsp+18h] [rbp-140h]
  __int64 v102; // [rsp+20h] [rbp-138h]
  __int64 v103; // [rsp+28h] [rbp-130h]
  _QWORD **v104; // [rsp+30h] [rbp-128h]
  void **v105; // [rsp+38h] [rbp-120h]
  void **v106; // [rsp+40h] [rbp-118h] BYREF
  char v107; // [rsp+48h] [rbp-110h]
  void *v108[2]; // [rsp+50h] [rbp-108h] BYREF
  char v109; // [rsp+60h] [rbp-F8h] BYREF
  void *src; // [rsp+70h] [rbp-E8h] BYREF
  size_t n; // [rsp+78h] [rbp-E0h]
  __int64 v112; // [rsp+80h] [rbp-D8h]
  __int64 (__fastcall **v113)(); // [rsp+90h] [rbp-C8h] BYREF
  int v114; // [rsp+98h] [rbp-C0h]
  __int128 v115; // [rsp+A0h] [rbp-B8h]
  __int64 v116; // [rsp+B0h] [rbp-A8h]
  char v117; // [rsp+B8h] [rbp-A0h]
  int v118; // [rsp+BCh] [rbp-9Ch]
  void **v119; // [rsp+C0h] [rbp-98h]
  void *v120; // [rsp+D0h] [rbp-88h] BYREF
  size_t v121; // [rsp+D8h] [rbp-80h]
  __int64 v122[2]; // [rsp+E0h] [rbp-78h] BYREF
  void *v123; // [rsp+F0h] [rbp-68h]
  __int64 v124; // [rsp+100h] [rbp-58h] BYREF
  __int16 v125; // [rsp+110h] [rbp-48h]

  v102 = a3;
  v4 = sub_22B7EA0(a1 + 216);
  v100 = &v106;
  sub_22AD2E0(&v106, v4 == 0 ? 32 : 64, a2);
  v98 = v107 & 1;
  if ( (v107 & 1) == 0 )
  {
    v5 = v106;
    v6 = *(_QWORD **)(a1 + 576);
    v106 = nullptr;
    *(_QWORD *)(a1 + 576) = v5;
    if ( v6 )
    {
      v7 = v6[5];
      if ( v7 )
      {
        while ( 1 )
        {
          sub_1050CC0((__int64)(v6 + 3), *(_QWORD **)(v7 + 24));
          v8 = *(void **)(v7 + 32);
          v9 = *(_QWORD *)(v7 + 16);
          if ( v8 == (void *)(v7 + 48) )
          {
            operator delete((void *)v7);
            if ( !v9 )
              break;
          }
          else
          {
            operator delete(v8);
            operator delete((void *)v7);
            if ( !v9 )
              break;
          }
          v7 = v9;
        }
      }
      operator delete(v6, 0x48u);
      v5 = *(void ***)(a1 + 576);
    }
    v10 = *(_QWORD *)(a1 + 520);
    if ( v10 )
    {
LABEL_10:
      if ( (unsigned __int8)sub_22A9F40(v5, "zfh", 3) || (unsigned __int8)sub_22A9F40(*(_QWORD *)(a1 + 576), "zhinx", 5) )
        *(_BYTE *)(a1 + 276) = 1;
      v11 = *a2;
      v99 = (void **)a2[1];
      v12 = ((__int64)v99 - v11) >> 5;
      v13 = ((__int64)v99 - v11) >> 7;
      v103 = v12;
      if ( v13 <= 0 )
      {
        if ( v12 == 2 )
        {
          v14 = v11;
          goto LABEL_153;
        }
        if ( v12 != 3 )
        {
          if ( v12 != 1 )
          {
            *(_BYTE *)(a1 + 584) = 0;
            goto LABEL_121;
          }
          v14 = v11;
LABEL_140:
          v76 = sub_9B4AA0(v14, "+unaligned-scalar-mem");
          v77 = 0;
          if ( v76 )
            goto LABEL_142;
          goto LABEL_141;
        }
        v14 = v11;
      }
      else
      {
        v14 = v11;
        v101 = (void **)(v11 + (v13 << 7));
        do
        {
          if ( !sub_9B4AA0(v14, "+unaligned-scalar-mem")
            || (v15 = v14, v14 += 32, !sub_9B4AA0(v14, "+unaligned-scalar-mem"))
            || (v14 = v15 + 64, !sub_9B4AA0(v15 + 64, "+unaligned-scalar-mem"))
            || (v14 = v15 + 96, !sub_9B4AA0(v15 + 96, "+unaligned-scalar-mem")) )
          {
            *(_BYTE *)(a1 + 584) = v99 != (void **)v14;
            goto LABEL_25;
          }
          v14 = v15 + 128;
        }
        while ( (void **)(v15 + 128) != v101 );
        v69 = ((__int64)v99 - v14) >> 5;
        if ( v69 == 2 )
          goto LABEL_153;
        if ( v69 != 3 )
        {
          if ( v69 != 1 )
          {
            *(_BYTE *)(a1 + 584) = 0;
LABEL_25:
            while ( sub_9B4AA0(v11, "+experimental") )
            {
              v16 = v11;
              v11 += 32;
              if ( !sub_9B4AA0(v11, "+experimental") )
                break;
              v11 = v16 + 64;
              if ( !sub_9B4AA0(v16 + 64, "+experimental") )
                break;
              v11 = v16 + 96;
              if ( !sub_9B4AA0(v16 + 96, "+experimental") )
                break;
              v11 = v16 + 128;
              if ( !--v13 )
              {
                v103 = ((__int64)v99 - v11) >> 5;
                goto LABEL_121;
              }
            }
            goto LABEL_26;
          }
          goto LABEL_140;
        }
      }
      if ( !sub_9B4AA0(v14, "+unaligned-scalar-mem") )
        goto LABEL_141;
      v14 += 32;
LABEL_153:
      if ( sub_9B4AA0(v14, "+unaligned-scalar-mem") )
      {
        v14 += 32;
        goto LABEL_140;
      }
LABEL_141:
      v77 = v99 != (void **)v14;
LABEL_142:
      *(_BYTE *)(a1 + 584) = v77;
      if ( v13 > 0 )
        goto LABEL_25;
LABEL_121:
      if ( v103 != 2 )
      {
        if ( v103 != 3 )
        {
          if ( v103 != 1 )
            goto LABEL_28;
          goto LABEL_124;
        }
        if ( !sub_9B4AA0(v11, "+experimental") )
        {
LABEL_26:
          if ( v99 != (void **)v11 )
            *(_BYTE *)(a1 + 585) = 1;
LABEL_28:
          if ( sub_9B4AA0(a1 + 512, "ilp32e") || !(unsigned __int8)sub_22A9F40(*(_QWORD *)(a1 + 576), "d", 1) )
          {
            v98 = 1;
          }
          else
          {
            sub_FC70B0((__int64)&v120, v102, 0, 25);
            v18 = (unsigned __int8 *)v120;
            if ( !v120 )
            {
              v80 = v121;
              v81 = *(_DWORD *)(v121 + 14976);
              if ( v81 )
              {
                v93 = (unsigned int)(v81 - 1);
                *(_DWORD *)(v121 + 14976) = v93;
                v18 = *(unsigned __int8 **)(v80 + 8 * v93 + 14848);
                v94 = *((unsigned int *)v18 + 134);
                *v18 = 0;
                v95 = *((_QWORD *)v18 + 66);
                *((_DWORD *)v18 + 106) = 0;
                v96 = v95 + (v94 << 6);
                while ( v95 != v96 )
                {
                  while ( 1 )
                  {
                    v96 -= 64;
                    v97 = *(void **)(v96 + 24);
                    if ( v97 == (void *)(v96 + 40) )
                      break;
                    operator delete(v97);
                    if ( v95 == v96 )
                      goto LABEL_199;
                  }
                }
LABEL_199:
                *((_DWORD *)v18 + 134) = 0;
              }
              else
              {
                v18 = (unsigned __int8 *)operator new(0x3A0u);
                *v18 = 0;
                *((_QWORD *)v18 + 12) = v18 + 112;
                *((_QWORD *)v18 + 16) = v18 + 144;
                *((_QWORD *)v18 + 20) = v18 + 176;
                *((_QWORD *)v18 + 24) = v18 + 208;
                *((_QWORD *)v18 + 28) = v18 + 240;
                *((_QWORD *)v18 + 32) = v18 + 272;
                *((_QWORD *)v18 + 36) = v18 + 304;
                *((_QWORD *)v18 + 40) = v18 + 336;
                *((_QWORD *)v18 + 44) = v18 + 368;
                *((_QWORD *)v18 + 48) = v18 + 400;
                *((_QWORD *)v18 + 52) = v18 + 432;
                *((_QWORD *)v18 + 13) = 0;
                v18[112] = 0;
                *((_QWORD *)v18 + 17) = 0;
                v18[144] = 0;
                *((_QWORD *)v18 + 21) = 0;
                v18[176] = 0;
                *((_QWORD *)v18 + 25) = 0;
                v18[208] = 0;
                *((_QWORD *)v18 + 29) = 0;
                v18[240] = 0;
                *((_QWORD *)v18 + 33) = 0;
                v18[272] = 0;
                *((_QWORD *)v18 + 37) = 0;
                v18[304] = 0;
                *((_QWORD *)v18 + 41) = 0;
                v18[336] = 0;
                *((_QWORD *)v18 + 45) = 0;
                v18[368] = 0;
                *((_QWORD *)v18 + 49) = 0;
                v18[400] = 0;
                *((_QWORD *)v18 + 53) = 0x800000000LL;
                *((_QWORD *)v18 + 66) = v18 + 544;
                *((_QWORD *)v18 + 67) = 0x600000000LL;
              }
              v120 = v18;
            }
            v18[*v18 + 1] = 1;
            v19 = v120;
            v20 = *(unsigned __int8 *)v120;
            *(_BYTE *)v120 = v20 + 1;
            v19[v20 + 2] = "ILP32E cannot be used with the D ISA extension";
            if ( (_BYTE)v125 )
            {
              sub_FC7790(v122[0], (__int64 *)&v120, SHIBYTE(v125));
              v122[0] = 0;
              v125 = 0;
            }
            if ( v123 != &v124 )
              operator delete(v123);
            v21 = (void **)v120;
            if ( v120 )
            {
              v22 = v121;
              if ( v121 )
              {
                if ( (unsigned __int64)v120 < v121 || (unsigned __int64)v120 > v121 + 14848 )
                {
                  v23 = *((void ***)v120 + 66);
                  v24 = &v23[8 * (unsigned __int64)*((unsigned int *)v120 + 134)];
                  if ( v23 != v24 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v24 -= 8;
                        v25 = (void **)v24[3];
                        if ( v25 == v24 + 5 )
                          break;
                        operator delete(v25);
                        if ( v23 == v24 )
                          goto LABEL_43;
                      }
                    }
                    while ( v23 != v24 );
LABEL_43:
                    v24 = (void **)v21[66];
                  }
                  if ( v24 != v21 + 68 )
                    free(v24);
                  v26 = (void **)v21[52];
                  v27 = v21 + 52;
                  if ( v26 != v21 + 54 )
                    free(v26);
                  v28 = v21 + 12;
                  do
                  {
                    while ( 1 )
                    {
                      v27 -= 4;
                      if ( *v27 == v27 + 2 )
                        break;
                      operator delete(*v27);
                      if ( v27 == v28 )
                        goto LABEL_51;
                    }
                  }
                  while ( v27 != v28 );
LABEL_51:
                  operator delete(v21, 0x3A0u);
                }
                else
                {
                  v92 = *(unsigned int *)(v121 + 14976);
                  *(_DWORD *)(v121 + 14976) = v92 + 1;
                  *(_QWORD *)(v22 + 8 * v92 + 14848) = v21;
                }
              }
            }
          }
          goto LABEL_30;
        }
        v11 += 32;
      }
      if ( sub_9B4AA0(v11, "+experimental") )
      {
        v11 += 32;
LABEL_124:
        if ( sub_9B4AA0(v11, "+experimental") )
          goto LABEL_28;
        goto LABEL_26;
      }
      goto LABEL_26;
    }
    v29 = (_BYTE *)sub_22A9C70(v5);
    if ( v29 )
    {
      v120 = v122;
      sub_10A4F80(&v120, v29, (__int64)&v29[v30]);
      v31 = *(__int64 **)(a1 + 512);
      if ( v120 != v122 )
      {
        if ( v31 == (__int64 *)(a1 + 528) )
        {
          v99 = (void **)v122[0];
          *(_QWORD *)(a1 + 512) = v120;
          *(__m128 *)(a1 + 520) = _mm_loadh_ps((const double *)&v99);
        }
        else
        {
          v99 = (void **)v122[0];
          v32 = *(_QWORD *)(a1 + 528);
          *(_QWORD *)(a1 + 512) = v120;
          *(__m128 *)(a1 + 520) = _mm_loadh_ps((const double *)&v99);
          if ( v31 )
          {
            v120 = v31;
            v122[0] = v32;
LABEL_59:
            v121 = 0;
            *(_BYTE *)v31 = 0;
            if ( v120 != v122 )
              operator delete(v120);
            v5 = *(void ***)(a1 + 576);
            goto LABEL_10;
          }
        }
        v31 = v122;
        v120 = v122;
        goto LABEL_59;
      }
      v10 = v121;
      if ( v121 )
      {
        if ( v121 == 1 )
          *(_BYTE *)v31 = v122[0];
        else
          memcpy(v31, v120, v121);
        v10 = v121;
        v31 = *(__int64 **)(a1 + 512);
      }
    }
    else
    {
      LOBYTE(v122[0]) = 0;
      v31 = *(__int64 **)(a1 + 512);
      v120 = v122;
    }
    *(_QWORD *)(a1 + 520) = v10;
    *((_BYTE *)v31 + v10) = 0;
    v31 = (__int64 *)v120;
    goto LABEL_59;
  }
  v108[0] = &v109;
  v99 = v108;
  v119 = v108;
  v113 = &off_2BEBE68;
  v109 = 0;
  v108[1] = nullptr;
  v114 = 0;
  v117 = 0;
  v118 = 1;
  v116 = 0;
  v115 = 0;
  sub_227B8B0(&v113, 0, 0, 0);
  if ( (v107 & 1) == 0 || (v53 = v106, v106 = nullptr, !v53) )
  {
    v33 = &v120;
    p_src = &src;
    goto LABEL_64;
  }
  if ( (*((unsigned __int8 (__fastcall **)(void **, void *))*v53 + 6))(v53, &unk_2D0AA9B) )
  {
    v54 = (_QWORD **)v53[1];
    v55 = (_QWORD **)v53[2];
    if ( v54 != v55 )
    {
      v101 = v53;
      p_src = &src;
      v56 = v55;
      v33 = &v120;
      v57 = nullptr;
      while ( 1 )
      {
        v58 = *v54;
        *v54 = nullptr;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v58 + 48LL))(v58, &unk_2D0AA99) )
        {
          sub_227BF10(&v113, v58[1], v58[2]);
          (*(void (__fastcall **)(_QWORD *))(*v58 + 8LL))(v58);
          if ( !v57 )
          {
            v58 = nullptr;
LABEL_129:
            v57 = v58;
          }
        }
        else
        {
          if ( !v57 )
            goto LABEL_129;
          v59 = (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v57 + 48LL))(v57, &unk_2D0AA9B) == 0;
          v60 = *v58;
          if ( v59 )
          {
            v70 = (*(__int64 (__fastcall **)(_QWORD *, void *))(v60 + 48))(v58, &unk_2D0AA9B);
            v120 = v57;
            if ( !v70 )
            {
              src = v58;
              v57 = (_QWORD *)operator new(0x20u);
              v57[1] = 0;
              v57[2] = 0;
              *v57 = &off_2BEADB8;
              v57[3] = 0;
              sub_A054C0((__int64)(v57 + 1), nullptr, v33);
              v71 = (char *)v57[2];
              if ( (char *)v57[3] == v71 )
              {
                sub_A054C0((__int64)(v57 + 1), v71, &src);
              }
              else
              {
                v72 = src;
                v73 = v71 + 8;
                src = nullptr;
                *((_QWORD *)v73 - 1) = v72;
                v57[2] = v73;
              }
              if ( src )
                (*(void (__fastcall **)(void *))(*(_QWORD *)src + 8LL))(src);
              goto LABEL_134;
            }
            sub_AEA3D0(v58 + 1, (char *)v58[1], (__int64 *)v33);
            if ( v120 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v120 + 8LL))(v120);
            goto LABEL_129;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(v60 + 48))(v58, &unk_2D0AA9B) )
          {
            v120 = v58;
            v74 = (char *)v57[2];
            if ( v74 == (char *)v57[3] )
            {
              sub_A054C0((__int64)(v57 + 1), v74, v33);
            }
            else
            {
              v120 = nullptr;
              v75 = v74 + 8;
              *((_QWORD *)v75 - 1) = v58;
              v57[2] = v75;
            }
LABEL_134:
            if ( v120 )
              (*(void (__fastcall **)(void *))(*(_QWORD *)v120 + 8LL))(v120);
            goto LABEL_110;
          }
          v61 = (__int64 *)v58[2];
          v103 = (__int64)(v57 + 1);
          v62 = (__int64 *)v58[1];
          if ( v62 != v61 )
          {
            v104 = v54;
            v63 = v61;
            v105 = v33;
            v64 = v57;
            v65 = v62;
            do
            {
              v68 = (char *)v64[2];
              if ( v68 == (char *)v64[3] )
              {
                sub_A054C0(v103, v68, v65);
              }
              else
              {
                v66 = *v65;
                v67 = v68 + 8;
                *v65 = 0;
                *((_QWORD *)v67 - 1) = v66;
                v64[2] = v67;
              }
              ++v65;
            }
            while ( v63 != v65 );
            v57 = v64;
            v54 = v104;
            v33 = v105;
          }
          (*(void (__fastcall **)(_QWORD *))(*v58 + 8LL))(v58);
        }
LABEL_110:
        if ( v56 == ++v54 )
        {
          (*((void (__fastcall **)(void **))*v101 + 1))(v101);
          goto LABEL_64;
        }
      }
    }
  }
  else
  {
    (*((void (__fastcall **)(void **, void *))*v53 + 6))(v53, &unk_2D0AA99);
    sub_227BF10(&v113, v53[1], v53[2]);
  }
  p_src = &src;
  v33 = &v120;
  (*((void (__fastcall **)(void **))*v53 + 1))(v53);
LABEL_64:
  sub_FC70B0((__int64)v33, v102, 0, 25);
  v35 = (unsigned __int8 *)v120;
  v36 = *v119;
  v37 = v119[1];
  if ( !v120 )
  {
    v82 = v121;
    v83 = *(_DWORD *)(v121 + 14976);
    if ( v83 )
    {
      v84 = (unsigned int)(v83 - 1);
      *(_DWORD *)(v121 + 14976) = v84;
      v35 = *(unsigned __int8 **)(v82 + 8 * v84 + 14848);
      v85 = *((unsigned int *)v35 + 134);
      *v35 = 0;
      v86 = *((_QWORD *)v35 + 66);
      *((_DWORD *)v35 + 106) = 0;
      v87 = v86 + (v85 << 6);
      if ( v86 != v87 )
      {
        v101 = &src;
        v88 = v33;
        v89 = v35;
        v90 = v86;
        do
        {
          while ( 1 )
          {
            v87 -= 64;
            v91 = *(void **)(v87 + 24);
            if ( v91 == (void *)(v87 + 40) )
              break;
            operator delete(v91);
            if ( v90 == v87 )
              goto LABEL_184;
          }
        }
        while ( v90 != v87 );
LABEL_184:
        v35 = v89;
        v33 = v88;
        p_src = v101;
      }
      *((_DWORD *)v35 + 134) = 0;
    }
    else
    {
      v35 = (unsigned __int8 *)operator new(0x3A0u);
      *v35 = 0;
      *((_QWORD *)v35 + 12) = v35 + 112;
      *((_QWORD *)v35 + 16) = v35 + 144;
      *((_QWORD *)v35 + 20) = v35 + 176;
      *((_QWORD *)v35 + 24) = v35 + 208;
      *((_QWORD *)v35 + 28) = v35 + 240;
      *((_QWORD *)v35 + 32) = v35 + 272;
      *((_QWORD *)v35 + 36) = v35 + 304;
      *((_QWORD *)v35 + 40) = v35 + 336;
      *((_QWORD *)v35 + 44) = v35 + 368;
      *((_QWORD *)v35 + 48) = v35 + 400;
      *((_QWORD *)v35 + 52) = v35 + 432;
      *((_QWORD *)v35 + 13) = 0;
      v35[112] = 0;
      *((_QWORD *)v35 + 17) = 0;
      v35[144] = 0;
      *((_QWORD *)v35 + 21) = 0;
      v35[176] = 0;
      *((_QWORD *)v35 + 25) = 0;
      v35[208] = 0;
      *((_QWORD *)v35 + 29) = 0;
      v35[240] = 0;
      *((_QWORD *)v35 + 33) = 0;
      v35[272] = 0;
      *((_QWORD *)v35 + 37) = 0;
      v35[304] = 0;
      *((_QWORD *)v35 + 41) = 0;
      v35[336] = 0;
      *((_QWORD *)v35 + 45) = 0;
      v35[368] = 0;
      *((_QWORD *)v35 + 49) = 0;
      v35[400] = 0;
      *((_QWORD *)v35 + 53) = 0x800000000LL;
      *((_QWORD *)v35 + 66) = v35 + 544;
      *((_QWORD *)v35 + 67) = 0x600000000LL;
    }
    v120 = v35;
  }
  v35[*v35 + 1] = 0;
  src = p_src + 2;
  sub_10A4F80(p_src, v36, (__int64)v37 + (_QWORD)v36);
  v38 = v120;
  v39 = *(unsigned __int8 *)v120;
  *(_BYTE *)v120 = v39 + 1;
  v40 = (unsigned __int8)v39;
  v41 = 4 * (v39 + 3);
  v42 = (char *)&v38[v41];
  v43 = (_BYTE *)v38[v41];
  if ( src == p_src + 2 )
  {
    v78 = n;
    if ( n )
    {
      if ( n == 1 )
        *v43 = v112;
      else
        memcpy(v43, src, n);
      v78 = n;
      v43 = *(_BYTE **)v42;
    }
    *((_QWORD *)v42 + 1) = v78;
    v43[v78] = 0;
    v43 = src;
    goto LABEL_69;
  }
  if ( v43 == (_BYTE *)&v38[v41 + 2] )
  {
    *(_QWORD *)v42 = src;
    *((_QWORD *)v42 + 1) = n;
    *((_QWORD *)v42 + 2) = v112;
    goto LABEL_174;
  }
  v44 = v38[4 * v40 + 14];
  *(_QWORD *)v42 = src;
  *((_QWORD *)v42 + 1) = n;
  *((_QWORD *)v42 + 2) = v112;
  if ( !v43 )
  {
LABEL_174:
    v43 = p_src + 2;
    src = p_src + 2;
    goto LABEL_69;
  }
  src = v43;
  v112 = v44;
LABEL_69:
  n = 0;
  *v43 = 0;
  if ( src != p_src + 2 )
    operator delete(src);
  if ( (_BYTE)v125 )
  {
    sub_FC7790(v122[0], (__int64 *)v33, SHIBYTE(v125));
    v122[0] = 0;
    v125 = 0;
  }
  if ( v123 != v33 + 6 )
    operator delete(v123);
  v45 = (void **)v120;
  if ( v120 )
  {
    v46 = v121;
    if ( v121 )
    {
      if ( (unsigned __int64)v120 < v121 || (unsigned __int64)v120 > v121 + 14848 )
      {
        v47 = *((void ***)v120 + 66);
        v48 = &v47[8 * (unsigned __int64)*((unsigned int *)v120 + 134)];
        if ( v47 != v48 )
        {
          do
          {
            while ( 1 )
            {
              v48 -= 8;
              v49 = (void **)v48[3];
              if ( v49 == v48 + 5 )
                break;
              operator delete(v49);
              if ( v47 == v48 )
                goto LABEL_81;
            }
          }
          while ( v47 != v48 );
LABEL_81:
          v48 = (void **)v45[66];
        }
        if ( v48 != v45 + 68 )
          free(v48);
        v50 = (void **)v45[52];
        v51 = v45 + 52;
        if ( v50 != v45 + 54 )
          free(v50);
        v52 = v45 + 12;
        do
        {
          while ( 1 )
          {
            v51 -= 4;
            if ( *v51 == v51 + 2 )
              break;
            operator delete(*v51);
            if ( v51 == v52 )
              goto LABEL_89;
          }
        }
        while ( v51 != v52 );
LABEL_89:
        operator delete(v45, 0x3A0u);
      }
      else
      {
        v79 = *(unsigned int *)(v121 + 14976);
        *(_DWORD *)(v121 + 14976) = v79 + 1;
        *(_QWORD *)(v46 + 8 * v79 + 14848) = v45;
      }
    }
  }
  v113 = &off_2BEBE68;
  sub_227B7A0(&v113);
  if ( v108[0] != v99 + 2 )
    operator delete(v108[0]);
  v98 = 0;
LABEL_30:
  sub_10A71B0((__int64)v100);
  return v98;
}

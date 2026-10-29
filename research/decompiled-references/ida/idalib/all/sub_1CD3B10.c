unsigned __int64 __fastcall sub_1CD3B10(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __int64 a8,
        unsigned __int64 a9,
        _BYTE *a10,
        _BYTE *a11,
        int a12)
{
  bool v12; // zf
  __int64 *v13; // rsi
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rbp
  unsigned __int64 v20; // rbp
  __int64 v21; // rax
  unsigned int v22; // r12d
  __int64 v23; // rcx
  void *v24; // rdx
  _QWORD *v25; // rax
  __int64 v26; // rbp
  unsigned __int8 v27; // al
  unsigned __int64 v28; // rdx
  char *v29; // rax
  char *v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rbx
  unsigned __int64 v33; // rbp
  unsigned __int64 v34; // r14
  _QWORD *v35; // rax
  __int64 v36; // r15
  _DWORD *v37; // rax
  unsigned __int64 v38; // rbx
  __int64 v40; // rdx
  _DWORD *v41; // rax
  unsigned __int64 v42; // rbp
  unsigned int *v43; // rdx
  char v44; // al
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  __int64 v47; // rdi
  _DWORD *v48; // rax
  __int64 v49; // rdi
  unsigned __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rbp
  __int64 v54; // rdi
  __int64 v55; // rdx
  __int64 v56; // rax
  unsigned __int64 v57; // rax
  int v58; // r15d
  size_t v59; // rax
  _BYTE *v60; // rdi
  unsigned __int64 v61; // rdx
  _QWORD *v62; // rax
  int v63; // r14d
  __int64 v64; // rax
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // r15
  __int64 v71; // rdx
  char v72; // bp
  char v73; // di
  unsigned int v74; // ecx
  __int64 *v75; // r12
  char v76; // r15
  __int64 v77; // rdx
  int v78; // eax
  __int64 v79; // rax
  __int64 v80; // rbp
  size_t v81; // rdx
  __int64 v82; // rax
  __int64 v83; // r12
  _BYTE *v84; // rdi
  __m128 v85; // xmm0
  unsigned __int64 v86; // rax
  __int64 v87; // rax
  size_t v88; // rdx
  __int64 v89; // r15
  __int64 v90; // rax
  __int64 v91; // rdi
  char v92; // al
  __int64 *v93; // [rsp-10h] [rbp-1F8h]
  __int64 v94; // [rsp+8h] [rbp-1E0h] BYREF
  unsigned __int64 v95; // [rsp+10h] [rbp-1D8h]
  __int64 v96; // [rsp+18h] [rbp-1D0h]
  int v97; // [rsp+24h] [rbp-1C4h]
  __int64 *v98; // [rsp+28h] [rbp-1C0h]
  __int64 v99; // [rsp+30h] [rbp-1B8h]
  __int64 *v100; // [rsp+38h] [rbp-1B0h]
  char v101; // [rsp+42h] [rbp-1A6h]
  unsigned __int8 v102; // [rsp+43h] [rbp-1A5h]
  int v103; // [rsp+44h] [rbp-1A4h]
  void **p_ptr; // [rsp+48h] [rbp-1A0h]
  unsigned int v105; // [rsp+50h] [rbp-198h]
  int v106; // [rsp+54h] [rbp-194h]
  __int8 *v107; // [rsp+58h] [rbp-190h]
  __int64 *v108; // [rsp+60h] [rbp-188h]
  __int64 v109; // [rsp+68h] [rbp-180h]
  unsigned int v110; // [rsp+70h] [rbp-178h]
  int v111; // [rsp+74h] [rbp-174h]
  _QWORD *v112; // [rsp+78h] [rbp-170h] BYREF
  unsigned __int64 v113; // [rsp+80h] [rbp-168h] BYREF
  __int64 v114; // [rsp+88h] [rbp-160h] BYREF
  void *src; // [rsp+90h] [rbp-158h] BYREF
  size_t n; // [rsp+98h] [rbp-150h]
  _QWORD v117[2]; // [rsp+A0h] [rbp-148h] BYREF
  void *ptr; // [rsp+B0h] [rbp-138h] BYREF
  __int64 v119; // [rsp+B8h] [rbp-130h]
  char v120; // [rsp+C0h] [rbp-128h] BYREF
  __int64 v121; // [rsp+E0h] [rbp-108h] BYREF
  char v122; // [rsp+E8h] [rbp-100h]
  __int64 v123; // [rsp+ECh] [rbp-FCh]
  char v124; // [rsp+F4h] [rbp-F4h]
  void *dest; // [rsp+F8h] [rbp-F0h]
  __m128 v126; // [rsp+100h] [rbp-E8h] BYREF
  char v127; // [rsp+118h] [rbp-D0h]
  __int128 v128; // [rsp+120h] [rbp-C8h] BYREF
  __int64 v129; // [rsp+130h] [rbp-B8h]
  int v130; // [rsp+138h] [rbp-B0h]

  v12 = *(_QWORD *)(a4 + 8) == 0;
  v99 = a1;
  v106 = a2;
  v94 = a8;
  v105 = a3;
  v103 = a12;
  v102 = a12;
  v100 = (__int64 *)a4;
  *a10 = 0;
  v109 = a5;
  *a11 = 0;
  p_ptr = &ptr;
  ptr = &v120;
  v111 = a6;
  v101 = a6;
  v119 = 0x400000000LL;
  v113 = 0;
  if ( v12 )
  {
    v110 = 0;
    v34 = 0;
    v22 = 0;
    LOBYTE(v96) = 0;
    goto LABEL_109;
  }
  v13 = (__int64 *)a4;
  v14 = sub_16A2930(a1, a4, 1, a4, a5, a6);
  if ( !v14
    || (v18 = (*(_BYTE *)(v14 + 8) & 0x7Fu) - 59, (unsigned int)v18 > 2)
    || (v13 = (__int64 *)(v14 - 64), v14 == 64) )
  {
    v20 = 0;
    v40 = v100[1];
    if ( ((*(__int64 *)(v40 + 8) >> 1) & 3) == 2 )
    {
      v19 = *(_QWORD *)(v40 + 16);
      goto LABEL_6;
    }
  }
  else
  {
    v19 = *(_QWORD *)(v14 - 16);
    if ( v19 )
    {
LABEL_6:
      v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_7;
    }
    v20 = sub_A7AA70(*(_QWORD *)(v99 + 248), (__int64)v13, v18, v15, (__int64)v16, v17);
  }
LABEL_7:
  v113 = v20;
  while ( 1 )
  {
    v21 = (unsigned int)v119;
    v22 = v119;
    if ( (v20 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      break;
    v23 = HIDWORD(v119);
    if ( (unsigned __int64)(unsigned int)v119 + 1 > HIDWORD(v119) )
    {
      v13 = (__int64 *)(p_ptr + 2);
      sub_2237220(p_ptr, p_ptr + 2, (unsigned int)v119 + 1LL, 8);
      v21 = (unsigned int)v119;
    }
    v24 = ptr;
    *((_QWORD *)ptr + v21) = v20;
    LODWORD(v119) = v119 + 1;
    v25 = sub_F63270(*(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v13, (__int64)v24, v23, (__int64)v16, v17);
    v26 = (__int64)v25;
    if ( v25 )
    {
      v27 = *((_BYTE *)v25 + 28) & 0x7F;
      if ( (unsigned int)v27 - 60 > 1 )
      {
        if ( (unsigned int)sub_B97260(v26) == 2 )
          goto LABEL_15;
      }
      else if ( v27 != 61 && (*(_BYTE *)(v26 + 180) & 7) == 2 )
      {
LABEL_15:
        v28 = (unsigned __int64)ptr;
        v110 = *(_DWORD *)(v26 + 24);
        v22 = v119;
        v29 = (char *)ptr + 8 * (unsigned int)v119;
        goto LABEL_16;
      }
      v49 = *(_QWORD *)(sub_B8C1B0(v26 + 64) + 16);
      if ( (v49 & 4) != 0 )
        goto LABEL_103;
      goto LABEL_64;
    }
    v64 = sub_F6A860(*(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v64 )
    {
      v13 = nullptr;
      *(_QWORD *)&v128 = *(_QWORD *)(v64 + 32);
      v65 = sub_F22BD0((__int64 *)&v128, 0);
      if ( v65 )
      {
        v66 = *(_QWORD *)(v65 + 16);
        v50 = v66 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v66 & 4) == 0 )
          goto LABEL_65;
        goto LABEL_104;
      }
    }
    v56 = *(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL);
    v67 = *(unsigned __int8 *)(v56 + 16);
    if ( (_BYTE)v67 == 22 )
    {
LABEL_124:
      v68 = *(_QWORD *)(v56 + 32) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v68 )
        goto LABEL_74;
      v20 = 0;
      if ( ((*(__int64 *)(v68 + 8) >> 1) & 3) == 2 )
        v20 = *(_QWORD *)(v68 + 16) & 0xFFFFFFFFFFFFFFF0LL;
      goto LABEL_69;
    }
    v15 = *(_QWORD *)(*(_QWORD *)(v56 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v15 + 16) == 22 )
    {
      v56 = sub_F63050(v56, v13, v67, v15);
      if ( v56 )
        goto LABEL_124;
      v56 = *(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL);
      LOBYTE(v67) = *(_BYTE *)(v56 + 16);
    }
    if ( (_BYTE)v67 == 20 )
    {
LABEL_134:
      v71 = *(_QWORD *)(v56 + 32);
      if ( !v71 )
        goto LABEL_74;
      v20 = 0;
      if ( ((*(__int64 *)(v71 + 8) >> 1) & 3) == 2 )
        v20 = *(_QWORD *)(v71 + 16) & 0xFFFFFFFFFFFFFFF0LL;
LABEL_69:
      v113 = v20;
    }
    else
    {
      v54 = *(_QWORD *)(*(_QWORD *)(v56 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v55 = *(unsigned __int8 *)(v54 + 16);
      if ( (_BYTE)v55 == 20 )
      {
        v56 = sub_F63050(v56, v13, v55, v15);
        if ( v56 )
          goto LABEL_134;
        v57 = *(_QWORD *)(*(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
        v54 = *(_QWORD *)v57;
        v55 = *(unsigned __int8 *)(*(_QWORD *)v57 + 16LL);
      }
      if ( (_BYTE)v55 != 47 )
        goto LABEL_74;
      v62 = sub_F60F10(v54, (__int64)v13, v55, v15, (__int64)v16, v17);
      v49 = *(_QWORD *)(sub_B8C1B0((__int64)(v62 + 8)) + 16);
      if ( (v49 & 4) != 0 )
      {
LABEL_103:
        v50 = v49 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_104:
        v50 = *(_QWORD *)v50;
        goto LABEL_65;
      }
LABEL_64:
      v50 = v49 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_65:
      if ( (*(_BYTE *)(v50 + 8) & 0x7Fu) - 58 <= 9 )
      {
        v51 = sub_B8C1B0(v50);
        if ( v51 )
        {
          v53 = *(_QWORD *)(v51 + 48);
          if ( v53 )
          {
            v20 = v53 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v13 = (__int64 *)v51;
            v20 = sub_A7AA70(*(_QWORD *)(v99 + 248), v51, v52, v15, (__int64)v16, v17);
          }
          goto LABEL_69;
        }
      }
LABEL_74:
      v113 = 0;
      v20 = 0;
    }
  }
  v28 = (unsigned __int64)ptr;
  v110 = 0;
  v29 = (char *)ptr + 8 * (unsigned int)v119;
LABEL_16:
  if ( (char *)v28 != v29 )
  {
    v30 = v29 - 8;
    if ( (unsigned __int64)v30 > v28 )
    {
      do
      {
        v15 = *(_QWORD *)v28;
        v13 = *(__int64 **)v30;
        v28 += 8LL;
        v30 -= 8;
        *(_QWORD *)(v28 - 8) = v13;
        *((_QWORD *)v30 + 1) = v15;
      }
      while ( v28 < (unsigned __int64)v30 );
      v22 = v119;
    }
  }
  if ( v22 )
  {
    v31 = v22 - 1;
    LOBYTE(v96) = 0;
    v32 = 0;
    v22 = 0;
    v97 = v31;
    v33 = 0;
    v95 = v31;
    v98 = (__int64 *)&v128;
    v108 = &v121;
    v107 = &v126.m128_i8[8];
    while ( 1 )
    {
      v34 = v33;
      v113 = *((_QWORD *)ptr + v32);
      v35 = sub_F63270(*(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL), (__int64)v13, v28, v15, (__int64)v16, v17);
      v36 = (__int64)v35;
      if ( !v35 )
      {
        v45 = sub_F6A860(*(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL));
        if ( !v45 )
        {
          v47 = *(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v47 + 16) != 22
            && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v47 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 22 )
          {
            sub_F63050(v47, v13, v28, v15);
          }
LABEL_59:
          if ( a9 > v33 )
          {
            v48 = *(_DWORD **)(v94 + 8 * v33);
            if ( (v48[5] & 0x1FFFFFFF) != 0 )
            {
              LOBYTE(v96) = 1;
            }
            else
            {
              v28 = (unsigned int)v48[4];
              LODWORD(v121) = v48[2];
              HIDWORD(v121) = v28;
              if ( (_BYTE)v96 )
                goto LABEL_28;
            }
          }
          goto LABEL_43;
        }
        v13 = nullptr;
        *(_QWORD *)&v128 = *(_QWORD *)(v45 + 32);
        v46 = sub_F22BD0(v98, 0);
        if ( !v46 )
          goto LABEL_59;
        v16 = *(unsigned int **)(v46 + 56);
        goto LABEL_25;
      }
      if ( (*((_BYTE *)v35 + 28) & 0x7F) == 0x3D )
      {
        v16 = (unsigned int *)v35[23];
LABEL_25:
        if ( a9 <= v33 )
        {
          if ( v101 )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
              goto LABEL_43;
LABEL_47:
            if ( a9 > v33 )
            {
              if ( v16
                && (a7 = 0,
                    v128 = 0,
                    v129 = 0,
                    v43 = *(unsigned int **)(v94 + 8 * v33),
                    v130 = 0,
                    v44 = sub_1CD38B0(v99, v98, v43, nullptr, v16, v102 ^ 1u, 0.0, 0, 0),
                    v13 = v93,
                    !v44) )
              {
LABEL_52:
                *a11 = 1;
              }
              else
              {
LABEL_50:
                if ( !*a11 )
                {
                  v13 = *(__int64 **)(v94 + 8 * v33);
                  if ( (unsigned __int8)sub_1CBDF60(v99, (__int64)v13, 0, 2, 0, v17, a7) )
                    goto LABEL_52;
                }
              }
LABEL_42:
              v33 = ++v22;
              v34 = v22;
              goto LABEL_43;
            }
          }
          if ( !v102 )
          {
            sub_168B9F0((__int64)v98, (__int64 *)(v99 + 8), v105, 0x1428u, 0);
            v70 = sub_1605D30((__int64)v98, (__int64 *)&v113);
            v13 = v108;
            v121 = sub_1CB0BC0(v113, (__int64)v100);
            sub_1587DB0(v70, v108);
            sub_15F7200(v98);
          }
          *a11 = 1;
          goto LABEL_43;
        }
        v37 = *(_DWORD **)(v94 + 8 * v33);
        if ( (v37[5] & 0x1FFFFFFF) != 0 )
        {
          LOBYTE(v96) = 1;
        }
        else
        {
          v28 = (unsigned int)v37[4];
          LODWORD(v121) = v37[2];
          HIDWORD(v121) = v28;
          if ( (_BYTE)v96 )
            goto LABEL_28;
        }
        if ( !v101 )
          goto LABEL_47;
        v89 = v113;
        if ( (*(_BYTE *)(*(_QWORD *)(v113 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
          goto LABEL_47;
        if ( a9 > v33 )
        {
          v90 = *(_QWORD *)(v94 + 8 * v33);
          if ( (*(_DWORD *)(v90 + 20) & 0x1FFFFFFF) != 0 )
          {
            v91 = *(_QWORD *)(v90 + 24);
            DWORD2(v128) = 16777472;
            *(_QWORD *)&v128 = off_2C68DE0;
            LOWORD(v129) = 0;
            HIDWORD(v129) = 0;
            v92 = *(_BYTE *)(v91 + 28) & 0x7F;
            if ( v92 == 67 )
              HIDWORD(v128) = sub_BBE590(v91);
            else
              HIDWORD(v128) = v92 == 47 ? *(_DWORD *)(v91 + 68) & 0xFFFFF : *(_DWORD *)(v91 + 64) & 0xFFFFF;
            v13 = (__int64 *)v89;
            sub_BC7D30((__int64)v98, v89);
            if ( BYTE1(v129) )
              goto LABEL_50;
          }
        }
        goto LABEL_43;
      }
      if ( (unsigned __int8)sub_B8E180((unsigned __int64)(v35 + 8)) )
      {
        if ( !sub_B97230(v36) )
          goto LABEL_59;
        v16 = *(unsigned int **)(sub_B97230(v36) + 56);
        goto LABEL_25;
      }
      if ( (*(_BYTE *)(v36 + 28) & 0x7Fu) - 60 > 1 )
      {
        if ( (unsigned int)sub_B97260(v36) )
        {
          if ( (unsigned int)sub_B97260(v36) != 2 && v97 == (_DWORD)v32 )
            *a10 = 1;
          goto LABEL_43;
        }
        goto LABEL_59;
      }
      if ( (*(_BYTE *)(v36 + 180) & 7) == 2 )
        goto LABEL_43;
      if ( a9 <= v33 )
        break;
      v41 = *(_DWORD **)(v94 + 8 * v33);
      if ( (v41[5] & 0x1FFFFFFF) != 0 )
      {
        LOBYTE(v96) = 1;
        if ( v97 != (_DWORD)v32 )
          goto LABEL_41;
LABEL_79:
        *a10 = 1;
        goto LABEL_80;
      }
      v28 = (unsigned int)v41[4];
      LODWORD(v121) = v41[2];
      HIDWORD(v121) = v28;
      if ( (_BYTE)v96 )
        goto LABEL_28;
      if ( v97 == (_DWORD)v32 )
        goto LABEL_79;
LABEL_80:
      if ( a9 > v33 )
      {
LABEL_41:
        v42 = v94 + 8 * v33;
        if ( (*(_DWORD *)(*(_QWORD *)v42 + 20LL) & 0x1FFFFFFF) != 0 )
        {
          if ( !(_BYTE)v103 )
          {
            sub_168B9F0((__int64)&v128, (__int64 *)(v99 + 8), *(_DWORD *)(*(_QWORD *)v42 + 8LL), 0x1419u, 0);
            v79 = sub_1605D30((__int64)&v128, (__int64 *)&v113);
            src = *(void **)(*(_QWORD *)v42 + 12LL);
            v80 = sub_1587DB0(v79, (__int64 *)&src);
            v121 = sub_1CB0BC0(v113, (__int64)v100);
            sub_1587DB0(v80, &v121);
            sub_15F7200(&v128);
          }
          v38 = 0;
          *a11 = 1;
          goto LABEL_30;
        }
        goto LABEL_42;
      }
LABEL_81:
      if ( !v101 )
      {
        v13 = v100;
        v114 = sub_1CB0BC0(v113, (__int64)v100);
        v121 = v114;
        if ( (_BYTE)v96 )
        {
          if ( (_BYTE)v103 )
            goto LABEL_29;
          sub_168B9F0((__int64)&v128, (__int64 *)(v99 + 8), v105, 0x138Du, 0);
          LOBYTE(src) = 0;
LABEL_129:
          v69 = sub_1588420((__int64)&v128, (unsigned __int8 *)&src);
          sub_15884C0(v69, &v121);
          sub_15F7200(&v128);
          goto LABEL_29;
        }
        v58 = v106;
        if ( a9 )
          v58 = *(_DWORD *)(*(_QWORD *)v94 + 8LL);
        if ( !v102 )
        {
          sub_168B9F0((__int64)v98, (__int64 *)(v99 + 8), v105, 0x1427u, 0);
          v96 = sub_15884C0((__int64)v98, &v114);
          v59 = j__strlen("template<> ");
          LODWORD(v121) = v58;
          HIDWORD(v121) = v58;
          dest = v107;
          src = v117;
          v112 = v117;
          v123 = 0;
          v124 = 0;
          v126.m128_u64[0] = 0;
          v126.m128_i8[8] = 0;
          v127 = 0;
          v122 = 0;
          sub_1CB0A40(&src, "template<> ", (__int64)&aTemplate_0[v59]);
          v60 = dest;
          if ( src == v112 )
          {
            v81 = n;
            if ( n )
            {
              if ( n == 1 )
                *(_BYTE *)dest = v117[0];
              else
                memcpy(dest, src, n);
              v81 = n;
              v60 = dest;
            }
            v126.m128_u64[0] = v81;
            v60[v81] = 0;
            v60 = src;
            goto LABEL_90;
          }
          if ( dest == v107 )
          {
            v112 = (_QWORD *)v117[0];
            dest = src;
            a7 = _mm_loadh_ps((const double *)&v112);
            v126 = a7;
          }
          else
          {
            v112 = (_QWORD *)v117[0];
            v61 = v126.m128_u64[1];
            dest = src;
            a7 = _mm_loadh_ps((const double *)&v112);
            v126 = a7;
            if ( v60 )
            {
              src = v60;
              v117[0] = v61;
LABEL_90:
              n = 0;
              *v60 = 0;
              if ( src != v117 )
                operator delete(src);
              v13 = v108;
              v127 = 0;
              sub_1589170(v96, v108);
              if ( dest != v107 )
                operator delete(dest);
              sub_15F7200(v98);
              LOBYTE(v96) = 0;
              goto LABEL_43;
            }
          }
          v60 = v117;
          src = v117;
          goto LABEL_90;
        }
      }
LABEL_43:
      if ( v32 == v95 )
        goto LABEL_109;
      ++v32;
    }
    if ( v97 != (_DWORD)v32 )
      goto LABEL_81;
    goto LABEL_79;
  }
  v34 = 0;
  LOBYTE(v96) = 0;
LABEL_109:
  if ( a9 > v34 )
  {
    if ( a9 - 1 <= v34 )
      goto LABEL_150;
    if ( (_DWORD)a9 - 1 == v22 )
    {
      if ( (_BYTE)v103 )
        goto LABEL_150;
      v76 = 0;
      v75 = (__int64 *)(v99 + 8);
    }
    else
    {
      v72 = 1;
      v73 = 0;
      do
      {
        if ( (*(_DWORD *)(*(_QWORD *)(v94 + 8LL * v22) + 20LL) & 0x1FFFFFFF) != 0 )
          v72 = 0;
        else
          v73 = 1;
        ++v22;
      }
      while ( (_DWORD)a9 - 1 != v22 );
      if ( (_BYTE)v103 )
      {
LABEL_148:
        if ( !v72 )
          *a11 = 1;
LABEL_150:
        v38 = *(_QWORD *)(v94 + 8 * a9 - 8);
        if ( (*(_DWORD *)(v38 + 20) & 0x1FFFFFFF) == 0 )
        {
          v121 = __PAIR64__(
                   *(_DWORD *)(*(_QWORD *)(v94 + 8 * v34) + 16LL),
                   *(_DWORD *)(*(_QWORD *)(v94 + 8 * v34) + 8LL));
          if ( (_BYTE)v96 )
          {
LABEL_28:
            if ( !(_BYTE)v103 )
            {
              sub_168B9F0((__int64)&v128, (__int64 *)(v99 + 8), v105, 0x138Du, 0);
              LOBYTE(src) = 1;
              goto LABEL_129;
            }
LABEL_29:
            v38 = 0;
            *a11 = 1;
            *a10 = 0;
          }
        }
        goto LABEL_30;
      }
      v74 = 5157;
      v75 = (__int64 *)(v99 + 8);
      v76 = v73 & (v110 != 0);
      if ( !v72 )
      {
LABEL_146:
        v77 = *(_QWORD *)(v94 + 8 * v34);
        v95 = v94 + 8 * v34;
        sub_168B9F0((__int64)&v128, v75, *(_DWORD *)(v77 + 8), v74, 0);
        v78 = *(_DWORD *)(*(_QWORD *)v95 + 8LL);
        HIDWORD(v121) = *(_DWORD *)(*(_QWORD *)(v94 + 8 * a9 - 16) + 16LL);
        LODWORD(v121) = v78;
        sub_1587DB0((__int64)&v128, &v121);
        sub_15F7200(&v128);
        if ( v76 )
        {
          sub_168B9F0((__int64)&v128, v75, v110, 0x1750u, 0);
          sub_1605D30((__int64)&v128, (__int64 *)ptr + (unsigned int)v119 - 1);
          sub_15F7200(&v128);
        }
        goto LABEL_148;
      }
    }
    v72 = 1;
    v74 = 5684;
    goto LABEL_146;
  }
  if ( v109 && (_BYTE)v111 != 1 )
  {
    v114 = *(_QWORD *)(v109 + 36);
    v121 = v114;
    if ( (_BYTE)v96 )
    {
      if ( !(_BYTE)v103 )
      {
        sub_168B9F0((__int64)&v128, (__int64 *)(v99 + 8), v105, 0x138Du, 0);
        LOBYTE(src) = 0;
        v87 = sub_1588420((__int64)&v128, (unsigned __int8 *)&src);
        sub_15884C0(v87, &v121);
        sub_15F7200(&v128);
      }
      *a11 = 1;
      *a10 = 0;
      goto LABEL_116;
    }
    v63 = v106;
    if ( a9 )
      v63 = *(_DWORD *)(*(_QWORD *)v94 + 8LL);
    if ( (_BYTE)v103 )
    {
LABEL_116:
      v38 = sub_BC21A0(*(_QWORD **)(v99 + 248), 0, 0, 0, 0, 0, nullptr);
      goto LABEL_30;
    }
    sub_168B9F0((__int64)&v128, (__int64 *)(v99 + 8), v105, 0x1427u, 0);
    v82 = sub_15884C0((__int64)&v128, &v114);
    LODWORD(v121) = v63;
    HIDWORD(v121) = v63;
    v83 = v82;
    v123 = 0;
    v124 = 0;
    dest = &v126.m128_u16[4];
    v126.m128_u64[0] = 0;
    v126.m128_i8[8] = 0;
    v127 = 0;
    v122 = 0;
    src = v117;
    sub_1CB0A40(&src, (_BYTE *)"template<> ", (__int64)"");
    v84 = dest;
    if ( src == v117 )
    {
      v88 = n;
      if ( n )
      {
        if ( n == 1 )
          *(_BYTE *)dest = v117[0];
        else
          memcpy(dest, src, n);
        v88 = n;
        v84 = dest;
      }
      v126.m128_u64[0] = v88;
      v84[v88] = 0;
      v84 = src;
      goto LABEL_174;
    }
    v94 = v117[0];
    if ( dest == &v126.m128_u16[4] )
    {
      dest = src;
      v126 = _mm_loadh_ps((const double *)&v94);
    }
    else
    {
      v85 = _mm_loadh_ps((const double *)&v94);
      v86 = v126.m128_u64[1];
      dest = src;
      v126 = v85;
      if ( v84 )
      {
        src = v84;
        v117[0] = v86;
LABEL_174:
        n = 0;
        *v84 = 0;
        if ( src != v117 )
          operator delete(src);
        v127 = 0;
        sub_1589170(v83, &v121);
        if ( dest != &v126.m128_u16[4] )
          operator delete(dest);
        sub_15F7200(&v128);
        goto LABEL_116;
      }
    }
    v84 = v117;
    src = v117;
    goto LABEL_174;
  }
  v38 = 0;
LABEL_30:
  if ( ptr != p_ptr + 2 )
    free(ptr);
  return v38;
}

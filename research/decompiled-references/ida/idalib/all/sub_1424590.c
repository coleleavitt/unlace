__int64 __fastcall sub_1424590(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        __int64 a6,
        __m128i a7,
        double a8)
{
  bool v9; // zf
  __int64 v10; // rbx
  __int64 v11; // rax
  _BYTE *i; // rdi
  __int64 v13; // rax
  unsigned int v14; // r14d
  char v15; // bp
  _BYTE *v16; // r12
  unsigned __int64 v17; // rcx
  char v18; // bp
  __int64 v19; // rdi
  __int64 v20; // rcx
  size_t v21; // r13
  int v22; // r14d
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rdi
  void (*v29)(); // rax
  __int64 v30; // r12
  unsigned __int64 v31; // rbp
  __int64 v32; // rax
  size_t v33; // rax
  __int64 v34; // rcx
  size_t v35; // rax
  __int64 v36; // rcx
  size_t v37; // r8
  size_t v38; // rax
  size_t v39; // r8
  int v40; // eax
  _BYTE *v41; // r12
  int v42; // edx
  _BYTE *v43; // rax
  int v44; // ecx
  char v45; // r14
  size_t v46; // rax
  size_t v47; // rax
  size_t v48; // rax
  int v49; // eax
  __int64 v50; // rbp
  __int64 v51; // rdi
  unsigned int v52; // esi
  __int64 *v53; // r12
  __int64 v54; // r8
  __int64 v55; // r13
  unsigned int v56; // r10d
  __int64 v57; // r11
  int v58; // esi
  int v59; // ecx
  _DWORD *v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rbx
  unsigned int v63; // r12d
  void (__fastcall *v64)(__int64, __int64, _QWORD); // rbp
  size_t v66; // rax
  size_t v67; // rax
  __int64 *v68; // rdi
  __int64 (*v69)(void); // rax
  _BYTE *v70; // rbp
  char v71; // al
  __int64 v72; // rax
  char v73; // r12
  __int64 v74; // rdi
  _BYTE *v75; // rbp
  unsigned __int64 v76; // rdx
  __int64 v77; // rcx
  unsigned __int64 v78; // rax
  const char *v79; // rsi
  char v80; // al
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // rdx
  __int64 *v85; // rax
  __int64 *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rdi
  __int64 v89; // rdi
  __int64 v90; // [rsp+0h] [rbp-148h]
  unsigned __int64 v91; // [rsp+0h] [rbp-148h]
  __int64 v92; // [rsp+0h] [rbp-148h]
  unsigned __int64 v93; // [rsp+0h] [rbp-148h]
  unsigned __int64 v94; // [rsp+0h] [rbp-148h]
  unsigned int v95; // [rsp+0h] [rbp-148h]
  unsigned __int64 v96; // [rsp+0h] [rbp-148h]
  unsigned int v97; // [rsp+0h] [rbp-148h]
  unsigned __int64 v98; // [rsp+0h] [rbp-148h]
  unsigned int v99; // [rsp+0h] [rbp-148h]
  __int64 *s1; // [rsp+8h] [rbp-140h]
  _WORD *s1a; // [rsp+8h] [rbp-140h]
  size_t v102; // [rsp+10h] [rbp-138h]
  size_t v103; // [rsp+10h] [rbp-138h]
  size_t v104; // [rsp+10h] [rbp-138h]
  size_t v105; // [rsp+10h] [rbp-138h]
  unsigned __int16 v106; // [rsp+10h] [rbp-138h]
  unsigned __int64 v107; // [rsp+18h] [rbp-130h]
  unsigned __int8 v109; // [rsp+27h] [rbp-121h]
  int v110; // [rsp+28h] [rbp-120h]
  int v113; // [rsp+34h] [rbp-114h]
  _BYTE dest[32]; // [rsp+40h] [rbp-108h] BYREF
  unsigned int v115; // [rsp+60h] [rbp-E8h] BYREF
  unsigned int v116; // [rsp+64h] [rbp-E4h]
  _BYTE *v117; // [rsp+68h] [rbp-E0h]
  __int16 v118; // [rsp+70h] [rbp-D8h]
  char v119; // [rsp+72h] [rbp-D6h]
  __int64 v120; // [rsp+80h] [rbp-C8h]
  __int128 v121; // [rsp+88h] [rbp-C0h] BYREF
  _QWORD v122[2]; // [rsp+A0h] [rbp-A8h] BYREF
  unsigned __int16 v123; // [rsp+B0h] [rbp-98h]
  void *src; // [rsp+C0h] [rbp-88h] BYREF
  size_t n; // [rsp+C8h] [rbp-80h]
  __int64 v126; // [rsp+D0h] [rbp-78h] BYREF
  char v127; // [rsp+D8h] [rbp-70h]
  __int64 v128; // [rsp+DCh] [rbp-6Ch]

  ++*(_DWORD *)(a1 + 2356);
  v9 = *(_BYTE *)(a1 + 1048) == 0;
  v110 = a3;
  v10 = *(_QWORD *)(a1 + 1120);
  v113 = a6;
  v109 = *(_BYTE *)(a1 + 3000);
  *(_BYTE *)(a1 + 3000) = 1;
  if ( v9 )
  {
    v76 = (unsigned int)a3 | ((unsigned __int64)a4 << 40);
    v77 = *(unsigned int *)(v10 + 72);
    v78 = v76 | ((unsigned __int64)a5 << 48);
    if ( v77 + 1 > (unsigned __int64)*(unsigned int *)(v10 + 76) )
    {
      v98 = v76 | ((unsigned __int64)a5 << 48);
      sub_2237220(v10 + 64, v10 + 80, v77 + 1, 8);
      v77 = *(unsigned int *)(v10 + 72);
      v78 = v98;
    }
    a3 = *(_QWORD *)(v10 + 64);
    *(_QWORD *)(a3 + 8 * v77) = v78;
    ++*(_DWORD *)(v10 + 72);
    v10 = *(_QWORD *)(a1 + 1120);
  }
  else
  {
    *(_BYTE *)(a1 + 1048) = 0;
  }
  *(_BYTE *)(v10 + 26) = 1;
  v11 = *(_QWORD *)(a1 + 1112);
  v120 = a1;
  v121 = 0u;
  i = (_BYTE *)v11;
  while ( *(_QWORD *)(v11 + 192) )
  {
    sub_13D6010(v11, (__int64)&v115);
    if ( v118 == 1 )
      goto LABEL_88;
LABEL_6:
    *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 24LL) = 1;
    v13 = *(_QWORD *)(a1 + 1112);
    if ( v13 )
    {
      *(_BYTE *)(v13 + 146) = 0;
      v13 = *(_QWORD *)(a1 + 1112);
    }
    v14 = v116;
    v90 = *(_QWORD *)(v13 + 152);
    v15 = *(_BYTE *)(a1 + 544);
    *(_BYTE *)(a1 + 544) = v15 | 0x20;
    sub_14634E0(a1, &v115);
    v9 = v118 == 6;
    *(_BYTE *)(a1 + 544) = (32 * ((v15 & 0x20) != 0)) | *(_BYTE *)(a1 + 544) & 0xDF;
    if ( !v9 )
      goto LABEL_34;
    v16 = v117;
    v17 = v116;
    a3 = (unsigned __int8)(*v117 - 101) & 0xFB;
    v18 = (unsigned __int8)(*v117 - 97) <= 0x19u && ((*v117 - 101) & 0xFB) != 0;
    if ( v18 )
      goto LABEL_34;
    if ( (v119 & 8) != 0 || v116 > 0x13uLL )
    {
      sub_13D35F0((__int64)&src, (__int64)&v115, *(_QWORD *)(a1 + 88), *(_QWORD *)(a1 + 56), nullptr);
      if ( n > 0x13 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 24LL) = 0;
        v19 = *(_QWORD *)(a1 + 1112);
        if ( v19 )
          sub_13D11A0(v19);
        if ( src != &v126 )
          operator delete(src);
        goto LABEL_17;
      }
      v16 = dest;
      v102 = n;
      s1 = (__int64 *)src;
      memcpy(dest, src, n);
      v17 = v102;
      if ( s1 != &v126 )
      {
        operator delete(s1);
        v17 = v102;
      }
    }
    if ( v17 <= 1 )
    {
      if ( *v16 != 101 )
        goto LABEL_185;
      if ( !v17 )
      {
        s1a = v16;
        v21 = 0;
        v22 = v90 - v14;
        goto LABEL_46;
      }
    }
    else
    {
      if ( *(_WORD *)v16 == 26217 )
      {
        if ( v17 == 2 )
          goto LABEL_40;
        if ( v17 == 5 )
        {
          if ( *((_WORD *)v16 + 1) == 25956 && v16[4] == 102 )
            goto LABEL_40;
        }
        else if ( v17 == 6 && *(_DWORD *)(v16 + 2) == 1717920878 )
        {
LABEL_40:
          sub_141A820(a1, (unsigned int *)&src);
          v30 = *(_QWORD *)(a1 + 1120);
          v31 = v115 | v107 & 0xFF00000000000000LL | 0x100000000LL;
          v32 = *(unsigned int *)(v30 + 72);
          v107 = v31;
          if ( v32 + 1 > (unsigned __int64)*(unsigned int *)(v30 + 76) )
          {
            sub_2237220(v30 + 64, v30 + 80, v32 + 1, 8);
            v32 = *(unsigned int *)(v30 + 72);
          }
          a3 = *(_QWORD *)(v30 + 64);
          *(_QWORD *)(a3 + 8 * v32) = v31;
          ++*(_DWORD *)(v30 + 72);
          goto LABEL_34;
        }
LABEL_185:
        sub_1421710(a1, (int *)&v115, (__int64)v16, v17);
        goto LABEL_34;
      }
      if ( *v16 != 101 )
        goto LABEL_185;
    }
    v21 = v17 - 1;
    s1a = v16 + 1;
    v22 = v90 - v14;
    if ( v17 == 5 )
    {
      if ( *(_DWORD *)(v16 + 1) == 1718183022 )
      {
        v23 = *(_QWORD *)(a1 + 1120);
        v24 = *(_DWORD *)(v23 + 72);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v23 + 64) + 8LL * v24 - 8;
          v26 = *(_DWORD *)v25;
          LOBYTE(v25) = *(_BYTE *)(v25 + 4);
          *(_DWORD *)(v23 + 72) = v24 - 1;
          if ( !(_BYTE)v25 )
          {
            if ( (_QWORD)v121 )
            {
              if ( !**((_DWORD **)&v121 + 1) )
                **((_DWORD **)&v121 + 1) = v22 - v121;
              v121 = 0;
            }
            *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 26LL) = 0;
            v61 = sub_1421C50(a1, (__int64)"endif", 0);
            *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 26LL) = 1;
            v89 = *(_QWORD *)(a1 + 1192);
            if ( v89 )
            {
              v99 = v61;
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v89 + 376LL))(v89, v115, v26);
              v61 = v99;
            }
            goto LABEL_89;
          }
        }
        goto LABEL_33;
      }
    }
    else if ( v17 == 4 )
    {
      if ( *s1a == 29548 && v16[3] == 101 )
      {
        v75 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 1120) + 64LL)
                      + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 1120) + 72LL)
                      - 8);
        if ( v75[4] )
        {
          if ( !v75[6] )
          {
            v75[6] = 1;
            goto LABEL_33;
          }
        }
        else
        {
          if ( (_QWORD)v121 )
          {
            if ( !**((_DWORD **)&v121 + 1) )
              **((_DWORD **)&v121 + 1) = v22 - v121;
            a7 = 0;
            v121 = 0;
          }
          if ( !v75[6] )
          {
            v75[6] = 1;
LABEL_124:
            if ( !v75[5] )
            {
              v75[5] = 1;
              *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 26LL) = 0;
              v61 = sub_1421C50(a1, (__int64)"else", 0);
              *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 26LL) = 1;
              v88 = *(_QWORD *)(a1 + 1192);
              if ( v88 )
              {
                v97 = v61;
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v88 + 368LL))(
                  v88,
                  v115,
                  *(unsigned int *)v75);
                v61 = v97;
              }
              goto LABEL_89;
            }
LABEL_33:
            sub_141A820(a1, (unsigned int *)&src);
            goto LABEL_34;
          }
        }
        sub_FC70B0((__int64)&src, *(_QWORD *)(a1 + 48), v115, 1285);
        sub_AEA040((__int64)&src);
        v9 = v75[4] == 0;
        v75[6] = 1;
        if ( v9 )
          goto LABEL_124;
        goto LABEL_33;
      }
      v46 = j__strlen("lif");
      v34 = 4;
      if ( v46 != 3 )
      {
        v47 = j__strlen("lifdef");
        v36 = 4;
        v37 = v47;
        if ( v47 == 3 )
        {
          v21 = 3;
LABEL_71:
          v96 = v36;
          if ( memcmp(s1a, "lifdef", v21) )
          {
            v48 = j__strlen("lifndef");
            v17 = v96;
            if ( v48 != v21 )
              goto LABEL_185;
            v49 = memcmp(s1a, "lifndef", v21);
            v17 = v96;
            if ( v49 )
              goto LABEL_185;
          }
LABEL_138:
          v18 = memcmp(s1a, "lifdef", v21) == 0;
          goto LABEL_54;
        }
        goto LABEL_50;
      }
      v21 = 3;
LABEL_48:
      v92 = v34;
      if ( !memcmp(s1a, "lif", v21) )
      {
LABEL_102:
        v70 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 1120) + 64LL)
                      + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 1120) + 72LL)
                      - 8);
        v71 = v70[6];
        if ( v70[4] )
        {
          if ( !v71 )
            goto LABEL_33;
        }
        else
        {
          if ( (_QWORD)v121 )
          {
            if ( !**((_DWORD **)&v121 + 1) )
              **((_DWORD **)&v121 + 1) = v22 - v121;
            a7 = 0;
            v121 = 0;
          }
          if ( !v71 )
          {
            if ( !v70[5] )
              goto LABEL_109;
            goto LABEL_33;
          }
        }
        sub_FC70B0((__int64)&src, *(_QWORD *)(a1 + 48), v115, 1283);
        sub_AE9DF0((unsigned __int8 **)&src, 0, 2u);
        sub_AEA040((__int64)&src);
        if ( !v70[4] && !v70[5] )
        {
LABEL_109:
          *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 26LL) = 0;
          v122[0] = 0;
          sub_1436030(&src, a1, v122, 1);
          v72 = *(_QWORD *)(a1 + 1120);
          if ( !v72 )
          {
            sub_98E4B0((__int64)&src);
            *(_BYTE *)(a1 + 3000) = v109;
            return v109;
          }
          v73 = v127;
          *(_BYTE *)(v72 + 26) = 1;
          v74 = *(_QWORD *)(a1 + 1192);
          if ( v74 )
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v74 + 312LL))(
              v74,
              v115,
              v128,
              (unsigned int)(v73 != 0) + 1,
              *(unsigned int *)v70);
          if ( v73 )
          {
            v70[5] = 1;
            sub_98E4B0((__int64)&src);
            v61 = 0;
            goto LABEL_89;
          }
          sub_98E4B0((__int64)&src);
          goto LABEL_34;
        }
        goto LABEL_33;
      }
      v35 = j__strlen("lifdef");
      v36 = v92;
      v37 = v35;
      if ( v35 == v21 )
        goto LABEL_71;
LABEL_50:
      v93 = v36;
      v103 = v37;
      v38 = j__strlen("lifndef");
      v17 = v93;
      if ( v21 != v38 )
        goto LABEL_185;
      v39 = v103;
      goto LABEL_52;
    }
LABEL_46:
    v91 = v17;
    v33 = j__strlen("lif");
    v34 = v91;
    if ( v33 == v21 )
    {
      if ( !v21 )
        goto LABEL_102;
      goto LABEL_48;
    }
    v66 = j__strlen("lifdef");
    v36 = v91;
    if ( v66 == v21 )
    {
      v18 = 1;
      if ( v21 )
        goto LABEL_71;
      goto LABEL_54;
    }
    v105 = v66;
    v67 = j__strlen("lifndef");
    v17 = v91;
    if ( v67 != v21 )
      goto LABEL_185;
    v39 = v105;
    if ( !v21 )
    {
      v18 = v105 == 0;
      goto LABEL_54;
    }
LABEL_52:
    v104 = v39;
    v94 = v17;
    v40 = memcmp(s1a, "lifndef", v21);
    v17 = v94;
    if ( v40 )
      goto LABEL_185;
    if ( v104 == v21 )
      goto LABEL_138;
LABEL_54:
    v95 = v115;
    v41 = (_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 1120) + 64LL)
                  + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 1120) + 72LL)
                  - 8);
    v42 = v115;
    if ( !v41[4] && (_QWORD)v121 )
    {
      if ( !**((_DWORD **)&v121 + 1) )
      {
        **((_DWORD **)&v121 + 1) = v22 - v121;
        v42 = v115;
      }
      a7 = 0;
      v121 = 0;
    }
    v43 = *(_BYTE **)(a1 + 56);
    if ( (v43[1] & 8) != 0 )
      v44 = (v43[2] & 1) == 0 ? 1214 : 1337;
    else
      v44 = (*v43 & 8) == 0 ? 1207 : 1318;
    sub_FC70B0((__int64)&src, *(_QWORD *)(a1 + 48), v42, v44);
    sub_AE9DF0((unsigned __int8 **)&src, ((unsigned __int8)v18 ^ 1u) + 1LL, 2u);
    sub_AEA040((__int64)&src);
    if ( v41[6] )
    {
      sub_FC70B0((__int64)&src, *(_QWORD *)(a1 + 48), v115, 1283);
      sub_AE9DF0((unsigned __int8 **)&src, ((unsigned __int8)v18 ^ 1u) + 1LL, 2u);
      sub_AEA040((__int64)&src);
    }
    if ( v41[4] )
      goto LABEL_33;
    v45 = v41[5];
    if ( v45 )
      goto LABEL_33;
    *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 26LL) = 0;
    sub_141B710(a1, (__int64)v122, 0, nullptr, a7, a8);
    *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 26LL) = 1;
    if ( v123 == 2 )
      goto LABEL_17;
    sub_141A700(a1, (__int64)v122, 0);
    v79 = "elifndef";
    if ( v18 )
      v79 = "elifdef";
    sub_1421C50(a1, (__int64)v79, 0);
    v106 = v123;
    v80 = sub_141A630(v123);
    if ( v106 == 1 || v80 )
      v84 = 0;
    else
      v84 = v122[1];
    sub_1423DB0((__int64)&src, (_QWORD *)a1, v84, v81, v82, v83);
    if ( v126 )
    {
      a3 = n;
      v45 = *(_QWORD *)(*(_QWORD *)(n + 8 * v126 - 8) + 16LL) != 0;
    }
    else if ( ((unsigned __int64)src & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v85 = sub_13F1C60((__int64 *)((unsigned __int64)src & 0xFFFFFFFFFFFFFFF8LL));
      if ( v85 )
        v45 = v85[2] != 0;
    }
    v86 = *(__int64 **)(a1 + 1192);
    if ( v86 )
    {
      v87 = *v86;
      if ( v18 )
        (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD *, void **))(v87 + 328))(v86, v95, v122, &src);
      else
        (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD *, void **))(v87 + 352))(v86, v95, v122, &src);
    }
    if ( v18 == v45 )
    {
      v41[5] = 1;
      v61 = 0;
      goto LABEL_89;
    }
LABEL_34:
    *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 24LL) = 0;
    v11 = *(_QWORD *)(a1 + 1112);
    i = (_BYTE *)v11;
    if ( !v11 )
      continue;
    sub_13D11A0(v11);
LABEL_17:
    v11 = *(_QWORD *)(a1 + 1112);
    i = (_BYTE *)v11;
  }
  v20 = v121;
  if ( (_QWORD)v121 )
    goto LABEL_19;
  v50 = v120;
  v51 = *(_QWORD *)(v120 + 1112);
  v52 = *(_DWORD *)(v120 + 3024);
  v53 = (__int64 *)(v120 + 3008);
  v54 = *(_QWORD *)(v51 + 152);
  *(_QWORD *)&v121 = v54;
  if ( !v52 )
  {
    src = nullptr;
LABEL_131:
    v52 *= 2;
    goto LABEL_132;
  }
  v55 = *(_QWORD *)(v120 + 3008);
  v56 = (v52 - 1) & (((unsigned int)v54 >> 9) ^ ((unsigned int)v54 >> 4));
  a3 = v55 + 16LL * v56;
  v57 = *(_QWORD *)a3;
  if ( v54 == *(_QWORD *)a3 )
  {
LABEL_77:
    v58 = *(_DWORD *)(a3 + 8);
    *((_QWORD *)&v121 + 1) = a3 + 8;
    if ( v58 )
    {
      sub_13D11D0(v51, v54 - *(_DWORD *)(v51 + 112) + v58, 1);
      i = *(_BYTE **)(a1 + 1112);
      goto LABEL_19;
    }
    goto LABEL_85;
  }
  a6 = 1;
  if ( v57 != -4096 )
  {
    while ( 1 )
    {
      if ( !v20 && v57 == -8192 )
        v20 = a3;
      v56 = (v52 - 1) & (a6 + v56);
      a3 = v55 + 16LL * v56;
      v57 = *(_QWORD *)a3;
      if ( v54 == *(_QWORD *)a3 )
        goto LABEL_77;
      if ( v57 == -4096 )
      {
        if ( v20 )
          a3 = v20;
        break;
      }
      a6 = (unsigned int)(a6 + 1);
    }
  }
  v59 = *(_DWORD *)(v120 + 3016);
  src = (void *)a3;
  v20 = (unsigned int)(v59 + 1);
  if ( 4 * (int)v20 >= 3 * v52 )
    goto LABEL_131;
  if ( v52 - *(_DWORD *)(v120 + 3020) - (unsigned int)v20 <= v52 >> 3 )
  {
LABEL_132:
    sub_139DA10((__int64 *)(v120 + 3008), v52, a3, v20, v54, a6);
    sub_141BCE0(v53, (__int64 *)&v121, &src);
    v54 = v121;
    a3 = (__int64)src;
    LODWORD(v20) = *(_DWORD *)(v50 + 3016) + 1;
    v11 = *(_QWORD *)(a1 + 1112);
  }
  v9 = *(_QWORD *)a3 == -4096;
  *(_DWORD *)(v50 + 3016) = v20;
  if ( !v9 )
    --*(_DWORD *)(v50 + 3020);
  *(_QWORD *)a3 = v54;
  v60 = (_DWORD *)(a3 + 8);
  *v60 = 0;
  *((_QWORD *)&v121 + 1) = v60;
LABEL_85:
  for ( i = (_BYTE *)v11; ; i = *(_BYTE **)(a1 + 1112) )
  {
LABEL_19:
    while ( 1 )
    {
      sub_13DB5F0(i, (__int64)&v115, a7, a8);
      if ( v118 != 3 )
        break;
      v27 = *(_QWORD *)(a1 + 48);
      *(_BYTE *)(a1 + 968) = 1;
      *(_BYTE *)(v27 + 6) = 1;
      v28 = *(_QWORD *)(a1 + 752);
      if ( !v28 )
        goto LABEL_23;
      v29 = *(void (**)())(*(_QWORD *)v28 + 24LL);
      if ( v29 == nullsub_673 )
        goto LABEL_23;
      v29();
      i = *(_BYTE **)(a1 + 1112);
    }
    if ( v118 == 1 )
      break;
    if ( v118 == 67 && (v119 & 1) != 0 )
      goto LABEL_6;
LABEL_23:
    ;
  }
  if ( *(_DWORD *)(a1 + 1104) == 1 )
  {
    *(_BYTE *)(a1 + 1048) = 1;
    *(_DWORD *)(a1 + 1032) = a2;
    *(_DWORD *)(a1 + 1036) = v110;
    *(_BYTE *)(a1 + 1040) = a4;
    *(_BYTE *)(a1 + 1041) = a5;
    *(_DWORD *)(a1 + 1044) = v113;
  }
LABEL_88:
  v61 = 0;
LABEL_89:
  *(_BYTE *)(*(_QWORD *)(a1 + 1120) + 26LL) = 0;
  v62 = *(_QWORD *)(a1 + 1192);
  if ( v62 && (v118 != 1 || *(_DWORD *)(a1 + 1104) != 1) )
  {
    v63 = v115;
    v64 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v62 + 296LL);
    if ( !(_DWORD)v61 )
    {
      v68 = *(__int64 **)(a1 + 1120);
      v69 = *(__int64 (**)(void))(*v68 + 32);
      if ( (char *)v69 == (char *)sub_13D0890 )
        v61 = sub_13D1500((__int64)v68, v68[19], 1);
      else
        v61 = v69();
    }
    v64(v62, (v61 << 32) | a2, v63);
  }
  *(_BYTE *)(a1 + 3000) = v109;
  return v109;
}

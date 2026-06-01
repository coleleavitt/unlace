__int64 __fastcall sub_18294F0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  size_t v6; // rax
  __int64 (*v7)(); // rax
  size_t v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned int v12; // r12d
  _DWORD *v14; // r15
  __int64 (*v15)(); // rax
  __int64 (*v16)(); // rax
  int v17; // eax
  size_t v18; // rax
  size_t v19; // r14
  void *v20; // r13
  __int64 *v21; // rsi
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  void **p_s1; // rsi
  __int64 v26; // rax
  int *v27; // rsi
  void **v28; // rbp
  void **v29; // rbx
  char **v30; // rbp
  char *v31; // r14
  size_t v32; // r13
  size_t v33; // rax
  size_t v34; // rbp
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbp
  unsigned __int64 v37; // rsi
  size_t v38; // r14
  unsigned __int64 v39; // rax
  size_t v40; // rdx
  __int64 v41; // rax
  size_t v42; // rdx
  char *v43; // rdx
  char **v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  size_t v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 v52; // r8
  __int64 v53; // r9
  char *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbx
  __int64 v59; // r8
  __int64 v60; // r9
  char *v61; // rax
  _QWORD *v62; // rax
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // rbx
  __int64 v66; // r8
  __int64 v67; // r9
  char *v68; // rax
  _QWORD *v69; // rax
  const char **v70; // rbp
  const char **v71; // r13
  const char *v72; // rdx
  const char *v73; // rsi
  __int64 v74; // rax
  __int64 (*v75)(); // rax
  __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rdi
  __int64 (__fastcall *v82)(__int64, __int64, __int64, __int64, __int64, __int64, int, const char **); // rax
  size_t v83; // rax
  __int64 *v84; // rsi
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rbx
  char **v88; // [rsp+8h] [rbp-170h]
  __int64 v89; // [rsp+10h] [rbp-168h] BYREF
  __int64 v90; // [rsp+18h] [rbp-160h]
  int v91; // [rsp+24h] [rbp-154h] BYREF
  int v92; // [rsp+28h] [rbp-150h] BYREF
  int v93; // [rsp+2Ch] [rbp-14Ch] BYREF
  char *v94; // [rsp+30h] [rbp-148h] BYREF
  unsigned __int64 v95; // [rsp+38h] [rbp-140h]
  const char *v96; // [rsp+40h] [rbp-138h] BYREF
  size_t v97; // [rsp+48h] [rbp-130h]
  void *v98; // [rsp+50h] [rbp-128h] BYREF
  char **v99; // [rsp+58h] [rbp-120h]
  __int64 v100; // [rsp+68h] [rbp-110h] BYREF
  __int64 v101; // [rsp+70h] [rbp-108h]
  __int64 v102; // [rsp+78h] [rbp-100h] BYREF
  __int64 v103; // [rsp+80h] [rbp-F8h]
  __int64 v104; // [rsp+88h] [rbp-F0h]
  __int64 v105; // [rsp+90h] [rbp-E8h]
  void *s1; // [rsp+98h] [rbp-E0h] BYREF
  size_t n; // [rsp+A0h] [rbp-D8h]
  char *v108; // [rsp+B0h] [rbp-C8h] BYREF
  unsigned __int64 v109; // [rsp+B8h] [rbp-C0h]
  char *v110; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned __int64 v111; // [rsp+C8h] [rbp-B0h]
  unsigned __int8 *v112[11]; // [rsp+D0h] [rbp-A8h] BYREF
  unsigned __int8 v113; // [rsp+128h] [rbp-50h]
  unsigned int v114; // [rsp+130h] [rbp-48h]
  unsigned __int8 v115; // [rsp+134h] [rbp-44h]

  v89 = a3;
  v90 = a4;
  v6 = j__strlen("fpmath=");
  if ( sub_2246AB0(&v89, "fpmath=", v6, 0) != -1 )
  {
    sub_168B9F0((__int64)&v108, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
    if ( v113 )
    {
      sub_AE9DF0(v112, 0, 2u);
      if ( !v113 )
        goto LABEL_66;
    }
    else
    {
      if ( !v115 )
      {
LABEL_10:
        v12 = 0;
LABEL_11:
        sub_15F7200(&v108);
        return v12;
      }
      v51 = sub_168B9E0(&v108);
      v54 = v110;
      if ( v110 )
        v54 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v110 + 32LL))(v110);
      v98 = v54;
      v55 = sub_1587BC0(v51, (__int64 *)&v98, v49, v50, v52, v53);
      sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * v114 + 8), 0, 2u);
      if ( !v113 )
      {
LABEL_66:
        if ( !v115 )
          goto LABEL_10;
        v58 = sub_168B9E0(&v108);
        v61 = v110;
        if ( v110 )
          v61 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v110 + 32LL))(v110);
        v98 = v61;
        v62 = sub_1587BC0(v58, (__int64 *)&v98, v56, v57, v59, v60);
        sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v114 + 8), 0, 2u);
        if ( !v113 )
        {
LABEL_70:
          if ( !v115 )
            goto LABEL_10;
          sub_180D0B0((__int64)&v108, (__int64)"fpmath=");
          if ( !v113 )
          {
LABEL_72:
            v12 = v115;
            if ( v115 )
            {
              v65 = sub_168B9E0(&v108);
              v68 = v110;
              if ( v110 )
                v68 = (char *)(*(__int64 (__fastcall **)(char *))(*(_QWORD *)v110 + 32LL))(v110);
              v98 = v68;
              v69 = sub_1587BC0(v65, (__int64 *)&v98, v63, v64, v66, v67);
              sub_AE9DF0((unsigned __int8 **)(*v69 + 32LL * v114 + 8), 0, 2u);
              v12 = v113;
            }
            goto LABEL_11;
          }
LABEL_62:
          sub_AE9DF0(v112, 0, 2u);
          v12 = v113;
          goto LABEL_11;
        }
LABEL_61:
        sub_AE9DF0(v112, (__int64)"fpmath=", 1u);
        if ( !v113 )
          goto LABEL_72;
        goto LABEL_62;
      }
    }
    sub_AE9DF0(v112, 0, 2u);
    if ( !v113 )
      goto LABEL_70;
    goto LABEL_61;
  }
  v7 = *(__int64 (**)())(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL) + 504LL);
  if ( v7 == sub_102BA10 || !(unsigned __int8)v7() )
  {
    v8 = j__strlen("tune=");
    if ( sub_2246AB0(&v89, "tune=", v8, 0) != -1 )
    {
      sub_168B9F0((__int64)&v108, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
      LODWORD(v94) = 0;
      v9 = sub_180D770((__int64)&v108, (int *)&v94);
      LODWORD(v96) = 0;
      v10 = sub_180D820(v9, (int *)&v96);
      v11 = v10;
      if ( *(_BYTE *)(v10 + 120) )
      {
        sub_AE9DF0((unsigned __int8 **)(v10 + 32), (__int64)"tune=", 1u);
      }
      else if ( *(_BYTE *)(v10 + 132) )
      {
        sub_180D0B0(v10, (__int64)"tune=");
      }
      LODWORD(v98) = 0;
      v12 = *(unsigned __int8 *)(sub_1816130(v11, (int *)&v98) + 120);
      goto LABEL_11;
    }
  }
  (*(void (__fastcall **)(void **, _QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 248) + 17448LL) + 496LL))(
    &v98,
    *(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL),
    v89,
    v90);
  v14 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
  if ( v101 )
  {
    v15 = *(__int64 (**)())(*(_QWORD *)v14 + 480LL);
    if ( v15 != sub_A55EC0 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_DWORD *, __int64, __int64))v15)(v14, v100, v101) )
      {
        sub_168B9F0((__int64)&v108, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
        v93 = 2;
        v78 = sub_180D770((__int64)&v108, &v93);
        LODWORD(v94) = 1;
        v24 = sub_180D820(v78, (int *)&v94);
        p_s1 = (void **)&v100;
        goto LABEL_24;
      }
      v14 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
    }
  }
  if ( v103 )
  {
    v16 = *(__int64 (**)())(*(_QWORD *)v14 + 480LL);
    if ( v16 != sub_A55EC0 )
    {
      if ( !((unsigned __int8 (__fastcall *)(_DWORD *, __int64, __int64))v16)(v14, v102, v103) )
      {
        sub_168B9F0((__int64)&v108, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
        v93 = 2;
        v79 = sub_180D770((__int64)&v108, &v93);
        LODWORD(v94) = 2;
        v24 = sub_180D820(v79, (int *)&v94);
        p_s1 = (void **)&v102;
        goto LABEL_24;
      }
      v14 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
    }
  }
  v17 = v14[62];
  if ( (unsigned int)(v17 - 27) > 1 )
  {
    if ( (unsigned int)(v17 - 13) <= 1 )
    {
      v30 = (char **)v98;
      v88 = v99;
      if ( v99 != v98 )
      {
        while ( 1 )
        {
          v31 = *v30;
          v94 = *v30;
          v95 = (unsigned __int64)v30[1];
          v32 = v95;
          v33 = j__strlen("!arch=");
          if ( v33 <= v32 && (!v33 || !memcmp(v31, "!arch=", v33)) )
            break;
          v30 += 4;
          if ( v88 == v30 )
            goto LABEL_57;
        }
        v34 = j__strlen("=");
        v35 = sub_2246AB0(&v94, "=", v34, 0);
        if ( v35 == -1 )
        {
          v110 = nullptr;
          v111 = 0;
          v108 = v94;
          v109 = v95;
        }
        else
        {
          v36 = v35 + v34;
          if ( v36 > v95 )
          {
            v36 = v95;
            v37 = 0;
          }
          else
          {
            v37 = v95 - v36;
          }
          v111 = v37;
          if ( v35 > v95 )
            v35 = v95;
          v108 = v94;
          v109 = v35;
          v110 = &v94[v36];
        }
        v38 = j__strlen(asc_22E1692);
        v39 = sub_9EC6C0(&v110, (__int64)asc_22E1692, v38);
        v97 = v40;
        v96 = (const char *)v39;
        v41 = sub_9EC6F0((__int64)&v96, (__int64)asc_22E1692, v38);
        v97 = v42;
        v96 = (const char *)v41;
        sub_168B9F0((__int64)&v108, (__int64 *)(a1 + 8), a2, 0xC9Eu, 0);
        if ( v113 )
        {
          sub_AE9DF0(v112, (__int64)"target(arch=..)", 1u);
        }
        else if ( v115 )
        {
          sub_180D0B0((__int64)&v108, (__int64)"target(arch=..)");
        }
        v12 = *(unsigned __int8 *)(sub_1682BA0((__int64)&v108, (__int64)&v96) + 120);
        sub_15F7200(&v108);
        goto LABEL_26;
      }
    }
LABEL_57:
    v19 = n;
    v48 = j__strlen(&byte_22F0C30);
    v20 = s1;
    if ( v19 != v48 )
      goto LABEL_58;
    goto LABEL_76;
  }
  v18 = j__strlen(&byte_22F0C30);
  v19 = n;
  if ( v18 == n )
  {
    v20 = s1;
    if ( !n || !memcmp(s1, &byte_22F0C30, n) )
    {
      if ( v98 != v99 )
      {
        if ( *((_QWORD *)v98 + 1) )
        {
          v43 = *(char **)v98;
          v44 = (char **)((char *)v98 + 32);
          do
          {
            if ( ((*v43 - 43) & 0xFD) != 0 )
              break;
            if ( v99 == v44 )
              goto LABEL_76;
            v43 = *v44;
            v44 += 4;
          }
          while ( *(v44 - 3) );
        }
        sub_168B9F0((__int64)&v108, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
        v93 = 0;
        v45 = sub_180D770((__int64)&v108, &v93);
        LODWORD(v94) = 0;
        v46 = sub_180D820(v45, (int *)&v94);
        v47 = sub_1682BA0(v46, (__int64)&v89);
        LODWORD(v96) = 0;
        v12 = *(unsigned __int8 *)(sub_1816130(v47, (int *)&v96) + 120);
        sub_15F7200(&v108);
        goto LABEL_26;
      }
LABEL_76:
      if ( !v19 || !memcmp(v20, &byte_22F0C30, v19) )
      {
        v70 = (const char **)v98;
        v71 = (const char **)v99;
        if ( v99 != v98 )
        {
          while ( 1 )
          {
            v72 = v70[1];
            v73 = *v70;
            if ( v72 )
            {
              --v72;
              ++v73;
            }
            v74 = *(_QWORD *)v14;
            v96 = v73;
            v97 = (size_t)v72;
            v75 = *(__int64 (**)())(v74 + 544);
            if ( v75 != sub_A55ED0 && !((unsigned __int8 (__fastcall *)(_DWORD *))v75)(v14) )
              break;
            v70 += 4;
            if ( v71 == v70 )
              goto LABEL_93;
            v14 = *(_DWORD **)(*(_QWORD *)(a1 + 248) + 17448LL);
          }
          sub_168B9F0((__int64)&v108, (__int64 *)(a1 + 8), a2, 0x1D5Au, 0);
          v92 = 0;
          v76 = sub_180D770((__int64)&v108, &v92);
          v93 = 0;
          v77 = sub_180D820(v76, &v93);
          v26 = sub_1682BA0(v77, (__int64)&v96);
          LODWORD(v94) = 0;
          v27 = (int *)&v94;
          goto LABEL_25;
        }
LABEL_93:
        BYTE2(v95) = 0;
        v94 = nullptr;
        LOWORD(v95) = 0;
        v96 = nullptr;
        v97 = 0;
        if ( v105 )
        {
          v80 = *(_QWORD *)(a1 + 248);
          v81 = *(_QWORD *)(v80 + 17448);
          v82 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, int, const char **))(*(_QWORD *)v81 + 568LL);
          if ( (char *)v82 == (char *)sub_102BEE0 )
          {
            v83 = j__strlen(&byte_22F0C30);
            v96 = &byte_22F0C30;
            v97 = v83;
            goto LABEL_96;
          }
          if ( !(unsigned __int8)v82(v81, v104, v105, v100, v101, (__int64)&v94, *(_QWORD *)(v80 + 2320), &v96) )
          {
            v83 = v97;
LABEL_96:
            v84 = (__int64 *)(a1 + 8);
            if ( v83 )
            {
              sub_168B9F0((__int64)&v108, v84, a2, 0xFAEu, 0);
              v12 = *(unsigned __int8 *)(sub_1682BA0((__int64)&v108, (__int64)&v96) + 120);
              sub_15F7200(&v108);
            }
            else
            {
              sub_168B9F0((__int64)&v108, v84, a2, 0x1D5Au, 0);
              v91 = 0;
              v85 = sub_180D770((__int64)&v108, &v91);
              v92 = 0;
              v86 = sub_180D820(v85, &v92);
              v87 = v86;
              if ( *(_BYTE *)(v86 + 120) )
              {
                sub_AE9DF0((unsigned __int8 **)(v86 + 32), (__int64)"branch-protection", 1u);
              }
              else if ( *(_BYTE *)(v86 + 132) )
              {
                sub_180D0B0(v86, (__int64)"branch-protection");
              }
              v93 = 0;
              v12 = *(unsigned __int8 *)(sub_1816130(v87, &v93) + 120);
              sub_15F7200(&v108);
            }
            goto LABEL_26;
          }
          if ( v97 )
          {
            sub_168B9F0((__int64)&v108, (__int64 *)(a1 + 8), a2, 0x1D59u, 0);
            sub_1682BA0((__int64)&v108, (__int64)&v96);
            sub_15F7200(&v108);
          }
        }
        v12 = 0;
        goto LABEL_26;
      }
LABEL_58:
      v21 = (__int64 *)(a1 + 8);
      v22 = 7514;
      goto LABEL_23;
    }
  }
  v21 = (__int64 *)(a1 + 8);
  v22 = 3718;
LABEL_23:
  sub_168B9F0((__int64)&v108, v21, a2, v22, 0);
  v93 = 1;
  v23 = sub_180D770((__int64)&v108, &v93);
  LODWORD(v94) = 0;
  v24 = sub_180D820(v23, (int *)&v94);
  p_s1 = &s1;
LABEL_24:
  v26 = sub_1682BA0(v24, (__int64)p_s1);
  LODWORD(v96) = 0;
  v27 = (int *)&v96;
LABEL_25:
  v12 = *(unsigned __int8 *)(sub_1816130(v26, v27) + 120);
  sub_15F7200(&v108);
LABEL_26:
  v28 = (void **)v99;
  v29 = (void **)v98;
  if ( v99 != v98 )
  {
    do
    {
      while ( *v29 != v29 + 2 )
      {
        operator delete(*v29);
        v29 += 4;
        if ( v29 == v28 )
          goto LABEL_29;
      }
      v29 += 4;
    }
    while ( v28 != v29 );
LABEL_29:
    v29 = (void **)v98;
  }
  if ( v29 )
    operator delete(v29);
  return v12;
}

void __fastcall sub_1736F00(__int64 *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // r13d
  _QWORD *v7; // rdi
  __int64 v8; // rax
  __int64 (*v9)(void); // rdx
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  size_t v13; // r14
  unsigned int *v14; // rbx
  size_t v15; // rbp
  const char *v16; // rbx
  __int64 v17; // rdx
  __int64 (__fastcall ****v18)(); // r15
  size_t v19; // r13
  char *v20; // rbp
  __int64 (__fastcall **v21)(); // rax
  __int64 (*v22)(); // rbx
  __int64 v23; // rax
  __int64 (*v24)(); // rbx
  __int64 v25; // rax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r14
  size_t v29; // r12
  void *v30; // rdi
  void *v31; // rax
  char *v32; // rax
  char *v33; // rcx
  char *v34; // rdx
  const void *v35; // rdi
  char *v36; // rsi
  char *v37; // rdx
  __int64 v38; // r9
  const void **v39; // rcx
  int v40; // eax
  int v41; // esi
  __int64 v42; // r8
  bool v43; // zf
  const char *v44; // rax
  _QWORD *v45; // r15
  char *v46; // rbp
  __int64 (*v47)(); // rbx
  __int64 v48; // rax
  __int64 (*v49)(); // rbx
  __int64 v50; // rax
  __int64 v51; // rbx
  __int64 v52; // rax
  __int64 v53; // r13
  size_t v54; // r12
  void *v55; // rdi
  void *v56; // rax
  char *v57; // rax
  char *v58; // rcx
  char *v59; // rdx
  const void *v60; // rdi
  char *v61; // rsi
  char *v62; // rdx
  __int64 v63; // r9
  __int64 v64; // rdx
  const void **v65; // rcx
  int v66; // eax
  int v67; // esi
  __int64 v68; // r8
  const char *v69; // rax
  void (*v70)(void); // rax
  __int64 v71; // rcx
  __int64 v72; // rsi
  __m128i v73; // xmm1
  __m128i v74; // xmm2
  size_t v75; // rdx
  char *v76; // r12
  size_t v77; // rax
  size_t v78; // rdx
  char *v79; // r12
  size_t v80; // rax
  const char *v81; // rbx
  int v82; // eax
  __int64 v83; // rax
  __int64 v86; // [rsp+10h] [rbp-3B0h]
  char v87; // [rsp+23h] [rbp-39Dh]
  unsigned int v88; // [rsp+24h] [rbp-39Ch]
  unsigned int v90; // [rsp+28h] [rbp-398h]
  unsigned int v91; // [rsp+2Ch] [rbp-394h]
  int v92; // [rsp+2Ch] [rbp-394h]
  __int64 (__fastcall ****v93)(); // [rsp+30h] [rbp-390h]
  const char *s2; // [rsp+38h] [rbp-388h]
  void *s1; // [rsp+48h] [rbp-378h]
  void *s1a; // [rsp+48h] [rbp-378h]
  void *v98; // [rsp+60h] [rbp-360h] BYREF
  void *v99[2]; // [rsp+68h] [rbp-358h] BYREF
  size_t n[2]; // [rsp+78h] [rbp-348h] BYREF
  __int64 v101; // [rsp+88h] [rbp-338h] BYREF
  __int64 v102; // [rsp+90h] [rbp-330h]
  unsigned int v103; // [rsp+98h] [rbp-328h]
  const void **v104; // [rsp+A8h] [rbp-318h] BYREF
  size_t v105; // [rsp+B0h] [rbp-310h]
  __int16 v106; // [rsp+C8h] [rbp-2F8h]
  const void **v107; // [rsp+D8h] [rbp-2E8h] BYREF
  char *v108; // [rsp+E0h] [rbp-2E0h]
  __m128i si128; // [rsp+E8h] [rbp-2D8h]
  __int64 v110; // [rsp+F8h] [rbp-2C8h]
  __int128 v111; // [rsp+100h] [rbp-2C0h] BYREF
  __int64 v112; // [rsp+110h] [rbp-2B0h]
  char v113; // [rsp+118h] [rbp-2A8h]
  __int64 v114; // [rsp+120h] [rbp-2A0h]
  __int64 v115; // [rsp+128h] [rbp-298h]
  __int64 v116; // [rsp+130h] [rbp-290h]
  char *v117; // [rsp+138h] [rbp-288h]
  __int64 v118; // [rsp+140h] [rbp-280h]
  int v119; // [rsp+148h] [rbp-278h]
  char v120; // [rsp+14Ch] [rbp-274h]
  char v121; // [rsp+150h] [rbp-270h] BYREF
  __int64 v122; // [rsp+198h] [rbp-228h] BYREF
  __int64 v123; // [rsp+1A0h] [rbp-220h]
  char **v124; // [rsp+250h] [rbp-170h]
  int v125[62]; // [rsp+2C8h] [rbp-F8h] BYREF

  if ( a3 == 2 )
    return;
  v6 = a2;
  v7 = (_QWORD *)a1[1];
  LODWORD(v107) = 35;
  BYTE4(v107) = 0;
  v108 = nullptr;
  si128 = 0u;
  v110 = 0;
  v117 = &v121;
  v8 = *v7;
  v9 = *(__int64 (**)(void))(*v7 + 48LL);
  LOBYTE(v116) = 0;
  v118 = 8;
  v119 = 0;
  v120 = 1;
  if ( (char *)v9 == (char *)sub_15A1860 )
  {
    v10 = *(__int64 (__fastcall **)(__int64))(v8 + 40);
    v11 = (__int64)(v7 + 3);
    if ( v10 == sub_15A1850 )
    {
LABEL_4:
      v12 = v7[6];
      goto LABEL_5;
    }
  }
  else
  {
    v11 = v9();
    v7 = (_QWORD *)a1[1];
    v10 = *(__int64 (__fastcall **)(__int64))(*v7 + 40LL);
    if ( v10 == sub_15A1850 )
      goto LABEL_4;
  }
  v86 = v11;
  v83 = ((__int64 (*)(void))v10)();
  v11 = v86;
  v12 = v83;
LABEL_5:
  v13 = 0;
  sub_16FF270((__int64)&v122, *a1, v12, v11, (unsigned int *)&v107, a6, 0);
  sub_17038E0((__int64)&v107);
  s2 = nullptr;
  v87 = 0;
  if ( !a4 )
    goto LABEL_11;
  v14 = *(unsigned int **)(a4 + 16);
  v15 = *v14;
  v16 = (const char *)(v14 + 4);
  s2 = v16;
  v13 = v15;
  if ( v15 == j__strlen("_Clang") )
  {
    if ( !v15 || !memcmp(v16, "_Clang", v15) )
    {
      v81 = "clang";
      goto LABEL_133;
    }
    if ( v15 != j__strlen("__gnu__") )
    {
LABEL_10:
      v87 = 0;
      goto LABEL_11;
    }
  }
  else
  {
    if ( v15 != j__strlen("__gnu__") )
      goto LABEL_10;
    if ( !v15 )
    {
      v81 = "gnu";
      goto LABEL_133;
    }
  }
  v82 = memcmp(v16, "__gnu__", v15);
  v81 = "gnu";
  if ( v82 )
    goto LABEL_10;
LABEL_133:
  s2 = v81;
  v13 = j__strlen(v81);
  v87 = 1;
LABEL_11:
  v101 = 0;
  v88 = a2 - 1;
  v102 = 0;
  v103 = 0;
  v91 = a2 - 2;
  v18 = sub_15D8220();
  v93 = &v18[v17];
  if ( v18 != v93 )
  {
    v19 = v13;
    while ( 1 )
    {
      v20 = (char *)*v18;
      v21 = **v18;
      if ( (*((_BYTE *)*v18 + 11) & 0x40) == 0 )
        goto LABEL_16;
      v22 = v21[6];
      v23 = sub_168B6C0((__int64)a1);
      if ( v22 == sub_15D2720 || ((unsigned __int8 (__fastcall *)(char *, _QWORD))v22)(v20, *(_QWORD *)(v23 + 17448)) )
      {
        v21 = *(__int64 (__fastcall ***)())v20;
LABEL_16:
        v24 = v21[5];
        v25 = sub_168B6E0((__int64)a1);
        if ( v24 == sub_15D2710 || ((unsigned __int8 (__fastcall *)(char *, __int64))v24)(v20, v25) )
        {
          v26 = *((_QWORD *)v20 + 2);
          v27 = 16LL * *((_QWORD *)v20 + 3);
          v28 = v26 + v27;
          if ( v26 != v26 + v27 )
          {
            while ( 1 )
            {
              if ( *(_DWORD *)v26 != a2 )
                goto LABEL_25;
              v30 = *(void **)(v26 + 8);
              v31 = nullptr;
              v99[0] = v30;
              if ( v30 )
                v31 = (void *)strlen((const char *)v30);
              v99[1] = v31;
              n[0] = 0;
              n[1] = 0;
              if ( v91 > 1 )
                goto LABEL_19;
              v32 = (char *)sub_2246AB0(v99, "::", 2, 0);
              if ( v32 == (char *)-1LL )
                break;
              v33 = (char *)v99[1];
              v34 = v32 + 2;
              if ( v32 + 2 > v99[1] )
              {
                if ( v32 > v99[1] )
                  v32 = (char *)v99[1];
                v37 = (char *)v99[0] + (unsigned __int64)v99[1];
                n[0] = (size_t)v99[0];
                n[1] = (size_t)v32;
                goto LABEL_92;
              }
              v35 = v99[0];
              v36 = (char *)((char *)v99[1] - (char *)v34);
              v37 = (char *)v99[0] + (unsigned __int64)v34;
              v99[1] = v36;
              if ( v32 > v33 )
                v32 = v33;
              n[0] = (size_t)v99[0];
              v99[0] = v37;
              n[1] = (size_t)v32;
              if ( !v36 )
                goto LABEL_92;
              if ( a3 == 1 )
              {
                if ( !v32 || (unsigned __int8)sub_10E92B0(&v101, n, &v104) )
                  goto LABEL_25;
                v39 = v104;
                v40 = v102 + 1;
                v41 = 2 * v103;
                v42 = (unsigned int)(4 * (v102 + 1));
                v107 = v104;
                if ( (unsigned int)v42 < 3 * v103 )
                {
                  if ( v103 - HIDWORD(v102) - v40 > v103 >> 3 )
                    goto LABEL_40;
                  v41 = v103;
                }
                sub_10FCC90((__int64)&v101, v41, v103, (__int64)v104, v42, v38);
                sub_10E92B0(&v101, n, &v107);
                v39 = v107;
                v40 = v102 + 1;
LABEL_40:
                v43 = (char *)*v39 + 1 == nullptr;
                LODWORD(v102) = v40;
                if ( !v43 )
                  --HIDWORD(v102);
                *(__m128i *)v39 = _mm_load_si128((const __m128i *)n);
                v106 = 261;
                v104 = (const void **)n[0];
                v105 = n[1];
                v108 = sub_15A4EB0(v124, &v104, 261, (__int64)v39, v42, v38);
                v111 = 0;
                v107 = nullptr;
                si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
                v113 = v113 & 0x80 | 0x40;
                LODWORD(v110) = 0;
                v112 = 0;
                v114 = 0;
                v115 = 0;
                v116 = 0;
                sub_1706C30((__int64)&v122, (__int64)&v107);
                sub_1705410((__int64)&v111);
                v44 = sub_1701710(n[0], n[1]);
                if ( !v44 )
                  goto LABEL_25;
                v108 = (char *)v44;
                v26 += 16;
                v111 = 0;
                v107 = nullptr;
                si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
                LODWORD(v110) = 0;
                v112 = 0;
                v113 = v113 & 0x80 | 0x40;
                v114 = 0;
                v115 = 0;
                v116 = 0;
                sub_1706C30((__int64)&v122, (__int64)&v107);
                sub_1705410((__int64)&v111);
                if ( v28 == v26 )
                  goto LABEL_44;
              }
              else
              {
                if ( v19 )
                {
                  if ( v32 != (char *)v19 || memcmp(v35, s2, v19) )
                    goto LABEL_25;
                  n[1] = 0;
                  n[0] = (size_t)&byte_22F0C30;
                }
LABEL_21:
                v108 = v20;
                v107 = (const void **)&v122;
                if ( !v87 )
                {
                  sub_1711D40((__int64 *)&v107, (_BYTE *)n[0], n[1], v99[0], (size_t)v99[1], 0);
                  if ( a4 )
                    goto LABEL_25;
                }
                if ( v88 > 2 )
                  goto LABEL_25;
                v29 = n[1];
                if ( n[1] )
                {
                  if ( n[1] == 5 && *(_DWORD *)n[0] == 1851878499 && *(_BYTE *)(n[0] + 4) == 103 )
                  {
                    v76 = "_Clang";
                  }
                  else
                  {
                    s1 = (void *)n[0];
                    if ( v29 != j__strlen("gnu") )
                      goto LABEL_25;
                    v75 = v29;
                    v76 = "__gnu__";
                    if ( memcmp(s1, "gnu", v75) )
                      goto LABEL_25;
                  }
                  v77 = j__strlen(v76);
                  sub_1711D40((__int64 *)&v107, v76, v77, v99[0], (size_t)v99[1], 1);
                }
                else
                {
                  sub_1711D40((__int64 *)&v107, (_BYTE *)n[0], 0, v99[0], (size_t)v99[1], 1);
                }
LABEL_25:
                v26 += 16;
                if ( v28 == v26 )
                  goto LABEL_44;
              }
            }
            v37 = nullptr;
            n[0] = (size_t)v99[0];
            n[1] = (size_t)v99[1];
LABEL_92:
            v73 = _mm_load_si128((const __m128i *)n);
            n[0] = (size_t)v37;
            n[1] = 0;
            *(__m128i *)v99 = v73;
LABEL_19:
            if ( a3 == 1 || v19 )
              goto LABEL_25;
            goto LABEL_21;
          }
LABEL_44:
          if ( v93 == ++v18 )
          {
LABEL_45:
            v13 = v19;
            v6 = a2;
            break;
          }
        }
        else if ( v93 == ++v18 )
        {
          goto LABEL_45;
        }
      }
      else if ( v93 == ++v18 )
      {
        goto LABEL_45;
      }
    }
  }
  v45 = (_QWORD *)unk_2CD84F8;
  v90 = v6 - 2;
  if ( unk_2CD84F8 )
  {
    v92 = v6;
    while ( 1 )
    {
      (*(void (__fastcall **)(void **))(v45[1] + 32LL))(&v98);
      v46 = (char *)v98;
      if ( (*((_BYTE *)v98 + 11) & 0x40) == 0
        || (v47 = *(__int64 (**)())(*(_QWORD *)v98 + 48LL), v48 = sub_168B6C0((__int64)a1), v47 == sub_15D2720)
        || ((unsigned __int8 (__fastcall *)(char *, _QWORD))v47)(v46, *(_QWORD *)(v48 + 17448)) )
      {
        v49 = *(__int64 (**)())(*(_QWORD *)v46 + 40LL);
        v50 = sub_168B6E0((__int64)a1);
        if ( v49 == sub_15D2710 || ((unsigned __int8 (__fastcall *)(char *, __int64))v49)(v46, v50) )
        {
          v51 = *((_QWORD *)v46 + 2);
          v52 = 16LL * *((_QWORD *)v46 + 3);
          v53 = v51 + v52;
          if ( v51 != v51 + v52 )
            break;
        }
      }
LABEL_78:
      if ( v98 )
      {
        v70 = *(void (**)(void))(*(_QWORD *)v98 + 8LL);
        if ( (char *)v70 == (char *)sub_FFF900 )
          operator delete(v98, 0x30u);
        else
          v70();
      }
      v45 = (_QWORD *)*v45;
      if ( !v45 )
        goto LABEL_82;
    }
    while ( 1 )
    {
      if ( *(_DWORD *)v51 != v92 )
        goto LABEL_59;
      v55 = *(void **)(v51 + 8);
      v56 = nullptr;
      v99[0] = v55;
      if ( v55 )
        v56 = (void *)strlen((const char *)v55);
      v99[1] = v56;
      n[0] = 0;
      n[1] = 0;
      if ( v90 > 1 )
        goto LABEL_53;
      v57 = (char *)sub_2246AB0(v99, "::", 2, 0);
      if ( v57 == (char *)-1LL )
        break;
      v58 = (char *)v99[1];
      v59 = v57 + 2;
      if ( v57 + 2 > v99[1] )
      {
        if ( v57 > v99[1] )
          v57 = (char *)v99[1];
        v62 = (char *)v99[0] + (unsigned __int64)v99[1];
        n[0] = (size_t)v99[0];
        n[1] = (size_t)v57;
        goto LABEL_94;
      }
      v60 = v99[0];
      v61 = (char *)((char *)v99[1] - (char *)v59);
      v62 = (char *)v99[0] + (unsigned __int64)v59;
      v99[1] = v61;
      if ( v57 > v58 )
        v57 = v58;
      n[0] = (size_t)v99[0];
      v99[0] = v62;
      n[1] = (size_t)v57;
      if ( !v61 )
        goto LABEL_94;
      if ( a3 == 1 )
      {
        if ( !v57 || (unsigned __int8)sub_10E92B0(&v101, n, &v104) )
          goto LABEL_59;
        v64 = v103;
        v65 = v104;
        v66 = v102 + 1;
        v67 = 2 * v103;
        v68 = (unsigned int)(4 * (v102 + 1));
        v107 = v104;
        if ( (unsigned int)v68 < 3 * v103 )
        {
          if ( v103 - HIDWORD(v102) - v66 > v103 >> 3 )
            goto LABEL_74;
          v67 = v103;
        }
        sub_10FCC90((__int64)&v101, v67, v103, (__int64)v104, v68, v63);
        sub_10E92B0(&v101, n, &v107);
        v65 = v107;
        v66 = v102 + 1;
LABEL_74:
        v43 = (char *)*v65 + 1 == nullptr;
        LODWORD(v102) = v66;
        if ( !v43 )
          --HIDWORD(v102);
        *(__m128i *)v65 = _mm_load_si128((const __m128i *)n);
        v106 = 261;
        v104 = (const void **)n[0];
        v105 = n[1];
        v108 = sub_15A4EB0(v124, &v104, v64, (__int64)v65, v68, v63);
        v111 = 0;
        v107 = nullptr;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
        v113 = v113 & 0x80 | 0x40;
        LODWORD(v110) = 0;
        v112 = 0;
        v114 = 0;
        v115 = 0;
        v116 = 0;
        sub_1706C30((__int64)&v122, (__int64)&v107);
        sub_1705410((__int64)&v111);
        v69 = sub_1701710(n[0], n[1]);
        if ( !v69 )
          goto LABEL_59;
        v108 = (char *)v69;
        v51 += 16;
        v111 = 0;
        v107 = nullptr;
        si128 = _mm_load_si128((const __m128i *)&xmmword_23AA970);
        LODWORD(v110) = 0;
        v112 = 0;
        v113 = v113 & 0x80 | 0x40;
        v114 = 0;
        v115 = 0;
        v116 = 0;
        sub_1706C30((__int64)&v122, (__int64)&v107);
        sub_1705410((__int64)&v111);
        if ( v53 == v51 )
          goto LABEL_78;
      }
      else
      {
        if ( v13 )
        {
          if ( (char *)v13 != v57 || memcmp(v60, s2, v13) )
            goto LABEL_59;
          n[1] = 0;
          n[0] = (size_t)&byte_22F0C30;
        }
LABEL_55:
        v108 = v46;
        v107 = (const void **)&v122;
        if ( !v87 )
        {
          sub_1711D40((__int64 *)&v107, (_BYTE *)n[0], n[1], v99[0], (size_t)v99[1], 0);
          if ( a4 )
            goto LABEL_59;
        }
        if ( v88 > 2 )
          goto LABEL_59;
        v54 = n[1];
        if ( n[1] )
        {
          if ( n[1] == 5 && *(_DWORD *)n[0] == 1851878499 && *(_BYTE *)(n[0] + 4) == 103 )
          {
            v79 = "_Clang";
          }
          else
          {
            s1a = (void *)n[0];
            if ( v54 != j__strlen("gnu") )
              goto LABEL_59;
            v78 = v54;
            v79 = "__gnu__";
            if ( memcmp(s1a, "gnu", v78) )
              goto LABEL_59;
          }
          v80 = j__strlen(v79);
          sub_1711D40((__int64 *)&v107, v79, v80, v99[0], (size_t)v99[1], 1);
        }
        else
        {
          sub_1711D40((__int64 *)&v107, (_BYTE *)n[0], 0, v99[0], (size_t)v99[1], 1);
        }
LABEL_59:
        v51 += 16;
        if ( v53 == v51 )
          goto LABEL_78;
      }
    }
    v62 = nullptr;
    n[0] = (size_t)v99[0];
    n[1] = (size_t)v99[1];
LABEL_94:
    v74 = _mm_load_si128((const __m128i *)n);
    n[0] = (size_t)v62;
    n[1] = 0;
    *(__m128i *)v99 = v74;
LABEL_53:
    if ( a3 == 1 || v13 )
      goto LABEL_59;
    goto LABEL_55;
  }
LABEL_82:
  v71 = 0;
  v72 = a1[1];
  if ( v122 != v123 )
    v71 = v122;
  if ( v72 )
    sub_1700D50(*a1, v72, v125, v71, -1431655765 * ((v123 - v122) >> 5));
  operator delete(v101, 16LL * v103, 8);
  sub_1700A70((__int64)&v122);
}

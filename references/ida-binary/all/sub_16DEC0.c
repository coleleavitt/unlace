__int64 __fastcall sub_16DEC0(
        char a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        char a15)
{
  unsigned int v15; // eax
  __int64 license_manager; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  unsigned __int8 *v24; // r12
  const char *v25; // rdx
  const char *v26; // rdx
  void **v27; // rax
  const char *v28; // rdx
  const char *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  void **v33; // rax
  char *v34; // rax
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  const char *v38; // rdx
  bool v39; // zf
  const char *v40; // rax
  int v41; // r12d
  __m128 si128; // xmm0
  __int64 v43; // rax
  char *v44; // rsi
  __int64 v45; // rdx
  char *v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __m128 v52; // xmm4
  __m128 v53; // xmm5
  __int64 v54; // rdx
  __int64 v55; // r15
  __int64 v56; // rbx
  __int64 *v57; // rax
  __int64 v58; // rdi
  unsigned __int64 i; // rbx
  __int64 v60; // rdi
  size_t v62; // rax
  __int64 v63; // r13
  __int64 v64; // r14
  __int64 v65; // r15
  char v66; // r13
  int v67; // r14d
  size_t v68; // r12
  size_t v69; // r14
  char *v70; // r14
  __int64 v71; // r15
  int v72; // eax
  __int64 v73; // rax
  unsigned __int64 v74; // r9
  __int64 v75; // r15
  __int64 v76; // rax
  unsigned __int64 v77; // r15
  __int64 v78; // r13
  __int64 v79; // r15
  __int64 v80; // rax
  unsigned __int64 v81; // r15
  const char *v82; // rcx
  const char *v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  int v87; // r14d
  int v88; // eax
  char *v89; // r14
  char v90; // [rsp+0h] [rbp-A1F0h]
  __int64 v91; // [rsp+8h] [rbp-A1E8h]
  size_t n; // [rsp+10h] [rbp-A1E0h]
  size_t na; // [rsp+10h] [rbp-A1E0h]
  __int64 *v94; // [rsp+18h] [rbp-A1D8h]
  char *srcb; // [rsp+20h] [rbp-A1D0h]
  char *src; // [rsp+20h] [rbp-A1D0h]
  const void *srca; // [rsp+20h] [rbp-A1D0h]
  _BYTE *srcc; // [rsp+20h] [rbp-A1D0h]
  bool v99; // [rsp+2Fh] [rbp-A1C1h]
  __int64 v100; // [rsp+30h] [rbp-A1C0h] BYREF
  __int64 *v101; // [rsp+38h] [rbp-A1B8h]
  __int64 v102; // [rsp+40h] [rbp-A1B0h] BYREF
  __int128 v103; // [rsp+48h] [rbp-A1A8h]
  __int64 v104; // [rsp+60h] [rbp-A190h] BYREF
  __int128 v105; // [rsp+68h] [rbp-A188h]
  const char *v106; // [rsp+80h] [rbp-A170h] BYREF
  __int128 v107; // [rsp+88h] [rbp-A168h]
  char *v108; // [rsp+A0h] [rbp-A150h] BYREF
  __int128 v109; // [rsp+A8h] [rbp-A148h]
  char *v110; // [rsp+C0h] [rbp-A130h] BYREF
  __int128 v111; // [rsp+C8h] [rbp-A128h]
  void *v112; // [rsp+E0h] [rbp-A110h] BYREF
  __int128 v113; // [rsp+E8h] [rbp-A108h]
  void *dest; // [rsp+100h] [rbp-A0F0h] BYREF
  __int128 v115; // [rsp+108h] [rbp-A0E8h]
  char *nptr; // [rsp+120h] [rbp-A0D0h] BYREF
  __int128 v117; // [rsp+128h] [rbp-A0C8h]
  const char *v118; // [rsp+140h] [rbp-A0B0h] BYREF
  _BYTE v119[88]; // [rsp+148h] [rbp-A0A8h] BYREF
  unsigned __int64 v120; // [rsp+1A0h] [rbp-A050h]
  char s[40968]; // [rsp+1B0h] [rbp-A040h] BYREF
  unsigned __int64 v122; // [rsp+A1B8h] [rbp-38h]

  v122 = __readfsqword(0x28u);
  v15 = time(nullptr);
  reg_int_op("LastUpdateCheck", 1, v15, 0);
  license_manager = get_license_manager();
  v17 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)license_manager + 88LL))(license_manager, 0, 0);
  if ( v17 )
  {
    v24 = (unsigned __int8 *)v17;
    v102 = 0;
    v103 = 0;
    v102 = qvector_reserve(&v102, 0, 1, 8);
    *(_QWORD *)(v102 + 8 * v103) = 0;
    v104 = 0;
    *(_QWORD *)&v103 = v103 + 1;
    v105 = 0;
    if ( (unsigned __int8)get_mac_addresses(&v104, 0) )
    {
      v25 = &s1;
      if ( *(_QWORD *)(v104 + 8) )
        v25 = *(const char **)v104;
      sub_16BD50(&v102, (__int64)"mac", (__int64)v25);
    }
    v106 = nullptr;
    v107 = 0;
    if ( (unsigned __int8)qgethostname(&v106) )
    {
      v26 = &s1;
      if ( (_QWORD)v107 )
        v26 = v106;
      sub_16BD50(&v102, (__int64)"host", (__int64)v26);
    }
    v27 = sub_16C010();
    v28 = &s1;
    if ( v27[1] )
      v28 = (const char *)*v27;
    sub_16BD50(&v102, (__int64)"version", (__int64)v28);
    v118 = nullptr;
    *(_OWORD *)v119 = 0;
    sub_169A50((__int64 *)&v118, (__int64)"%02X-%02X%02X-%02X%02X-%02X", *v24, v24[1], v24[2], v24[3], v24[4], v24[5]);
    v29 = &s1;
    if ( *(_QWORD *)v119 )
      v29 = v118;
    sub_16BD50(&v102, (__int64)"lic", (__int64)v29);
    if ( v118 )
    {
      *(_QWORD *)v119 = 0;
      qfree(v118, "lic", v30, v31, v32);
    }
    sub_16BD50(&v102, (__int64)"vercheck", (__int64)"1");
    if ( a1 )
      sub_16BD50(&v102, (__int64)"auto", (__int64)"1");
    memset(&v119[8], 0, 0x50u);
    v118 = (const char *)&qword_68;
    *(_QWORD *)v119 = 0xFFFF00000041LL;
    *(_QWORD *)&v119[64] = "ida_930";
    v120 = 40960;
    *(_QWORD *)&v119[32] = v102;
    *(__m128i *)&v119[8] = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_85BE48),
                             (__m128i)(unsigned __int64)"/cgi-bin/oracle_9.cgi");
    v33 = sub_16C010();
    v34 = strrchr((const char *)*v33, 46);
    *(_QWORD *)&v119[80] = s;
    v38 = v34 + 1;
    v39 = v34 == nullptr;
    v40 = "none";
    if ( !v39 )
      v40 = v38;
    *(_QWORD *)&v119[72] = v40;
    if ( a1 )
    {
      v41 = http_request(&v118);
      v99 = v41 != 0;
    }
    else
    {
      sub_1C76F0((unsigned int)"Connecting to the server...", 46, (_DWORD)v38, v35, v36, v37);
      v41 = http_request(&v118);
      v99 = v41 != 0;
      sub_1C78D0();
    }
    v108 = nullptr;
    si128 = 0;
    v110 = nullptr;
    v109 = 0;
    v111 = 0;
    if ( v41 )
    {
      v43 = v120;
      v44 = s;
      v100 = 0;
      v101 = nullptr;
      if ( v120 > 0x9FFF )
        v43 = 40959;
      s[v43] = 0;
      if ( !(unsigned int)parse_json_string(&v100, s, 0, 0) && (_DWORD)v100 == 3 )
      {
        si128 = 0;
        v112 = nullptr;
        v113 = 0;
        v115 = 0;
        v63 = v101[1];
        v94 = v101;
        dest = nullptr;
        if ( v63 )
        {
          v64 = *v101;
          v65 = 0;
          while ( 1 )
          {
            if ( *(_QWORD *)(v64 + 8) )
            {
              v44 = "is_latest";
              if ( !strcmp(*(const char **)v64, "is_latest") )
                break;
            }
            ++v65;
            v64 += 40;
            if ( v63 == v65 )
              goto LABEL_118;
          }
          if ( *(_DWORD *)(v64 + 24) == 5 )
          {
            v66 = *(_BYTE *)(v64 + 32);
            if ( v66 )
            {
              v67 = 1;
              jvalue_t_clear(&v100);
LABEL_63:
              if ( a1 )
                goto LABEL_30;
              if ( v67 == 1 && v99 )
              {
                sub_16B9E0(
                  (int)"AUTOHIDE NONE\nYour current IDA version is up-to-date",
                  (__int64)v44,
                  v48,
                  v49,
                  v50,
                  v51,
                  si128,
                  (__m128)(unsigned __int64)"/cgi-bin/oracle_9.cgi",
                  a4,
                  a5,
                  v52,
                  v53,
                  a8,
                  a9,
                  v90);
                goto LABEL_30;
              }
LABEL_71:
              if ( (_QWORD)v111 )
              {
                v44 = v110;
                goto LABEL_52;
              }
LABEL_51:
              v44 = (char *)&s1;
LABEL_52:
              sub_169630(
                (int)"AUTOHIDE NONE\n%s",
                (__int64)v44,
                v48,
                v49,
                v50,
                v51,
                si128,
                (__m128)(unsigned __int64)"/cgi-bin/oracle_9.cgi",
                a4,
                a5,
                v52,
                v53,
                a8,
                a9,
                v90);
LABEL_30:
              if ( v110 )
              {
                *(_QWORD *)&v111 = 0;
                qfree(v110, v44, v48, v49, v50);
              }
              if ( v108 )
              {
                *(_QWORD *)&v109 = 0;
                qfree(v108, v44, v48, v49, v50);
              }
              if ( v106 )
              {
                *(_QWORD *)&v107 = 0;
                qfree(v106, v44, v48, v49, v50);
              }
              v54 = v104;
              if ( v104 )
              {
                v55 = v105;
                if ( (_QWORD)v105 )
                {
                  v56 = 0;
                  do
                  {
                    v57 = (__int64 *)(v54 + 24 * v56);
                    v58 = *v57;
                    if ( *v57 )
                    {
                      v57[1] = 0;
                      qfree(v58, v44, v54, v49, v50);
                      v54 = v104;
                    }
                    ++v56;
                  }
                  while ( v55 != v56 );
                }
                *(_QWORD *)&v105 = 0;
                qfree(v54, v44, v54, v49, v50);
              }
              for ( i = 0; i < (unsigned __int64)v103; ++i )
              {
                v60 = *(_QWORD *)(v102 + 8 * i);
                qfree(v60, v44, v54, v49, v50);
              }
              if ( v102 )
              {
                *(_QWORD *)&v103 = 0;
                qfree(v102, v44, v54, v49, v50);
              }
              return v122 - __readfsqword(0x28u);
            }
            si128 = 0;
            nptr = nullptr;
            v117 = 0;
            v70 = (char *)v94[1];
            n = (size_t)v70;
            if ( v70 )
            {
              v46 = nullptr;
              v91 = *v94;
              v71 = *v94;
              while ( 1 )
              {
                if ( *(_QWORD *)(v71 + 8) )
                {
                  v44 = "nreq";
                  srcb = v46;
                  v72 = strcmp(*(const char **)v71, "nreq");
                  v46 = srcb;
                  if ( !v72 )
                    break;
                }
                ++v46;
                v71 += 40;
                if ( v70 == v46 )
                  goto LABEL_134;
              }
              if ( *(_DWORD *)(v71 + 24) == 2 )
              {
                v73 = *(_QWORD *)(v71 + 32);
                if ( (char **)v73 != &nptr )
                {
                  v74 = *(_QWORD *)(v73 + 8);
                  if ( v74 > 1 )
                  {
                    na = v74 - 1;
                    srcc = *(_BYTE **)(v73 + 8);
                    v44 = *(char **)v73;
                    nptr = (char *)qvector_reserve(&nptr, 0, srcc, 1);
                    *(_QWORD *)&v117 = srcc;
                    memmove(nptr, v44, na);
                    srcc[(_QWORD)nptr - 1] = 0;
                    if ( (unsigned __int64)v117 > 1 )
                    {
                      v87 = strtol(nptr, nullptr, 10);
                      if ( v87 <= 0 )
                      {
                        v44 = (_BYTE *)(&dword_0 + 1);
                        reg_int_op("AutoCheckUpdates", 1, 0, 0);
                      }
                      else
                      {
                        v88 = time(nullptr);
                        v44 = (_BYTE *)(&dword_0 + 1);
                        reg_int_op("LastUpdateCheck", 1, (unsigned int)(v87 + v88), 0);
                      }
                      v67 = 1;
                      goto LABEL_103;
                    }
                    v70 = (char *)v94[1];
LABEL_134:
                    n = (size_t)v70;
                    if ( !v70 )
                      goto LABEL_114;
                    v91 = *v94;
                  }
                }
              }
              v75 = v91;
              src = nullptr;
              while ( 1 )
              {
                if ( *(_QWORD *)(v75 + 8) )
                {
                  v44 = "latest_version";
                  if ( !strcmp(*(const char **)v75, "latest_version") )
                    break;
                }
                ++src;
                v75 += 40;
                if ( src == v70 )
                  goto LABEL_114;
              }
              if ( *(_DWORD *)(v75 + 24) != 2 )
                goto LABEL_114;
              v76 = *(_QWORD *)(v75 + 32);
              if ( (void **)v76 != &v112 )
              {
                v77 = *(_QWORD *)(v76 + 8);
                if ( v77 > 1 )
                {
                  v89 = *(char **)v76;
                  if ( *((_QWORD *)&v113 + 1) < v77 )
                    v112 = (void *)qvector_reserve(&v112, v112, *(_QWORD *)(v76 + 8), 1);
                  v44 = v89;
                  *(_QWORD *)&v113 = v77;
                  memmove(v112, v89, v77 - 1);
                  *((char *)v112 + v77 - 1) = 0;
                  n = v94[1];
                }
                else
                {
                  *(_QWORD *)&v113 = 0;
                  n = v94[1];
                }
                if ( !n )
                  goto LABEL_114;
                v91 = *v94;
              }
              v78 = v91;
              v79 = 0;
              while ( 1 )
              {
                if ( *(_QWORD *)(v78 + 8) )
                {
                  v44 = "latest_url";
                  if ( !strcmp(*(const char **)v78, "latest_url") )
                    break;
                }
                ++v79;
                v78 += 40;
                if ( v79 == n )
                  goto LABEL_114;
              }
              v67 = *(_DWORD *)(v78 + 24);
              if ( v67 == 2 )
              {
                v80 = *(_QWORD *)(v78 + 32);
                if ( (void **)v80 != &dest )
                {
                  v81 = *(_QWORD *)(v80 + 8);
                  if ( v81 <= 1 )
                  {
                    *(_QWORD *)&v115 = 0;
                    goto LABEL_99;
                  }
                  srca = *(const void **)v80;
                  if ( *((_QWORD *)&v115 + 1) < v81 )
                    dest = (void *)qvector_reserve(&dest, dest, v81, 1);
                  *(_QWORD *)&v115 = v81;
                  memmove(dest, srca, v81 - 1);
                  *((char *)dest + v81 - 1) = 0;
                }
                if ( (_QWORD)v115 )
                {
                  v82 = (const char *)dest;
                  goto LABEL_100;
                }
LABEL_99:
                v82 = &s1;
LABEL_100:
                v83 = &s1;
                if ( (_QWORD)v113 )
                  v83 = (const char *)v112;
                v44 = "A new version (%s) is available.<br><br>Please visit: <a href=\"%s\">%s</a>";
                sub_169A50(
                  (__int64 *)&v108,
                  (__int64)"A new version (%s) is available.<br><br>Please visit: <a href=\"%s\">%s</a>",
                  v83,
                  v82,
                  v82);
                v66 = v99;
LABEL_103:
                if ( nptr )
                {
                  *(_QWORD *)&v117 = 0;
                  qfree(nptr, v44, v84, v85, v86);
                }
                if ( dest )
                {
                  *(_QWORD *)&v115 = 0;
                  qfree(dest, v44, v84, v85, v86);
                }
                if ( v112 )
                {
                  *(_QWORD *)&v113 = 0;
                  qfree(v112, v44, v84, v85, v86);
                }
                jvalue_t_clear(&v100);
                if ( v66 )
                {
                  v44 = (char *)&s1;
                  if ( (_QWORD)v109 )
                    v44 = v108;
                  sub_16B9E0(
                    (int)"AUTOHIDE NONE\nRICHTEXT\n%s",
                    (__int64)v44,
                    v48,
                    v49,
                    v50,
                    v51,
                    (__m128)0LL,
                    (__m128)(unsigned __int64)"/cgi-bin/oracle_9.cgi",
                    a4,
                    a5,
                    v52,
                    v53,
                    a8,
                    a9,
                    v90);
                  goto LABEL_30;
                }
                goto LABEL_63;
              }
LABEL_114:
              if ( nptr )
              {
                *(_QWORD *)&v117 = 0;
                qfree(nptr, v44, v45, v46, v47);
              }
            }
            if ( dest )
            {
              *(_QWORD *)&v115 = 0;
              qfree(dest, v44, v45, v46, v47);
            }
LABEL_118:
            if ( v112 )
            {
              *(_QWORD *)&v113 = 0;
              qfree(v112, v44, v45, v46, v47);
            }
          }
        }
      }
      v44 = v110;
      if ( *((_QWORD *)&v111 + 1) <= 0x17u )
      {
        v110 = (char *)qvector_reserve(&v110, v110, 24, 1);
        v44 = v110;
      }
      si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC230);
      *(_QWORD *)&v111 = 24;
      *(__m128 *)v44 = si128;
      *(_QWORD *)(v44 + 15) = 0x74616D726F662065LL;
      v110[23] = 0;
      jvalue_t_clear(&v100);
      if ( a1 )
        goto LABEL_30;
      goto LABEL_71;
    }
    v62 = strlen(s);
    if ( v62 )
    {
      v68 = v62 + 1;
      v69 = v62;
      v110 = (char *)qvector_reserve(&v110, 0, v62 + 1, 1);
      *(_QWORD *)&v111 = v68;
      memmove(v110, s, v69);
      v110[v69] = 0;
      if ( !a1 )
        goto LABEL_71;
      if ( (_QWORD)v111 )
      {
        v44 = v110;
        goto LABEL_70;
      }
    }
    else if ( !a1 )
    {
      goto LABEL_51;
    }
    v44 = (char *)&s1;
LABEL_70:
    sub_169700(
      (int)"Auto-check for update failed: %s. (Auto-check for updates can be turned off in 'Help > Check for free update')\n",
      (__int64)v44,
      v48,
      v49,
      v50,
      v51,
      (__m128)0LL,
      (__m128)(unsigned __int64)"/cgi-bin/oracle_9.cgi",
      a4,
      a5,
      v52,
      v53,
      a8,
      a9,
      v90);
    goto LABEL_30;
  }
  if ( a1 )
    return v122 - __readfsqword(0x28u);
  return sub_169630(
           (int)"IDA is currently not using any license.\nPlease select a license file (or server) and try again!",
           0,
           v18,
           v19,
           v20,
           v21,
           a2,
           a3,
           a4,
           a5,
           v22,
           v23,
           a8,
           a9,
           a15);
}

unsigned __int64 __fastcall sub_16EC10(
        unsigned int a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  _QWORD *license_manager; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool v13; // zf
  const char *v14; // r14
  size_t v15; // r15
  const char *v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned __int64 v20; // r13
  size_t v21; // r14
  const char *v22; // r15
  void *v23; // rdi
  const char *v24; // r13
  int v25; // eax
  __int64 v26; // rax
  __m128i si128; // xmm0
  __m128 v28; // xmm0
  const char *v29; // rcx
  const char *v30; // rdx
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  const char *v34; // rdi
  unsigned __int64 *v35; // rsi
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  unsigned __int64 v39; // r9
  __m128 v40; // xmm4
  __m128 v41; // xmm5
  char *v43; // rax
  char *v44; // rax
  __int64 v45; // rcx
  unsigned __int64 *v46; // rdi
  _BYTE *v47; // rax
  __int64 v48; // r12
  const char *v49; // rsi
  const char *v50; // r12
  unsigned __int16 v51; // r15
  char v52; // r13
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __m128 v57; // xmm4
  __m128 v58; // xmm5
  const char *v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __m128 v64; // xmm4
  __m128 v65; // xmm5
  unsigned int v66; // eax
  int v67; // r14d
  int v68; // eax
  int v69; // esi
  unsigned int v70; // esi
  __int64 v71; // rsi
  __int64 v72; // rsi
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // r9
  __m128 v77; // xmm4
  __m128 v78; // xmm5
  const char *v79; // r15
  const char *v80; // r14
  __int64 path; // rbx
  const char *v82; // r12
  void **v83; // rax
  char *v84; // rax
  const char *v85; // rdx
  const char *v86; // rax
  const char *v87; // r13
  void *v88; // rdi
  unsigned __int64 v89; // rdi
  void *v90; // r15
  void *v91; // rdi
  __int64 v92; // r14
  void *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rdx
  __int64 v96; // rcx
  struct _Unwind_Exception *v97; // rbx
  __int64 v98; // r8
  char v99; // [rsp+0h] [rbp-1130h]
  char v100; // [rsp+0h] [rbp-1130h]
  char v101; // [rsp+0h] [rbp-1130h]
  char v102; // [rsp+0h] [rbp-1130h]
  __int64 v103; // [rsp+8h] [rbp-1128h]
  __int64 v104; // [rsp+8h] [rbp-1128h]
  __int64 v105; // [rsp+8h] [rbp-1128h]
  __int64 v106; // [rsp+8h] [rbp-1128h]
  char *s; // [rsp+10h] [rbp-1120h]
  unsigned int sa; // [rsp+10h] [rbp-1120h]
  char *sd; // [rsp+10h] [rbp-1120h]
  char *sc; // [rsp+10h] [rbp-1120h]
  char *sb; // [rsp+10h] [rbp-1120h]
  char *se; // [rsp+10h] [rbp-1120h]
  unsigned __int8 *v113; // [rsp+18h] [rbp-1118h]
  _BYTE *v114; // [rsp+20h] [rbp-1110h]
  const char *v115; // [rsp+28h] [rbp-1108h]
  __int16 v116; // [rsp+3Eh] [rbp-10F2h] BYREF
  void *dest; // [rsp+40h] [rbp-10F0h] BYREF
  __int128 v118; // [rsp+48h] [rbp-10E8h]
  unsigned __int64 v119; // [rsp+60h] [rbp-10D0h] BYREF
  __int128 v120; // [rsp+68h] [rbp-10C8h]
  __int64 v121; // [rsp+80h] [rbp-10B0h] BYREF
  __int128 v122; // [rsp+88h] [rbp-10A8h]
  unsigned __int64 *v123; // [rsp+A0h] [rbp-1090h] BYREF
  __int128 v124; // [rsp+A8h] [rbp-1088h]
  void *src; // [rsp+C0h] [rbp-1070h] BYREF
  _BYTE v126[24]; // [rsp+C8h] [rbp-1068h] BYREF
  int v127; // [rsp+E0h] [rbp-1050h]
  _BYTE v128[4104]; // [rsp+F0h] [rbp-1040h] BYREF
  unsigned __int64 v129; // [rsp+10F8h] [rbp-38h]

  v129 = __readfsqword(0x28u);
  license_manager = (_QWORD *)get_license_manager();
  v113 = (unsigned __int8 *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*license_manager + 88LL))(
                              license_manager,
                              0,
                              0);
  if ( !v113 )
  {
    if ( a1 != -1 )
    {
      v97 = (struct _Unwind_Exception *)interr(a1, 0, v11, v12, a2);
      if ( src )
      {
        *(_QWORD *)v126 = 0;
        qfree(src, 0, v95, v96, v98);
      }
      if ( dest )
      {
        *(_QWORD *)&v118 = 0;
        qfree(dest, 0, v95, v96, v98);
      }
      _Unwind_Resume(v97);
    }
    return v129 - __readfsqword(0x28u);
  }
  v13 = license_manager[23] == 0;
  dest = nullptr;
  v14 = &s1;
  v118 = 0;
  if ( !v13 )
    v14 = (const char *)license_manager[22];
  src = nullptr;
  *(_OWORD *)v126 = 0;
  if ( v14 )
  {
    v15 = strlen(v14);
    v16 = v14;
    src = (void *)qvector_reserve(&src, 0, v15 + 1, 1);
    *(_QWORD *)v126 = v15 + 1;
    memmove(src, v14, v15);
    *((_BYTE *)src + v15) = 0;
    v20 = xmmword_8C90F8;
    v21 = xmmword_8C90F8 - 1;
    if ( (unsigned __int64)xmmword_8C90F8 <= 1 )
    {
      v92 = *(_QWORD *)v126;
      v24 = (const char *)src;
      if ( *(_QWORD *)v126 > 1u )
      {
        v93 = qword_8C90F0;
        if ( *((_QWORD *)&xmmword_8C90F8 + 1) < *(_QWORD *)v126 )
        {
          qword_8C90F0 = (void *)qvector_reserve(&qword_8C90F0, qword_8C90F0, *(_QWORD *)v126, 1);
          v93 = qword_8C90F0;
        }
        v16 = v24;
        *(_QWORD *)&xmmword_8C90F8 = v92;
        memmove(v93, v24, v92 - 1);
        *((char *)qword_8C90F0 + v92 - 1) = 0;
        v20 = xmmword_8C90F8;
        if ( (_QWORD)xmmword_8C90F8 )
        {
          v21 = xmmword_8C90F8 - 1;
          if ( (_QWORD)xmmword_8C90F8 != 1 )
            goto LABEL_6;
        }
        v24 = (const char *)src;
      }
      else
      {
        *(_QWORD *)&xmmword_8C90F8 = 0;
      }
      *(_QWORD *)&v118 = 0;
LABEL_9:
      if ( v24 )
      {
        *(_QWORD *)v126 = 0;
        qfree(v24, v16, v17, v18, v19);
      }
      goto LABEL_13;
    }
LABEL_6:
    v22 = (const char *)qword_8C90F0;
    v23 = dest;
    if ( *((_QWORD *)&v118 + 1) < v20 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v20, 1);
      v23 = dest;
    }
    v16 = v22;
    *(_QWORD *)&v118 = v20;
    memmove(v23, v22, v21);
    *((_BYTE *)dest + v21) = 0;
    v24 = (const char *)src;
    goto LABEL_9;
  }
  v20 = xmmword_8C90F8;
  v21 = xmmword_8C90F8 - 1;
  if ( (unsigned __int64)xmmword_8C90F8 > 1 )
    goto LABEL_6;
  *(_QWORD *)&xmmword_8C90F8 = 0;
  *(_QWORD *)&v118 = 0;
LABEL_13:
  v25 = reg_int_op("SendInBackground", 0, 1, 0);
  src = &qword_28;
  memset(v126, 0, sizeof(v126));
  v116 = 2 * (v25 != 0);
  v127 = 35;
  v26 = qvector_reserve(v126, 0, 146, 1);
  *(_QWORD *)v126 = v26;
  *(_QWORD *)&v126[8] = 146;
  *(__m128i *)v26 = _mm_load_si128((const __m128i *)&xmmword_5DC240);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC250);
  *(_BYTE *)(v26 + 144) = 10;
  *(__m128i *)(v26 + 16) = si128;
  v119 = 0;
  *(__m128i *)(v26 + 32) = _mm_load_si128((const __m128i *)&xmmword_5DC260);
  *(__m128i *)(v26 + 48) = _mm_load_si128((const __m128i *)&xmmword_5DC270);
  *(__m128i *)(v26 + 64) = _mm_load_si128((const __m128i *)&xmmword_5DC280);
  *(__m128i *)(v26 + 80) = _mm_load_si128((const __m128i *)&xmmword_5DC290);
  *(__m128i *)(v26 + 96) = _mm_load_si128((const __m128i *)&xmmword_5DC2A0);
  *(__m128i *)(v26 + 112) = _mm_load_si128((const __m128i *)&xmmword_5DC2B0);
  *(__m128i *)(v26 + 128) = _mm_load_si128((const __m128i *)&xmmword_5DC2C0);
  v28 = 0;
  v120 = 0;
  *(_BYTE *)(*(_QWORD *)v126 + 145LL) = 0;
  if ( a1 == -1 )
  {
    v122 = 0;
    v29 = "You can use this form to send a bug report or an enhancement request to Hex-Rays.\n";
    v30 = "Report a bug/issue";
    v121 = 0;
  }
  else
  {
    sub_169A50((__int64 *)&v119, (__int64)"Internal error %d", a1);
    v121 = 0;
    v28 = 0;
    v29 = "IDA has encountered an internal error. To help us fix the bug quicker, we'd like you to report it.\n";
    v30 = "INTERNAL ERROR";
    v122 = 0;
  }
  sub_169A50(
    &v121,
    (__int64)"%s\n"
             "\n"
             "%sPlease provide as many details as you can.\n"
             "You can also attach the database you were working on, it will help us reproduce the problem.\n"
             "The database will be compressed and uploaded to our secure server.\n"
             "\n"
             "<~O~ne-line description:q:100:50::>\n"
             "<~D~etails\\:          :t::74:::>\n"
             "<Contact ~e~mail:q:64:20::>\n"
             "<~S~end database:c> <in ~b~ackground:c>>\n"
             "\n"
             "NOTE: your license ID and version information will be sent to the server.\n"
             "The IDA database can include personally identifiable information.\n"
             "A secure (SSL) connection will be used for transferring the file.\n"
             "We treat all received databases as confidential.\n",
    v30,
    v29);
  while ( 1 )
  {
    while ( 1 )
    {
      v34 = &s1;
      if ( (_QWORD)v122 )
        LODWORD(v34) = v121;
      v35 = &v119;
      if ( (int)sub_1697D0(
                  (int)v34,
                  (__int64)&v119,
                  (__int64)&src,
                  (__int64)&dest,
                  (__int64)&v116,
                  v31,
                  v28,
                  a3,
                  a4,
                  a5,
                  v32,
                  v33,
                  a8,
                  a9,
                  v99) <= 0 )
      {
        if ( v121 )
        {
          *(_QWORD *)&v122 = 0;
          qfree(v121, &v119, v36, v37, v38);
        }
        if ( v119 )
        {
          *(_QWORD *)&v120 = 0;
          qfree(v119, &v119, v36, v37, v38);
        }
        if ( *(_QWORD *)v126 )
        {
          *(_QWORD *)&v126[8] = 0;
          qfree(*(_QWORD *)v126, &v119, v36, v37, v38);
        }
        v88 = dest;
        if ( dest )
          goto LABEL_87;
        return v129 - __readfsqword(0x28u);
      }
      if ( (unsigned __int64)v118 <= 1 )
        break;
      if ( dest )
      {
        if ( (*(_BYTE *)dest & 0xBF) != 0 )
        {
          v35 = (_QWORD *)&dword_40;
          v43 = strchr((const char *)dest, 64);
          if ( v43 )
          {
            if ( v43[1] )
            {
              v35 = (_QWORD *)&dword_40;
              s = v43;
              if ( !strchr(v43 + 1, 64) )
              {
                v35 = (unsigned __int64 *)(&qword_28 + 6);
                v44 = strchr(s, 46);
                if ( v44 )
                {
                  if ( v44[1] )
                    break;
                }
              }
            }
          }
        }
      }
      sub_169630(
        (int)"The entered email address is invalid",
        (__int64)v35,
        v36,
        v37,
        v38,
        v39,
        v28,
        a3,
        a4,
        a5,
        v40,
        v41,
        a8,
        a9,
        v100);
    }
    v45 = v120;
    if ( (unsigned __int64)v120 > 1 )
      break;
LABEL_31:
    sub_169630(
      (int)"Please enter a description",
      (__int64)v35,
      v36,
      v45,
      v38,
      v39,
      v28,
      a3,
      a4,
      a5,
      v40,
      v41,
      a8,
      a9,
      v100);
  }
  v46 = (unsigned __int64 *)v119;
  v38 = v120 - 1;
  v36 = v119 + v120 - 1;
  v47 = (_BYTE *)v36;
  if ( v119 < v36 )
  {
    while ( *(v47 - 1) == 32 )
    {
      if ( (_BYTE *)v119 == --v47 )
        goto LABEL_93;
    }
    v38 = (__int64)&v47[-v119];
    if ( v47 != (_BYTE *)v119 )
      goto LABEL_37;
LABEL_93:
    if ( !v119 )
      goto LABEL_43;
    *(_QWORD *)&v120 = 0;
    qfree(v119, v35, v36, v45, v38);
    v119 = 0;
    *((_QWORD *)&v120 + 1) = 0;
  }
  else
  {
LABEL_37:
    v39 = v38 + 1;
    if ( (unsigned __int64)v120 < v38 + 1 )
    {
      if ( *((_QWORD *)&v120 + 1) < v39 )
      {
        v104 = v38;
        sc = (char *)(v38 + 1);
        v119 = qvector_reserve(&v119, v119, v38 + 1, 1);
        v45 = v120;
        v46 = (unsigned __int64 *)v119;
        v38 = v104;
        v39 = (unsigned __int64)sc;
      }
      v35 = nullptr;
      sd = (char *)v39;
      v103 = v38;
      memset((char *)v46 + v45, 0, v39 - v45);
      v39 = (unsigned __int64)sd;
      v47 = (_BYTE *)(v119 + v103);
      *(_QWORD *)&v120 = sd;
    }
    else if ( (_QWORD)v120 != v38 + 1 )
    {
      *(_QWORD *)&v120 = v38 + 1;
    }
    *v47 = 0;
  }
  if ( (unsigned __int64)v120 <= 1 )
    goto LABEL_31;
  v46 = (unsigned __int64 *)v119;
  v36 = v119 + v120 - 1;
  if ( v119 >= v36 )
    goto LABEL_47;
LABEL_43:
  v35 = v46;
  while ( *(_BYTE *)v35 == 32 )
  {
    v35 = (unsigned __int64 *)((char *)v35 + 1);
    if ( v35 == (unsigned __int64 *)v36 )
    {
      *(_BYTE *)v46 = *(_BYTE *)v35;
      v89 = v119;
      goto LABEL_96;
    }
  }
  if ( v46 >= v35 )
    goto LABEL_47;
  v105 = v36 - (_QWORD)v35;
  sb = (char *)(v36 - (_QWORD)v35 + 1);
  memmove(v46, v35, (size_t)sb);
  v38 = v105;
  v35 = (unsigned __int64 *)v119;
  v39 = (unsigned __int64)sb;
  v89 = v119;
  if ( v105 )
  {
    v94 = v120;
    if ( (unsigned __int64)v120 < (unsigned __int64)sb )
    {
      if ( *((_QWORD *)&v120 + 1) < (unsigned __int64)sb )
      {
        v119 = qvector_reserve(&v119, v119, sb, 1);
        v89 = v119;
        v38 = v105;
        v94 = v120;
        v39 = (unsigned __int64)sb;
      }
      v106 = v38;
      se = (char *)v39;
      memset((void *)(v94 + v89), 0, v39 - v94);
      v39 = (unsigned __int64)se;
      v35 = (unsigned __int64 *)v119;
      v38 = v106;
      *(_QWORD *)&v120 = se;
    }
    else if ( sb != (char *)v120 )
    {
      *(_QWORD *)&v120 = sb;
    }
    *((_BYTE *)v35 + v38) = 0;
    goto LABEL_98;
  }
LABEL_96:
  if ( v89 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v89, v35, v36, v45, v38);
    v119 = 0;
    *((_QWORD *)&v120 + 1) = 0;
  }
LABEL_98:
  if ( (unsigned __int64)v120 <= 1 )
    goto LABEL_31;
LABEL_47:
  v48 = v118;
  if ( (_QWORD)v118 )
  {
    if ( (_QWORD)v118 == 1 )
    {
      v13 = license_manager[23] == 0;
      v49 = &s1;
      *(_QWORD *)&xmmword_8C90F8 = 0;
      if ( !v13 )
        v49 = (const char *)license_manager[22];
      goto LABEL_51;
    }
    v90 = dest;
    v91 = qword_8C90F0;
    if ( *((_QWORD *)&xmmword_8C90F8 + 1) < (unsigned __int64)v118 )
    {
      qword_8C90F0 = (void *)qvector_reserve(&qword_8C90F0, qword_8C90F0, v118, 1);
      v91 = qword_8C90F0;
    }
    *(_QWORD *)&xmmword_8C90F8 = v48;
    memmove(v91, v90, v48 - 1);
    v49 = &s1;
    *((char *)qword_8C90F0 + v48 - 1) = 0;
    if ( license_manager[23] )
      v49 = (const char *)license_manager[22];
    v50 = &s1;
    if ( (_QWORD)v118 )
LABEL_51:
      v50 = (const char *)dest;
  }
  else
  {
    v49 = &s1;
    v13 = license_manager[23] == 0;
    *(_QWORD *)&xmmword_8C90F8 = 0;
    v50 = &s1;
    if ( !v13 )
      v49 = (const char *)license_manager[22];
  }
  if ( strcasecmp(v50, v49) )
    reg_str_set("UserEmail", 0, v50);
  v51 = v116 & 2;
  v52 = v116 & 1;
  reg_int_op("SendInBackground", 1, (v51 >> 1) & 1, 0);
  qtmpnam(v128, 4096);
  v59 = &s1;
  if ( (_QWORD)v120 )
    v59 = (const char *)v119;
  sub_169700((int)"Report subject: %s\n", (__int64)v59, v53, v54, v55, v56, v28, a3, a4, a5, v57, v58, a8, a9, v100);
  if ( v52 )
  {
    sub_169700(
      (int)"\n"
           "\n"
           "\n"
           "*****************   CREATING COMPRESSED IDB   *****************\n"
           "*****************  FOR SENDING TO THE SERVER  *****************\n"
           "\n"
           "\n"
           "\n",
      (__int64)v59,
      v60,
      v61,
      v62,
      v63,
      v28,
      a3,
      a4,
      a5,
      v64,
      v65,
      a8,
      a9,
      v101);
    v66 = getinf(3);
    v67 = (v66 >> 9) & 1;
    if ( (v66 & 0x400) != 0 )
      v67 = 2;
    v68 = getinf(3);
    setinf(3, v68 & 0xFFFFF9FF | 0x400);
    save_database(v128, 2, 0, 0);
    getinf(3);
    v69 = getinf(3);
    if ( v67 == 2 )
    {
      v70 = v69 | 0x400;
      goto LABEL_61;
    }
    v70 = v69 & 0xFFFFFBFF;
    if ( v67 == 1 )
      v71 = v70 | 0x200;
    else
LABEL_61:
      v71 = v70 & 0xFFFFFDFF;
    setinf(3, v71);
    v72 = qfilesize(v128);
    sub_169700(
      (int)"\n\nAll ok, sending the database to the server (%lld bytes)...\n",
      v72,
      v73,
      v74,
      v75,
      v76,
      v28,
      a3,
      a4,
      a5,
      v77,
      v78,
      a8,
      a9,
      v102);
    if ( v51 )
    {
      sa = 18;
      goto LABEL_64;
    }
  }
  else
  {
    sub_169700(
      (int)"Sending the report to the server...\n",
      (__int64)v59,
      v60,
      v61,
      v62,
      v63,
      v28,
      a3,
      a4,
      a5,
      v64,
      v65,
      a8,
      a9,
      v101);
  }
  sa = 2;
LABEL_64:
  v79 = &s1;
  if ( *(_QWORD *)&v126[8] )
    v79 = *(const char **)v126;
  v80 = &s1;
  if ( (_QWORD)v120 )
    v80 = (const char *)v119;
  v115 = &s1;
  if ( license_manager[20] )
    v115 = (const char *)license_manager[19];
  v114 = nullptr;
  path = 0;
  if ( v52 )
  {
    v114 = v128;
    path = get_path(1);
  }
  v82 = &s1;
  if ( (_QWORD)xmmword_8C90F8 )
    v82 = (const char *)qword_8C90F0;
  v83 = sub_16C010();
  v84 = strrchr((const char *)*v83, 46);
  v123 = nullptr;
  v85 = v84 + 1;
  v13 = v84 == nullptr;
  v86 = "none";
  v124 = 0;
  if ( !v13 )
    v86 = v85;
  v87 = v86;
  sub_169A50(
    (__int64 *)&v123,
    (__int64)"%02X-%02X%02X-%02X%02X-%02X",
    *v113,
    v113[1],
    v113[2],
    v113[3],
    v113[4],
    v113[5]);
  v35 = (unsigned __int64 *)&s1;
  if ( (_QWORD)v124 )
    v35 = v123;
  upload_idb(sa, v35, "ida_930", v87, v82, v114, path, v115, v80, v79);
  if ( v123 )
  {
    *(_QWORD *)&v124 = 0;
    qfree(v123, v35, v36, v37, v38);
  }
  if ( v121 )
  {
    *(_QWORD *)&v122 = 0;
    qfree(v121, v35, v36, v37, v38);
  }
  if ( v119 )
  {
    *(_QWORD *)&v120 = 0;
    qfree(v119, v35, v36, v37, v38);
  }
  if ( *(_QWORD *)v126 )
  {
    *(_QWORD *)&v126[8] = 0;
    qfree(*(_QWORD *)v126, v35, v36, v37, v38);
  }
  v88 = dest;
  if ( dest )
  {
LABEL_87:
    *(_QWORD *)&v118 = 0;
    qfree(v88, v35, v36, v37, v38);
  }
  return v129 - __readfsqword(0x28u);
}

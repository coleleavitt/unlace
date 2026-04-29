unsigned __int64 __fastcall sub_37D3D0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r13
  unsigned __int8 *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  char *v13; // r13
  unsigned __int64 v14; // r15
  const char *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rdx
  char *v18; // rcx
  char *v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int16 v22; // r12
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  unsigned int v26; // r12d
  __int64 v27; // rax
  const char *v28; // r10
  char *v29; // rax
  char *v30; // rax
  const char *v31; // r14
  __int64 v32; // rax
  char *v33; // rsi
  __int64 v35; // r13
  unsigned __int64 v36; // rdx
  __int64 v37; // r8
  const char *v38; // rsi
  const char *v39; // r15
  char *v40; // rax
  char v41; // dl
  __m128i v42; // xmm0
  char v43; // r15
  char v44; // r15
  char *v45; // rax
  char *v46; // rax
  char *v47; // rdx
  unsigned __int64 v48; // r15
  __int64 v49; // rdi
  size_t v50; // r8
  char *v51; // r9
  void *v52; // rax
  size_t v53; // rax
  size_t v54; // r8
  char *v55; // rdi
  __int64 v56; // rdx
  char *v57; // [rsp+0h] [rbp-10E0h]
  char *v58; // [rsp+8h] [rbp-10D8h]
  __int64 v59; // [rsp+10h] [rbp-10D0h]
  __int16 *v60; // [rsp+18h] [rbp-10C8h]
  __int64 v61; // [rsp+18h] [rbp-10C8h]
  __int64 v62; // [rsp+18h] [rbp-10C8h]
  char *v63; // [rsp+18h] [rbp-10C8h]
  size_t v64; // [rsp+18h] [rbp-10C8h]
  void *srcc; // [rsp+20h] [rbp-10C0h]
  bool src; // [rsp+20h] [rbp-10C0h]
  const char *srca; // [rsp+20h] [rbp-10C0h]
  void *srce; // [rsp+20h] [rbp-10C0h]
  void *srcb; // [rsp+20h] [rbp-10C0h]
  _BYTE *srcg; // [rsp+20h] [rbp-10C0h]
  void *srcd; // [rsp+20h] [rbp-10C0h]
  void *srcf; // [rsp+20h] [rbp-10C0h]
  _BYTE *srci; // [rsp+20h] [rbp-10C0h]
  void *srch; // [rsp+20h] [rbp-10C0h]
  __int64 v75; // [rsp+28h] [rbp-10B8h]
  __int64 v76; // [rsp+28h] [rbp-10B8h]
  __int16 v77; // [rsp+3Eh] [rbp-10A2h] BYREF
  const char *v78; // [rsp+40h] [rbp-10A0h] BYREF
  __int128 v79; // [rsp+48h] [rbp-1098h]
  char *s; // [rsp+60h] [rbp-1080h] BYREF
  __m128i v81; // [rsp+68h] [rbp-1078h] BYREF
  _BYTE v82[32]; // [rsp+80h] [rbp-1060h] BYREF
  _BYTE v83[4104]; // [rsp+A0h] [rbp-1040h] BYREF
  unsigned __int64 v84; // [rsp+10A8h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 96);
  v84 = __readfsqword(0x28u);
  v75 = v4;
  v6 = (unsigned __int8 *)sub_338FF0(v4);
  if ( a3 )
  {
    src = 0;
    goto LABEL_17;
  }
  v79 = 0;
  v78 = nullptr;
  v7 = qvector_reserve(&v78, 0, 23, 1);
  v78 = (const char *)v7;
  *(_QWORD *)&v79 = 23;
  *(__m128i *)v7 = _mm_load_si128((const __m128i *)&xmmword_400340);
  v8 = (__int64)v78;
  *(_QWORD *)(v7 + 14) = 0xA6C65636E614320LL;
  *(_BYTE *)(v8 + 22) = 0;
  if ( *(_QWORD *)(v4 + 936) > 1u )
  {
    sub_F5F10(
      (__int64 *)&v78,
      (__int64)"INTERNAL ERROR\nInternal error %s has occurred and further decompilation is impossible.",
      *(const char **)(v4 + 928));
    v9 = v79;
    if ( (_QWORD)v79 )
      goto LABEL_4;
LABEL_44:
    v12 = (__int64)v78;
    v11 = 387;
    v10 = 386;
    if ( *((_QWORD *)&v79 + 1) >= 0x183u )
      goto LABEL_5;
    goto LABEL_45;
  }
  v35 = v79;
  if ( (_QWORD)v79 )
  {
    v37 = v79 + 12;
    v36 = v79 + 13;
    v35 = v79 - 1;
  }
  else
  {
    v36 = 14;
    v37 = 13;
  }
  if ( *((_QWORD *)&v79 + 1) < v36 )
  {
    v62 = v37;
    srcd = (void *)v36;
    v78 = (const char *)qvector_reserve(&v78, v8, v36, 1);
    v37 = v62;
    v8 = (__int64)v78;
    v36 = (unsigned __int64)srcd;
  }
  *(_QWORD *)&v79 = v36;
  *(_BYTE *)(v8 + v37) = 0;
  qmemcpy((void *)&v78[v35], "SEND DATABASE", 13);
  v9 = v79;
  if ( !(_QWORD)v79 )
    goto LABEL_44;
LABEL_4:
  v10 = v9 + 385;
  v11 = v9 + 386;
  v12 = (__int64)v78;
  --v9;
  if ( *((_QWORD *)&v79 + 1) >= v11 )
    goto LABEL_5;
LABEL_45:
  v61 = v10;
  srce = (void *)v11;
  v78 = (const char *)qvector_reserve(&v78, v12, v11, 1);
  v10 = v61;
  v12 = (__int64)v78;
  v11 = (unsigned __int64)srce;
LABEL_5:
  *(_QWORD *)&v79 = v11;
  *(_BYTE *)(v12 + v10) = 0;
  v13 = (char *)&v78[v9];
  *(_QWORD *)v13 = 0x756F792066490A0ALL;
  *(_QWORD *)(v13 + 378) = 0xA0A0A21756F7920LL;
  qmemcpy(
    (void *)((unsigned __int64)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_3FE310 - &v13[-((unsigned __int64)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
    8LL * (((unsigned int)v13 - (((_DWORD)v13 + 8) & 0xFFFFFFF8) + 386) >> 3));
  v81 = 0;
  s = nullptr;
  v14 = *(_QWORD *)(v75 + 960);
  if ( v14 > 1 )
  {
    if ( &s != (char **)(v75 + 952) )
    {
      srcc = *(void **)(v75 + 952);
      s = (char *)qvector_reserve(&s, 0, *(_QWORD *)(v75 + 960), 1);
      v81.m128i_i64[0] = v14;
      memmove(s, srcc, v14 - 1);
      s[v14 - 1] = 0;
    }
    goto LABEL_8;
  }
  if ( !(unsigned __int8)reg_str_get(&s, "UserEmail", 0, 0.0) || (v48 = v81.m128i_i64[0], v81.m128i_i64[0] <= 1uLL) )
  {
    if ( v6[127] && (v53 = strlen((const char *)v6 + 127), (v54 = v53) != 0) )
    {
      v55 = s;
      v56 = v53 + 1;
      if ( v81.m128i_i64[1] < v53 + 1 )
      {
        v64 = v53;
        srch = (void *)(v53 + 1);
        s = (char *)qvector_reserve(&s, s, v56, 1);
        v54 = v64;
        v55 = s;
        v56 = (__int64)srch;
      }
      v81.m128i_i64[0] = v56;
      srci = (_BYTE *)v54;
      memmove(v55, v6 + 127, v54);
      srci[(_QWORD)s] = 0;
      v49 = v75 + 952;
      if ( (char **)(v75 + 952) == &s )
        goto LABEL_8;
      v48 = v81.m128i_i64[0];
      if ( v81.m128i_i64[0] )
      {
        v50 = v81.m128i_i64[0] - 1;
        if ( v81.m128i_i64[0] != 1 )
          goto LABEL_68;
      }
    }
    else
    {
      v81.m128i_i64[0] = 0;
      if ( &s == (char **)(v75 + 952) )
        goto LABEL_8;
    }
    *(_QWORD *)(v75 + 960) = 0;
    goto LABEL_8;
  }
  v49 = v75 + 952;
  if ( (char **)(v75 + 952) != &s )
  {
    v50 = v81.m128i_i64[0] - 1;
LABEL_68:
    v51 = s;
    v52 = *(void **)(v75 + 952);
    if ( *(_QWORD *)(v75 + 968) < v48 )
    {
      v63 = s;
      srcf = (void *)v50;
      v52 = (void *)qvector_reserve(v49, *(_QWORD *)(v75 + 952), v48, 1);
      v51 = v63;
      v50 = (size_t)srcf;
      *(_QWORD *)(v75 + 952) = v52;
    }
    srcg = (_BYTE *)v50;
    *(_QWORD *)(v75 + 960) = v48;
    memmove(v52, v51, v50);
    srcg[*(_QWORD *)(v75 + 952)] = 0;
  }
LABEL_8:
  src = (unsigned int)reg_int_op("SendInBackground", 0, 1, 0) != 0;
  v77 = (2 * src) | ((unsigned int)reg_int_op("SendIdb", 0, 1, 0) != 0);
  v60 = &v77;
  while ( 1 )
  {
    v15 = s1;
    if ( (_QWORD)v79 )
      v15 = v78;
    if ( (int)sub_336E80((__int64)v15, &s, sub_37CAA0, &v77, 0.0) <= 0 )
    {
      v44 = 0;
      goto LABEL_50;
    }
    v16 = v81.m128i_i64[0];
    if ( v81.m128i_i64[0] <= 1uLL )
      break;
    v59 = v81.m128i_i64[0];
    if ( s )
    {
      if ( (*s & 0xBF) != 0 )
      {
        v58 = s;
        v45 = strchr(s, 64);
        if ( v45 )
        {
          if ( v45[1] )
          {
            v57 = v45;
            if ( !strchr(v45 + 1, 64) )
            {
              v46 = strchr(v57, 46);
              if ( v46 )
              {
                v47 = v58;
                v16 = v59;
                if ( v46[1] )
                {
                  v38 = (const char *)(v6 + 127);
                  goto LABEL_63;
                }
              }
            }
          }
        }
      }
    }
    sub_2AFAB0((__int64)"The enter email address is invalid");
  }
  v38 = (const char *)(v6 + 127);
  v39 = s1;
  if ( !v81.m128i_i64[0] )
    goto LABEL_47;
  v47 = s;
  v16 = 1;
LABEL_63:
  v39 = v47;
LABEL_47:
  srcb = (void *)v16;
  if ( strcasecmp(v39, v38) )
    reg_str_set("UserEmail", 0, v39, srcb);
  v40 = *(char **)(v75 + 952);
  *(_QWORD *)(v75 + 952) = s;
  v41 = v77;
  v42 = _mm_loadu_si128((const __m128i *)(v75 + 960));
  v43 = v77;
  *(__m128 *)(v75 + 960) = _mm_loadh_ps((const double *)&v81.m128i_i64[1]);
  v44 = v43 & 1;
  s = v40;
  v81 = v42;
  src = (v41 & 2) != 0;
  reg_int_op("SendIdb", 1, v41 & 1, 0);
  reg_int_op("SendInBackground", 1, src, 0);
LABEL_50:
  if ( s )
  {
    v81.m128i_i64[0] = 0;
    qfree(s);
  }
  if ( v78 )
  {
    *(_QWORD *)&v79 = 0;
    qfree(v78);
  }
  if ( v44 )
  {
LABEL_17:
    qtmpnam(v83, 4096);
    if ( *(_DWORD *)a2 )
      sub_68620((__int64)"\n"
                         "\n"
                         "\n"
                         "***************** INTERNAL ERROR HAS OCCURRED *****************\n"
                         "*****************                             *****************\n");
    sub_68620((__int64)"*****************   CREATING COMPRESSED IDB   *****************\n"
                       "*****************  FOR SENDING TO THE SERVER  *****************\n"
                       "\n"
                       "\n"
                       "\n");
    sub_32B550((__int64)&s, a2, v17);
    v18 = (char *)s1;
    if ( v81.m128i_i64[0] )
      v18 = s;
    sub_37CF20(0, *(_QWORD *)(a2 + 8), (__int64)&unk_3F60D3, v18);
    if ( s )
    {
      v81.m128i_i64[0] = 0;
      qfree(s);
    }
    s = (char *)-1LL;
    netnode_check(&s, "$ vd interr", 0, 1);
    v19 = sub_337EB0();
    netnode_supset(s, 0, v19, 0, 83);
    netnode_supset(s, 1, v6, 230, 83);
    callui(52, v82, 32, &callui, v20, v21, v57, v58, v59, v60);
    netnode_supset(s, 2, v82, 0, 83);
    v22 = getinf(3);
    if ( (v22 & 0x400) != 0 )
    {
      v25 = getinf(3);
      setinf(3, v25 & 0xFFFFF9FF | 0x400);
      save_database(v83, 0, 0, 0);
      getinf(3);
      v24 = getinf(3);
      BYTE1(v24) |= 4u;
    }
    else
    {
      v23 = getinf(3);
      setinf(3, v23 & 0xFFFFF9FF | 0x400);
      save_database(v83, 0, 0, 0);
      getinf(3);
      v24 = getinf(3);
      BYTE1(v24) &= ~4u;
      if ( (v22 & 0x200) != 0 )
      {
        BYTE1(v24) |= 2u;
LABEL_28:
        v26 = 1;
        setinf(3, v24);
        v27 = qfilesize(v83);
        sub_68620((__int64)"\n\nAll ok, sending the database to the server (%llu bytes)...\n", v27);
        if ( !a3 )
          v26 = 16 * (src & (batch ^ 1));
        v28 = s1;
        if ( *(_QWORD *)(v75 + 960) )
          v28 = *(const char **)(v75 + 952);
        srca = v28;
        v29 = sub_337EB0();
        v30 = strrchr(v29, 46);
        v31 = v30 + 1;
        if ( !v30 )
          v31 = "none";
        v32 = *(_QWORD *)(*(_QWORD *)(v75 + 112) + 24LL);
        v81 = 0;
        s = nullptr;
        v76 = v32;
        sub_66DF0((__int64 *)&s, (__int64)"%02X-%02X%02X-%02X%02X-%02X", v6[28], v6[29], v6[30], v6[31], v6[32], v6[33]);
        v33 = (char *)s1;
        if ( v81.m128i_i64[0] )
          v33 = s;
        upload_idb(v26, v33, v76, v31, srca, v83, 0.0, 0, 0, 0, 0);
        if ( s )
        {
          v81.m128i_i64[0] = 0;
          qfree(s);
        }
        return v84 - __readfsqword(0x28u);
      }
    }
    BYTE1(v24) &= ~2u;
    goto LABEL_28;
  }
  return v84 - __readfsqword(0x28u);
}

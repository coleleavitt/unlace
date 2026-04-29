unsigned __int64 __fastcall sub_383450(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // r13
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rsi
  char *v13; // r13
  unsigned __int64 v14; // r15
  const char *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  char *v20; // rax
  __int64 v22; // r13
  unsigned __int64 v23; // rdx
  __int64 v24; // r8
  const char *v25; // rsi
  const char *v26; // r15
  char *v27; // rax
  __m128i v28; // xmm0
  char v29; // r15
  char v30; // r15
  char *v31; // rax
  char *v32; // rax
  char *v33; // rdx
  unsigned __int64 v34; // r15
  __int64 v35; // rdi
  size_t v36; // r8
  char *v37; // r9
  void *v38; // rax
  size_t v39; // rax
  size_t v40; // r8
  char *v41; // rdi
  __int64 v42; // rdx
  char *v43; // [rsp+0h] [rbp-10E0h]
  char *v44; // [rsp+8h] [rbp-10D8h]
  __int64 v45; // [rsp+10h] [rbp-10D0h]
  __int16 *v46; // [rsp+18h] [rbp-10C8h]
  __int64 v47; // [rsp+18h] [rbp-10C8h]
  __int64 v48; // [rsp+18h] [rbp-10C8h]
  char *v49; // [rsp+18h] [rbp-10C8h]
  size_t v50; // [rsp+18h] [rbp-10C8h]
  void *src; // [rsp+20h] [rbp-10C0h]
  bool srca; // [rsp+20h] [rbp-10C0h]
  void *srcc; // [rsp+20h] [rbp-10C0h]
  _BYTE *srce; // [rsp+20h] [rbp-10C0h]
  void *srcb; // [rsp+20h] [rbp-10C0h]
  void *srcd; // [rsp+20h] [rbp-10C0h]
  _BYTE *srcg; // [rsp+20h] [rbp-10C0h]
  void *srcf; // [rsp+20h] [rbp-10C0h]
  __int64 v59; // [rsp+28h] [rbp-10B8h]
  __int16 v60; // [rsp+3Eh] [rbp-10A2h] BYREF
  const char *v61; // [rsp+40h] [rbp-10A0h] BYREF
  __int128 v62; // [rsp+48h] [rbp-1098h]
  char *s; // [rsp+60h] [rbp-1080h] BYREF
  __m128i v64; // [rsp+68h] [rbp-1078h] BYREF
  char v65[32]; // [rsp+80h] [rbp-1060h] BYREF
  unsigned __int64 v66; // [rsp+10A8h] [rbp-38h]

  v4 = *(_QWORD *)(a1 + 96);
  v66 = __readfsqword(0x28u);
  v59 = v4;
  v6 = sub_33F070(v4);
  if ( a3 )
  {
LABEL_16:
    qtmpnam();
    if ( *(_DWORD *)a2 )
      sub_6D0A0(
        (__int64)"\n"
                 "\n"
                 "\n"
                 "***************** INTERNAL ERROR HAS OCCURRED *****************\n"
                 "*****************                             *****************\n",
        4096);
    sub_6D0A0(
      (__int64)"*****************   CREATING COMPRESSED IDB   *****************\n"
               "*****************  FOR SENDING TO THE SERVER  *****************\n"
               "\n"
               "\n"
               "\n",
      4096);
    sub_3310F0((__int64)&s, a2, v16);
    sub_382FA0(0, *(_QWORD *)(a2 + 8));
    if ( s )
    {
      v64.m128i_i64[0] = 0;
      qfree((__int64)s);
    }
    s = (char *)-1LL;
    netnode_check();
    sub_33DF30();
    netnode_supset();
    netnode_supset();
    callui(52, v65, 32, &callui, v17, v18, v43, v44, v45, v46);
    netnode_supset();
    getinf();
    getinf();
    setinf();
    save_database();
    getinf();
    getinf();
    setinf();
    v19 = qfilesize();
    sub_6D0A0((__int64)"\n\nAll ok, sending the database to the server (%llu bytes)...\n", v19);
    v20 = sub_33DF30();
    strrchr(v20, 46);
    v64 = 0;
    s = nullptr;
    sub_6B870((__int64 *)&s);
    upload_idb();
    if ( s )
    {
      v64.m128i_i64[0] = 0;
      qfree((__int64)s);
    }
    return v66 - __readfsqword(0x28u);
  }
  v62 = 0;
  v61 = nullptr;
  v7 = qvector_reserve((__int64)&v61, 0, 23, 1);
  v61 = (const char *)v7;
  *(_QWORD *)&v62 = 23;
  *(__m128i *)v7 = _mm_load_si128((const __m128i *)&xmmword_4249C0);
  v8 = (__int64)v61;
  *(_QWORD *)(v7 + 14) = 0xA6C65636E614320LL;
  *(_BYTE *)(v8 + 22) = 0;
  if ( *(_QWORD *)(v4 + 936) > 1u )
  {
    sub_FAAD0((__int64 *)&v61);
    v9 = v62;
    if ( (_QWORD)v62 )
      goto LABEL_4;
LABEL_28:
    v12 = (__int64)v61;
    v11 = 387;
    v10 = 386;
    if ( *((_QWORD *)&v62 + 1) >= 0x183u )
      goto LABEL_5;
    goto LABEL_29;
  }
  v22 = v62;
  if ( (_QWORD)v62 )
  {
    v24 = v62 + 12;
    v23 = v62 + 13;
    v22 = v62 - 1;
  }
  else
  {
    v23 = 14;
    v24 = 13;
  }
  if ( *((_QWORD *)&v62 + 1) < v23 )
  {
    v48 = v24;
    srcb = (void *)v23;
    v61 = (const char *)qvector_reserve((__int64)&v61, v8, v23, 1);
    v24 = v48;
    v8 = (__int64)v61;
    v23 = (unsigned __int64)srcb;
  }
  *(_QWORD *)&v62 = v23;
  *(_BYTE *)(v8 + v24) = 0;
  qmemcpy((void *)&v61[v22], "SEND DATABASE", 13);
  v9 = v62;
  if ( !(_QWORD)v62 )
    goto LABEL_28;
LABEL_4:
  v10 = v9 + 385;
  v11 = v9 + 386;
  v12 = (__int64)v61;
  --v9;
  if ( *((_QWORD *)&v62 + 1) >= v11 )
    goto LABEL_5;
LABEL_29:
  v47 = v10;
  srcc = (void *)v11;
  v61 = (const char *)qvector_reserve((__int64)&v61, v12, v11, 1);
  v10 = v47;
  v12 = (__int64)v61;
  v11 = (unsigned __int64)srcc;
LABEL_5:
  *(_QWORD *)&v62 = v11;
  *(_BYTE *)(v12 + v10) = 0;
  v13 = (char *)&v61[v9];
  *(_QWORD *)v13 = 0x756F792066490A0ALL;
  *(_QWORD *)(v13 + 378) = 0xA0A0A21756F7920LL;
  qmemcpy(
    (void *)((unsigned __int64)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_422828 - &v13[-((unsigned __int64)(v13 + 8) & 0xFFFFFFFFFFFFFFF8LL)]),
    8LL * (((unsigned int)v13 - (((_DWORD)v13 + 8) & 0xFFFFFFF8) + 386) >> 3));
  v64 = 0;
  s = nullptr;
  v14 = *(_QWORD *)(v59 + 960);
  if ( v14 > 1 )
  {
    if ( &s != (char **)(v59 + 952) )
    {
      src = *(void **)(v59 + 952);
      s = (char *)qvector_reserve((__int64)&s, 0, *(_QWORD *)(v59 + 960), 1);
      v64.m128i_i64[0] = v14;
      memmove(s, src, v14 - 1);
      s[v14 - 1] = 0;
    }
    goto LABEL_8;
  }
  if ( !(unsigned __int8)reg_str_get() || (v34 = v64.m128i_i64[0], v64.m128i_i64[0] <= 1uLL) )
  {
    if ( *(_BYTE *)(v6 + 127) && (v39 = strlen((const char *)(v6 + 127)), (v40 = v39) != 0) )
    {
      v41 = s;
      v42 = v39 + 1;
      if ( v64.m128i_i64[1] < v39 + 1 )
      {
        v50 = v39;
        srcf = (void *)(v39 + 1);
        s = (char *)qvector_reserve((__int64)&s, (__int64)s, v42, 1);
        v40 = v50;
        v41 = s;
        v42 = (__int64)srcf;
      }
      v64.m128i_i64[0] = v42;
      srcg = (_BYTE *)v40;
      memmove(v41, (const void *)(v6 + 127), v40);
      srcg[(_QWORD)s] = 0;
      v35 = v59 + 952;
      if ( (char **)(v59 + 952) == &s )
        goto LABEL_8;
      v34 = v64.m128i_i64[0];
      if ( v64.m128i_i64[0] )
      {
        v36 = v64.m128i_i64[0] - 1;
        if ( v64.m128i_i64[0] != 1 )
          goto LABEL_52;
      }
    }
    else
    {
      v64.m128i_i64[0] = 0;
      if ( &s == (char **)(v59 + 952) )
        goto LABEL_8;
    }
    *(_QWORD *)(v59 + 960) = 0;
    goto LABEL_8;
  }
  v35 = v59 + 952;
  if ( (char **)(v59 + 952) != &s )
  {
    v36 = v64.m128i_i64[0] - 1;
LABEL_52:
    v37 = s;
    v38 = *(void **)(v59 + 952);
    if ( *(_QWORD *)(v59 + 968) < v34 )
    {
      v49 = s;
      srcd = (void *)v36;
      v38 = (void *)qvector_reserve(v35, *(_QWORD *)(v59 + 952), v34, 1);
      v37 = v49;
      v36 = (size_t)srcd;
      *(_QWORD *)(v59 + 952) = v38;
    }
    srce = (_BYTE *)v36;
    *(_QWORD *)(v59 + 960) = v34;
    memmove(v38, v37, v36);
    srce[*(_QWORD *)(v59 + 952)] = 0;
  }
LABEL_8:
  srca = (unsigned int)reg_int_op() != 0;
  v60 = (2 * srca) | ((unsigned int)reg_int_op() != 0);
  v46 = &v60;
  while ( 1 )
  {
    v15 = s1;
    if ( (_QWORD)v62 )
      v15 = v61;
    if ( (int)sub_33CF00((__int64)v15, &s, sub_382B20, &v60, 0.0) <= 0 )
    {
      v30 = 0;
      goto LABEL_34;
    }
    if ( v64.m128i_i64[0] <= 1uLL )
      break;
    v45 = v64.m128i_i64[0];
    if ( s )
    {
      if ( (*s & 0xBF) != 0 )
      {
        v44 = s;
        v31 = strchr(s, 64);
        if ( v31 )
        {
          if ( v31[1] )
          {
            v43 = v31;
            if ( !strchr(v31 + 1, 64) )
            {
              v32 = strchr(v43, 46);
              if ( v32 )
              {
                v33 = v44;
                if ( v32[1] )
                {
                  v25 = (const char *)(v6 + 127);
                  goto LABEL_47;
                }
              }
            }
          }
        }
      }
    }
    sub_2B4E70((__int64)"The enter email address is invalid");
  }
  v25 = (const char *)(v6 + 127);
  v26 = s1;
  if ( !v64.m128i_i64[0] )
    goto LABEL_31;
  v33 = s;
LABEL_47:
  v26 = v33;
LABEL_31:
  if ( strcasecmp(v26, v25) )
    reg_str_set();
  v27 = *(char **)(v59 + 952);
  *(_QWORD *)(v59 + 952) = s;
  v28 = _mm_loadu_si128((const __m128i *)(v59 + 960));
  v29 = v60;
  *(__m128 *)(v59 + 960) = _mm_loadh_ps((const double *)&v64.m128i_i64[1]);
  v30 = v29 & 1;
  s = v27;
  v64 = v28;
  reg_int_op();
  reg_int_op();
LABEL_34:
  if ( s )
  {
    v64.m128i_i64[0] = 0;
    qfree((__int64)s);
  }
  if ( v61 )
  {
    *(_QWORD *)&v62 = 0;
    qfree((__int64)v61);
  }
  if ( v30 )
    goto LABEL_16;
  return v66 - __readfsqword(0x28u);
}

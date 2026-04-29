__int64 __fastcall sub_9CBB0(__int64 *a1, __int64 *a2)
{
  char *v2; // rbx
  __int64 v3; // rdi
  const char *v4; // rax
  const char *v5; // r12
  size_t v6; // rax
  size_t v7; // rbx
  unsigned int v8; // r12d
  __int64 v10; // r13
  const __m128i *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // r14
  const char *v15; // rax
  size_t v16; // rax
  const char *v17; // r8
  __int64 *v18; // rbx
  void *v19; // rdi
  size_t v20; // r13
  __int64 v21; // rax
  size_t v22; // rax
  __int64 v23; // rax
  size_t v24; // rax
  char *v25; // r8
  size_t v26; // r14
  __int64 v27; // rax
  void *v28; // rdi
  size_t v29; // r15
  const char *v30; // rax
  const char *v31; // rbx
  size_t v32; // rax
  size_t v33; // r8
  void *v34; // rdi
  const char *v35; // rax
  const char *v36; // rbx
  size_t v37; // rax
  size_t v38; // r8
  size_t v39; // rdx
  __int64 v40; // rax
  const char *v41; // rax
  size_t v42; // rax
  const char *v43; // r8
  size_t v44; // r9
  size_t v45; // rax
  size_t v46; // r8
  size_t v47; // rdx
  __int64 v48; // rax
  char *v49; // rdi
  size_t v50; // rdx
  void *v51; // rdi
  size_t v52; // r15
  __int64 v53; // rax
  void *v54; // rdx
  const char *src; // [rsp+0h] [rbp-3E8h]
  char *srca; // [rsp+0h] [rbp-3E8h]
  size_t v57; // [rsp+10h] [rbp-3D8h]
  size_t v58; // [rsp+10h] [rbp-3D8h]
  size_t v59; // [rsp+10h] [rbp-3D8h]
  size_t v60; // [rsp+10h] [rbp-3D8h]
  const char *v61; // [rsp+18h] [rbp-3D0h]
  void *v62; // [rsp+18h] [rbp-3D0h]
  void *v63; // [rsp+18h] [rbp-3D0h]
  _BYTE *v64; // [rsp+18h] [rbp-3D0h]
  void *v65; // [rsp+18h] [rbp-3D0h]
  void *v66; // [rsp+18h] [rbp-3D0h]
  size_t v67; // [rsp+20h] [rbp-3C8h]
  const char *v68; // [rsp+20h] [rbp-3C8h]
  size_t v69; // [rsp+20h] [rbp-3C8h]
  size_t v70; // [rsp+28h] [rbp-3C0h]
  size_t v71; // [rsp+28h] [rbp-3C0h]
  __int64 *v72; // [rsp+38h] [rbp-3B0h] BYREF
  __m128i si128; // [rsp+40h] [rbp-3A8h] BYREF
  __m128i v74; // [rsp+50h] [rbp-398h] BYREF
  _UNKNOWN **v75; // [rsp+60h] [rbp-388h]
  __int64 v76; // [rsp+68h] [rbp-380h] BYREF
  __int128 v77; // [rsp+70h] [rbp-378h]
  __int64 v78[4]; // [rsp+80h] [rbp-368h] BYREF
  __int128 v79; // [rsp+A0h] [rbp-348h]
  __int128 v80; // [rsp+B0h] [rbp-338h]
  __int64 v81; // [rsp+C0h] [rbp-328h]
  __int128 v82; // [rsp+C8h] [rbp-320h]
  char *s; // [rsp+D8h] [rbp-310h] BYREF
  __int128 v84; // [rsp+E0h] [rbp-308h]
  __int64 v85; // [rsp+118h] [rbp-2D0h]
  __int128 v86; // [rsp+120h] [rbp-2C8h]
  __int64 v87; // [rsp+130h] [rbp-2B8h]
  __int128 v88; // [rsp+138h] [rbp-2B0h]
  __int64 v89; // [rsp+154h] [rbp-294h]
  __int128 v90; // [rsp+15Ch] [rbp-28Ch] BYREF
  unsigned __int64 v91; // [rsp+16Ch] [rbp-27Ch]
  __int64 v92; // [rsp+178h] [rbp-270h]
  __int64 v93; // [rsp+180h] [rbp-268h]
  __int64 v94[4]; // [rsp+190h] [rbp-258h] BYREF
  __int128 v95; // [rsp+1B0h] [rbp-238h]
  __int128 v96; // [rsp+1C0h] [rbp-228h]
  __int64 v97; // [rsp+1D0h] [rbp-218h]
  __int128 v98; // [rsp+1D8h] [rbp-210h]
  __int64 v99; // [rsp+1E8h] [rbp-200h]
  __int128 v100; // [rsp+1F0h] [rbp-1F8h]
  __int64 v101; // [rsp+228h] [rbp-1C0h]
  __int128 v102; // [rsp+230h] [rbp-1B8h]
  __int64 v103; // [rsp+240h] [rbp-1A8h]
  __int128 v104; // [rsp+248h] [rbp-1A0h]
  __int64 v105; // [rsp+264h] [rbp-184h]
  __int128 v106; // [rsp+26Ch] [rbp-17Ch] BYREF
  unsigned __int64 v107; // [rsp+27Ch] [rbp-16Ch]
  __int64 v108; // [rsp+288h] [rbp-160h]
  __int64 v109[4]; // [rsp+2A0h] [rbp-148h] BYREF
  __int128 v110; // [rsp+2C0h] [rbp-128h]
  __int128 v111; // [rsp+2D0h] [rbp-118h]
  __int64 v112; // [rsp+2E0h] [rbp-108h]
  __int128 v113; // [rsp+2E8h] [rbp-100h]
  char *v114; // [rsp+2F8h] [rbp-F0h] BYREF
  __int128 v115; // [rsp+300h] [rbp-E8h]
  __int64 v116; // [rsp+338h] [rbp-B0h]
  __int128 v117; // [rsp+340h] [rbp-A8h]
  __int64 v118; // [rsp+350h] [rbp-98h]
  __int128 v119; // [rsp+358h] [rbp-90h]
  __int64 v120; // [rsp+374h] [rbp-74h]
  __int128 v121; // [rsp+37Ch] [rbp-6Ch] BYREF
  unsigned __int64 v122; // [rsp+38Ch] [rbp-5Ch]
  __int64 v123; // [rsp+398h] [rbp-50h]
  __int64 v124; // [rsp+3A0h] [rbp-48h]
  unsigned __int64 v125; // [rsp+3A8h] [rbp-40h]

  v2 = (char *)a1;
  v3 = *a1;
  v125 = __readfsqword(0x28u);
  v75 = &off_C96A8;
  v76 = 0;
  v77 = 0;
  v4 = (const char *)sub_966B0(v3);
  v5 = v4;
  if ( v4 )
  {
    v6 = strlen(v4);
    v7 = v6;
    if ( v6 )
    {
      v19 = (void *)*a2;
      v20 = v6 + 1;
      if ( a2[2] < v6 + 1 )
      {
        v27 = qvector_reserve(a2, *a2, v6 + 1, 1);
        *a2 = v27;
        v19 = (void *)v27;
      }
      a2[1] = v20;
      memmove(v19, v5, v7);
      *(_BYTE *)(*a2 + v7) = 0;
    }
    else
    {
      a2[1] = 0;
    }
    v8 = 1;
    goto LABEL_5;
  }
  v10 = 0x7FFFFFFFFFFFFFFFLL;
  v11 = *(const __m128i **)v2;
  v12 = *(_QWORD *)(*(_QWORD *)v2 + 224LL);
  if ( (v12 & 0x7FFFFFFFFFFFFFFFLL) == 0 || v12 == -1 )
  {
    if ( under_debugger )
      goto LABEL_92;
    interr(30478);
  }
  si128 = _mm_loadu_si128(v11 + 14);
  while ( 1 )
  {
    v13 = operator new(0x20u);
    *(_QWORD *)v13 = off_C9528;
    *(_DWORD *)(v13 + 8) = 1;
    v14 = v94;
    v94[0] = v13;
    *(_OWORD *)(v13 + 16) = 0;
    *((_QWORD *)&v106 + 1) = 0x80000000LL;
    v107 = 0xFFFFFFFF00000000LL;
    src = (const char *)&v76;
    v94[3] = 0;
    v97 = 0;
    v99 = 0;
    v101 = 0;
    v103 = 0;
    v108 = 0;
    v105 = 0;
    *(_QWORD *)&v106 = 0;
    v95 = 0;
    v96 = 0;
    v98 = 0;
    v100 = 0;
    v102 = 0;
    v104 = 0;
    v8 = sub_9B440((__int64)v2, v94, si128.m128i_i64, (__int64)&v76);
    if ( !(_BYTE)v8 )
    {
      sub_1B750((__int64)v94);
      v21 = operator new(0x20u);
      *(_QWORD *)v21 = off_C9528;
      v10 = (__int64)v78;
      *(_DWORD *)(v21 + 8) = 1;
      v78[0] = v21;
      *(_OWORD *)(v21 + 16) = 0;
      *((_QWORD *)&v90 + 1) = 0x80000000LL;
      v78[3] = 0;
      v81 = 0;
      s = nullptr;
      v85 = 0;
      v87 = 0;
      v92 = 0;
      v89 = 0;
      *(_QWORD *)&v90 = 0;
      v91 = 0xFFFFFFFF00000000LL;
      v79 = 0;
      v80 = 0;
      v82 = 0;
      v84 = 0;
      v86 = 0;
      v88 = 0;
      v8 = sub_9BA70((const __m128i **)v2, v78);
      if ( !(_BYTE)v8 )
        goto LABEL_28;
      v72 = v78;
      if ( v76 )
      {
        *(_QWORD *)&v77 = 0;
        qfree(v76);
        v76 = 0;
        *((_QWORD *)&v77 + 1) = 0;
      }
      if ( (v89 & 0x40) != 0 )
        goto LABEL_25;
      v109[0] = 0;
      LODWORD(v94[0]) = 0;
      if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *, __int64 *))(v93 + 112))(
             *(_QWORD *)(v78[0] + 24),
             110,
             v94,
             v109)
        || !LODWORD(v94[0]) )
      {
        v109[0] = 0;
        LODWORD(v94[0]) = 0;
        if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __int64 *, __int64 *))(v93 + 112))(
               *(_QWORD *)(v78[0] + 24),
               8199,
               v94,
               v109)
          || !LODWORD(v94[0]) )
        {
          goto LABEL_53;
        }
        v35 = (const char *)sub_965E0(v78, 8199);
        v36 = v35;
        if ( v35 )
        {
          v37 = strlen(v35);
          v38 = v37;
          if ( v37 )
          {
            v39 = v37 + 1;
            if ( *((_QWORD *)&v84 + 1) < v37 + 1 )
            {
              v65 = (void *)v37;
              v60 = v37 + 1;
              s = (char *)qvector_reserve(&s, s, v39, 1);
              v38 = (size_t)v65;
              v39 = v60;
            }
            *(_QWORD *)&v84 = v39;
            v57 = v38;
            memmove(s, v36, v38);
            s[v57] = 0;
            goto LABEL_53;
          }
        }
      }
      else
      {
        v30 = (const char *)sub_965E0(v78, 110);
        v31 = v30;
        if ( v30 )
        {
          v32 = strlen(v30);
          v33 = v32;
          if ( v32 )
          {
            v49 = s;
            v50 = v32 + 1;
            if ( *((_QWORD *)&v84 + 1) < v32 + 1 )
            {
              v63 = (void *)v32;
              v59 = v32 + 1;
              s = (char *)qvector_reserve(&s, s, v50, 1);
              v33 = (size_t)v63;
              v49 = s;
              v50 = v59;
            }
            *(_QWORD *)&v84 = v50;
            v58 = v33;
            memmove(v49, v31, v33);
            s[v58] = 0;
            goto LABEL_53;
          }
        }
      }
      *(_QWORD *)&v84 = 0;
LABEL_53:
      LODWORD(v89) = v89 | 0x40;
LABEL_25:
      v2 = s;
      if ( !s )
        goto LABEL_34;
      v22 = strlen(s);
      v14 = (__int64 *)v22;
      if ( !v22 )
      {
        a2[1] = 0;
        goto LABEL_28;
      }
      goto LABEL_45;
    }
    v15 = (const char *)sub_966B0((__int64)v94);
    if ( v15 )
    {
      src = v15;
      v16 = strlen(v15);
      v17 = src;
      v18 = (__int64 *)v16;
      if ( v16 )
      {
        v34 = (void *)*a2;
        v10 = v16 + 1;
        if ( a2[2] < v16 + 1 )
          goto LABEL_68;
        goto LABEL_55;
      }
      a2[1] = 0;
LABEL_17:
      sub_1B750((__int64)v94);
      goto LABEL_5;
    }
    if ( (*(_QWORD *)((_BYTE *)&v106 + 4) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)((char *)&v106 + 4) == -1 )
      break;
    si128 = _mm_load_si128((const __m128i *)((char *)&v106 + 4));
    sub_1B750((__int64)v94);
  }
  if ( under_debugger )
    goto LABEL_92;
  interr(30478);
LABEL_34:
  if ( (*(_QWORD *)((_BYTE *)&v90 + 4) & 0x7FFFFFFFFFFFFFFFLL) != 0 && *(_QWORD *)((char *)&v90 + 4) != -1 )
  {
    v74 = _mm_load_si128((const __m128i *)((char *)&v90 + 4));
    while ( 1 )
    {
      v23 = operator new(0x20u);
      *(_QWORD *)v23 = off_C9528;
      *(_DWORD *)(v23 + 8) = 1;
      v18 = v109;
      v109[0] = v23;
      *(_OWORD *)(v23 + 16) = 0;
      *((_QWORD *)&v121 + 1) = 0x80000000LL;
      v109[3] = 0;
      v112 = 0;
      v114 = nullptr;
      v116 = 0;
      v118 = 0;
      v123 = 0;
      v120 = 0;
      *(_QWORD *)&v121 = 0;
      v122 = 0xFFFFFFFF00000000LL;
      v110 = 0;
      v111 = 0;
      v113 = 0;
      v115 = 0;
      v117 = 0;
      v119 = 0;
      if ( !(unsigned __int8)sub_9B440((__int64)&v72, v109, v74.m128i_i64, (__int64)&v76) )
      {
        v8 = 0;
        sub_1B750((__int64)v109);
        goto LABEL_28;
      }
      if ( (v120 & 0x40) == 0 )
        break;
LABEL_39:
      if ( v114 )
      {
        srca = v114;
        v24 = strlen(v114);
        v25 = srca;
        v26 = v24;
        if ( v24 )
        {
          v51 = (void *)*a2;
          v52 = v24 + 1;
          if ( a2[2] < v24 + 1 )
          {
            v53 = qvector_reserve(a2, *a2, v24 + 1, 1);
            *a2 = v53;
            v25 = srca;
            v51 = (void *)v53;
          }
          a2[1] = v52;
          memmove(v51, v25, v26);
          *(_BYTE *)(*a2 + v26) = 0;
        }
        else
        {
          a2[1] = 0;
        }
        sub_1B750((__int64)v109);
        goto LABEL_28;
      }
      if ( (*(_QWORD *)((_BYTE *)&v121 + 4) & 0x7FFFFFFFFFFFFFFFLL) == 0 || *(_QWORD *)((char *)&v121 + 4) == -1 )
      {
        if ( !under_debugger )
        {
          v34 = &stru_76F8 + 22;
          interr(30478);
LABEL_68:
          v40 = qvector_reserve(a2, v34, v10, 1);
          *a2 = v40;
          v17 = src;
          v34 = (void *)v40;
LABEL_55:
          a2[1] = v10;
          memmove(v34, v17, (size_t)v18);
          *((_BYTE *)v18 + *a2) = 0;
          goto LABEL_17;
        }
LABEL_92:
        BUG();
      }
      v74 = _mm_load_si128((const __m128i *)((char *)&v121 + 4));
      sub_1B750((__int64)v109);
    }
    si128.m128i_i32[0] = 0;
    v94[0] = 0;
    if ( (*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i *, __int64 *))(v124 + 112))(
           *(_QWORD *)(v109[0] + 24),
           110,
           &si128,
           v94)
      || !si128.m128i_i32[0] )
    {
      si128.m128i_i32[0] = 0;
      v94[0] = 0;
      if ( !(*(unsigned int (__fastcall **)(_QWORD, __int64, __m128i *, __int64 *))(v124 + 112))(
              *(_QWORD *)(v109[0] + 24),
              8199,
              &si128,
              v94)
        && si128.m128i_i32[0] )
      {
        v62 = (void *)sub_965E0(v109, 8199);
        if ( v62 && (v45 = strlen((const char *)v62), (v46 = v45) != 0) )
        {
          v47 = v45 + 1;
          if ( *((_QWORD *)&v115 + 1) < v45 + 1 )
          {
            v71 = v45;
            v69 = v45 + 1;
            v114 = (char *)qvector_reserve(&v114, v114, v47, 1);
            v46 = v71;
            v47 = v69;
          }
          v67 = v46;
          *(_QWORD *)&v115 = v47;
          memmove(v114, v62, v46);
          v114[v67] = 0;
        }
        else
        {
LABEL_73:
          *(_QWORD *)&v115 = 0;
        }
      }
    }
    else
    {
      v41 = (const char *)sub_965E0(v109, 110);
      if ( !v41 )
        goto LABEL_73;
      v61 = v41;
      v42 = strlen(v41);
      v43 = v61;
      v44 = v42;
      if ( !v42 )
        goto LABEL_73;
      v54 = (void *)(v42 + 1);
      if ( *((_QWORD *)&v115 + 1) < v42 + 1 )
      {
        v70 = v42;
        v68 = v61;
        v66 = (void *)(v42 + 1);
        v114 = (char *)qvector_reserve(&v114, v114, v54, 1);
        v44 = v70;
        v43 = v68;
        v54 = v66;
      }
      *(_QWORD *)&v115 = v54;
      v64 = (_BYTE *)v44;
      memmove(v114, v43, v44);
      v64[(_QWORD)v114] = 0;
    }
    LODWORD(v120) = v120 | 0x40;
    goto LABEL_39;
  }
  if ( under_debugger )
    goto LABEL_92;
  v22 = interr(30478);
LABEL_45:
  v28 = (void *)*a2;
  v29 = v22 + 1;
  if ( a2[2] < v22 + 1 )
  {
    v48 = qvector_reserve(a2, *a2, v22 + 1, 1);
    *a2 = v48;
    v28 = (void *)v48;
  }
  a2[1] = v29;
  memmove(v28, v2, (size_t)v14);
  *((_BYTE *)v14 + *a2) = 0;
LABEL_28:
  sub_1B750(v10);
LABEL_5:
  v75 = (_UNKNOWN **)&unk_C9D00;
  if ( v76 )
  {
    *(_QWORD *)&v77 = 0;
    qfree(v76);
  }
  return v8;
}

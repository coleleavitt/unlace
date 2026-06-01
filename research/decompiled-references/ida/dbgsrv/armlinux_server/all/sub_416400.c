/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_416400
// Address: 0x0000000000416400

//----- (0000000000416400) ----------------------------------------------------
__int64 __fastcall sub_416400(__int64 a1, int a2, int a3)
{
  void **v3; // x24
  void *v6; // x0
  int v7; // w2
  int v8; // w3
  int v9; // w1
  char *v11; // x20
  __int64 v12; // x0
  __int64 v13; // x2
  __int64 v14; // x1
  void (__fastcall *v15)(__int64, __int64, char *, __int64); // x4
  size_t v16; // x0
  size_t v17; // x25
  int v18; // w3
  FILE *v19; // x0
  size_t v20; // x0
  size_t v21; // x24
  int v22; // w0
  int v23; // w1
  __int64 v24; // x0
  void *v25; // x0
  void *v26; // x1
  __int64 v27; // x26
  __int64 i; // x25
  void *v29; // x0
  char *v30; // x1
  void *v31; // x0
  void *v32; // x1
  __int64 v33; // x26
  __int64 j; // x25
  void *v35; // x0
  char *v36; // x1
  __int64 v37; // x1
  int v38; // w1
  unsigned __int64 v39; // x26
  void *v40; // x0
  int *v41; // x0
  const char *v42; // x0
  unsigned __int64 v44; // x26
  void *v45; // x0
  unsigned __int64 *v46; // x0
  __int64 *v47; // x25
  unsigned __int64 v48; // x0
  int v49; // w1
  int v50; // w0
  void *v52; // x0
  const void *v53; // x26
  __int64 v54; // x0
  const char *v55; // x0
  const char *v56; // x20
  __int64 v57; // x25
  char *v58; // x26
  size_t v59; // x20
  char *v60; // x0
  __int64 v61; // x24
  __int64 v62; // x22
  __int64 v63; // x20
  char *v64; // x19
  void *v65; // x0
  void *v66; // x0
  __int64 v67; // x0
  size_t v68; // x27
  size_t v69; // x20
  int v70; // [xsp+5Ch] [xbp-1254h] BYREF
  void *v71; // [xsp+60h] [xbp-1250h] BYREF
  __int64 v72; // [xsp+68h] [xbp-1248h]
  __int64 v73; // [xsp+70h] [xbp-1240h]
  void *src; // [xsp+78h] [xbp-1238h] BYREF
  size_t v75; // [xsp+80h] [xbp-1230h]
  __int64 v76; // [xsp+88h] [xbp-1228h]
  void *ptr; // [xsp+90h] [xbp-1220h] BYREF
  size_t v78; // [xsp+98h] [xbp-1218h]
  void **p_src; // [xsp+A0h] [xbp-1210h]
  char *v80; // [xsp+A8h] [xbp-1208h] BYREF
  __int64 v81; // [xsp+B0h] [xbp-1200h]
  void *v82; // [xsp+B8h] [xbp-11F8h]
  size_t v83; // [xsp+C0h] [xbp-11F0h]
  size_t v84; // [xsp+C8h] [xbp-11E8h]
  void *v85; // [xsp+D0h] [xbp-11E0h]
  size_t v86; // [xsp+D8h] [xbp-11D8h]
  size_t v87; // [xsp+E0h] [xbp-11D0h]
  __int64 v88; // [xsp+E8h] [xbp-11C8h] BYREF
  int v89; // [xsp+F0h] [xbp-11C0h] BYREF
  _QWORD *v90; // [xsp+F8h] [xbp-11B8h]
  int *v91; // [xsp+100h] [xbp-11B0h]
  int *v92; // [xsp+108h] [xbp-11A8h]
  __int64 v93; // [xsp+110h] [xbp-11A0h]
  void *v94; // [xsp+118h] [xbp-1198h]
  __int64 v95; // [xsp+120h] [xbp-1190h]
  __int64 v96; // [xsp+128h] [xbp-1188h]
  void *v97; // [xsp+130h] [xbp-1180h]
  __int64 v98; // [xsp+138h] [xbp-1178h]
  __int64 v99; // [xsp+140h] [xbp-1170h]
  int v100; // [xsp+148h] [xbp-1168h]
  __int64 v101; // [xsp+150h] [xbp-1160h] BYREF
  __int64 v102; // [xsp+158h] [xbp-1158h]
  char v103; // [xsp+160h] [xbp-1150h]
  int v104; // [xsp+164h] [xbp-114Ch]
  void *dest; // [xsp+168h] [xbp-1148h] BYREF
  unsigned __int64 v106; // [xsp+170h] [xbp-1140h]
  unsigned __int64 v107; // [xsp+178h] [xbp-1138h]
  unsigned __int64 v108; // [xsp+180h] [xbp-1130h]
  unsigned __int64 v109; // [xsp+188h] [xbp-1128h]
  __int64 v110; // [xsp+190h] [xbp-1120h]
  char v111; // [xsp+198h] [xbp-1118h] BYREF
  __int64 v112; // [xsp+298h] [xbp-1018h]
  char v113[4096]; // [xsp+2A8h] [xbp-1008h] BYREF

  v6 = *(void **)(a1 + 1960);
  *(_DWORD *)(a1 + 656) = a2;
  if ( v6 )
  {
    *(_QWORD *)(a1 + 1968) = 0;
    j__free(v6);
    *(_QWORD *)(a1 + 1960) = 0;
    a2 = *(_DWORD *)(a1 + 656);
    *(_QWORD *)(a1 + 1976) = 0;
  }
  *(_DWORD *)(a1 + 2044) = a2;
  *(_BYTE *)(a1 + 2052) = 0;
  *(_DWORD *)(a1 + 2112) = 0;
  sub_40F6F8(a1, a2);
  if ( a3 == 2 )
  {
    v7 = 1;
    v8 = 0;
  }
  else
  {
    v7 = 0;
    v8 = -1;
  }
  sub_494C58(&v70, *(_DWORD *)(a1 + 656), v7, v8);
  sub_45CDF8(a1, (__int64)"process pid/tid: %d\n", *(_DWORD *)(a1 + 656));
  *(_BYTE *)(a1 + 2116) = 0;
  v101 = 0xFFFFFFFFLL;
  v102 = -1;
  v103 = 0;
  v104 = 0;
  dest = nullptr;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  sub_482FB0((__int64)&v101, 1u);
  v9 = v104 & 0xFFFFFFF;
  LODWORD(v11) = (v104 & 0xFFFFFFF) != 0xB && v9 != 1;
  if ( v9 == 8 )
    LODWORD(v11) = 0;
  if ( (_DWORD)v11 )
  {
    if ( !under_debugger )
      sub_492270(3295);
    goto LABEL_28;
  }
  LODWORD(v3) = *(_DWORD *)(a1 + 656);
  v80 = &v111;
  v81 = 272;
  LODWORD(v101) = (_DWORD)v3;
  HIDWORD(v101) = (_DWORD)v3;
  if ( sub_408438((unsigned int)v3) )
    goto LABEL_29;
  v12 = -1;
  while ( 1 )
  {
    v13 = *(_QWORD *)a1;
    v14 = *(unsigned int *)(a1 + 656);
    v102 = v12;
    v15 = *(void (__fastcall **)(__int64, __int64, char *, __int64))(v13 + 656);
    v103 = 1;
    v15(a1, v14, v113, 4096);
    v16 = strlen(v113);
    v17 = v16;
    if ( v16 )
    {
      v39 = v16 + 1;
      v40 = dest;
      if ( v39 > v107 )
      {
        v40 = sub_491288((__int64)&dest, dest, v39, 1u);
        dest = v40;
      }
      v106 = v39;
      memmove(v40, v113, v17);
      *((_BYTE *)dest + v17) = 0;
    }
    else
    {
      v106 = 0;
    }
    v18 = *(_DWORD *)(a1 + 656);
    v108 = -1;
    v109 = 0;
    v110 = -1;
    sub_49B748(v113, 0x1000u, "/proc/%u/maps", v18);
    v19 = sub_48DE20(v113);
    *(_QWORD *)(a1 + 2104) = v19;
    if ( !v19 )
    {
      v41 = __errno_location();
      v42 = (const char *)sub_492F00(*v41);
      sub_40AAF0(a1, (__int64)"%s: %s\n", v113, v42);
      goto LABEL_66;
    }
    v11 = (char *)&qword_4B2D48;
    if ( v106 )
      v11 = (char *)dest;
    if ( !v11 || (v20 = strlen(v11), (v21 = v20) == 0) )
    {
      v22 = *(unsigned __int8 *)(a1 + 861);
      *(_QWORD *)(a1 + 2152) = 0;
      if ( v22 )
        goto LABEL_24;
LABEL_71:
      *(_QWORD *)(a1 + 592) = 0;
      goto LABEL_24;
    }
    v44 = v20 + 1;
    v45 = *(void **)(a1 + 2144);
    if ( v44 > *(_QWORD *)(a1 + 2160) )
    {
      v45 = sub_491288(a1 + 2144, *(void **)(a1 + 2144), v44, 1u);
      *(_QWORD *)(a1 + 2144) = v45;
    }
    *(_QWORD *)(a1 + 2152) = v44;
    memmove(v45, v11, v21);
    *(_BYTE *)(*(_QWORD *)(a1 + 2144) + v21) = 0;
    if ( !*(_BYTE *)(a1 + 861) )
    {
      v11 = *(char **)(a1 + 2152);
      if ( (unsigned __int64)v11 <= 1 )
        goto LABEL_71;
      v52 = *(void **)(a1 + 584);
      v53 = *(const void **)(a1 + 2144);
      if ( (unsigned __int64)v11 > *(_QWORD *)(a1 + 600) )
      {
        v52 = sub_491288(a1 + 584, *(void **)(a1 + 584), *(_QWORD *)(a1 + 2152), 1u);
        *(_QWORD *)(a1 + 584) = v52;
      }
      *(_QWORD *)(a1 + 592) = v11;
      memmove(v52, v53, (size_t)(v11 - 1));
      v11[*(_QWORD *)(a1 + 584) - 1] = 0;
    }
LABEL_24:
    v23 = *(unsigned __int8 *)(a1 + 36);
    v71 = nullptr;
    v72 = 0;
    v73 = 0;
    if ( v23 )
    {
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 32) = 4;
    }
    *(_DWORD *)(a1 + 276) = 4;
    v3 = &v71;
    if ( (int)sub_415E40(a1, (__int64 *)&v71, 0) > 0 )
      break;
    if ( !under_debugger )
      sub_492270(30065);
LABEL_28:
    __break(0x3E8u);
LABEL_29:
    if ( ptrace(PTRACE_GETREGSET, (unsigned int)v3, 1, &v80) )
      v12 = -1;
    else
      v12 = v112;
  }
  v24 = *(_QWORD *)(a1 + 664);
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
    v25 = *(void **)(a1 + 672);
    if ( v25 )
    {
      *(_QWORD *)(a1 + 680) = 0;
      j__free(v25);
      *(_QWORD *)(a1 + 672) = 0;
      *(_QWORD *)(a1 + 688) = 0;
    }
    v26 = *(void **)(a1 + 696);
    if ( v26 )
    {
      v27 = *(_QWORD *)(a1 + 704);
      if ( v27 )
      {
        v11 = nullptr;
        for ( i = 0; i != v27; ++i )
        {
          v29 = *(void **)&v11[(_QWORD)v26];
          v30 = &v11[(_QWORD)v26];
          if ( v29 )
          {
            *((_QWORD *)v30 + 1) = 0;
            j__free(v29);
          }
          v11 += 24;
          v26 = *(void **)(a1 + 696);
        }
      }
      *(_QWORD *)(a1 + 704) = 0;
      j__free(v26);
      *(_QWORD *)(a1 + 696) = 0;
      *(_QWORD *)(a1 + 712) = 0;
    }
    v31 = *(void **)(a1 + 720);
    if ( v31 )
    {
      *(_QWORD *)(a1 + 728) = 0;
      j__free(v31);
      *(_QWORD *)(a1 + 720) = 0;
      *(_QWORD *)(a1 + 736) = 0;
    }
    v32 = *(void **)(a1 + 744);
    if ( v32 )
    {
      v33 = *(_QWORD *)(a1 + 752);
      if ( v33 )
      {
        v11 = nullptr;
        for ( j = 0; j != v33; ++j )
        {
          v35 = *(void **)&v11[(_QWORD)v32];
          v36 = &v11[(_QWORD)v32];
          if ( v35 )
          {
            *((_QWORD *)v36 + 1) = 0;
            j__free(v35);
          }
          v11 += 24;
          v32 = *(void **)(a1 + 744);
        }
      }
      *(_QWORD *)(a1 + 752) = 0;
      j__free(v32);
      *(_QWORD *)(a1 + 744) = 0;
      *(_QWORD *)(a1 + 760) = 0;
    }
  }
  v37 = *(_QWORD *)a1;
  *(_QWORD *)(a1 + 664) = 0;
  (*(void (__fastcall **)(__int64))(v37 + 592))(a1);
  if ( *(_DWORD *)(a1 + 780) == -1 || *(_DWORD *)(a1 + 784) == -1 )
    goto LABEL_59;
  v38 = *(_QWORD *)(a1 + 680);
  if ( !*(_QWORD *)(a1 + 680) )
    v38 = *(_DWORD *)(a1 + 776);
  if ( v38 <= 0 )
  {
LABEL_59:
    if ( !under_debugger )
      sub_492270(30016);
    goto LABEL_28;
  }
  nullsub_9(1);
  v11 = (char *)&qword_4B2D48;
  if ( v106 )
    v11 = (char *)dest;
  v46 = (unsigned __int64 *)sub_408388((__int64 *)&v71, v11);
  v47 = (__int64 *)v46;
  if ( v46 )
  {
    v108 = *v46;
    v48 = sub_40C780(a1, &v71, v46);
    v49 = *(unsigned __int8 *)(a1 + 861);
    v109 = v48;
    if ( !v49 )
      v110 = *v47;
  }
  else if ( !*(_BYTE *)(a1 + 861) )
  {
    sub_40AAF0(a1, (__int64)"%s: nowhere in the process memory?!\n", v11);
  }
  if ( !(unsigned __int8)sub_415218(a1, (__int64 *)&v71) )
    sub_40AAF0(a1, (__int64)"Could not set the shlib bpt, shared object events will not be handled\n");
  if ( (v104 & 0xFFFFFFF) != 0 )
  {
    LODWORD(v11) = a1 + 120;
    v54 = *(_QWORD *)(a1 + 168);
    if ( v54 == *(_QWORD *)(a1 + 184) - 72LL )
    {
      sub_411490((_QWORD *)(a1 + 120), (__int64)&v101);
    }
    else
    {
      *(_QWORD *)v54 = 0xFFFFFFFFLL;
      *(_QWORD *)(v54 + 8) = -1;
      *(_BYTE *)(v54 + 16) = 0;
      *(_DWORD *)(v54 + 20) = 0;
      sub_483128(v54, (__int64)&v101);
      *(_QWORD *)(a1 + 168) += 72LL;
    }
    *(_BYTE *)(a1 + 2116) = 0;
  }
  if ( !a3 )
    goto LABEL_116;
  sub_482FB0((__int64)&v101, 0xBu);
  v50 = v104 & 0xFFFFFFF;
  if ( (v104 & 0xFFFFFFF) == 1 )
    goto LABEL_128;
  if ( v50 != 8 && v50 != 11 )
  {
    if ( !under_debugger )
      sub_492270(3295);
    goto LABEL_28;
  }
  if ( !v50 )
    goto LABEL_95;
LABEL_128:
  v67 = *(_QWORD *)(a1 + 168);
  if ( v67 == *(_QWORD *)(a1 + 184) - 72LL )
  {
    sub_411490((_QWORD *)(a1 + 120), (__int64)&v101);
  }
  else
  {
    *(_QWORD *)v67 = 0xFFFFFFFFLL;
    *(_QWORD *)(v67 + 8) = -1;
    *(_BYTE *)(v67 + 16) = 0;
    *(_DWORD *)(v67 + 20) = 0;
    sub_483128(v67, (__int64)&v101);
    *(_QWORD *)(a1 + 168) += 72LL;
  }
  *(_BYTE *)(a1 + 2116) = 0;
LABEL_95:
  if ( !(unsigned __int8)sub_4950A8("IDA_SKIP_SYMS", 0) )
  {
    v55 = (const char *)&qword_4B2D48;
    v76 = 0;
    ptr = off_519B20;
    if ( v106 )
      v55 = (const char *)dest;
    src = nullptr;
    v75 = 0;
    LODWORD(v78) = 4;
    p_src = &src;
    sub_42E470(v55, (__int64 (***)())&ptr, 0);
    ptr = nullptr;
    v78 = 0;
    p_src = nullptr;
    v56 = (const char *)&qword_4B2D48;
    v58 = (char *)v108;
    v57 = v109;
    if ( v106 )
      v56 = (const char *)dest;
    if ( v56 )
    {
      v68 = strlen(v56);
      ptr = sub_491288((__int64)&ptr, nullptr, v68 + 1, 1u);
      v78 = v68 + 1;
      memmove(ptr, v56, v68);
      *((_BYTE *)ptr + v68) = 0;
      v80 = v58;
      v81 = v57;
      v69 = v78;
      v82 = nullptr;
      v83 = 0;
      v84 = 0;
      if ( v78 )
      {
        v82 = sub_491248(v78);
        v84 = v69;
        memcpy(v82, ptr, v69);
        v83 = v69;
      }
    }
    else
    {
      v80 = (char *)v108;
      v81 = v109;
      v82 = nullptr;
      v83 = 0;
      v84 = 0;
    }
    v59 = v75;
    v85 = nullptr;
    v86 = 0;
    v87 = 0;
    if ( v75 )
    {
      v85 = sub_491248(v75);
      v87 = v59;
      memcpy(v85, src, v59);
      v86 = v59;
    }
    v89 = 0;
    v90 = nullptr;
    v91 = &v89;
    v92 = &v89;
    v93 = 0;
    v94 = nullptr;
    v95 = 0;
    v96 = 0;
    v97 = nullptr;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    if ( ptr )
    {
      v78 = 0;
      j__free(ptr);
    }
    sub_40D4C8((_QWORD *)a1, (__int64)&v80);
    if ( v97 )
    {
      v98 = 0;
      j__free(v97);
    }
    if ( v94 )
    {
      v95 = 0;
      j__free(v94);
    }
    sub_40D410((__int64)&v88, v90);
    if ( v85 )
    {
      v86 = 0;
      j__free(v85);
    }
    if ( v82 )
    {
      v83 = 0;
      j__free(v82);
    }
    if ( src )
    {
      v75 = 0;
      j__free(src);
    }
  }
LABEL_116:
  v60 = (char *)v71;
  if ( v71 )
  {
    v61 = v72;
    if ( v72 )
    {
      v62 = 0;
      v63 = 0;
      do
      {
        v64 = &v60[v62];
        v65 = *(void **)&v60[v62 + 40];
        if ( v65 )
        {
          *((_QWORD *)v64 + 6) = 0;
          j__free(v65);
        }
        v66 = *((void **)v64 + 2);
        if ( v66 )
        {
          *((_QWORD *)v64 + 3) = 0;
          j__free(v66);
        }
        ++v63;
        v62 += 80;
        v60 = (char *)v71;
      }
      while ( v61 != v63 );
    }
    v72 = 0;
    j__free(v60);
  }
  LODWORD(v11) = 1;
LABEL_66:
  sub_482ED0((__int64)&v101);
  return (unsigned int)v11;
}
// 416400: could not find valid save-restore pair for x27
// 416614: variable 'v3' is possibly undefined
// 461A18: using guessed type __int64 __fastcall nullsub_9(_QWORD);
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 519B20: using guessed type __int64 (__fastcall *off_519B20[3])();
// 52451C: using guessed type char under_debugger;

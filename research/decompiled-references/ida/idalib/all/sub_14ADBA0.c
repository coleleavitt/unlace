__int64 __fastcall sub_14ADBA0(
        __int64 a1,
        int a2,
        int *a3,
        unsigned int a4,
        _DWORD *a5,
        __int64 a6,
        __m128i a7,
        __m128 a8,
        unsigned int a9)
{
  unsigned int v10; // r12d
  __int16 v11; // ax
  __int64 v12; // r14
  char v14; // al
  __int16 v15; // ax
  int v16; // esi
  int v17; // ecx
  int v18; // edx
  int *v19; // rbx
  __int16 v20; // ax
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned int v25; // r14d
  unsigned __int64 v26; // r12
  __int16 v27; // ax
  __int64 v28; // rax
  __int64 v29; // rdx
  int v30; // esi
  const char *v31; // r12
  size_t v32; // rax
  __int64 v33; // rax
  unsigned int v34; // ebx
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rbp
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 *v39; // rdi
  __int64 v40; // rbp
  int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rbx
  size_t v45; // rax
  __int64 v46; // r12
  int v47; // eax
  int v48; // edx
  int v49; // ebp
  __int64 *v50; // rdi
  unsigned int v51; // eax
  unsigned int v52; // edx
  __int64 v54; // [rsp+8h] [rbp-2A0h]
  int v57; // [rsp+24h] [rbp-284h]
  char v60; // [rsp+37h] [rbp-271h]
  char v61; // [rsp+38h] [rbp-270h]
  __int64 v62; // [rsp+40h] [rbp-268h]
  _DWORD v63[2]; // [rsp+50h] [rbp-258h] BYREF
  char v64; // [rsp+58h] [rbp-250h]
  __int64 v65; // [rsp+5Ch] [rbp-24Ch]
  char v66; // [rsp+64h] [rbp-244h]
  void *v67; // [rsp+68h] [rbp-240h]
  __int64 v68; // [rsp+70h] [rbp-238h]
  _BYTE v69[24]; // [rsp+78h] [rbp-230h] BYREF
  int v70; // [rsp+90h] [rbp-218h] BYREF
  int v71; // [rsp+94h] [rbp-214h]
  char v72; // [rsp+98h] [rbp-210h]
  __int64 v73; // [rsp+9Ch] [rbp-20Ch]
  char v74; // [rsp+A4h] [rbp-204h]
  void *v75; // [rsp+A8h] [rbp-200h]
  __int64 v76; // [rsp+B0h] [rbp-1F8h]
  _BYTE v77[16]; // [rsp+B8h] [rbp-1F0h] BYREF
  char v78; // [rsp+C8h] [rbp-1E0h]
  unsigned __int8 *v79; // [rsp+D0h] [rbp-1D8h] BYREF
  char v80; // [rsp+D8h] [rbp-1D0h]
  __int64 v81; // [rsp+DCh] [rbp-1CCh]
  char v82; // [rsp+E4h] [rbp-1C4h]
  void *v83; // [rsp+E8h] [rbp-1C0h]
  __int64 v84; // [rsp+F0h] [rbp-1B8h]
  _BYTE v85[40]; // [rsp+F8h] [rbp-1B0h] BYREF
  __int64 v86; // [rsp+120h] [rbp-188h] BYREF
  __int64 *v87; // [rsp+128h] [rbp-180h]
  __int64 v88; // [rsp+130h] [rbp-178h]
  _QWORD v89[5]; // [rsp+138h] [rbp-170h] BYREF
  __int64 v90; // [rsp+160h] [rbp-148h] BYREF
  unsigned __int64 v91; // [rsp+170h] [rbp-138h] BYREF
  char *v92; // [rsp+178h] [rbp-130h] BYREF
  __int64 v93; // [rsp+180h] [rbp-128h]
  __int64 v94; // [rsp+188h] [rbp-120h] BYREF
  _QWORD v95[2]; // [rsp+198h] [rbp-110h] BYREF
  __int64 v96; // [rsp+1A8h] [rbp-100h]
  __int64 v97; // [rsp+1B0h] [rbp-F8h] BYREF
  void *v98[4]; // [rsp+1C0h] [rbp-E8h] BYREF
  __int128 v99; // [rsp+1E0h] [rbp-C8h] BYREF
  char v100; // [rsp+1F8h] [rbp-B0h]
  unsigned __int8 *v101; // [rsp+210h] [rbp-98h] BYREF
  __int64 v102; // [rsp+218h] [rbp-90h] BYREF
  void *ptr[2]; // [rsp+220h] [rbp-88h]
  __int64 v104; // [rsp+230h] [rbp-78h]
  __int64 v105; // [rsp+238h] [rbp-70h]
  __int64 v106; // [rsp+240h] [rbp-68h]
  int v107; // [rsp+248h] [rbp-60h] BYREF
  __int64 v108; // [rsp+250h] [rbp-58h]
  __int64 v109; // [rsp+260h] [rbp-48h]
  int v110; // [rsp+268h] [rbp-40h]

  v10 = a2 - 9;
  v11 = *(_WORD *)(a1 + 32);
  v57 = 0;
  if ( v11 != 86 )
  {
LABEL_2:
    v86 = 0;
    v89[2] = a1 + 504;
    v87 = v89;
    v88 = 0x200000000LL;
    v89[3] = &v90;
    v89[4] = 0x200000000LL;
    if ( (unsigned __int16)(v11 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_14AB020(a1, (unsigned int *)&v86, a7, a8);
    if ( v10 <= 1 )
    {
      v12 = 0;
      if ( *(_WORD *)(a1 + 32) != 5 )
        goto LABEL_6;
    }
    LODWORD(v101) = 0;
    v102 = 0;
    *(_OWORD *)ptr = 0;
    v104 = 0;
    v105 = 0;
    v106 = 0;
    v107 = 0;
    v108 = 0;
    v109 = 0;
    v110 = 0;
    v14 = sub_149FD30(a1, a2, (__int64)&v101);
    v91 = 0;
    v60 = v14;
    v92 = (char *)&v94;
    v93 = 0x200000000LL;
    v96 = 0x200000000LL;
    v15 = *(_WORD *)(a1 + 32);
    v95[0] = a1 + 504;
    v95[1] = &v97;
    if ( v15 == 320 || v15 == 189 || (unsigned __int16)(v15 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
      sub_1485110(a1, 5, (__int64)&v91, 0);
    if ( (_DWORD)v86 && HIDWORD(v86) )
    {
      if ( (_DWORD)v88 && *v87 && (*(_BYTE *)(*v87 + 35) & 2) != 0 )
      {
        v62 = *v87;
        sub_1564820(&v79, a1, (unsigned int)v86, 1716);
        sub_AE9DF0(&v79, v62, 0x10u);
        sub_FC70F0((__int64)v98, (__int64)&v79);
        v61 = 1;
      }
      else
      {
        sub_1564820(v98, a1, (unsigned int)v86, 1558);
        v61 = 0;
      }
      v16 = *(_DWORD *)(a1 + 16);
      v69[0] = 0;
      v17 = v86;
      v18 = HIDWORD(v86);
      v68 = 0;
      v67 = v69;
      v63[0] = v16;
      v63[1] = v16;
      v64 = 0;
      v65 = v86;
      v66 = 1;
      v69[16] = 0;
      if ( v16 )
      {
        sub_14A2370((__int64 *)v98, (unsigned __int64)v63);
        v18 = HIDWORD(v86);
        v17 = v86;
      }
      v73 = 0;
      v74 = 0;
      v75 = v77;
      v76 = 0;
      v77[0] = 0;
      v78 = 0;
      v70 = v17;
      v71 = v18;
      v72 = 1;
      if ( v18 )
      {
        if ( v17 )
        {
          sub_14A2370((__int64 *)v98, (unsigned __int64)&v70);
          if ( v75 != v77 )
            operator delete(v75);
        }
      }
      if ( v67 != v69 )
        operator delete(v67);
      sub_AEA040((__int64)v98);
      if ( v61 )
        sub_AEA040((__int64)&v79);
      sub_147F860((__int64)&v91, (__int64)&v86);
    }
    if ( *(_WORD *)(a1 + 32) == 64 || v10 <= 1 )
    {
      if ( v60 )
      {
        LOWORD(v98[0]) = 63;
        v12 = 0;
        sub_15680D0(a1, v98, 1, 0);
        goto LABEL_31;
      }
      if ( *(_DWORD *)a6 && *(_DWORD *)(a6 + 4) )
      {
        sub_1481BE0(a1, (unsigned int *)a6, 0);
        v21 = *(_QWORD *)(a6 + 40);
        *(_DWORD *)(a6 + 16) = 0;
        sub_15DCED0(v21, a6 + 40);
        *(_QWORD *)a6 = 0;
        *(_DWORD *)(a6 + 56) = 0;
      }
      v98[0] = nullptr;
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL);
      if ( v22 )
        sub_15ED1C0(v22, *(_QWORD *)v22, *(_DWORD *)(v22 + 8) | 0x40000000u);
      v23 = sub_14A47B0(
              a1,
              a3,
              a4,
              (unsigned int *)&v101,
              a5,
              a9,
              (__m128i)0LL,
              a8,
              (__int64)&v91,
              (unsigned __int8 **)v98);
      if ( v23 )
      {
        v12 = sub_17A2530(*(_QWORD *)(a1 + 96), v23, v98[0]);
        goto LABEL_31;
      }
    }
    else
    {
      sub_147D2B0(a1, a6);
      if ( !*a3 )
      {
        v98[0] = &v98[2];
        v98[1] = (void *)0x800000000LL;
        while ( 1 )
        {
          v27 = *(_WORD *)(a1 + 32);
          if ( v27 == 320 || v27 == 189 || (unsigned __int16)(v27 - 406) <= 8u || (unsigned int)sub_155CBC0(a1, 0, 0) )
            sub_1485110(a1, 5, (__int64)&v91, 0);
          sub_147D2B0(a1, (__int64)&v91);
          sub_147F500(
            (__int64 *)&v92,
            v92,
            *(char **)(a6 + 8),
            (char *)(*(_QWORD *)(a6 + 8) + 8LL * *(unsigned int *)(a6 + 16)));
          if ( v60 )
          {
            LODWORD(v79) = 4128834;
            sub_15680D0(a1, &v79, 2, 2);
          }
          else
          {
            if ( (_DWORD)v101 && v107 )
            {
              sub_1564820(&v79, a1, (unsigned int)v109, 1903);
              v73 = 0;
              v74 = 0;
              v75 = v77;
              v76 = 0;
              v77[0] = 0;
              v78 = 0;
              v70 = (int)v101;
              v71 = (int)v101;
              v72 = 1;
              if ( (_DWORD)v101 )
              {
                sub_14A2370((__int64 *)&v79, (unsigned __int64)&v70);
                if ( v75 != v77 )
                  operator delete(v75);
              }
              sub_AEA040((__int64)&v79);
              LODWORD(v101) = 0;
            }
            v28 = sub_185BF60(
                    *(_QWORD *)(a1 + 96),
                    *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                    a9,
                    a4,
                    (_DWORD)v101,
                    (unsigned int)&v102,
                    (__int64)&v107,
                    v110,
                    (__int64)&v91);
            if ( v28 )
              sub_147FE60((__int64)v98, v28);
          }
          v29 = *(unsigned int *)(a1 + 16);
          if ( *(_WORD *)(a1 + 32) != 66 )
            break;
          *(_DWORD *)(a1 + 40) = v29;
          sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
          LODWORD(v93) = 0;
          sub_15DCED0(v95[0], v95);
          LODWORD(v96) = 0;
          v91 = 0;
          v60 = sub_149FD30(a1, a2, (__int64)&v101);
        }
        if ( LODWORD(v98[1]) > 1 )
        {
          sub_1564820(
            &v79,
            a1,
            v29,
            (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) & 0x40) == 0 ? 2008 : 2095);
          sub_AEA040((__int64)&v79);
          LODWORD(v29) = *(_DWORD *)(a1 + 16);
        }
        v30 = v93;
        v31 = "attributes list";
        *a5 = v29;
        if ( !v30 )
        {
          v31 = "using-enum declaration";
          if ( !v57 )
            v31 = "using declaration";
        }
        v32 = j__strlen(v31);
        if ( (unsigned __int8)sub_1569A00(a1, 63, 15, v31, v32) )
        {
          LOWORD(v79) = 63;
          sub_15680D0(a1, &v79, 1, 0);
        }
        v12 = sub_17B2ED0(*(_QWORD *)(a1 + 96), v98[0]);
        if ( v98[0] != &v98[2] )
          free(v98[0]);
        goto LABEL_31;
      }
      v24 = sub_154F1B0(a3);
      v25 = v24;
      v26 = HIDWORD(v24);
      sub_1564820(v98, a1, a4, 1897);
      sub_AE9DF0((unsigned __int8 **)v98, 1, 2u);
      v79 = (unsigned __int8 *)__PAIR64__(v26, v25);
      v80 = 1;
      sub_AEC610((__int64 *)v98, (__int64 *)&v79);
      v81 = 0;
      v82 = 0;
      v83 = v85;
      v84 = 0;
      v85[0] = 0;
      v85[16] = 0;
      v79 = (unsigned __int8 *)__PAIR64__(v26, v25);
      v80 = 1;
      if ( v25 )
      {
        if ( v26 )
        {
          sub_14A2370((__int64 *)v98, (unsigned __int64)&v79);
          if ( v83 != v85 )
            operator delete(v83);
        }
      }
      sub_AEA040((__int64)v98);
    }
    v12 = 0;
LABEL_31:
    sub_147A450(&v91);
    if ( HIDWORD(v104) )
      free(ptr[1]);
LABEL_6:
    sub_147A450(&v86);
    return v12;
  }
  v19 = (int *)(a1 + 16);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v57 = *(_DWORD *)(a1 + 40);
  if ( v10 <= 1 )
  {
    v11 = *(_WORD *)(a1 + 32);
    goto LABEL_2;
  }
  sub_1564820(
    &v101,
    a1,
    *(unsigned int *)(a1 + 40),
    ((*(char *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 56LL) + 1LL) >> 31) & 0x49u) + 2024);
  sub_AEA040((__int64)&v101);
  sub_147D2B0(a1, a6);
  if ( !*a3 )
  {
    memset(v98, 0, sizeof(v98));
    v99 = 0;
    if ( !(unsigned __int8)sub_14D0170(a1, (unsigned int)v98, 0, 0, 0, 0, 1, 0, 0, 1, 0) )
    {
      v20 = *(_WORD *)(a1 + 32);
      switch ( v20 )
      {
        case 3:
          v37 = *(_QWORD *)(a1 + 8);
          if ( *(_QWORD *)(v37 + 760) )
          {
            *(_BYTE *)(v37 + 968) = 1;
            *(_BYTE *)(*(_QWORD *)(v37 + 48) + 6LL) = 1;
          }
          v38 = *(_QWORD *)(a1 + 96);
          v12 = 0;
          *(_WORD *)(a1 + 32) = 1;
          sub_170AA80(*(_QWORD *)(v38 + 656), *(_QWORD *)(v38 + 608));
          goto LABEL_41;
        case 5:
          v39 = *(__int64 **)(a1 + 8);
          v40 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
          sub_14634E0(v39, v19);
          v41 = *(_DWORD *)(a1 + 40);
          v42 = sub_18013B0(*(_QWORD *)(a1 + 96), 0, 0, 0, 1, 1, 0, 0);
          v43 = sub_1854990(
                  *(_QWORD *)(a1 + 96),
                  *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                  a9,
                  a4,
                  v57,
                  v41,
                  v40,
                  v42,
                  (__int64)v98);
          break;
        case 418:
          v46 = sub_1565590(a1, v19);
          v47 = *(_DWORD *)(v46 + 32);
          if ( (v47 & 0xFFFFFFFD) != 0 && (unsigned int)(v47 - 4) > 1 )
          {
            sub_1564820(&v101, a1, *(unsigned int *)(a1 + 16), 5413);
            sub_AEC220(
              &v101,
              (_BYTE *)(*(_QWORD *)(*(_QWORD *)(v46 + 8) + 16LL) + 16LL),
              **(unsigned int **)(*(_QWORD *)(v46 + 8) + 16LL));
            v51 = *(_DWORD *)(v46 + 40);
            v52 = *(_DWORD *)(v46 + 4);
            LOBYTE(v92) = 1;
            v91 = __PAIR64__(v51, v52);
            sub_AEC610((__int64 *)&v101, (__int64 *)&v91);
            sub_AEA040((__int64)&v101);
            goto LABEL_40;
          }
          sub_154E5D0(a1, v98, 0, 1);
          v48 = *(_DWORD *)(a1 + 20);
          v49 = *(_DWORD *)(a1 + 16);
          v50 = *(__int64 **)(a1 + 8);
          if ( !v48 )
            v48 = v49;
          v54 = *(_QWORD *)(a1 + 24);
          *(_DWORD *)(a1 + 40) = v48;
          sub_14634E0(v50, v19);
          v43 = sub_1854990(
                  *(_QWORD *)(a1 + 96),
                  *(_QWORD *)(*(_QWORD *)(a1 + 96) + 608LL),
                  a9,
                  a4,
                  v57,
                  v49,
                  *(_QWORD *)(v46 + 8),
                  v54,
                  (__int64)v98);
          break;
        default:
          sub_1564820(&v101, a1, *(unsigned int *)(a1 + 16), 1931);
          sub_AE9DF0(&v101, *(_WORD *)(a1 + 32) == 86, 2u);
          sub_AEA040((__int64)&v101);
          goto LABEL_40;
      }
      v44 = v43;
      if ( v43 )
      {
        *a5 = *(_DWORD *)(a1 + 16);
        v45 = j__strlen("using-enum declaration");
        if ( (unsigned __int8)sub_1569A00(a1, 63, 15, "using-enum declaration", v45) )
        {
          LOWORD(v101) = 63;
          sub_15680D0(a1, &v101, 1, 0);
        }
        v12 = sub_17A2530(*(_QWORD *)(a1 + 96), v44, 0);
        goto LABEL_41;
      }
    }
LABEL_40:
    LOWORD(v101) = 63;
    v12 = 0;
    sub_15680D0(a1, &v101, 1, 0);
LABEL_41:
    if ( HIDWORD(v98[3]) )
      free(v98[2]);
    return v12;
  }
  v33 = sub_154F1B0(a3);
  v34 = v33;
  v35 = v33;
  sub_1564820(&v101, a1, a4, 1897);
  v36 = HIDWORD(v35);
  sub_AE9DF0(&v101, 1, 2u);
  v98[0] = (void *)__PAIR64__(v36, v34);
  LOBYTE(v98[1]) = 1;
  sub_AEC610((__int64 *)&v101, (__int64 *)v98);
  BYTE4(v98[2]) = 0;
  *(void **)((char *)&v98[1] + 4) = nullptr;
  v98[3] = (char *)&v99 + 8;
  *(_QWORD *)&v99 = 0;
  BYTE8(v99) = 0;
  v100 = 0;
  v98[0] = (void *)__PAIR64__(v36, v34);
  LOBYTE(v98[1]) = 1;
  if ( v34 )
  {
    if ( v36 )
    {
      sub_14A2370((__int64 *)&v101, (unsigned __int64)v98);
      if ( v98[3] != (char *)&v99 + 8 )
        operator delete(v98[3]);
    }
  }
  sub_AEA040((__int64)&v101);
  v12 = 0;
  LOWORD(v101) = 63;
  sub_15680D0(a1, &v101, 1, 0);
  return v12;
}

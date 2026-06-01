__int64 __fastcall sub_2EF580(int a1, __int64 a2, char a3, __int64 a4, __int64 *a5)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rbx
  _OWORD *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // rdx
  _QWORD *v23; // rax
  int v24; // eax
  unsigned int v25; // r12d
  __int64 i; // rax
  int *v27; // rdx
  int v28; // edx
  int v29; // ecx
  int v30; // r8d
  int v31; // r9d
  void *v32; // r14
  void *v34; // [rsp+0h] [rbp-690h]
  int v35; // [rsp+0h] [rbp-690h]
  __int64 v36; // [rsp+8h] [rbp-688h]
  int v37; // [rsp+8h] [rbp-688h]
  char v38; // [rsp+Fh] [rbp-681h]
  int v39; // [rsp+10h] [rbp-680h]
  const char *v40; // [rsp+10h] [rbp-680h]
  __int64 v41; // [rsp+18h] [rbp-678h]
  __int64 v43; // [rsp+20h] [rbp-670h]
  __int64 v44; // [rsp+28h] [rbp-668h]
  void (***v45)(void); // [rsp+28h] [rbp-668h]
  __int64 v47; // [rsp+30h] [rbp-660h]
  __int64 v48; // [rsp+30h] [rbp-660h]
  _QWORD *v49; // [rsp+38h] [rbp-658h]
  void *v50; // [rsp+40h] [rbp-650h]
  int v51[2]; // [rsp+48h] [rbp-648h]
  _QWORD *v52; // [rsp+48h] [rbp-648h]
  int v53; // [rsp+50h] [rbp-640h]
  int v54; // [rsp+50h] [rbp-640h]
  __int64 v55; // [rsp+58h] [rbp-638h] BYREF
  __int64 v56; // [rsp+60h] [rbp-630h] BYREF
  __int64 v57; // [rsp+68h] [rbp-628h]
  __int64 v58; // [rsp+70h] [rbp-620h] BYREF
  __int64 v59; // [rsp+78h] [rbp-618h]
  __int64 v60; // [rsp+80h] [rbp-610h] BYREF
  __int64 v61; // [rsp+88h] [rbp-608h]
  void *v62; // [rsp+90h] [rbp-600h]
  int v63; // [rsp+98h] [rbp-5F8h]
  int v64[2]; // [rsp+A0h] [rbp-5F0h] BYREF
  void *v65; // [rsp+A8h] [rbp-5E8h] BYREF
  void *v66; // [rsp+C0h] [rbp-5D0h]
  __int64 v67; // [rsp+D8h] [rbp-5B8h]
  char v68[16]; // [rsp+E0h] [rbp-5B0h] BYREF
  char v69[24]; // [rsp+F0h] [rbp-5A0h] BYREF
  char v70[16]; // [rsp+108h] [rbp-588h] BYREF
  char v71[64]; // [rsp+118h] [rbp-578h] BYREF
  __int64 v72; // [rsp+158h] [rbp-538h] BYREF
  __m128 v73; // [rsp+160h] [rbp-530h]
  int v74; // [rsp+170h] [rbp-520h]
  __int64 *v75; // [rsp+178h] [rbp-518h]
  __int64 v76; // [rsp+180h] [rbp-510h]
  int v77; // [rsp+188h] [rbp-508h]
  __int64 *v78; // [rsp+190h] [rbp-500h]
  __int64 v79; // [rsp+198h] [rbp-4F8h]
  int v80; // [rsp+1A0h] [rbp-4F0h]
  __int64 v81; // [rsp+1A8h] [rbp-4E8h]
  __int64 v82[6]; // [rsp+1B0h] [rbp-4E0h] BYREF
  char v83[24]; // [rsp+1E0h] [rbp-4B0h] BYREF
  char v84[8]; // [rsp+1F8h] [rbp-498h] BYREF
  void *v85; // [rsp+200h] [rbp-490h]
  void *v86; // [rsp+208h] [rbp-488h]
  int v87; // [rsp+220h] [rbp-470h] BYREF
  char v88[376]; // [rsp+228h] [rbp-468h] BYREF
  _QWORD v89[3]; // [rsp+3A0h] [rbp-2F0h] BYREF
  int v90; // [rsp+3B8h] [rbp-2D8h]
  __int64 *v91; // [rsp+3C0h] [rbp-2D0h]
  char v92[48]; // [rsp+3C8h] [rbp-2C8h] BYREF
  __int64 v93; // [rsp+3F8h] [rbp-298h]
  char v94[16]; // [rsp+400h] [rbp-290h] BYREF
  char v95[24]; // [rsp+410h] [rbp-280h] BYREF
  char v96[16]; // [rsp+428h] [rbp-268h] BYREF
  char v97[64]; // [rsp+438h] [rbp-258h] BYREF
  __int64 v98; // [rsp+478h] [rbp-218h] BYREF
  __m128 v99; // [rsp+480h] [rbp-210h]
  int v100; // [rsp+490h] [rbp-200h]
  __int64 *v101; // [rsp+498h] [rbp-1F8h]
  __int64 v102; // [rsp+4A0h] [rbp-1F0h]
  int v103; // [rsp+4A8h] [rbp-1E8h]
  __int64 *v104; // [rsp+4B0h] [rbp-1E0h]
  __int64 v105; // [rsp+4B8h] [rbp-1D8h]
  int v106; // [rsp+4C0h] [rbp-1D0h]
  __int64 v107; // [rsp+4C8h] [rbp-1C8h]
  __int64 v108; // [rsp+4D0h] [rbp-1C0h]
  __int64 v109; // [rsp+4D8h] [rbp-1B8h]
  __int64 v110; // [rsp+4E0h] [rbp-1B0h]
  __int64 v111; // [rsp+4E8h] [rbp-1A8h]
  __int64 v112; // [rsp+4F0h] [rbp-1A0h]
  __int64 v113; // [rsp+4F8h] [rbp-198h]
  char v114[24]; // [rsp+500h] [rbp-190h] BYREF
  char v115[32]; // [rsp+518h] [rbp-178h] BYREF
  int v116; // [rsp+538h] [rbp-158h]
  __int64 v117; // [rsp+540h] [rbp-150h]
  int v118; // [rsp+548h] [rbp-148h]
  __int64 v119; // [rsp+550h] [rbp-140h]
  int v120; // [rsp+558h] [rbp-138h]
  __int64 v121; // [rsp+560h] [rbp-130h]
  __int64 v122; // [rsp+570h] [rbp-120h]
  void *ptr; // [rsp+578h] [rbp-118h]
  __int64 v124; // [rsp+580h] [rbp-110h]
  __int64 v125; // [rsp+588h] [rbp-108h]
  __int64 v126; // [rsp+590h] [rbp-100h]
  char v127[248]; // [rsp+598h] [rbp-F8h] BYREF

  v6 = *(_QWORD *)(a2 + 8);
  sub_16511B0(&v65);
  *(_QWORD *)v64 = &off_1C63D10;
  v67 = v6;
  sub_16669D0(v68, v6);
  sub_16744A0(v69, v6);
  sub_1684300(v70, v6);
  sub_15C5470(v71, v6);
  v72 = v6;
  sub_180C5A0(v89, "seq");
  v7 = sub_15DA4C0(v6 + 560, v89);
  v8 = sub_15D2690(v6, v7);
  v73 = _mm_loadh_ps((const double *)(v8 + 88));
  v9 = *(_DWORD *)(v8 + 16);
  v75 = &v72;
  v76 = v72;
  v79 = v72;
  v82[0] = v72;
  v74 = v9;
  v77 = v9;
  v78 = &v72;
  v80 = v9;
  v81 = 0;
  memset(&v82[1], 0, 24);
  v82[4] = 0xFFFFFFFFLL;
  v82[5] = 0;
  sub_15F01E0(v83, v6);
  sub_1624F90(v84, v6);
  v89[0] = *(_QWORD *)(a2 + 8);
  v10 = v89[0];
  v11 = (_OWORD *)sub_186B270(0x40u);
  v89[1] = v11;
  *v11 = 0;
  v11[1] = 0;
  v11[2] = 0;
  v11[3] = 0;
  v89[2] = 8;
  v90 = 0;
  v91 = qword_1C7A350;
  sub_16511B0(v92);
  v93 = v10;
  v91 = (__int64 *)&off_1C63D10;
  sub_16669D0(v94, v10);
  sub_16744A0(v95, v10);
  sub_1684300(v96, v10);
  sub_15C5470(v97, v10);
  v98 = v10;
  sub_180C5A0(&v60, "seq");
  v12 = sub_15DA4C0(v10 + 560, &v60);
  v13 = sub_15D2690(v10, v12);
  v99 = _mm_loadh_ps((const double *)(v13 + 88));
  v14 = *(_DWORD *)(v13 + 16);
  v101 = &v98;
  v102 = v98;
  v105 = v98;
  v108 = v98;
  v100 = v14;
  v103 = v14;
  v104 = &v98;
  v106 = v14;
  v107 = 0;
  v109 = 0;
  v110 = 0;
  v111 = 0;
  v112 = 0xFFFFFFFFLL;
  v113 = 0;
  sub_15F01E0(v114, v10);
  sub_1624F90(v115, v10);
  v117 = 0;
  v116 = 0;
  v119 = 0;
  v118 = 0;
  v121 = 0;
  v120 = 0;
  v122 = 0;
  ptr = nullptr;
  v124 = v10;
  v125 = 0;
  v126 = 0;
  sub_15C0990(v127, v10);
  std::ostringstream::basic_ostringstream(&v87);
  sub_168AD20(v89, a4);
  v15 = sub_1336AB0(*(_QWORD *)(a2 + 624), *(_QWORD *)(a2 + 632));
  v44 = v15;
  if ( v15 )
  {
    ++*(_DWORD *)(v15 + 8);
    v16 = *a5;
    if ( !*a5 )
      goto LABEL_9;
    *(_QWORD *)v51 = v16 + 104LL * *(unsigned int *)(v16 - 4);
    if ( *(_QWORD *)v51 == v16 )
      goto LABEL_9;
  }
  else
  {
    v16 = *a5;
    if ( !*a5 )
      goto LABEL_10;
    *(_QWORD *)v51 = v16 + 104LL * *(unsigned int *)(v16 - 4);
    if ( *(_QWORD *)v51 == v16 )
      goto LABEL_10;
  }
  v17 = v16;
  do
  {
    while ( *(_DWORD *)v17 <= 1u )
    {
      sub_168ACC0(v89, *(_QWORD *)(v17 + 8));
      v17 += 104;
      if ( *(_QWORD *)v51 == v17 )
        goto LABEL_9;
    }
    if ( *(_DWORD *)v17 != 2 )
    {
      sub_1872CE0("");
      sub_1873130(114, 1658);
    }
    sub_168AD20(v89, v17 + 24);
    v17 += 104;
  }
  while ( *(_QWORD *)v51 != v17 );
LABEL_9:
  HIBYTE(v36) = a3 & (v44 != 0);
  if ( HIBYTE(v36) )
  {
    (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v44 + 64LL))(v44, v89);
    goto LABEL_11;
  }
LABEL_10:
  HIBYTE(v36) = 0;
LABEL_11:
  sub_1857380(&v55);
  sub_2FC030(&v55);
  sub_185EC20(&v55);
  sub_185CD70(&v55);
  sub_185F620(a2 + 288, &v87, "opt", &v55);
  sub_168C010(
    (int)v89,
    (int)&v87,
    v18,
    v19,
    v20,
    v21,
    v34,
    v36,
    v39,
    a1,
    (__int64)&v55,
    v44,
    a4,
    (int)v89,
    (int)&v60,
    v51[0],
    v53,
    v55,
    v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62,
    v63,
    v64[0],
    v65);
  sub_168BA90(v89, &v87, v47, *(unsigned __int8 *)(a2 + 747));
  if ( *a5 )
  {
    v22 = *a5;
    v48 = *a5 + 104LL * *(unsigned int *)(*a5 - 4);
    if ( v48 != *a5 )
    {
      v52 = (_QWORD *)(v22 + 88);
      v23 = (_QWORD *)(v22 + 88);
      while ( 1 )
      {
        v24 = *((_DWORD *)v23 - 22);
        if ( v24 == 1 )
          goto LABEL_32;
        if ( v24 != 2 )
          break;
        v25 = 0;
        for ( i = *(v52 - 7); i; i = *(v52 - 7) )
        {
          if ( v25 >= *(_DWORD *)(i - 4) )
            break;
          std::__ostream_insert<char,std::char_traits<char>>();
          v60 = 0;
          sub_160DF70((int)&v87, *(_QWORD *)(*(v52 - 7) + 8LL * v25), (int)v64, (int)v50, 0, 0, nullptr);
          sub_18572D0(v50);
          v27 = (int *)(*(v52 - 6) + 32LL * v25);
          v56 = 0;
          v57 = 0;
          v58 = 1;
          v59 = 0;
          sub_27B950((__int64)qword_1C7F2C0, (__int64)&v56, v27);
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_18499F0((int)qword_1C7F2C0, (int)&v87);
          if ( *v52 )
          {
            if ( (unsigned __int8)sub_17E8F70(v52) )
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_17E8F90(
                (int)v50,
                (int)v52,
                v28,
                v29,
                v30,
                v31,
                v35,
                v37,
                (int)v40,
                v41,
                v43,
                (int)v45,
                v48,
                (int)v49,
                (int)v50,
                v52,
                v54,
                v55);
              std::__ostream_insert<char,std::char_traits<char>>();
              sub_233E40((__int64)v50);
            }
            else
            {
              std::__ostream_insert<char,std::char_traits<char>>();
              if ( (*v52 & 7) != 0 )
              {
                v40 = (const char *)*v52;
                std::__ostream_insert<char,std::char_traits<char>>();
                std::ostream::operator<<();
              }
              else
              {
                if ( *v52 )
                {
                  v40 = (const char *)*v52;
                  strlen((const char *)*v52);
                }
                std::__ostream_insert<char,std::char_traits<char>>();
              }
            }
          }
          std::__ostream_insert<char,std::char_traits<char>>();
          v32 = qword_1C7F2C0;
          ++v25;
          sub_182CBA0(qword_1C7F2C0, &v56);
          sub_182CBA0(v32, &v58);
        }
LABEL_16:
        v23 = v52 + 13;
        if ( (_QWORD *)v48 == v52 + 2 )
          goto LABEL_34;
        v52 += 13;
      }
      if ( v24 )
      {
        sub_1872CE0("");
        sub_1873130(114, 1703);
      }
LABEL_32:
      std::__ostream_insert<char,std::char_traits<char>>();
      v60 = 0;
      sub_160DF70((int)&v87, *(v52 - 10), (int)v64, (int)v50, 0, 0, nullptr);
      sub_18572D0(v50);
      std::__ostream_insert<char,std::char_traits<char>>();
      goto LABEL_16;
    }
  }
LABEL_34:
  if ( v38 )
  {
    ((void (__fastcall *)(void (***)(void), int *))(*v45)[3])(v45, &v87);
    ((void (__fastcall *)(void (***)(void), _QWORD))(*v45)[8])(v45, 0);
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::stringbuf::str(v41, v88);
  sub_1857540(v43);
  sub_2EB3E0(v45);
  std::ostringstream::~ostringstream();
  sub_2B2E00(v49);
  *(_QWORD *)v64 = &off_1C63D10;
  if ( v86 )
    sub_186B220(v86);
  if ( v85 )
    sub_186B220(v85);
  sub_2334C0(v82);
  if ( v81 )
    sub_186B220((void *)(v81 - 8));
  *(_QWORD *)v64 = qword_1C7A350;
  if ( v66 )
    sub_186B220(v66);
  if ( v65 )
    sub_186B220(v65);
  return v41;
}


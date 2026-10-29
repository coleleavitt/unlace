__int64 *__fastcall sub_3D4EE0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rbp
  _OWORD *v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rax
  int v8; // edx
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  _QWORD *v13; // rbx
  _QWORD *v14; // r15
  __int64 *v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 *result; // rax
  void *v21; // [rsp+0h] [rbp-338h]
  int v22[4]; // [rsp+10h] [rbp-328h] BYREF
  __int64 v23; // [rsp+20h] [rbp-318h] BYREF
  int v24; // [rsp+28h] [rbp-310h]
  __int64 v25; // [rsp+30h] [rbp-308h]
  int v26; // [rsp+38h] [rbp-300h]
  __int64 v27; // [rsp+40h] [rbp-2F8h] BYREF
  void *v28; // [rsp+48h] [rbp-2F0h]
  int v29[2]; // [rsp+50h] [rbp-2E8h]
  int v30; // [rsp+58h] [rbp-2E0h]
  int v31[2]; // [rsp+60h] [rbp-2D8h]
  void *v32; // [rsp+68h] [rbp-2D0h] BYREF
  int v33; // [rsp+70h] [rbp-2C8h]
  __int64 v34; // [rsp+78h] [rbp-2C0h]
  void *v35; // [rsp+80h] [rbp-2B8h]
  int v36; // [rsp+88h] [rbp-2B0h]
  void *v37; // [rsp+90h] [rbp-2A8h]
  int v38[2]; // [rsp+98h] [rbp-2A0h]
  int v39; // [rsp+A0h] [rbp-298h] BYREF
  void *v40; // [rsp+A8h] [rbp-290h]
  _BYTE v41[24]; // [rsp+B0h] [rbp-288h] BYREF
  _BYTE v42[16]; // [rsp+C8h] [rbp-270h] BYREF
  _BYTE v43[64]; // [rsp+D8h] [rbp-260h] BYREF
  __int64 v44; // [rsp+118h] [rbp-220h] BYREF
  __m128 v45; // [rsp+120h] [rbp-218h]
  int v46; // [rsp+130h] [rbp-208h]
  __int64 *v47; // [rsp+138h] [rbp-200h]
  __int64 v48; // [rsp+140h] [rbp-1F8h]
  int v49; // [rsp+148h] [rbp-1F0h]
  __int64 *v50; // [rsp+150h] [rbp-1E8h]
  __int64 v51; // [rsp+158h] [rbp-1E0h]
  int v52; // [rsp+160h] [rbp-1D8h]
  __int64 v53; // [rsp+168h] [rbp-1D0h]
  __int64 v54[6]; // [rsp+170h] [rbp-1C8h] BYREF
  _BYTE v55[24]; // [rsp+1A0h] [rbp-198h] BYREF
  _BYTE v56[8]; // [rsp+1B8h] [rbp-180h] BYREF
  void *v57; // [rsp+1C0h] [rbp-178h]
  void *v58; // [rsp+1C8h] [rbp-170h]
  int v59; // [rsp+1D8h] [rbp-160h]
  __int64 v60; // [rsp+1E0h] [rbp-158h]
  int v61; // [rsp+1E8h] [rbp-150h]
  __int64 v62; // [rsp+1F0h] [rbp-148h]
  int v63; // [rsp+1F8h] [rbp-140h]
  __int64 v64; // [rsp+200h] [rbp-138h]
  __int64 v65; // [rsp+210h] [rbp-128h]
  void *v66; // [rsp+218h] [rbp-120h]
  __int64 v67[2]; // [rsp+220h] [rbp-118h] BYREF
  __int64 v68; // [rsp+230h] [rbp-108h]
  _BYTE v69[8]; // [rsp+238h] [rbp-100h] BYREF
  __int64 v70; // [rsp+240h] [rbp-F8h]
  __int64 v71; // [rsp+248h] [rbp-F0h]
  __int64 v72; // [rsp+250h] [rbp-E8h]
  __int64 v73; // [rsp+258h] [rbp-E0h]
  __int64 v74; // [rsp+260h] [rbp-D8h]
  __int64 v75; // [rsp+268h] [rbp-D0h]
  __int64 (__fastcall **v76)(); // [rsp+270h] [rbp-C8h]
  void *v77; // [rsp+288h] [rbp-B0h]
  void *v78; // [rsp+2A0h] [rbp-98h]
  __int64 v79; // [rsp+2A8h] [rbp-90h]
  __int64 *v80; // [rsp+2B0h] [rbp-88h]
  __int64 v81; // [rsp+2B8h] [rbp-80h]
  __int64 v82; // [rsp+2F8h] [rbp-40h]

  v27 = *a3;
  v4 = v27;
  v5 = (_OWORD *)sub_186B270(0x40u);
  *(_QWORD *)v29 = 8;
  v28 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  v5[3] = 0;
  v30 = 0;
  sub_16511B0(&v32);
  *(_QWORD *)v38 = v4;
  *(_QWORD *)v31 = &off_1C63D10;
  sub_16669D0(&v39, v4);
  sub_16744A0(v41, v4);
  sub_1684300(v42, v4);
  sub_15C5470(v43, v4);
  v44 = v4;
  sub_180C5A0(v22, "seq");
  v6 = sub_15DA4C0(v4 + 560, v22);
  v7 = sub_15D2690(v4, v6);
  v45 = _mm_loadh_ps((const double *)(v7 + 88));
  v8 = *(_DWORD *)(v7 + 16);
  v47 = &v44;
  v48 = v44;
  v51 = v44;
  v54[0] = v44;
  v46 = v8;
  v49 = v8;
  v50 = &v44;
  v52 = v8;
  v53 = 0;
  memset(&v54[1], 0, 24);
  v54[4] = 0xFFFFFFFFLL;
  v54[5] = 0;
  sub_15F01E0(v55, v4);
  sub_1624F90(v56, v4);
  v60 = 0;
  v59 = 0;
  v62 = 0;
  v61 = 0;
  v64 = 0;
  v63 = 0;
  v65 = 0;
  v66 = nullptr;
  v67[0] = v4;
  v67[1] = 0;
  v68 = 0;
  sub_15C0990(v69, v4);
  sub_168ACC0(&v27, a2);
  sub_168C010(
    (int)&v27,
    a1,
    v9,
    v10,
    v11,
    v12,
    v21,
    (__int64)&v27,
    v22[0],
    v22[2],
    v23,
    v24,
    v25,
    v26,
    v27,
    (int)v28,
    v29[0],
    v30,
    v31[0],
    (int)v32,
    v33,
    v34,
    (int)v35,
    v36,
    v37,
    v38[0],
    v39,
    v40);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_1606360(v22, a2, v4, 0, 0, 0);
  sub_160E8B0(a1, v22);
  std::__ostream_insert<char,std::char_traits<char>>();
  sub_18572D0(&v23);
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  v13 = (_QWORD *)a3[1];
  if ( v13 )
  {
    v14 = &v13[*((unsigned int *)v13 - 1)];
    while ( v14 != v13 )
    {
      sub_1606360(v22, *v13, v4, 0, 0, 0);
      sub_160E8B0(a1, v22);
      std::__ostream_insert<char,std::char_traits<char>>();
      ++v13;
      sub_18572D0(&v23);
    }
  }
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  std::__ostream_insert<char,std::char_traits<char>>();
  if ( v82 )
    sub_186B220((void *)(v82 - 8));
  if ( v81 )
    sub_186B220((void *)(v81 - 8));
  v15 = v80;
  if ( v80 )
  {
    v16 = (unsigned __int64)&v80[*((unsigned int *)v80 - 1)];
    if ( (unsigned __int64)v80 >= v16 )
      goto LABEL_16;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = v79;
          if ( (*(_DWORD *)(v17 + 8))-- == 1 )
            break;
        }
        if ( (unsigned __int64)++v15 >= v16 )
          goto LABEL_15;
      }
      sub_15D7BC0(v18, v17);
      ++v15;
    }
    while ( (unsigned __int64)v15 < v16 );
LABEL_15:
    v15 = v80;
    if ( v80 )
LABEL_16:
      sub_186B220(v15 - 1);
  }
  v76 = &off_1C62200;
  if ( v78 )
    sub_186B220(v78);
  if ( v77 )
    sub_186B220(v77);
  if ( v75 )
    sub_186B220((void *)(v75 - 8));
  if ( v74 )
    sub_186B220((void *)(v74 - 8));
  if ( v73 )
    sub_186B220((void *)(v73 - 8));
  if ( v72 )
    sub_186B220((void *)(v72 - 8));
  if ( v71 )
    sub_186B220((void *)(v71 - 8));
  if ( v70 )
    sub_186B220((void *)(v70 - 8));
  if ( v68 )
    sub_186B220((void *)(v68 - 8));
  sub_2334C0(v67);
  if ( v66 )
    sub_186B220(v66);
  if ( v64 )
    sub_186B220((void *)(v64 - 8));
  if ( v62 )
    sub_186B220((void *)(v62 - 8));
  if ( v60 )
    sub_186B220((void *)(v60 - 8));
  *(_QWORD *)v31 = &off_1C63D10;
  if ( v58 )
    sub_186B220(v58);
  if ( v57 )
    sub_186B220(v57);
  sub_2334C0(v54);
  if ( v53 )
    sub_186B220((void *)(v53 - 8));
  result = qword_1C7A350;
  *(_QWORD *)v31 = qword_1C7A350;
  if ( v35 )
    result = (__int64 *)sub_186B220(v35);
  if ( v32 )
    result = (__int64 *)sub_186B220(v32);
  if ( v28 )
    return (__int64 *)sub_186B220(v28);
  return result;
}


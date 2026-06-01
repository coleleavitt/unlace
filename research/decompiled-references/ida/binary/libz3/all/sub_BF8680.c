__int64 __fastcall sub_BF8680(__int64 a1, _DWORD *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  unsigned int v5; // r12d
  unsigned int *v6; // rsi
  __int64 v7; // rdi
  bool v8; // zf
  unsigned int *v9; // rsi
  __int64 v10; // rdi
  unsigned int *v11; // rsi
  __int64 v12; // rdi
  __int64 *v13; // rbx
  __int64 *v14; // r15
  __int64 v15; // rsi
  __int64 *v16; // rbx
  __int64 *v17; // r14
  __int64 v18; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r12
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int *v31; // r12
  __int64 v32; // rdi
  __int64 v33; // rax
  unsigned int *v34; // r14
  __int64 v35; // rdi
  __m128i v36; // xmm0
  __int64 v37; // rax
  unsigned int *v38; // r12
  unsigned __int64 v39; // rax
  int v40; // edx
  int v41; // ecx
  int v42; // r8d
  int v43; // r9d
  unsigned int v44; // eax
  char v45; // al
  __int64 v46; // rsi
  __int64 v47; // rdi
  unsigned __int64 v48; // rax
  int v49; // edx
  int v50; // ecx
  int v51; // r8d
  int v52; // r9d
  unsigned int v53; // eax
  char v54; // al
  __int64 v55; // rsi
  __int64 v56; // rdi
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // rdi
  unsigned __int64 v59; // rsi
  unsigned __int64 v60; // rdi
  int v61; // ebx
  double v62; // rsi
  double v63; // rdi
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  void *v67; // r14
  void *v68; // r15
  void *v69; // rbx
  int v70; // eax
  int v71; // r8d
  int v72; // r9d
  int v73; // eax
  int v74; // r8d
  int v75; // r9d
  int v76; // [rsp+0h] [rbp-1E0h]
  int v77; // [rsp+8h] [rbp-1D8h]
  __int64 v78; // [rsp+8h] [rbp-1D8h]
  int v79; // [rsp+10h] [rbp-1D0h]
  __int64 v80; // [rsp+10h] [rbp-1D0h]
  int v81; // [rsp+18h] [rbp-1C8h]
  __int64 v82; // [rsp+18h] [rbp-1C8h]
  int v83; // [rsp+20h] [rbp-1C0h]
  __int64 v84; // [rsp+20h] [rbp-1C0h]
  __int64 v85; // [rsp+28h] [rbp-1B8h]
  int v86; // [rsp+30h] [rbp-1B0h]
  unsigned int v87; // [rsp+34h] [rbp-1ACh]
  char v88; // [rsp+34h] [rbp-1ACh]
  int v89; // [rsp+38h] [rbp-1A8h]
  unsigned int v90; // [rsp+38h] [rbp-1A8h]
  int v91; // [rsp+40h] [rbp-1A0h]
  void *v92; // [rsp+48h] [rbp-198h]
  int v93; // [rsp+58h] [rbp-188h]
  char v94; // [rsp+58h] [rbp-188h]
  __int64 v95; // [rsp+60h] [rbp-180h]
  char v96; // [rsp+60h] [rbp-180h]
  __int64 v97; // [rsp+68h] [rbp-178h] BYREF
  __int64 v98; // [rsp+70h] [rbp-170h]
  void *v99; // [rsp+78h] [rbp-168h]
  int v100[2]; // [rsp+80h] [rbp-160h]
  void *v101; // [rsp+88h] [rbp-158h]
  void *v102; // [rsp+90h] [rbp-150h]
  _DWORD *v103; // [rsp+98h] [rbp-148h]
  char v104[8]; // [rsp+A8h] [rbp-138h] BYREF
  char v105[8]; // [rsp+B0h] [rbp-130h] BYREF
  char v106[8]; // [rsp+B8h] [rbp-128h] BYREF
  __int64 v107; // [rsp+C0h] [rbp-120h] BYREF
  __int64 *v108; // [rsp+C8h] [rbp-118h]
  __int64 v109; // [rsp+D0h] [rbp-110h] BYREF
  __int64 *v110; // [rsp+D8h] [rbp-108h]
  unsigned int *v111; // [rsp+E0h] [rbp-100h] BYREF
  __int64 v112; // [rsp+E8h] [rbp-F8h]
  unsigned int *v113; // [rsp+F0h] [rbp-F0h] BYREF
  __int64 v114; // [rsp+F8h] [rbp-E8h]
  unsigned int *v115; // [rsp+100h] [rbp-E0h] BYREF
  __int64 v116; // [rsp+108h] [rbp-D8h]
  double v117[2]; // [rsp+110h] [rbp-D0h] BYREF
  __m128 v118; // [rsp+120h] [rbp-C0h] BYREF
  __m128 v119; // [rsp+130h] [rbp-B0h] BYREF
  __m128i v120; // [rsp+140h] [rbp-A0h] BYREF
  _QWORD v121[2]; // [rsp+150h] [rbp-90h] BYREF
  _QWORD v122[2]; // [rsp+160h] [rbp-80h] BYREF
  _QWORD v123[2]; // [rsp+170h] [rbp-70h] BYREF
  _QWORD v124[2]; // [rsp+180h] [rbp-60h] BYREF
  _QWORD v125[2]; // [rsp+190h] [rbp-50h] BYREF
  _QWORD v126[8]; // [rsp+1A0h] [rbp-40h] BYREF

  v3 = a1 + 3424;
  v4 = *(_QWORD *)(v3 - 3400);
  v103 = a2;
  v108 = nullptr;
  v107 = v4;
  v109 = v4;
  v112 = v4;
  v114 = v4;
  v116 = v4;
  v110 = nullptr;
  v111 = nullptr;
  v113 = nullptr;
  v115 = nullptr;
  if ( !(unsigned __int8)sub_1467490(
                           v3,
                           (_DWORD)a2,
                           (int)a2 + 16,
                           (unsigned int)&v107,
                           (unsigned int)&v111,
                           (unsigned int)&v113,
                           (__int64)&v109,
                           (__int64)&v115)
    || (v102 = v113, sub_180C5A0(v104, "seq.align.l"), (unsigned __int8)sub_1407860(a1 + 1848, v104, v102))
    || (v102 = v113, sub_180C5A0(v105, "seq.align.r"), v5 = sub_1407860(a1 + 1848, v105, v102), (_BYTE)v5) )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v20 = *(_QWORD *)a1;
  v121[0] = 0;
  v101 = v123;
  v121[1] = 0;
  v122[0] = 1;
  v122[1] = 0;
  v123[0] = 0;
  v123[1] = 0;
  v124[0] = 1;
  v124[1] = 0;
  v125[0] = 0;
  v125[1] = 0;
  v126[0] = 1;
  v126[1] = 0;
  v99 = v121;
  v102 = v125;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(v20 + 416))(a1, v111) )
  {
    v101 = v123;
    v102 = v125;
    sub_BBB240(a1, v111);
  }
  v21 = *(_QWORD *)a1;
  v101 = v123;
  v102 = v125;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(v21 + 416))(a1, v113) )
  {
    v102 = v125;
    sub_BBB240(a1, v113);
  }
  v102 = v125;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *, _QWORD *))(*(_QWORD *)a1 + 416LL))(a1, v115, v125) )
    sub_BBB240(a1, v115);
  if ( !(unsigned __int8)sub_BF6CB0(a1, (__int64)&v107, (__int64)&v109) )
  {
    v85 = *(_QWORD *)(a1 + 24);
    v22 = sub_15D1F10(*v108);
    v23 = *(_QWORD *)(a1 + 1736);
    if ( v108 && (v24 = *((_DWORD *)v108 - 1)) != 0 )
    {
      if ( v24 == 1 )
      {
        v25 = *v108;
        v98 = *v108;
LABEL_45:
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        v84 = *(_QWORD *)(a1 + 24);
        v26 = sub_15D1F10(*v110);
        v27 = *(_QWORD *)(a1 + 1736);
        if ( v110 && (v28 = *((_DWORD *)v110 - 1)) != 0 )
        {
          if ( v28 == 1 )
          {
            v29 = *v110;
            *(_QWORD *)v100 = *v110;
            goto LABEL_52;
          }
          v29 = sub_15E1AF0(v27);
        }
        else
        {
          v73 = sub_15D2D60(v27, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v26);
          v29 = sub_15DC610(v27, v73, 0, 0, v74, v75, v76, v77, v79, v81, v84, v85, v86, v89, v91, v92);
        }
        *(_QWORD *)v100 = v29;
        v27 = *(_QWORD *)(a1 + 1736);
LABEL_52:
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        v82 = *(_QWORD *)(a1 + 24);
        v118 = _mm_loadh_ps((const double *)&v115);
        v30 = sub_15E1AF0(v27);
        v97 = v30;
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        v31 = v115;
        v93 = (int)v113;
        sub_180C5A0(v106, "seq.align.l");
        sub_1407560((unsigned int)v117, a1 + 1848, (unsigned int)v106, v98, v93, v100[0], (__int64)v31, 0, 1);
        v32 = *(_QWORD *)(a1 + 1736);
        v80 = *(_QWORD *)(a1 + 24);
        v119 = _mm_loadh_ps(v117);
        v33 = sub_15E1AF0(v32);
        v34 = (unsigned int *)v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        v35 = *(_QWORD *)(a1 + 1736);
        v78 = *(_QWORD *)(a1 + 24);
        v36 = (__m128i)_mm_loadh_ps((const double *)&v97);
        v120 = v36;
        v37 = sub_15E1AF0(v35);
        v38 = (unsigned int *)v37;
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        v103 = *((_DWORD **)v103 + 5);
        v95 = a1 + 2184;
        if ( v108 )
          v87 = *((_DWORD *)v108 - 1);
        else
          v87 = 0;
        sub_BB1EF0((__int64)&v120, a1);
        sub_993400(a1 + 2208, v87);
        v39 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
        v44 = sub_BF5550(v95, v39, v40, v41, v42, v43);
        v45 = sub_BC37F0(a1, (__int64)v103, 0, nullptr, v44, *(double *)v36.m128i_i64);
        v46 = v120.m128i_i64[0];
        v88 = v45;
        if ( v120.m128i_i64[0] )
        {
          v47 = v120.m128i_i64[1];
          v8 = (*(_DWORD *)(v120.m128i_i64[0] + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v47, v46);
        }
        if ( v110 )
          v90 = *((_DWORD *)v110 - 1);
        else
          v90 = 0;
        sub_BB1EF0((__int64)&v119, a1);
        sub_BB1EF0((__int64)&v118, a1);
        sub_BB1E10(&v120, a1);
        sub_993400(a1 + 2208, v90);
        v48 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
        v53 = sub_BF5550(v95, v48, v49, v50, v51, v52);
        v54 = sub_BC37F0(a1, (__int64)v103, 0, nullptr, v53, *(double *)v36.m128i_i64);
        v55 = v120.m128i_i64[0];
        v96 = v54;
        if ( v120.m128i_i64[0] )
        {
          v56 = v120.m128i_i64[1];
          v8 = (*(_DWORD *)(v120.m128i_i64[0] + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v56, v55);
        }
        v57 = v118.m128_u64[0];
        if ( v118.m128_u64[0] )
        {
          v58 = v118.m128_u64[1];
          v8 = (*(_DWORD *)(v118.m128_u64[0] + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v58, v57);
        }
        v59 = v119.m128_u64[0];
        if ( v119.m128_u64[0] )
        {
          v60 = v119.m128_u64[1];
          v8 = (*(_DWORD *)(v119.m128_u64[0] + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v60, v59);
        }
        v94 = sub_BC5830(a1, v103, v111, v38, 1);
        v61 = sub_BC5830(a1, v103, v113, v34, 1);
        if ( v38 )
        {
          v8 = v38[2]-- == 1;
          if ( v8 )
            sub_15D7BC0(v78, v38);
        }
        if ( v34 )
        {
          v8 = v34[2]-- == 1;
          if ( v8 )
            sub_15D7BC0(v80, v34);
        }
        v62 = v117[0];
        if ( *(_QWORD *)&v117[0] )
        {
          v63 = v117[1];
          v8 = (*(_DWORD *)(*(_QWORD *)&v117[0] + 8LL))-- == 1;
          if ( v8 )
            sub_15D7BC0(*(_QWORD *)&v63, *(_QWORD *)&v62);
        }
        v64 = v97;
        if ( v97 )
        {
          LODWORD(v103) = *(_DWORD *)(v97 + 8);
          v8 = (_DWORD)v103 == 1;
          *(_DWORD *)(v97 + 8) = (_DWORD)v103 - 1;
          if ( v8 )
            sub_15D7BC0(v82, v64);
        }
        v65 = *(_QWORD *)v100;
        if ( *(_QWORD *)v100 )
        {
          LODWORD(v103) = *(_DWORD *)(*(_QWORD *)v100 + 8LL);
          v8 = (_DWORD)v103 == 1;
          *(_DWORD *)(*(_QWORD *)v100 + 8LL) = (_DWORD)v103 - 1;
          if ( v8 )
            sub_15D7BC0(v84, v65);
        }
        v66 = v98;
        if ( v98 )
        {
          LODWORD(v103) = *(_DWORD *)(v98 + 8);
          v8 = (_DWORD)v103 == 1;
          *(_DWORD *)(v98 + 8) = (_DWORD)v103 - 1;
          if ( v8 )
            sub_15D7BC0(v85, v66);
        }
        v5 = v61 | (unsigned __int8)(v94 | v96 | v88);
        goto LABEL_95;
      }
      v25 = sub_15E1AF0(*(_QWORD *)(a1 + 1736));
    }
    else
    {
      v70 = sub_15D2D60(v23, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v22);
      v25 = sub_15DC610(v23, v70, 0, 0, v71, v72, v76, v77, v79, v81, v83, v85, v86, v89, v91, v92);
    }
    v98 = v25;
    goto LABEL_45;
  }
LABEL_95:
  v67 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v102);
  sub_182CBA0(v67, v126);
  v68 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v101);
  sub_182CBA0(v68, v124);
  v69 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v99);
  sub_182CBA0(v69, v122);
LABEL_3:
  v6 = v115;
  if ( v115 )
  {
    v7 = v116;
    v8 = v115[2]-- == 1;
    if ( v8 )
      sub_15D7BC0(v7, v6);
  }
  v9 = v113;
  if ( v113 )
  {
    v10 = v114;
    v8 = v113[2]-- == 1;
    if ( v8 )
      sub_15D7BC0(v10, v9);
  }
  v11 = v111;
  if ( v111 )
  {
    v12 = v112;
    v8 = v111[2]-- == 1;
    if ( v8 )
      sub_15D7BC0(v12, v11);
  }
  v13 = v110;
  if ( v110 )
  {
    if ( v110 >= &v110[*((unsigned int *)v110 - 1)] )
      goto LABEL_20;
    v14 = &v110[*((unsigned int *)v110 - 1)];
    do
    {
      while ( 1 )
      {
        v15 = *v13;
        if ( *v13 )
        {
          v8 = (*(_DWORD *)(v15 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v13 >= v14 )
          goto LABEL_19;
      }
      sub_15D7BC0(v109, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_19:
    v13 = v110;
    if ( v110 )
LABEL_20:
      sub_186B220(v13 - 1);
  }
  v16 = v108;
  if ( v108 )
  {
    if ( v108 >= &v108[*((unsigned int *)v108 - 1)] )
      goto LABEL_29;
    v17 = &v108[*((unsigned int *)v108 - 1)];
    do
    {
      while ( 1 )
      {
        v18 = *v16;
        if ( *v16 )
        {
          v8 = (*(_DWORD *)(v18 + 8))-- == 1;
          if ( v8 )
            break;
        }
        if ( ++v16 >= v17 )
          goto LABEL_28;
      }
      sub_15D7BC0(v107, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_28:
    v16 = v108;
    if ( v108 )
LABEL_29:
      sub_186B220(v16 - 1);
  }
  return v5;
}


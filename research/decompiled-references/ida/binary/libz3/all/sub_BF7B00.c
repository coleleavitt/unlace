__int64 __fastcall sub_BF7B00(__int64 a1, _DWORD *a2)
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
  void *v66; // r14
  void *v67; // r15
  void *v68; // rbx
  int v69; // eax
  int v70; // r8d
  int v71; // r9d
  int v72; // eax
  int v73; // r8d
  int v74; // r9d
  int v75; // [rsp+0h] [rbp-1E0h]
  int v76; // [rsp+8h] [rbp-1D8h]
  __int64 v77; // [rsp+8h] [rbp-1D8h]
  int v78; // [rsp+10h] [rbp-1D0h]
  __int64 v79; // [rsp+10h] [rbp-1D0h]
  int v80; // [rsp+18h] [rbp-1C8h]
  __int64 v81; // [rsp+18h] [rbp-1C8h]
  int v82; // [rsp+20h] [rbp-1C0h]
  __int64 v83; // [rsp+20h] [rbp-1C0h]
  __int64 v84; // [rsp+28h] [rbp-1B8h]
  int v85; // [rsp+30h] [rbp-1B0h]
  unsigned int v86; // [rsp+34h] [rbp-1ACh]
  char v87; // [rsp+34h] [rbp-1ACh]
  int v88; // [rsp+38h] [rbp-1A8h]
  unsigned int v89; // [rsp+38h] [rbp-1A8h]
  int v90; // [rsp+40h] [rbp-1A0h]
  void *v91; // [rsp+48h] [rbp-198h]
  int v92; // [rsp+58h] [rbp-188h]
  char v93; // [rsp+58h] [rbp-188h]
  __int64 v94; // [rsp+60h] [rbp-180h]
  char v95; // [rsp+60h] [rbp-180h]
  __int64 v96; // [rsp+68h] [rbp-178h]
  int v97[2]; // [rsp+78h] [rbp-168h] BYREF
  __int64 v98; // [rsp+80h] [rbp-160h] BYREF
  void *v99; // [rsp+88h] [rbp-158h]
  void *v100; // [rsp+90h] [rbp-150h]
  _DWORD *v101; // [rsp+98h] [rbp-148h]
  char v102[8]; // [rsp+A8h] [rbp-138h] BYREF
  char v103[8]; // [rsp+B0h] [rbp-130h] BYREF
  char v104[8]; // [rsp+B8h] [rbp-128h] BYREF
  __int64 v105; // [rsp+C0h] [rbp-120h] BYREF
  __int64 *v106; // [rsp+C8h] [rbp-118h]
  __int64 v107; // [rsp+D0h] [rbp-110h] BYREF
  __int64 *v108; // [rsp+D8h] [rbp-108h]
  unsigned int *v109; // [rsp+E0h] [rbp-100h] BYREF
  __int64 v110; // [rsp+E8h] [rbp-F8h]
  unsigned int *v111; // [rsp+F0h] [rbp-F0h] BYREF
  __int64 v112; // [rsp+F8h] [rbp-E8h]
  unsigned int *v113; // [rsp+100h] [rbp-E0h] BYREF
  __int64 v114; // [rsp+108h] [rbp-D8h]
  double v115[2]; // [rsp+110h] [rbp-D0h] BYREF
  __m128 v116; // [rsp+120h] [rbp-C0h] BYREF
  __m128 v117; // [rsp+130h] [rbp-B0h] BYREF
  __m128i v118; // [rsp+140h] [rbp-A0h] BYREF
  _QWORD v119[2]; // [rsp+150h] [rbp-90h] BYREF
  _QWORD v120[2]; // [rsp+160h] [rbp-80h] BYREF
  _QWORD v121[2]; // [rsp+170h] [rbp-70h] BYREF
  _QWORD v122[2]; // [rsp+180h] [rbp-60h] BYREF
  _QWORD v123[2]; // [rsp+190h] [rbp-50h] BYREF
  _QWORD v124[8]; // [rsp+1A0h] [rbp-40h] BYREF

  v3 = a1 + 3424;
  v4 = *(_QWORD *)(v3 - 3400);
  v101 = a2;
  v106 = nullptr;
  v105 = v4;
  v107 = v4;
  v110 = v4;
  v112 = v4;
  v114 = v4;
  v108 = nullptr;
  v109 = nullptr;
  v111 = nullptr;
  v113 = nullptr;
  if ( !(unsigned __int8)sub_1466700(
                           v3,
                           (_DWORD)a2,
                           (int)a2 + 16,
                           (unsigned int)&v109,
                           (unsigned int)&v105,
                           (unsigned int)&v111,
                           (__int64)&v107,
                           (__int64)&v113)
    || (v100 = v111, sub_180C5A0(v102, "seq.align.l"), (unsigned __int8)sub_1407860(a1 + 1848, v102, v100))
    || (v100 = v111, sub_180C5A0(v103, "seq.align.r"), v5 = sub_1407860(a1 + 1848, v103, v100), (_BYTE)v5) )
  {
    v5 = 0;
    goto LABEL_3;
  }
  v20 = *(_QWORD *)a1;
  v119[0] = 0;
  v99 = v121;
  v119[1] = 0;
  v120[0] = 1;
  v120[1] = 0;
  v121[0] = 0;
  v121[1] = 0;
  v122[0] = 1;
  v122[1] = 0;
  v123[0] = 0;
  v123[1] = 0;
  v124[0] = 1;
  v124[1] = 0;
  v100 = v123;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(v20 + 416))(a1, v109) )
  {
    v99 = v121;
    v100 = v123;
    sub_BBB240(a1, v109);
  }
  v21 = *(_QWORD *)a1;
  v99 = v121;
  v100 = v123;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *))(v21 + 416))(a1, v111) )
  {
    v100 = v123;
    sub_BBB240(a1, v111);
  }
  v100 = v123;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, unsigned int *, _QWORD *))(*(_QWORD *)a1 + 416LL))(a1, v113, v123) )
    sub_BBB240(a1, v113);
  if ( !(unsigned __int8)sub_BF6590(a1, (__int64)&v105, (__int64)&v107) )
  {
    v84 = *(_QWORD *)(a1 + 24);
    v22 = sub_15D1F10(*v106);
    v23 = *(_QWORD *)(a1 + 1736);
    if ( v106 && (v24 = *((_DWORD *)v106 - 1)) != 0 )
    {
      if ( v24 == 1 )
      {
        v25 = *v106;
        v98 = *v106;
LABEL_45:
        if ( v25 )
          ++*(_DWORD *)(v25 + 8);
        v83 = *(_QWORD *)(a1 + 24);
        v26 = sub_15D1F10(*v108);
        v27 = *(_QWORD *)(a1 + 1736);
        if ( v108 && (v28 = *((_DWORD *)v108 - 1)) != 0 )
        {
          if ( v28 == 1 )
          {
            v29 = *v108;
            *(_QWORD *)v97 = *v108;
            goto LABEL_52;
          }
          v29 = sub_15E1AF0(v27);
        }
        else
        {
          v72 = sub_15D2D60(v27, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v26);
          v29 = sub_15DC610(v27, v72, 0, 0, v73, v74, v75, v76, v78, v80, v83, v84, v85, v88, v90, v91);
        }
        *(_QWORD *)v97 = v29;
        v27 = *(_QWORD *)(a1 + 1736);
LABEL_52:
        if ( v29 )
          ++*(_DWORD *)(v29 + 8);
        v81 = *(_QWORD *)(a1 + 24);
        v116 = _mm_loadh_ps((const double *)v97);
        v30 = sub_15E1AF0(v27);
        v96 = v30;
        if ( v30 )
          ++*(_DWORD *)(v30 + 8);
        v31 = v113;
        v92 = (int)v111;
        sub_180C5A0(v104, "seq.align.r");
        sub_1407560((unsigned int)v115, a1 + 1848, (unsigned int)v104, v98, v92, v97[0], (__int64)v31, 0, 1);
        v32 = *(_QWORD *)(a1 + 1736);
        v79 = *(_QWORD *)(a1 + 24);
        v117 = _mm_loadh_ps((const double *)&v98);
        v33 = sub_15E1AF0(v32);
        v34 = (unsigned int *)v33;
        if ( v33 )
          ++*(_DWORD *)(v33 + 8);
        v35 = *(_QWORD *)(a1 + 1736);
        v77 = *(_QWORD *)(a1 + 24);
        v36 = (__m128i)_mm_loadh_ps(v115);
        v118 = v36;
        v37 = sub_15E1AF0(v35);
        v38 = (unsigned int *)v37;
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        v101 = *((_DWORD **)v101 + 5);
        v94 = a1 + 2184;
        if ( v106 )
          v86 = *((_DWORD *)v106 - 1);
        else
          v86 = 0;
        sub_BB1EF0((__int64)&v118, a1);
        sub_993400(a1 + 2208, v86);
        v39 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
        v44 = sub_BF5550(v94, v39, v40, v41, v42, v43);
        v45 = sub_BC37F0(a1, (__int64)v101, 0, nullptr, v44, *(double *)v36.m128i_i64);
        v46 = v118.m128i_i64[0];
        v87 = v45;
        if ( v118.m128i_i64[0] )
        {
          v47 = v118.m128i_i64[1];
          v8 = (*(_DWORD *)(v118.m128i_i64[0] + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v47, v46);
        }
        if ( v108 )
          v89 = *((_DWORD *)v108 - 1);
        else
          v89 = 0;
        sub_BB1EF0((__int64)&v117, a1);
        sub_BB1EF0((__int64)&v116, a1);
        sub_BB1E10(&v118, a1);
        sub_993400(a1 + 2208, v89);
        v48 = sub_15E1B70(*(_QWORD *)(a1 + 2208));
        v53 = sub_BF5550(v94, v48, v49, v50, v51, v52);
        v54 = sub_BC37F0(a1, (__int64)v101, 0, nullptr, v53, *(double *)v36.m128i_i64);
        v55 = v118.m128i_i64[0];
        v95 = v54;
        if ( v118.m128i_i64[0] )
        {
          v56 = v118.m128i_i64[1];
          v8 = (*(_DWORD *)(v118.m128i_i64[0] + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v56, v55);
        }
        v57 = v116.m128_u64[0];
        if ( v116.m128_u64[0] )
        {
          v58 = v116.m128_u64[1];
          v8 = (*(_DWORD *)(v116.m128_u64[0] + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v58, v57);
        }
        v59 = v117.m128_u64[0];
        if ( v117.m128_u64[0] )
        {
          v60 = v117.m128_u64[1];
          v8 = (*(_DWORD *)(v117.m128_u64[0] + 8))-- == 1;
          if ( v8 )
            sub_15D7BC0(v60, v59);
        }
        v93 = sub_BC5830(a1, v101, v109, v38, 1);
        v61 = sub_BC5830(a1, v101, v113, v34, 1);
        if ( v38 )
        {
          v8 = v38[2]-- == 1;
          if ( v8 )
            sub_15D7BC0(v77, v38);
        }
        if ( v34 )
        {
          v8 = v34[2]-- == 1;
          if ( v8 )
            sub_15D7BC0(v79, v34);
        }
        v62 = v115[0];
        if ( *(_QWORD *)&v115[0] )
        {
          v63 = v115[1];
          v8 = (*(_DWORD *)(*(_QWORD *)&v115[0] + 8LL))-- == 1;
          if ( v8 )
            sub_15D7BC0(*(_QWORD *)&v63, *(_QWORD *)&v62);
        }
        if ( v96 )
        {
          LODWORD(v101) = *(_DWORD *)(v96 + 8);
          v8 = (_DWORD)v101 == 1;
          *(_DWORD *)(v96 + 8) = (_DWORD)v101 - 1;
          if ( v8 )
            sub_15D7BC0(v81, v96);
        }
        v64 = *(_QWORD *)v97;
        if ( *(_QWORD *)v97 )
        {
          LODWORD(v101) = *(_DWORD *)(*(_QWORD *)v97 + 8LL);
          v8 = (_DWORD)v101 == 1;
          *(_DWORD *)(*(_QWORD *)v97 + 8LL) = (_DWORD)v101 - 1;
          if ( v8 )
            sub_15D7BC0(v83, v64);
        }
        v65 = v98;
        if ( v98 )
        {
          LODWORD(v101) = *(_DWORD *)(v98 + 8);
          v8 = (_DWORD)v101 == 1;
          *(_DWORD *)(v98 + 8) = (_DWORD)v101 - 1;
          if ( v8 )
            sub_15D7BC0(v84, v65);
        }
        v5 = v61 | (unsigned __int8)(v93 | v95 | v87);
        goto LABEL_95;
      }
      v25 = sub_15E1AF0(*(_QWORD *)(a1 + 1736));
    }
    else
    {
      v69 = sub_15D2D60(v23, *(_DWORD *)(a1 + 1744), 1, 0, 0, 0, 0, v22);
      v25 = sub_15DC610(v23, v69, 0, 0, v70, v71, v75, v76, v78, v80, v82, v84, v85, v88, v90, v91);
    }
    v98 = v25;
    goto LABEL_45;
  }
LABEL_95:
  v66 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v100);
  sub_182CBA0(v66, v124);
  v67 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v99);
  sub_182CBA0(v67, v122);
  v68 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v119);
  sub_182CBA0(v68, v120);
LABEL_3:
  v6 = v113;
  if ( v113 )
  {
    v7 = v114;
    v8 = v113[2]-- == 1;
    if ( v8 )
      sub_15D7BC0(v7, v6);
  }
  v9 = v111;
  if ( v111 )
  {
    v10 = v112;
    v8 = v111[2]-- == 1;
    if ( v8 )
      sub_15D7BC0(v10, v9);
  }
  v11 = v109;
  if ( v109 )
  {
    v12 = v110;
    v8 = v109[2]-- == 1;
    if ( v8 )
      sub_15D7BC0(v12, v11);
  }
  v13 = v108;
  if ( v108 )
  {
    if ( v108 >= &v108[*((unsigned int *)v108 - 1)] )
      goto LABEL_20;
    v14 = &v108[*((unsigned int *)v108 - 1)];
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
      sub_15D7BC0(v107, v15);
      ++v13;
    }
    while ( v13 < v14 );
LABEL_19:
    v13 = v108;
    if ( v108 )
LABEL_20:
      sub_186B220(v13 - 1);
  }
  v16 = v106;
  if ( v106 )
  {
    if ( v106 >= &v106[*((unsigned int *)v106 - 1)] )
      goto LABEL_29;
    v17 = &v106[*((unsigned int *)v106 - 1)];
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
      sub_15D7BC0(v105, v18);
      ++v16;
    }
    while ( v16 < v17 );
LABEL_28:
    v16 = v106;
    if ( v106 )
LABEL_29:
      sub_186B220(v16 - 1);
  }
  return v5;
}


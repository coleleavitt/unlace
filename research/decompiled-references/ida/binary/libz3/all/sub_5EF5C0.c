__int64 __fastcall sub_5EF5C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r14
  __int64 v19; // r13
  unsigned int v20; // r12d
  __int64 v21; // rax
  __int64 v22; // r15
  int v23; // r14d
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rdi
  unsigned int v30; // r12d
  __int64 i; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // r12
  _QWORD *v34; // r13
  _QWORD *v35; // r14
  _QWORD *v36; // rax
  __int64 v37; // rsi
  void *v38; // rdi
  _QWORD *v39; // rdx
  int v40; // ecx
  unsigned int v41; // r13d
  size_t v42; // r12
  _OWORD *v43; // rdx
  _OWORD *v44; // rcx
  _OWORD *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rsi
  __int64 v49; // rdi
  __int64 v50; // rdi
  __int64 v51; // rax
  __int64 v52; // r12
  __int64 v53; // rsi
  __int64 v54; // rdi
  __int64 v55; // rsi
  int v56; // r9d
  __int64 v57; // r13
  __int64 v58; // rax
  __int64 v59; // r14
  __int64 v60; // r12
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // r12
  __int64 result; // rax
  __int64 v66; // rsi
  __int64 v67; // rdi
  size_t v68; // rsi
  int v69; // [rsp-10h] [rbp-1B0h]
  int v70; // [rsp-8h] [rbp-1A8h]
  __int64 v71; // [rsp+0h] [rbp-1A0h]
  int v72; // [rsp+0h] [rbp-1A0h]
  __int64 v73; // [rsp+8h] [rbp-198h]
  int v74; // [rsp+8h] [rbp-198h]
  __int64 v75; // [rsp+10h] [rbp-190h]
  int v76; // [rsp+10h] [rbp-190h]
  __int64 v77; // [rsp+18h] [rbp-188h]
  int v78; // [rsp+18h] [rbp-188h]
  __int64 v79; // [rsp+20h] [rbp-180h]
  int v80; // [rsp+20h] [rbp-180h]
  __int64 v81; // [rsp+28h] [rbp-178h]
  char v82; // [rsp+28h] [rbp-178h]
  __int64 v83; // [rsp+28h] [rbp-178h]
  __int64 v84; // [rsp+30h] [rbp-170h]
  int v85; // [rsp+30h] [rbp-170h]
  int v86[2]; // [rsp+38h] [rbp-168h]
  int v87; // [rsp+38h] [rbp-168h]
  int v88[2]; // [rsp+38h] [rbp-168h]
  __int64 v89; // [rsp+40h] [rbp-160h]
  int v90; // [rsp+40h] [rbp-160h]
  unsigned int v91; // [rsp+40h] [rbp-160h]
  int v92; // [rsp+40h] [rbp-160h]
  __int64 v93; // [rsp+40h] [rbp-160h]
  int v94[2]; // [rsp+48h] [rbp-158h]
  void *v95; // [rsp+48h] [rbp-158h]
  int v96[2]; // [rsp+48h] [rbp-158h]
  __int64 v97; // [rsp+50h] [rbp-150h] BYREF
  int v98; // [rsp+58h] [rbp-148h] BYREF
  __int64 v99; // [rsp+60h] [rbp-140h] BYREF
  __int64 v100; // [rsp+68h] [rbp-138h]
  int v101[6]; // [rsp+70h] [rbp-130h] BYREF
  __int64 v102; // [rsp+88h] [rbp-118h]
  int v103; // [rsp+90h] [rbp-110h]
  int v104; // [rsp+98h] [rbp-108h]
  int v105; // [rsp+A0h] [rbp-100h]
  void *v106; // [rsp+A8h] [rbp-F8h]
  int v107; // [rsp+B0h] [rbp-F0h]
  __int64 v108; // [rsp+B8h] [rbp-E8h]

  v75 = a2;
  v89 = a3;
  v81 = a4;
  v79 = *(_QWORD *)(a1 + 32) + 656LL;
  v71 = a5;
  v73 = *(_QWORD *)(a1 + 24);
  v99 = 0;
  v100 = v73;
  v97 = 0;
  sub_62B3F0(a2, v73, (unsigned int)&v97, a4, a5, a6);
  v7 = *(_QWORD *)(a1 + 312);
  if ( v7 )
    *(_DWORD *)(v7 - 4) = 0;
  v8 = *(_QWORD *)(a1 + 328);
  if ( v8 )
    *(_DWORD *)(v8 - 4) = 0;
  v9 = *(_QWORD *)(a1 + 320);
  if ( v9 )
    *(_DWORD *)(v9 - 4) = 0;
  v10 = *(_QWORD *)(a1 + 344);
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v84 = a1 + 40;
  sub_14E9CE0(a1 + 40);
  LODWORD(v77) = a1 + 176;
  sub_14E9CE0(a1 + 176);
  v11 = sub_15E1AF0(*(_QWORD *)(a1 + 24));
  v12 = v11;
  if ( v11 )
    ++*(_DWORD *)(v11 + 8);
  v13 = v99;
  if ( v99 )
  {
    v14 = v100;
    v15 = (*(_DWORD *)(v99 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v14, v13);
  }
  v16 = v97;
  v99 = v12;
  if ( v97 )
  {
    v17 = *(_QWORD *)(a1 + 24);
    v18 = 0;
    v19 = 0;
    v20 = 0;
    if ( !*(_DWORD *)(v97 - 4) )
    {
LABEL_28:
      *(_QWORD *)v96 = v19;
      v22 = v18;
      goto LABEL_31;
    }
    while ( 1 )
    {
      v21 = sub_15DB5C0(v17, v20, *(_QWORD *)(v16 + 8LL * v20));
      v22 = v21;
      if ( v21 )
        ++*(_DWORD *)(v21 + 8);
      if ( v18 )
      {
        v15 = (*(_DWORD *)(v18 + 8))-- == 1;
        if ( v15 )
          sub_15D7BC0(v73, v18);
      }
      *(_QWORD *)v94 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)v86 = *(_QWORD *)(v97 + 8LL * v20);
      sub_180C5A0(&v98, "C");
      v23 = v94[0];
      v24 = sub_15E3D10(
              v94[0],
              (int)&v98,
              (int)&qword_18D6CD0,
              0,
              0,
              v86[0],
              1,
              v70,
              v71,
              v73,
              v75,
              v77,
              v79,
              v81,
              v84,
              v86[0],
              v89,
              v94[0],
              v97,
              v98,
              v99,
              v100,
              v101[0],
              v101[2],
              v101[4],
              v102,
              v103,
              v104,
              v105,
              v106,
              v107,
              v108);
      v25 = sub_15DC610(v23, v24, 0, 0, v69, v70, v72, v74, v76, v78, v80, v82, v85, v87, v90, v95);
      *(_QWORD *)v96 = v25;
      if ( v25 )
        ++*(_DWORD *)(v25 + 8);
      if ( v19 )
      {
        v15 = (*(_DWORD *)(v19 + 8))-- == 1;
        if ( v15 )
          sub_15D7BC0(v73, v19);
      }
      sub_14EA0D0(v84, v22, *(_QWORD *)v96);
      sub_14EA0D0(v77, *(_QWORD *)v96, v22);
      v16 = v97;
      ++v20;
      if ( !v97 )
        break;
      v19 = *(_QWORD *)v96;
      v17 = *(_QWORD *)(a1 + 24);
      v18 = v22;
      if ( v20 >= *(_DWORD *)(v97 - 4) )
        goto LABEL_28;
    }
  }
  else
  {
    *(_QWORD *)v96 = 0;
    v22 = 0;
  }
  v17 = *(_QWORD *)(a1 + 24);
LABEL_31:
  v26 = sub_15E1AF0(v17);
  v27 = v26;
  if ( v26 )
    ++*(_DWORD *)(v26 + 8);
  v28 = v99;
  if ( v99 )
  {
    v29 = v100;
    v15 = (*(_DWORD *)(v99 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v29, v28);
  }
  v99 = v27;
  sub_14EA2A0(v84, v27, &v99);
  sub_5EBB20(a1, v99);
  v30 = 0;
  for ( i = *(_QWORD *)(v81 + 8); i; i = *(_QWORD *)(v81 + 8) )
  {
    if ( v30 >= *(_DWORD *)(i - 4) )
      break;
    sub_5EEBC0(a1, *(_DWORD **)(i + 8LL * v30++), v89);
  }
  v32 = *(_QWORD **)(a1 + 360);
  v33 = v32;
  v34 = &v32[2 * *(unsigned int *)(a1 + 368)];
  if ( v32 == v34 )
  {
    if ( *(_DWORD *)(a1 + 372) )
      goto LABEL_68;
  }
  else
  {
    while ( *v33 <= 1u )
    {
      v33 += 2;
      if ( v34 == v33 )
        goto LABEL_106;
    }
    if ( v34 == v33 )
    {
LABEL_106:
      if ( !*(_DWORD *)(a1 + 372) )
        goto LABEL_54;
      v38 = *(void **)(a1 + 360);
      v37 = *(unsigned int *)(a1 + 368);
      v39 = &v32[2 * v37];
      goto LABEL_56;
    }
    do
    {
      v35 = (_QWORD *)v33[1];
      if ( v35 )
      {
        if ( *v35 )
          sub_186B220((void *)(*v35 - 8LL));
        sub_186B220(v35);
      }
      v36 = v33 + 2;
      if ( v34 == v33 + 2 )
        break;
      while ( 1 )
      {
        v33 = v36;
        if ( *v36 > 1u )
          break;
        v36 += 2;
        if ( v34 == v36 )
          goto LABEL_53;
      }
    }
    while ( v34 != v36 );
LABEL_53:
    if ( *(_DWORD *)(a1 + 372) )
      goto LABEL_55;
  }
LABEL_54:
  if ( !*(_DWORD *)(a1 + 376) )
    goto LABEL_69;
LABEL_55:
  v32 = *(_QWORD **)(a1 + 360);
  v37 = *(unsigned int *)(a1 + 368);
  v38 = v32;
  v39 = &v32[2 * v37];
  if ( v32 != v39 )
  {
LABEL_56:
    v40 = 0;
    do
    {
      while ( *v32 )
      {
        *v32 = 0;
        v32 += 2;
        if ( v32 == v39 )
          goto LABEL_60;
      }
      v32 += 2;
      ++v40;
    }
    while ( v32 != v39 );
LABEL_60:
    if ( (unsigned int)v37 <= 0x10 || 3 * (int)v37 >= (unsigned int)(4 * v40) )
      goto LABEL_68;
    if ( v38 )
    {
      sub_186B220(v38);
      v41 = *(_DWORD *)(a1 + 368);
      *(_QWORD *)(a1 + 360) = 0;
      v41 >>= 1;
      *(_DWORD *)(a1 + 368) = v41;
      v42 = v41;
      v43 = (_OWORD *)sub_186B270(v42 * 16);
      if ( !v41 )
      {
LABEL_67:
        *(_QWORD *)(a1 + 360) = v43;
        goto LABEL_68;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 360) = 0;
      v68 = (unsigned int)v37 >> 1;
      *(_DWORD *)(a1 + 368) = v68;
      v42 = v68;
      v43 = (_OWORD *)sub_186B270(16 * v68);
    }
    v44 = &v43[v42];
    v45 = v43;
    if ( ((v42 * 16) & 0x10) == 0 || (v45 = v43 + 1, *v43 = 0, v43 + 1 != v44) )
    {
      do
      {
        *v45 = 0;
        v45 += 2;
        *(v45 - 1) = 0;
      }
      while ( v45 != v44 );
    }
    goto LABEL_67;
  }
LABEL_68:
  *(_QWORD *)(a1 + 372) = 0;
LABEL_69:
  v46 = sub_15E1AF0(*(_QWORD *)(a1 + 24));
  v47 = v46;
  if ( v46 )
    ++*(_DWORD *)(v46 + 8);
  v48 = v99;
  if ( v99 )
  {
    v49 = v100;
    v15 = (*(_DWORD *)(v99 + 8))-- == 1;
    if ( v15 )
    {
      v93 = v46;
      sub_15D7BC0(v49, v48);
      v47 = v93;
    }
  }
  v50 = *(_QWORD *)(a1 + 24);
  v99 = v47;
  v51 = sub_15E1B70(v50);
  v52 = v51;
  if ( v51 )
    ++*(_DWORD *)(v51 + 8);
  v53 = v99;
  if ( v99 )
  {
    v54 = v100;
    v15 = (*(_DWORD *)(v99 + 8))-- == 1;
    if ( v15 )
      sub_15D7BC0(v54, v53);
  }
  v55 = *(_QWORD *)(a1 + 32);
  v99 = v52;
  sub_63D370(v101, v55);
  v83 = *(_QWORD *)(a1 + 24);
  sub_631ED0(v79, v99, 0, (unsigned int)v101, v75 + 72, v56);
  v57 = *(_QWORD *)(v75 + 48);
  if ( v57 && (v58 = v102, v59 = 0, v91 = 0, v102) )
  {
    if ( *(_DWORD *)(v102 - 4) )
    {
      while ( 1 )
      {
        *(_QWORD *)v88 = *(_QWORD *)(v58 + 8LL * v91);
        sub_62E310(v79, *(_QWORD *)v88, &v99);
        v60 = *(_QWORD *)(a1 + 24);
        v61 = sub_15E1B70(v60);
        v62 = sub_15DEFF0(v60, v61);
        v63 = sub_15DE0E0(v60, v62, v57);
        v64 = v63;
        if ( v63 )
          ++*(_DWORD *)(v63 + 8);
        if ( v59 )
        {
          v15 = (*(_DWORD *)(v59 + 8))-- == 1;
          if ( v15 )
            sub_15D7BC0(v83, v59);
        }
        sub_62A430(*(_QWORD *)v88, *(_QWORD *)(a1 + 24), v64);
        v58 = v102;
        ++v91;
        if ( !v102 )
          break;
        v59 = v64;
        if ( v91 >= *(_DWORD *)(v102 - 4) )
          goto LABEL_89;
      }
    }
    else
    {
LABEL_89:
      v64 = v59;
    }
    sub_63EC70(v71, v101);
    if ( v64 )
    {
      v15 = (*(_DWORD *)(v64 + 8))-- == 1;
      if ( v15 )
        sub_15D7BC0(v83, v64);
    }
  }
  else
  {
    sub_63EC70(v71, v101);
  }
  sub_63D960(v101);
  result = v97;
  if ( v97 )
    result = sub_186B220((void *)(v97 - 8));
  if ( v22 )
  {
    v15 = (*(_DWORD *)(v22 + 8))-- == 1;
    if ( v15 )
      result = sub_15D7BC0(v73, v22);
  }
  if ( *(_QWORD *)v96 )
  {
    v92 = *(_DWORD *)(*(_QWORD *)v96 + 8LL);
    result = (unsigned int)(v92 - 1);
    *(_DWORD *)(*(_QWORD *)v96 + 8LL) = result;
    if ( v92 == 1 )
      result = sub_15D7BC0(v73, *(_QWORD *)v96);
  }
  v66 = v99;
  if ( v99 )
  {
    v67 = v100;
    v15 = (*(_DWORD *)(v99 + 8))-- == 1;
    if ( v15 )
      return sub_15D7BC0(v67, v66);
  }
  return result;
}


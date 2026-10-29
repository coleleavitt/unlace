__int64 __fastcall sub_3D8E20(__int64 a1, __int64 *a2, __int64 *a3, char *a4, int a5, int a6, int a7)
{
  __int64 v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __m128i v15; // xmm1
  int *v16; // r14
  __int64 *v17; // rbx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  __int64 *v21; // rbx
  __int64 *v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  __int64 v26; // rbp
  _DWORD *v27; // rax
  _DWORD *v28; // rax
  _DWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 *v32; // rbx
  __int64 *v33; // r14
  __int64 *v34; // rbp
  __int64 *v35; // r12
  __int64 v36; // rsi
  __int64 v37; // rdi
  int v38; // ebx
  __int64 *v39; // r12
  int v40; // ecx
  int v41; // r9d
  _QWORD *v42; // rax
  int v43; // r8d
  _QWORD *v44; // r12
  _QWORD *v45; // r14
  __int64 v46; // rsi
  __int64 v47; // rdi
  unsigned int i; // r12d
  __int64 v49; // rax
  unsigned int v50; // r12d
  __int64 v51; // rax
  int v52; // ebp
  int v53; // edx
  __int64 *v54; // r14
  __int64 *v55; // rbx
  __int64 *v56; // rbx
  unsigned __int64 v57; // rbp
  __int64 v58; // rsi
  __int64 v60; // r12
  __int64 *v61; // rbx
  unsigned __int64 v62; // rbp
  __int64 v63; // rsi
  __int64 *v64; // rbp
  __int64 v65; // rsi
  __int64 v66; // r12
  __int64 v67; // rsi
  __int64 v68; // rax
  __int64 v69; // rdi
  void *v70; // [rsp+0h] [rbp-1D8h]
  void *v71; // [rsp+0h] [rbp-1D8h]
  char *v72; // [rsp+8h] [rbp-1D0h]
  __m128i v73; // [rsp+10h] [rbp-1C8h] BYREF
  _QWORD *v74; // [rsp+20h] [rbp-1B8h]
  __int64 *v75; // [rsp+28h] [rbp-1B0h]
  int v76[2]; // [rsp+30h] [rbp-1A8h]
  int *v77; // [rsp+38h] [rbp-1A0h]
  void *v78; // [rsp+40h] [rbp-198h]
  int *v79; // [rsp+48h] [rbp-190h]
  __int64 *v80; // [rsp+50h] [rbp-188h]
  __int64 v81; // [rsp+58h] [rbp-180h]
  int v82; // [rsp+60h] [rbp-178h]
  int v83; // [rsp+64h] [rbp-174h]
  int v84; // [rsp+68h] [rbp-170h]
  int v85; // [rsp+6Ch] [rbp-16Ch]
  __int64 v86; // [rsp+70h] [rbp-168h] BYREF
  int v87; // [rsp+78h] [rbp-160h] BYREF
  __int64 v88; // [rsp+80h] [rbp-158h] BYREF
  __int64 v89; // [rsp+88h] [rbp-150h] BYREF
  __int64 v90; // [rsp+90h] [rbp-148h] BYREF
  int v91[2]; // [rsp+98h] [rbp-140h] BYREF
  int v92[4]; // [rsp+A0h] [rbp-138h] BYREF
  int v93[2]; // [rsp+B0h] [rbp-128h] BYREF
  _QWORD *v94; // [rsp+B8h] [rbp-120h] BYREF
  int v95[2]; // [rsp+C0h] [rbp-118h] BYREF
  _QWORD *v96; // [rsp+C8h] [rbp-110h] BYREF
  __int64 v97; // [rsp+D0h] [rbp-108h]
  _QWORD *v98; // [rsp+D8h] [rbp-100h] BYREF
  int v99[4]; // [rsp+E0h] [rbp-F8h] BYREF
  char v100[16]; // [rsp+F0h] [rbp-E8h] BYREF
  int v101[2]; // [rsp+100h] [rbp-D8h] BYREF
  __int64 v102; // [rsp+108h] [rbp-D0h]
  int v103[4]; // [rsp+110h] [rbp-C8h] BYREF
  __int64 v104; // [rsp+120h] [rbp-B8h]
  __int64 v105; // [rsp+128h] [rbp-B0h]
  __int64 v106; // [rsp+130h] [rbp-A8h]
  __int64 v107; // [rsp+138h] [rbp-A0h]
  __int64 v108; // [rsp+140h] [rbp-98h]
  __int64 v109; // [rsp+148h] [rbp-90h]
  __int64 v110; // [rsp+150h] [rbp-88h]
  __int64 v111; // [rsp+158h] [rbp-80h]
  __int64 *v112; // [rsp+160h] [rbp-78h]
  __int64 v113; // [rsp+168h] [rbp-70h]
  __int64 v114; // [rsp+170h] [rbp-68h]
  __int64 v115; // [rsp+178h] [rbp-60h]
  int v116; // [rsp+180h] [rbp-58h]
  __int64 v117; // [rsp+188h] [rbp-50h]
  __int64 v118; // [rsp+190h] [rbp-48h] BYREF

  *(_QWORD *)v76 = a3;
  v72 = a4;
  v85 = a6;
  v83 = a7;
  HIBYTE(v84) = a5;
  *(_QWORD *)v103 = 0;
  v75 = (__int64 *)v103;
  v77 = v92;
  sub_14B7810((int)v92, a1, (int)v103, (int)a4, a5, a6, v70);
  sub_18572D0(v103);
  v10 = *a3;
  *(_QWORD *)v103 = a1;
  *(_QWORD *)&v103[2] = 0;
  sub_15EEF60(v10);
  v11 = *(_QWORD *)v103;
  if ( *(_QWORD *)&v103[2] )
    v12 = *(unsigned int *)(*(_QWORD *)&v103[2] - 4LL);
  else
    v12 = 0;
  v13 = sub_15EC1C0(*(_QWORD *)v103, v12);
  v73 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)(unsigned __int64)a1);
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v14 = **(_QWORD **)v76;
  **(_QWORD **)v76 = v13;
  sub_3D2CD0(v14, v11);
  sub_2334C0(v75);
  *(_QWORD *)v93 = a1;
  v94 = nullptr;
  *(_QWORD *)v95 = a1;
  v96 = nullptr;
  sub_1684300(v99, a1);
  sub_16669D0(v100, a1);
  v15 = _mm_load_si128(&v73);
  v104 = 0;
  v112 = &v118;
  v78 = &v86;
  v79 = &v87;
  v105 = a1;
  v106 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  v110 = a1;
  v111 = 0;
  v113 = 1;
  v114 = 0;
  v115 = 0;
  v116 = 1065353216;
  v117 = 0;
  v118 = 0;
  v81 = a1;
  v74 = nullptr;
  v80 = &v89;
  *(__m128i *)v103 = v15;
  while ( 2 )
  {
    v16 = v79;
    v86 = 0;
    sub_E65950(v79, a1, v78);
    v17 = *(__int64 **)v76;
    sub_E659B0(v16, a2, *(_QWORD *)v76);
    sub_14B9B80(v77, v17);
    v21 = (__int64 *)a2[1];
    if ( !v21 )
    {
      v31 = v104;
      if ( v104 )
        goto LABEL_23;
      goto LABEL_34;
    }
    v22 = &v21[*((unsigned int *)v21 - 1)];
    if ( v21 == v22 )
    {
      v31 = v104;
      if ( v104 )
        goto LABEL_23;
      goto LABEL_33;
    }
    do
    {
      while ( 1 )
      {
        v26 = *v21;
        if ( (unsigned __int8)sub_15D2CB0(a1, *v21) )
        {
          v73.m128i_i8[0] = sub_13608A0(v72 + 128);
          sub_1360B80(v72 + 128, 1);
          sub_1374250(v101, v72, v26);
          sub_14EA0D0(v75, v26, *(_QWORD *)v101);
          v23 = *(_QWORD *)v101;
          if ( *(_QWORD *)v101 )
          {
            v24 = v102;
            v25 = (*(_DWORD *)(*(_QWORD *)v101 + 8LL))-- == 1;
            if ( v25 )
              sub_15D7BC0(v24, v23);
          }
          sub_1360B80(v72 + 128, v73.m128i_u8[0]);
          goto LABEL_13;
        }
        v27 = *(_DWORD **)(sub_15D1F10(v26) + 24);
        if ( !v27 || v99[0] != *v27 || v27[1] )
          break;
        ++*(_DWORD *)(v26 + 8);
        v88 = v26;
        sub_3D5D00(&v96, &v88);
LABEL_13:
        if ( v22 == ++v21 )
          goto LABEL_22;
      }
      v28 = *(_DWORD **)(sub_15D1F10(v26) + 24);
      if ( v28 && *v28 == 5 && v28[1] == 1
        || (v29 = *(_DWORD **)(sub_15D1F10(v26) + 24)) != nullptr && *v29 == 5 && !v29[1] )
      {
        ++*(_DWORD *)(v26 + 8);
        v89 = v26;
        sub_3D5D00(&v94, v80);
        goto LABEL_13;
      }
      v30 = v81;
      ++*(_DWORD *)(v26 + 8);
      v90 = v26;
      v97 = v30;
      v98 = v74;
      sub_3D5D00(&v98, &v90);
      ++v21;
      v81 = v97;
      v74 = v98;
    }
    while ( v22 != v21 );
LABEL_22:
    v31 = v104;
    if ( v104 )
    {
LABEL_23:
      if ( *(_DWORD *)(v31 - 4) )
      {
        v32 = *(__int64 **)v76;
        v33 = v75;
        sub_14EA2A0(v75, **(_QWORD **)v76, *(_QWORD *)v76);
        sub_14B9B80(v77, v32);
        sub_14E9CE0(v33);
      }
    }
    v21 = (__int64 *)a2[1];
    v34 = v21;
    if ( v21 )
    {
      v35 = &v21[*((unsigned int *)v21 - 1)];
      if ( v21 >= v35 )
        goto LABEL_33;
      do
      {
        while ( 1 )
        {
          v36 = *v34;
          if ( *v34 )
          {
            v37 = *a2;
            v25 = (*(_DWORD *)(v36 + 8))-- == 1;
            if ( v25 )
              break;
          }
          if ( ++v34 >= v35 )
            goto LABEL_32;
        }
        sub_15D7BC0(v37, v36);
        ++v34;
      }
      while ( v34 < v35 );
LABEL_32:
      v21 = (__int64 *)a2[1];
      if ( v21 )
LABEL_33:
        *((_DWORD *)v21 - 1) = 0;
    }
LABEL_34:
    if ( v96 )
    {
      if ( *((_DWORD *)v96 - 1) )
      {
        v38 = *(_DWORD *)(a1 + 712);
        *(_DWORD *)(a1 + 712) = 0;
        *(_QWORD *)v91 = 0;
        sub_14B7810((int)v101, a1, (int)v91, v18, v19, v20, v71);
        sub_18572D0(v91);
        v39 = *(__int64 **)v76;
        sub_3EBA00((int)v72, (int)v95, v76[0], (int)a2);
        sub_14B9B80(v101, v39);
        sub_14B63F0(v101);
        *(_DWORD *)(a1 + 712) = v38;
        v21 = (__int64 *)a2[1];
      }
      if ( v21 && *((_DWORD *)v21 - 1) )
      {
        sub_E65980(v79);
        sub_18572D0(v78);
        continue;
      }
    }
    break;
  }
  sub_E65980(v79);
  sub_18572D0(v78);
  v42 = v94;
  if ( !v94 )
    goto LABEL_112;
  v43 = *((_DWORD *)v94 - 1);
  if ( !v43 )
    goto LABEL_44;
  if ( (_BYTE)v85 )
  {
    *(_QWORD *)v101 = 0;
    sub_6EF8C0(v91, a1, v101);
    sub_18572D0(v101);
    *(_QWORD *)v101 = a1;
    v102 = 0;
    sub_15EEF60(**(_QWORD **)v76);
    sub_6F0E90(v91, 1, v93, v72, v101, 0);
    v66 = *(_QWORD *)v101;
    if ( v102 )
      v67 = *(unsigned int *)(v102 - 4);
    else
      v67 = 0;
    v68 = sub_15EC1C0(*(_QWORD *)v101, v67);
    if ( v68 )
      ++*(_DWORD *)(v68 + 8);
    v69 = **(_QWORD **)v76;
    **(_QWORD **)v76 = v68;
    sub_3D2CD0(v69, v66);
    sub_2334C0((__int64 *)v101);
    sub_6EF670(v91);
  }
  else
  {
    v52 = *(_DWORD *)(a1 + 712);
    v53 = v76[0];
    *(_DWORD *)(a1 + 712) = 0;
    sub_3E8750(
      (int)v72,
      (int)v93,
      v53,
      v40,
      v43,
      v41,
      (int)v71,
      v72,
      v73.m128i_i32[0],
      v73.m128i_i32[2],
      (int)v74,
      v75,
      v76[0],
      (int)v77,
      (int)v78,
      (int)v79,
      (int)v80,
      v81,
      v82,
      v84,
      v86,
      v87,
      v88,
      v89);
    *(_DWORD *)(a1 + 712) = v52;
  }
  v42 = v94;
  if ( !v94 )
  {
LABEL_112:
    v44 = (_QWORD *)a2[1];
    if ( !v44 )
      goto LABEL_54;
    goto LABEL_46;
  }
  if ( !*((_DWORD *)v94 - 1) )
  {
LABEL_44:
    v44 = (_QWORD *)a2[1];
    if ( (_BYTE)v83 )
    {
      if ( !v44 )
      {
        if ( v74 )
          goto LABEL_55;
LABEL_124:
        if ( v42 && *((_DWORD *)v42 - 1) )
          goto LABEL_63;
LABEL_82:
        sub_268600((__int64)v75);
        v55 = v96;
        if ( v96 )
          goto LABEL_104;
        goto LABEL_83;
      }
    }
    else if ( !v44 )
    {
      goto LABEL_81;
    }
    goto LABEL_46;
  }
  sub_3D8C40((__int64)v72, (__int64 *)v93, *(_QWORD **)v76);
  if ( (_BYTE)v83 )
  {
    v44 = (_QWORD *)a2[1];
    if ( !v44 )
    {
      if ( v74 )
        goto LABEL_55;
LABEL_123:
      v42 = v94;
      goto LABEL_124;
    }
    goto LABEL_46;
  }
  if ( v94 && *((_DWORD *)v94 - 1) )
  {
    v54 = *(__int64 **)v76;
    sub_3D5540(a1, (__int64)v93, (__int64)v72, *(_QWORD **)v76);
    sub_14B9B80(v77, v54);
  }
  v44 = (_QWORD *)a2[1];
  if ( v44 )
  {
LABEL_46:
    v45 = &v44[*((unsigned int *)v44 - 1)];
    if ( v44 >= v45 )
      goto LABEL_53;
    do
    {
      while ( 1 )
      {
        v46 = *v44;
        if ( *v44 )
        {
          v47 = *a2;
          v25 = (*(_DWORD *)(v46 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( ++v44 >= v45 )
          goto LABEL_52;
      }
      sub_15D7BC0(v47, v46);
      ++v44;
    }
    while ( v44 < v45 );
LABEL_52:
    v44 = (_QWORD *)a2[1];
    if ( v44 )
LABEL_53:
      *((_DWORD *)v44 - 1) = 0;
LABEL_54:
    if ( v74 )
      goto LABEL_55;
    if ( !(_BYTE)v83 )
      goto LABEL_82;
    goto LABEL_123;
  }
LABEL_81:
  if ( !v74 )
    goto LABEL_82;
LABEL_55:
  for ( i = 0; i < *((_DWORD *)v74 - 1); ++i )
  {
    v49 = v74[i];
    *(_QWORD *)v91 = v49;
    if ( v49 )
      ++*(_DWORD *)(v49 + 8);
    sub_3D5D00(a2 + 1, v91);
  }
  if ( (_BYTE)v83 && (v42 = v94) != nullptr && *((_DWORD *)v94 - 1) )
  {
LABEL_63:
    v50 = 0;
    do
    {
      v51 = v42[v50];
      *(_QWORD *)v101 = v51;
      if ( v51 )
        ++*(_DWORD *)(v51 + 8);
      sub_3D5D00(a2 + 1, v101);
      v42 = v94;
      ++v50;
    }
    while ( v94 && v50 < *((_DWORD *)v94 - 1) );
    sub_268600((__int64)v75);
    if ( !v74 )
      goto LABEL_103;
  }
  else
  {
    sub_268600((__int64)v75);
  }
  v60 = v81;
  v61 = v74;
  v62 = (unsigned __int64)&v74[*((unsigned int *)v74 - 1)];
  if ( (unsigned __int64)v74 < v62 )
  {
    do
    {
      while ( 1 )
      {
        v63 = *v61;
        if ( *v61 )
        {
          v25 = (*(_DWORD *)(v63 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( (unsigned __int64)++v61 >= v62 )
          goto LABEL_102;
      }
      ++v61;
      sub_15D7BC0(v60, v63);
    }
    while ( (unsigned __int64)v61 < v62 );
  }
LABEL_102:
  sub_186B220(v74 - 1);
LABEL_103:
  v55 = v96;
  if ( v96 )
  {
LABEL_104:
    v64 = &v55[*((unsigned int *)v55 - 1)];
    if ( v55 >= v64 )
      goto LABEL_111;
    do
    {
      while ( 1 )
      {
        v65 = *v55;
        if ( *v55 )
        {
          v25 = (*(_DWORD *)(v65 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( ++v55 >= v64 )
          goto LABEL_110;
      }
      sub_15D7BC0(*(_QWORD *)v95, v65);
      ++v55;
    }
    while ( v55 < v64 );
LABEL_110:
    v55 = v96;
    if ( v96 )
LABEL_111:
      sub_186B220(v55 - 1);
  }
LABEL_83:
  v56 = v94;
  if ( v94 )
  {
    v57 = (unsigned __int64)&v94[*((unsigned int *)v94 - 1)];
    if ( (unsigned __int64)v94 >= v57 )
      goto LABEL_91;
    do
    {
      while ( 1 )
      {
        v58 = *v56;
        if ( *v56 )
        {
          v25 = (*(_DWORD *)(v58 + 8))-- == 1;
          if ( v25 )
            break;
        }
        if ( (unsigned __int64)++v56 >= v57 )
          goto LABEL_90;
      }
      sub_15D7BC0(*(_QWORD *)v93, v58);
      ++v56;
    }
    while ( (unsigned __int64)v56 < v57 );
LABEL_90:
    v56 = v94;
    if ( v94 )
LABEL_91:
      sub_186B220(v56 - 1);
  }
  return sub_14B63F0(v77);
}


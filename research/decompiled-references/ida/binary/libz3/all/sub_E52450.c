__int64 __fastcall sub_E52450(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // r13
  void (__fastcall *v5)(_QWORD *); // rax
  _QWORD *v6; // r14
  void (__fastcall *v7)(_QWORD *); // rdx
  _QWORD *v8; // rcx
  void (__fastcall *v9)(_QWORD *); // rax
  _QWORD *v10; // rcx
  void (__fastcall *v11)(_QWORD *); // rdx
  _QWORD *v12; // r15
  void (__fastcall *v13)(_QWORD *); // rax
  _QWORD *v14; // rcx
  void (__fastcall *v15)(_QWORD *); // rdx
  _QWORD *v16; // rcx
  void (__fastcall *v17)(_QWORD *); // rax
  _QWORD **v18; // r8
  void (__fastcall *v19)(_QWORD *); // rdx
  __int64 v20; // r8
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 result; // rax
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 *v27; // rbp
  unsigned int v28; // ecx
  __int64 v29; // rsi
  bool v30; // zf
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rdx
  unsigned int v34; // ecx
  __int64 v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // r8
  unsigned int v38; // ecx
  __int64 *v39; // rbp
  __int64 v40; // rsi
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // rdx
  unsigned int v44; // ecx
  __int64 v45; // rbp
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int v48; // ecx
  __int64 *v49; // rbp
  __int64 v50; // rsi
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // rdx
  unsigned int v54; // ecx
  __int64 v55; // rbp
  __int64 v56; // rdx
  __int64 v57; // r8
  unsigned int v58; // ecx
  __int64 *v59; // rbp
  __int64 v60; // rsi
  __int64 v61; // rsi
  __int64 v62; // rdi
  unsigned int v63; // r15d
  __int64 v64; // rdx
  __int64 v65; // rdx
  __int64 v66; // r8
  __int64 *v67; // rbp
  __int64 v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rdi
  unsigned int v71; // r15d
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 *v75; // rbp
  __int64 v76; // rsi
  __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rdx
  unsigned int v80; // r15d
  __int64 v81; // rdx
  __int64 v82; // r8
  __int64 *v83; // rbp
  __int64 v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rdi
  __int64 v87; // rdx
  unsigned int v88; // r14d
  __int64 v89; // r15
  __int64 v90; // rdi
  __int64 *v91; // rbp
  __int64 v92; // rsi
  __int64 v93; // rsi
  __int64 v94; // rdi
  __int64 v95; // rdx
  unsigned int v96; // r15d
  __int64 v97; // r14
  __int64 v98; // rdi
  __int64 *v99; // rbp
  __int64 v100; // rsi
  __int64 v101; // rsi
  __int64 v102; // rdi
  _QWORD *v103; // [rsp+0h] [rbp-88h]
  _QWORD *v104; // [rsp+8h] [rbp-80h]
  __int64 v105; // [rsp+8h] [rbp-80h]
  __int64 v106; // [rsp+10h] [rbp-78h]
  __int64 v107; // [rsp+10h] [rbp-78h]
  unsigned int v108; // [rsp+10h] [rbp-78h]
  unsigned int v109; // [rsp+10h] [rbp-78h]
  unsigned int v110; // [rsp+10h] [rbp-78h]
  __int64 v111; // [rsp+10h] [rbp-78h]
  __int64 v112; // [rsp+10h] [rbp-78h]
  __int64 v113; // [rsp+10h] [rbp-78h]
  _QWORD *v114; // [rsp+18h] [rbp-70h]
  __int64 v115; // [rsp+18h] [rbp-70h]
  _QWORD *v116; // [rsp+20h] [rbp-68h]
  unsigned int v117; // [rsp+20h] [rbp-68h]
  unsigned int v118; // [rsp+28h] [rbp-60h]
  __int64 v119; // [rsp+28h] [rbp-60h]
  __int64 v120; // [rsp+28h] [rbp-60h]
  unsigned int v121; // [rsp+30h] [rbp-58h]
  unsigned int v122; // [rsp+3Ch] [rbp-4Ch]
  __int64 v123; // [rsp+40h] [rbp-48h] BYREF
  __int64 v124; // [rsp+48h] [rbp-40h]

  v4 = *(_QWORD **)(a1 + 104);
  v5 = *(void (__fastcall **)(_QWORD *))(*v4 + 24LL);
  if ( (char *)v5 != (char *)sub_E52450 )
  {
    v5(*(_QWORD **)(a1 + 104));
    result = a2[1];
LABEL_98:
    v95 = *(_QWORD *)(a1 + 96);
    v96 = 0;
    v123 = 0;
    v124 = v95;
    if ( result )
    {
      do
      {
        if ( v96 >= *(_DWORD *)(result - 4) )
          break;
        sub_14EA2A0(a1 + 480, *(_QWORD *)(result + 8LL * v96), &v123);
        result = a2[1];
        v97 = v123;
        v98 = *a2;
        v99 = (__int64 *)(result + 8LL * v96);
        if ( v123 )
          ++*(_DWORD *)(v123 + 8);
        v100 = *v99;
        if ( *v99 )
        {
          v30 = (*(_DWORD *)(v100 + 8))-- == 1;
          if ( v30 )
          {
            sub_15D7BC0(v98, v100);
            result = a2[1];
          }
        }
        *v99 = v97;
        ++v96;
      }
      while ( result );
      v101 = v123;
      v102 = v124;
      if ( v123 )
      {
        v30 = (*(_DWORD *)(v123 + 8))-- == 1;
        if ( v30 )
          return sub_15D7BC0(v102, v101);
      }
    }
    return result;
  }
  v6 = (_QWORD *)v4[13];
  v7 = *(void (__fastcall **)(_QWORD *))(*v6 + 24LL);
  if ( v7 != v5 )
  {
    v7((_QWORD *)v4[13]);
    result = a2[1];
LABEL_86:
    v87 = v4[12];
    v88 = 0;
    v123 = 0;
    v124 = v87;
    if ( !result )
      return result;
    do
    {
      if ( v88 >= *(_DWORD *)(result - 4) )
        break;
      sub_14EA2A0(v4 + 60, *(_QWORD *)(result + 8LL * v88), &v123);
      result = a2[1];
      v89 = v123;
      v90 = *a2;
      v91 = (__int64 *)(result + 8LL * v88);
      if ( v123 )
        ++*(_DWORD *)(v123 + 8);
      v92 = *v91;
      if ( *v91 )
      {
        v30 = (*(_DWORD *)(v92 + 8))-- == 1;
        if ( v30 )
        {
          sub_15D7BC0(v90, v92);
          result = a2[1];
        }
      }
      *v91 = v89;
      ++v88;
    }
    while ( result );
    v93 = v123;
    v94 = v124;
    if ( v123 )
    {
      v30 = (*(_DWORD *)(v123 + 8))-- == 1;
      if ( v30 )
      {
        sub_15D7BC0(v94, v93);
        result = a2[1];
      }
    }
    goto LABEL_98;
  }
  v8 = (_QWORD *)v6[13];
  v103 = v8;
  v9 = *(void (__fastcall **)(_QWORD *))(*v8 + 24LL);
  if ( v9 != v7 )
  {
    v9(v8);
    result = a2[1];
LABEL_75:
    v79 = v6[12];
    v80 = 0;
    v123 = 0;
    v124 = v79;
    if ( !result )
      return result;
    do
    {
      if ( v80 >= *(_DWORD *)(result - 4) )
        break;
      sub_14EA2A0(v6 + 60, *(_QWORD *)(result + 8LL * v80), &v123);
      result = a2[1];
      v81 = v123;
      v82 = *a2;
      v83 = (__int64 *)(result + 8LL * v80);
      if ( v123 )
        ++*(_DWORD *)(v123 + 8);
      v84 = *v83;
      if ( *v83 )
      {
        v30 = (*(_DWORD *)(v84 + 8))-- == 1;
        if ( v30 )
        {
          v105 = v81;
          sub_15D7BC0(v82, v84);
          result = a2[1];
          v81 = v105;
        }
      }
      *v83 = v81;
      ++v80;
    }
    while ( result );
    v85 = v123;
    v86 = v124;
    if ( v123 )
    {
      v30 = (*(_DWORD *)(v123 + 8))-- == 1;
      if ( v30 )
      {
        sub_15D7BC0(v86, v85);
        result = a2[1];
      }
    }
    goto LABEL_86;
  }
  v10 = (_QWORD *)v8[13];
  v104 = v10;
  v11 = *(void (__fastcall **)(_QWORD *))(*v10 + 24LL);
  if ( v11 != v9 )
  {
    v11(v10);
    result = a2[1];
LABEL_64:
    v71 = 0;
    v72 = v103[12];
    v123 = 0;
    v124 = v72;
    if ( !result )
      return result;
    do
    {
      if ( v71 >= *(_DWORD *)(result - 4) )
        break;
      sub_14EA2A0(v103 + 60, *(_QWORD *)(result + 8LL * v71), &v123);
      result = a2[1];
      v73 = v123;
      v74 = *a2;
      v75 = (__int64 *)(result + 8LL * v71);
      if ( v123 )
        ++*(_DWORD *)(v123 + 8);
      v76 = *v75;
      if ( *v75 )
      {
        v30 = (*(_DWORD *)(v76 + 8))-- == 1;
        if ( v30 )
        {
          v111 = v73;
          sub_15D7BC0(v74, v76);
          result = a2[1];
          v73 = v111;
        }
      }
      *v75 = v73;
      ++v71;
    }
    while ( result );
    v77 = v123;
    v78 = v124;
    if ( v123 )
    {
      v30 = (*(_DWORD *)(v123 + 8))-- == 1;
      if ( v30 )
      {
        sub_15D7BC0(v78, v77);
        result = a2[1];
      }
    }
    goto LABEL_75;
  }
  v12 = (_QWORD *)v10[13];
  v13 = *(void (__fastcall **)(_QWORD *))(*v12 + 24LL);
  if ( v13 != v11 )
  {
    v13((_QWORD *)v10[13]);
    result = a2[1];
LABEL_53:
    v63 = 0;
    v64 = v104[12];
    v123 = 0;
    v124 = v64;
    if ( !result )
      return result;
    do
    {
      if ( v63 >= *(_DWORD *)(result - 4) )
        break;
      sub_14EA2A0(v104 + 60, *(_QWORD *)(result + 8LL * v63), &v123);
      result = a2[1];
      v65 = v123;
      v66 = *a2;
      v67 = (__int64 *)(result + 8LL * v63);
      if ( v123 )
        ++*(_DWORD *)(v123 + 8);
      v68 = *v67;
      if ( *v67 )
      {
        v30 = (*(_DWORD *)(v68 + 8))-- == 1;
        if ( v30 )
        {
          v115 = v65;
          sub_15D7BC0(v66, v68);
          result = a2[1];
          v65 = v115;
        }
      }
      *v67 = v65;
      ++v63;
    }
    while ( result );
    v69 = v123;
    v70 = v124;
    if ( v123 )
    {
      v30 = (*(_DWORD *)(v123 + 8))-- == 1;
      if ( v30 )
      {
        sub_15D7BC0(v70, v69);
        result = a2[1];
      }
    }
    goto LABEL_64;
  }
  v14 = (_QWORD *)v12[13];
  v114 = v14;
  v15 = *(void (__fastcall **)(_QWORD *))(*v14 + 24LL);
  if ( v15 != v13 )
  {
    v15(v14);
    result = a2[1];
LABEL_42:
    v53 = v12[12];
    v54 = 0;
    v123 = 0;
    v124 = v53;
    if ( !result )
      return result;
    do
    {
      if ( v54 >= *(_DWORD *)(result - 4) )
        break;
      v110 = v54;
      v55 = 8LL * v54;
      sub_14EA2A0(v12 + 60, *(_QWORD *)(result + v55), &v123);
      v56 = v123;
      result = a2[1];
      v57 = *a2;
      v58 = v110;
      v59 = (__int64 *)(result + v55);
      if ( v123 )
        ++*(_DWORD *)(v123 + 8);
      v60 = *v59;
      if ( *v59 )
      {
        v30 = (*(_DWORD *)(v60 + 8))-- == 1;
        if ( v30 )
        {
          v117 = v110;
          v112 = v56;
          sub_15D7BC0(v57, v60);
          result = a2[1];
          v58 = v117;
          v56 = v112;
        }
      }
      *v59 = v56;
      v54 = v58 + 1;
    }
    while ( result );
    v61 = v123;
    v62 = v124;
    if ( v123 )
    {
      v30 = (*(_DWORD *)(v123 + 8))-- == 1;
      if ( v30 )
      {
        sub_15D7BC0(v62, v61);
        result = a2[1];
      }
    }
    goto LABEL_53;
  }
  v16 = (_QWORD *)v14[13];
  v116 = v16;
  v17 = *(void (__fastcall **)(_QWORD *))(*v16 + 24LL);
  if ( v17 != v15 )
  {
    v17(v16);
    result = a2[1];
LABEL_31:
    v43 = v114[12];
    v44 = 0;
    v123 = 0;
    v124 = v43;
    if ( !result )
      return result;
    do
    {
      if ( v44 >= *(_DWORD *)(result - 4) )
        break;
      v109 = v44;
      v45 = 8LL * v44;
      sub_14EA2A0(v114 + 60, *(_QWORD *)(result + v45), &v123);
      v46 = v123;
      result = a2[1];
      v47 = *a2;
      v48 = v109;
      v49 = (__int64 *)(result + v45);
      if ( v123 )
        ++*(_DWORD *)(v123 + 8);
      v50 = *v49;
      if ( *v49 )
      {
        v30 = (*(_DWORD *)(v50 + 8))-- == 1;
        if ( v30 )
        {
          v119 = v46;
          sub_15D7BC0(v47, v50);
          result = a2[1];
          v46 = v119;
          v48 = v109;
        }
      }
      *v49 = v46;
      v44 = v48 + 1;
    }
    while ( result );
    v51 = v123;
    v52 = v124;
    if ( v123 )
    {
      v30 = (*(_DWORD *)(v123 + 8))-- == 1;
      if ( v30 )
      {
        sub_15D7BC0(v52, v51);
        result = a2[1];
      }
    }
    goto LABEL_42;
  }
  v18 = (_QWORD **)v16[13];
  v19 = (void (__fastcall *)(_QWORD *))(*v18)[3];
  if ( v19 == v17 )
  {
    v106 = v16[13];
    (*(void (__fastcall **)(_QWORD *))(*v18[13] + 24LL))(v18[13]);
    v20 = v106;
    v21 = 0;
    v22 = *(_QWORD *)(v106 + 96);
    v123 = 0;
    v124 = v22;
    result = a2[1];
    if ( !result )
      return result;
    do
    {
      if ( v21 >= *(_DWORD *)(result - 4) )
        break;
      v118 = v21;
      v24 = 8LL * v21;
      v107 = v20;
      sub_14EA2A0(v20 + 480, *(_QWORD *)(result + v24), &v123);
      v25 = v123;
      result = a2[1];
      v26 = *a2;
      v20 = v107;
      v27 = (__int64 *)(result + v24);
      v28 = v118;
      if ( v123 )
        ++*(_DWORD *)(v123 + 8);
      v29 = *v27;
      if ( *v27 )
      {
        v30 = (*(_DWORD *)(v29 + 8))-- == 1;
        if ( v30 )
        {
          v122 = v118;
          v120 = v25;
          sub_15D7BC0(v26, v29);
          result = a2[1];
          v28 = v122;
          v25 = v120;
          v20 = v107;
        }
      }
      *v27 = v25;
      v21 = v28 + 1;
    }
    while ( result );
    v31 = v123;
    v32 = v124;
    if ( v123 )
    {
      v30 = (*(_DWORD *)(v123 + 8))-- == 1;
      if ( v30 )
      {
        sub_15D7BC0(v32, v31);
        result = a2[1];
      }
    }
  }
  else
  {
    v19((_QWORD *)v16[13]);
    result = a2[1];
  }
  v33 = v116[12];
  v34 = 0;
  v123 = 0;
  v124 = v33;
  if ( result )
  {
    do
    {
      if ( v34 >= *(_DWORD *)(result - 4) )
        break;
      v108 = v34;
      v35 = 8LL * v34;
      sub_14EA2A0(v116 + 60, *(_QWORD *)(result + v35), &v123);
      v36 = v123;
      result = a2[1];
      v37 = *a2;
      v38 = v108;
      v39 = (__int64 *)(result + v35);
      if ( v123 )
        ++*(_DWORD *)(v123 + 8);
      v40 = *v39;
      if ( *v39 )
      {
        v30 = (*(_DWORD *)(v40 + 8))-- == 1;
        if ( v30 )
        {
          v121 = v108;
          v113 = v36;
          sub_15D7BC0(v37, v40);
          result = a2[1];
          v38 = v121;
          v36 = v113;
        }
      }
      *v39 = v36;
      v34 = v38 + 1;
    }
    while ( result );
    v41 = v123;
    v42 = v124;
    if ( v123 )
    {
      v30 = (*(_DWORD *)(v123 + 8))-- == 1;
      if ( v30 )
      {
        sub_15D7BC0(v42, v41);
        result = a2[1];
      }
    }
    goto LABEL_31;
  }
  return result;
}


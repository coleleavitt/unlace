unsigned __int64 __fastcall disasm_graph_t__::vfunc_34(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        int a5,
        int a6,
        double a7)
{
  unsigned int v7; // ebx
  int v9; // edx
  const char *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *v13; // r12
  const char *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  __int64 v19; // rbp
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // r8
  unsigned __int64 v23; // rbx
  __int64 v24; // rdi
  unsigned __int64 v25; // rdx
  __int64 v26; // r12
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // r12
  __int64 v30; // rbp
  __int64 *v31; // rdi
  __int64 v32; // r14
  __int64 v33; // r12
  __int64 v34; // rbx
  __int64 v35; // rbp
  unsigned __int64 v36; // r15
  size_t v37; // r9
  const char *v38; // r10
  void *v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rbp
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // rdi
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned __int64 v48; // r8
  unsigned __int64 v49; // r14
  __int64 v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rbp
  __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rcx
  int v63; // [rsp+0h] [rbp-2A8h]
  int v64; // [rsp+8h] [rbp-2A0h]
  unsigned __int64 v65; // [rsp+8h] [rbp-2A0h]
  __int64 v66; // [rsp+8h] [rbp-2A0h]
  __int64 v67; // [rsp+8h] [rbp-2A0h]
  __int64 v68; // [rsp+8h] [rbp-2A0h]
  __int64 v69; // [rsp+8h] [rbp-2A0h]
  unsigned __int64 v70; // [rsp+8h] [rbp-2A0h]
  __int64 v71; // [rsp+8h] [rbp-2A0h]
  unsigned __int64 v72; // [rsp+8h] [rbp-2A0h]
  unsigned __int64 v73; // [rsp+8h] [rbp-2A0h]
  const char *v75; // [rsp+18h] [rbp-290h]
  __int64 v76; // [rsp+20h] [rbp-288h] BYREF
  __int128 v77; // [rsp+28h] [rbp-280h]
  _OWORD v78[2]; // [rsp+40h] [rbp-268h] BYREF
  unsigned __int64 v79; // [rsp+60h] [rbp-248h]
  __int64 v80; // [rsp+68h] [rbp-240h]
  __int64 v81; // [rsp+70h] [rbp-238h]
  __int128 v82; // [rsp+78h] [rbp-230h]
  __int64 v83; // [rsp+88h] [rbp-220h]
  __int128 v84; // [rsp+90h] [rbp-218h]
  __int128 v85; // [rsp+A0h] [rbp-208h]
  __int128 v86; // [rsp+B0h] [rbp-1F8h]
  __int64 v87; // [rsp+C0h] [rbp-1E8h]
  __int128 v88; // [rsp+C8h] [rbp-1E0h]
  __int128 v89; // [rsp+D8h] [rbp-1D0h]
  __int128 v90; // [rsp+E8h] [rbp-1C0h]
  __int64 v91; // [rsp+F8h] [rbp-1B0h]
  __int128 v92; // [rsp+100h] [rbp-1A8h]
  __int64 v93; // [rsp+110h] [rbp-198h]
  __int128 v94; // [rsp+118h] [rbp-190h]
  __int64 v95; // [rsp+128h] [rbp-180h]
  __int128 v96; // [rsp+130h] [rbp-178h]
  __int64 v97; // [rsp+140h] [rbp-168h]
  __int64 v98; // [rsp+148h] [rbp-160h]
  const char *v99; // [rsp+150h] [rbp-158h] BYREF
  __int128 v100; // [rsp+158h] [rbp-150h]
  __int64 v101; // [rsp+168h] [rbp-140h]
  __int64 v102; // [rsp+170h] [rbp-138h]
  __int128 v103; // [rsp+178h] [rbp-130h]
  unsigned __int64 v104; // [rsp+268h] [rbp-40h]

  v64 = a4;
  v104 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 360) < (unsigned __int64)(unsigned int)a2 )
  {
    if ( !under_debugger )
      interr(40225, a2, a3, a4, a7);
    BUG();
  }
  v7 = a2;
  v77 = 0;
  v9 = a2;
  v10 = (const char *)(a1 + 280);
  v76 = 0;
  if ( !(unsigned __int8)callui(84, (int)a1 + 280, v9, (unsigned int)&v76, (unsigned int)&callui, a6) )
  {
    v13 = (__int64 *)(*(_QWORD *)(a1 + 352) + ((__int64)(int)v7 << 6));
    if ( *(_DWORD *)(a1 + 376) <= (signed int)v7 )
    {
      v99 = nullptr;
      v100 = 0;
      get_nice_colored_name(&v99, *v13, 0);
      v10 = &s1;
      if ( (_QWORD)v100 )
        v10 = v99;
      sub_27A540(a3, v10, *v13, v64);
      if ( v99 )
      {
        *(_QWORD *)&v100 = 0;
        qfree(v99, v10);
      }
    }
    else
    {
      v14 = (const char *)v7;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 328LL))(a1, v7) )
      {
LABEL_5:
        v18 = 0;
        *(_BYTE *)((int)v7 + *(_QWORD *)(a1 + 104)) &= ~8u;
        v19 = v77;
        if ( (_QWORD)v77 )
        {
          do
          {
            v20 = v76 + 48 * v18;
            v21 = *(_QWORD *)(v20 + 8);
            if ( v21 )
            {
              *(_QWORD *)(v20 + 16) = 0;
              qfree(v21, v14);
            }
            ++v18;
          }
          while ( v19 != v18 );
        }
        *(_QWORD *)&v77 = 0;
        v10 = (const char *)*v13;
        sub_2A66D0((unsigned int)&v76, *v13, v13[1], (unsigned __int8)v64, a5, v17, v63, v64, a5);
        goto LABEL_10;
      }
      v14 = *(const char **)(a1 + 72);
      v99 = (const char *)&word_38;
      *(_QWORD *)&v100 = -1;
      DWORD2(v100) = 0;
      v101 = -1;
      v102 = 0;
      v103 = 0;
      if ( (unsigned __int8)get_node_info(&v99, v14, v7, v15, v16, v17) && (BYTE8(v100) & 1) != 0 )
      {
        if ( v102 )
        {
          *(_QWORD *)&v103 = 0;
          qfree(v102, v14);
        }
        goto LABEL_5;
      }
      v10 = "Sorry, this node is too big to display";
      *(_BYTE *)((int)v7 + *(_QWORD *)(a1 + 104)) |= 8u;
      sub_27A540(a3, "Sorry, this node is too big to display", *v13, v64);
      if ( v102 )
      {
        *(_QWORD *)&v103 = 0;
        qfree(v102, "Sorry, this node is too big to display");
      }
    }
    v40 = v76;
    if ( !v76 )
      return v104 - __readfsqword(0x28u);
    v56 = v77;
    if ( (_QWORD)v77 )
    {
      v57 = 0;
      do
      {
        v58 = v40 + 48 * v57;
        v59 = *(_QWORD *)(v58 + 8);
        if ( v59 )
        {
          *(_QWORD *)(v58 + 16) = 0;
          qfree(v59, v10);
          v40 = v76;
        }
        ++v57;
      }
      while ( v56 != v57 );
    }
    goto LABEL_38;
  }
LABEL_10:
  v22 = v77;
  v23 = a3[1];
  if ( (_QWORD)v77 == v23 )
    goto LABEL_22;
  v80 = 0;
  v79 = 0xFFFFFFFF00000001LL;
  v81 = 0;
  v83 = 0;
  v87 = 0;
  v91 = 0;
  v93 = 0;
  v95 = 0;
  v97 = -1;
  v98 = 0;
  memset(v78, 0, sizeof(v78));
  v82 = 0;
  v84 = 0;
  v85 = 0;
  v86 = 0;
  v88 = 0;
  v89 = 0;
  v90 = 0;
  v92 = 0;
  v94 = 0;
  v96 = 0;
  if ( (unsigned __int64)v77 < v23 )
  {
    v29 = v77;
    v30 = 272 * v77;
    do
    {
      ++v29;
      v66 = v22;
      v31 = (__int64 *)(v30 + *a3);
      v30 += 272;
      sub_174D10(v31, (__int64)v10, v11, v12, v22);
      v22 = v66;
    }
    while ( v29 < v23 );
    a3[1] = v66;
LABEL_21:
    v67 = v22;
    sub_174D10((__int64 *)v78, (__int64)v10, v11, v12, v22);
    v22 = v67;
LABEL_22:
    if ( !v22 )
      goto LABEL_32;
    goto LABEL_23;
  }
  v24 = *a3;
  v25 = a3[2];
  if ( (unsigned __int64)v78 >= *a3 && (unsigned __int64)v78 < v24 + 272 * v25 )
  {
    v10 = (const char *)v78;
    v70 = v77;
    sub_174BB0((__int64 *)&v99, (__int64 *)v78);
    v48 = v70;
    if ( a3[2] < v70 )
    {
      v10 = (const char *)*a3;
      *a3 = qvector_reserve(a3, *a3, v70, 272);
      v48 = v70;
    }
    v49 = a3[1];
    v50 = 272 * v49;
    if ( v49 < v48 )
    {
      do
      {
        v10 = (const char *)&v99;
        v71 = v48;
        sub_174BB0((__int64 *)(v50 + *a3), (__int64 *)&v99);
        v48 = v71;
        ++v49;
        v50 += 272;
      }
      while ( v71 != v49 );
      a3[1] = v71;
      sub_174D10((__int64 *)&v99, (__int64)&v99, v51, v52, v71);
      sub_174D10((__int64 *)v78, (__int64)&v99, v53, v54, v55);
      v22 = v71;
      goto LABEL_23;
    }
    a3[1] = v48;
    v73 = v48;
    sub_174D10((__int64 *)&v99, (__int64)v10, v46, v47, v48);
    v22 = v73;
    goto LABEL_21;
  }
  if ( v25 >= (unsigned __int64)v77
    || (v10 = (const char *)*a3,
        v72 = v77,
        v60 = qvector_reserve(a3, *a3, v77, 272),
        v23 = a3[1],
        v22 = v72,
        *a3 = v60,
        v24 = v60,
        v23 < v72) )
  {
    v26 = 272 * v23;
    while ( 1 )
    {
      v10 = (const char *)v78;
      v65 = v22;
      sub_174BB0((__int64 *)(v26 + v24), (__int64 *)v78);
      v22 = v65;
      ++v23;
      v26 += 272;
      if ( v23 >= v65 )
        break;
      v24 = *a3;
    }
    a3[1] = v65;
    sub_174D10((__int64 *)v78, (__int64)v78, v27, v28, v65);
    v22 = v65;
  }
  else
  {
    a3[1] = v72;
    sub_174D10((__int64 *)v78, (__int64)v10, v61, v62, v72);
    v22 = v72;
  }
LABEL_23:
  v32 = 0;
  v33 = 0;
  do
  {
    v34 = v76 + 48 * v33;
    v35 = v32 + *a3;
    *(_QWORD *)v35 = *(_QWORD *)v34;
    if ( v35 + 8 != v34 + 8 )
    {
      v36 = *(_QWORD *)(v34 + 16);
      if ( !v36 || (v37 = v36 - 1, v36 == 1) )
      {
        *(_QWORD *)(v35 + 16) = 0;
      }
      else
      {
        v38 = *(const char **)(v34 + 8);
        v39 = *(void **)(v35 + 8);
        if ( *(_QWORD *)(v35 + 24) < v36 )
        {
          v75 = *(const char **)(v34 + 8);
          v69 = v22;
          v39 = (void *)qvector_reserve(v35 + 8, *(_QWORD *)(v35 + 8), *(_QWORD *)(v34 + 16), 1);
          v38 = v75;
          v37 = v36 - 1;
          *(_QWORD *)(v35 + 8) = v39;
          v22 = v69;
        }
        *(_QWORD *)(v35 + 16) = v36;
        v10 = v38;
        v68 = v22;
        memmove(v39, v38, v37);
        v22 = v68;
        *(_BYTE *)(*(_QWORD *)(v35 + 8) + v36 - 1) = 0;
      }
    }
    ++v33;
    v32 += 272;
    *(_BYTE *)(v35 + 32) = *(_BYTE *)(v34 + 32);
    *(_DWORD *)(v35 + 36) = *(_DWORD *)(v34 + 36);
    *(_BYTE *)(v35 + 40) = *(_BYTE *)(v34 + 40);
  }
  while ( v33 != v22 );
LABEL_32:
  v40 = v76;
  if ( v76 )
  {
    v41 = v77;
    if ( (_QWORD)v77 )
    {
      v42 = 0;
      do
      {
        v43 = v40 + 48 * v42;
        v44 = *(_QWORD *)(v43 + 8);
        if ( v44 )
        {
          *(_QWORD *)(v43 + 16) = 0;
          qfree(v44, v10);
          v40 = v76;
        }
        ++v42;
      }
      while ( v41 != v42 );
    }
LABEL_38:
    *(_QWORD *)&v77 = 0;
    qfree(v40, v10);
  }
  return v104 - __readfsqword(0x28u);
}

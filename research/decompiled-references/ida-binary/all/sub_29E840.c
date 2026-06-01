unsigned __int64 __fastcall sub_29E840(
        __int64 (__fastcall **a1)(),
        __int64 (__fastcall ***a2)(),
        __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 v7; // rsi
  unsigned __int64 v10; // rdx
  __int64 (__fastcall *v12)(); // rax
  __int64 (__fastcall *v13)(__int64); // rax
  int v14; // r13d
  double v15; // xmm0_8
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdi
  unsigned __int64 v22; // rax
  __int64 (__fastcall ***v23)(); // rbp
  __int64 (__fastcall *v24)(); // rax
  _QWORD *v25; // rbp
  int v26; // ebp
  __int64 *v27; // r13
  __int64 v28; // rax
  __int64 (__fastcall **v29)(); // rdx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  bool v33; // r8
  __int64 v34; // rax
  int v35; // r15d
  __int64 (__fastcall *v36)(__int64); // rax
  int v37; // eax
  int v38; // eax
  int *i; // r14
  unsigned int v40; // ebp
  __int64 v41; // rdi
  unsigned __int64 v42; // rax
  __int64 (__fastcall *v44)(__int64, int); // rax
  int v45; // eax
  __int64 v46; // rdi
  unsigned __int64 v47; // rdx
  int v48; // eax
  bool v49; // zf
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  unsigned __int64 v55; // [rsp+0h] [rbp-1E8h]
  __int64 v56; // [rsp+8h] [rbp-1E0h]
  bool v57; // [rsp+17h] [rbp-1D1h]
  int v59; // [rsp+3Ch] [rbp-1ACh] BYREF
  __int64 v60; // [rsp+40h] [rbp-1A8h] BYREF
  __int128 v61; // [rsp+48h] [rbp-1A0h]
  __int64 v62; // [rsp+58h] [rbp-190h]
  __int128 v63; // [rsp+60h] [rbp-188h]
  __int64 v64; // [rsp+70h] [rbp-178h] BYREF
  __int128 v65; // [rsp+78h] [rbp-170h]
  __int64 v66; // [rsp+88h] [rbp-160h]
  __int128 v67; // [rsp+90h] [rbp-158h]
  int v68; // [rsp+A0h] [rbp-148h] BYREF
  int v69; // [rsp+A8h] [rbp-140h] BYREF
  _QWORD *v70; // [rsp+B0h] [rbp-138h]
  int *v71; // [rsp+B8h] [rbp-130h]
  int *v72; // [rsp+C0h] [rbp-128h]
  __int64 v73; // [rsp+C8h] [rbp-120h]
  __int64 (__fastcall **v74)(); // [rsp+D0h] [rbp-118h] BYREF
  int v75; // [rsp+E0h] [rbp-108h] BYREF
  _QWORD *v76; // [rsp+E8h] [rbp-100h]
  int *v77; // [rsp+F0h] [rbp-F8h]
  int *v78; // [rsp+F8h] [rbp-F0h]
  __int64 v79; // [rsp+100h] [rbp-E8h]
  __int64 v80; // [rsp+110h] [rbp-D8h] BYREF
  __int64 v81; // [rsp+118h] [rbp-D0h] BYREF
  __int128 v82; // [rsp+120h] [rbp-C8h]
  __int64 *v83; // [rsp+130h] [rbp-B8h]
  __int64 *v84; // [rsp+138h] [rbp-B0h]
  __int64 (__fastcall ***v85)(); // [rsp+140h] [rbp-A8h]
  unsigned __int64 v86; // [rsp+148h] [rbp-A0h]
  __int64 (__fastcall **v87)(); // [rsp+150h] [rbp-98h] BYREF
  int v88; // [rsp+158h] [rbp-90h]
  int v89; // [rsp+160h] [rbp-88h] BYREF
  _QWORD *v90; // [rsp+168h] [rbp-80h]
  int *v91; // [rsp+170h] [rbp-78h]
  int *v92; // [rsp+178h] [rbp-70h]
  __int64 v93; // [rsp+180h] [rbp-68h]
  __int64 *v94; // [rsp+188h] [rbp-60h]
  _QWORD v95[3]; // [rsp+190h] [rbp-58h] BYREF
  unsigned __int64 v96; // [rsp+1A8h] [rbp-40h]

  v7 = a3;
  v10 = a4;
  v96 = __readfsqword(0x28u);
  if ( v7 )
  {
    sub_292340(*(_QWORD **)(v7 + 16));
    v10 = a4;
    *(_QWORD *)(v7 + 16) = 0;
    *(_QWORD *)(v7 + 24) = v7 + 8;
    *(_QWORD *)(v7 + 32) = v7 + 8;
    *(_QWORD *)(v7 + 40) = 0;
  }
  v60 = 0;
  v74 = simple_edge_typer_t___vtable;
  v61 = 0;
  v77 = &v75;
  if ( !a2 )
    a2 = &v74;
  v78 = &v75;
  if ( !a6 )
    a6 = &v64;
  v62 = 0;
  if ( !a5 )
    a5 = &v60;
  v12 = *a1;
  v64 = 0;
  v66 = 0;
  v13 = *((__int64 (__fastcall **)(__int64))v12 + 7);
  v75 = 0;
  v76 = nullptr;
  v79 = 0;
  v63 = 0;
  v65 = 0;
  v67 = 0;
  if ( v13 == interactive_graph_t__::vfunc_7 )
  {
    v14 = *((_DWORD *)a1 + 46);
  }
  else
  {
    v55 = v10;
    v48 = v13((__int64)a1);
    v10 = v55;
    v14 = v48;
  }
  v85 = a2;
  v15 = 0.0;
  v80 = 0;
  v81 = 0;
  v83 = a5;
  v84 = a6;
  v86 = v10;
  v82 = 0;
  if ( v14 )
  {
    v7 = 0;
    v81 = qvector_reserve(&v81, 0, v14, 1);
    v10 = v81;
    v16 = v82;
    if ( (unsigned __int64)v82 < v14 )
    {
      *(_BYTE *)(v81 + v82) = 0;
      v17 = v16 + 1;
      if ( v17 < v14 )
      {
        do
        {
          v10 = v81;
          *(_BYTE *)(v81 + v17++) = 0;
        }
        while ( v14 != v17 );
      }
    }
    a5 = v83;
    *(_QWORD *)&v82 = v14;
    v18 = *v83;
    if ( !*v83 )
    {
LABEL_17:
      v19 = a5[3];
      if ( v19 )
      {
        a5[4] = 0;
        v15 = qfree(v19, (const char *)v7, v10);
        a5[3] = 0;
        a5[5] = 0;
      }
      if ( v14 < 0 )
      {
        a6 = v84;
        v20 = *v84;
        if ( !*v84 )
        {
          v46 = v84[3];
          if ( v46 )
          {
            v84[4] = 0;
            v15 = qfree(v46, (const char *)v7, v10);
            a6[3] = 0;
            a6[5] = 0;
          }
          goto LABEL_26;
        }
LABEL_21:
        a6[1] = 0;
        v15 = qfree(v20, (const char *)v7, v10);
        v21 = a6[3];
        *a6 = 0;
        a6[2] = 0;
        if ( !v21 )
          goto LABEL_23;
        goto LABEL_22;
      }
LABEL_57:
      v42 = a5[1];
      v59 = -1;
      if ( v14 >= v42 )
      {
        if ( v42 >= v14 )
          goto LABEL_59;
        v7 = *a5;
        v10 = a5[2];
        if ( (unsigned __int64)&v59 < *a5 || (unsigned __int64)&v59 >= v7 + 4 * v10 )
        {
          if ( v10 >= v14 || (v51 = qvector_reserve(a5, v7, v14, 4), *a5 = v51, v7 = v51, v42 = a5[1], v42 < v14) )
          {
            while ( 1 )
            {
              *(_DWORD *)(v7 + 4 * v42++) = -1;
              if ( v14 == v42 )
                break;
              v7 = *a5;
            }
          }
        }
        else if ( v10 >= v14 || (v52 = qvector_reserve(a5, v7, v14, 4), *a5 = v52, v7 = v52, v42 = a5[1], v42 < v14) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v7 + 4 * v42++) = -1;
            if ( v14 == v42 )
              break;
            v7 = *a5;
          }
        }
      }
LABEL_58:
      a5[1] = v14;
LABEL_59:
      a6 = v84;
      goto LABEL_60;
    }
LABEL_16:
    a5[1] = 0;
    v15 = qfree(v18, (const char *)v7, v10);
    *a5 = 0;
    a5[2] = 0;
    goto LABEL_17;
  }
  v18 = *a5;
  if ( *a5 )
    goto LABEL_16;
  v41 = a5[3];
  if ( v41 )
  {
    a5[4] = 0;
    v15 = qfree(v41, (const char *)v7);
    a5[3] = 0;
    a5[5] = 0;
    goto LABEL_57;
  }
  v49 = a5[1] == 0;
  v59 = -1;
  if ( !v49 )
    goto LABEL_58;
LABEL_60:
  v20 = *a6;
  if ( *a6 )
    goto LABEL_21;
  v21 = a6[3];
  if ( !v21 )
  {
LABEL_24:
    v68 = -1;
    v22 = a6[1];
    if ( v14 >= v22 )
    {
      if ( v22 >= v14 )
        goto LABEL_26;
      v7 = *a6;
      v47 = a6[2];
      if ( (unsigned __int64)&v68 >= *a6 && (unsigned __int64)&v68 < v7 + 4 * v47 )
      {
        if ( v47 >= v14 || (v53 = qvector_reserve(a6, v7, v14, 4), *a6 = v53, v7 = v53, v22 = a6[1], v22 < v14) )
        {
          while ( 1 )
          {
            *(_DWORD *)(v7 + 4 * v22++) = -1;
            if ( v14 == v22 )
              break;
            v7 = *a6;
          }
        }
      }
      else if ( v47 >= v14 || (v50 = qvector_reserve(a6, v7, v14, 4), *a6 = v50, v7 = v50, v22 = a6[1], v22 < v14) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v7 + 4 * v22++) = -1;
          if ( v14 == v22 )
            break;
          v7 = *a6;
        }
      }
    }
    a6[1] = v14;
    goto LABEL_26;
  }
LABEL_22:
  a6[4] = 0;
  v15 = qfree(v21, (const char *)v7, v15);
  a6[3] = 0;
  a6[5] = 0;
LABEL_23:
  if ( v14 >= 0 )
    goto LABEL_24;
LABEL_26:
  v23 = v85;
  if ( v85 )
  {
    v24 = **v85;
    if ( (char *)v24 == (char *)simple_edge_typer_t__::vfunc_0 )
    {
      sub_291150(v85[3]);
      v23[3] = nullptr;
      v23[4] = (__int64 (__fastcall **)())(v23 + 2);
      v23[5] = (__int64 (__fastcall **)())(v23 + 2);
      v23[6] = nullptr;
    }
    else
    {
      ((void (__fastcall *)(__int64 (__fastcall ***)(), double))v24)(v85, v15);
    }
  }
  v25 = (_QWORD *)v86;
  if ( v86 )
  {
    sub_291410(*(_QWORD **)(v86 + 16));
    v25[2] = 0;
    v25[3] = v25 + 1;
    v25[4] = v25 + 1;
    v25[5] = 0;
  }
  v26 = 0;
  v69 = 0;
  v27 = v95;
  v71 = &v69;
  v72 = &v69;
  v70 = nullptr;
  v95[0] = a3;
  v73 = 0;
  v95[1] = &v68;
  do
  {
    v87 = a1;
    v88 = 0;
    v28 = node_iterator_goup(&v87);
    v29 = *(__int64 (__fastcall ***)())v28;
    LODWORD(v28) = *(_DWORD *)(v28 + 8);
    v87 = v29;
    v88 = v28;
    while ( 1 )
    {
      v36 = *((__int64 (__fastcall **)(__int64))*a1 + 7);
      v37 = v36 == interactive_graph_t__::vfunc_7
          ? *((_DWORD *)a1 + 46)
          : ((__int64 (__fastcall *)(__int64 (__fastcall **)(), double))v36)(a1, v15);
      v35 = v88;
      if ( v37 == v88 && a1 == v87 )
        break;
      if ( v26 )
      {
        if ( *(_BYTE *)(v81 + v88) )
          goto LABEL_41;
        v30 = *v27;
LABEL_36:
        v31 = sub_28FD20(v30, v35);
        if ( v32 )
        {
          v33 = 1;
          if ( !v31 && v32 != v30 + 8 )
            v33 = v35 < *(_DWORD *)(v32 + 32);
          v57 = v33;
          v56 = v32;
          v34 = operator new(0x28u);
          *(_DWORD *)(v34 + 32) = v35;
          std::_Rb_tree_insert_and_rebalance(v57, v34, v56, v30 + 8);
          ++*(_QWORD *)(v30 + 40);
        }
        goto LABEL_39;
      }
      v44 = *((__int64 (__fastcall **)(__int64, int))*a1 + 13);
      if ( v44 == interactive_graph_t__::vfunc_13 )
      {
        v45 = *((_DWORD *)a1[25] + 6 * v88 + 2);
      }
      else
      {
        v7 = (unsigned int)v88;
        v45 = ((__int64 (__fastcall *)(__int64 (__fastcall **)(), _QWORD, double))v44)(a1, (unsigned int)v88, v15);
      }
      if ( v45 )
        goto LABEL_40;
      v30 = *v27;
      if ( *v27 )
        goto LABEL_36;
LABEL_39:
      v7 = (unsigned int)v35;
      sub_29DC80(a1, v35, (__int64)&v80);
LABEL_40:
      v35 = v88;
LABEL_41:
      v88 = v35 + 1;
      node_iterator_goup(&v87);
    }
    v38 = v26 + 1;
    ++v27;
    v26 = 1;
  }
  while ( v38 != 2 );
  if ( v73 )
  {
    if ( v73 != 1 )
    {
      for ( i = v71; i != &v69; i = (int *)std::_Rb_tree_increment(i) )
      {
        v40 = i[8];
        v7 = v40;
        if ( sub_294280(a1, v40, (__int64)&v68) )
        {
          v89 = 0;
          v90 = nullptr;
          v91 = &v89;
          v92 = &v89;
          v93 = 0;
          v87 = drawable_graph_t::create_spanning_tree;
          v94 = &v80;
          sub_294080(a1, v40, &v87);
          v7 = v40;
          sub_29DC80(a1, v40, (__int64)&v80);
          v87 = graph_node_visitor_t___vtable;
          i = v71;
          sub_292340(v90);
        }
      }
    }
    if ( a3 )
    {
      v7 = (__int64)v71;
      sub_29E760(a3, (__int64)v71, (__int64)&v69);
    }
  }
  sub_292340(v70);
  if ( v81 )
  {
    *(_QWORD *)&v82 = 0;
    v15 = qfree(v81, (const char *)v7, v15);
  }
  v74 = simple_edge_typer_t___vtable;
  sub_291150(v76);
  if ( v66 )
  {
    *(_QWORD *)&v67 = 0;
    v15 = qfree(v66, (const char *)v7, v15);
  }
  if ( v64 )
  {
    *(_QWORD *)&v65 = 0;
    v15 = qfree(v64, (const char *)v7, v15);
  }
  if ( v62 )
  {
    *(_QWORD *)&v63 = 0;
    v15 = qfree(v62, (const char *)v7, v15);
  }
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60, (const char *)v7, v15);
  }
  return v96 - __readfsqword(0x28u);
}

unsigned __int64 __fastcall sub_29DC80(_QWORD *a1, int a2, __int64 a3)
{
  unsigned __int64 v3; // r11
  __int64 v5; // rax
  int v7; // r13d
  _QWORD *v8; // r12
  __int64 v9; // rbp
  __int64 (__fastcall *v10)(__int64, int); // rax
  int v11; // eax
  __int64 v12; // r12
  __int64 (__fastcall *v13)(__int64, int, int); // rax
  int v14; // r13d
  __int64 v15; // rbp
  __int64 v16; // rdi
  int v17; // r13d
  _QWORD *v18; // rbp
  __int64 v19; // rbx
  unsigned __int64 v21; // r10
  int v22; // ebp
  __int64 v23; // rdi
  _QWORD *v24; // r15
  unsigned __int64 v25; // rbp
  _QWORD *v26; // r8
  int v27; // r11d
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rbp
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rdx
  _BOOL4 v35; // ebp
  __int64 v36; // rax
  unsigned __int64 v37; // r15
  unsigned __int64 v38; // rsi
  unsigned __int64 v39; // rcx
  _QWORD *v40; // rdi
  unsigned __int64 v41; // rax
  __int64 v42; // rax
  unsigned __int64 v43; // r12
  unsigned __int64 v44; // rsi
  unsigned __int64 v45; // rcx
  _QWORD *v46; // rdi
  unsigned __int64 v47; // rax
  __int64 v48; // rax
  unsigned __int64 v49; // rsi
  unsigned __int64 v50; // rax
  _QWORD *v51; // rdi
  unsigned __int64 v52; // rcx
  __int64 j; // rax
  __int64 v54; // rcx
  unsigned __int64 v55; // rdx
  unsigned __int64 v56; // r15
  unsigned __int64 v57; // rsi
  unsigned __int64 v58; // rax
  _QWORD *v59; // rdi
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  unsigned __int64 v62; // rcx
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int64 v66; // rax
  unsigned __int64 v67; // rdx
  __int64 v68; // rax
  unsigned __int64 v69; // r15
  unsigned __int64 v70; // rsi
  unsigned __int64 v71; // rax
  _QWORD *v72; // rdi
  unsigned __int64 v73; // rax
  __int64 i; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v85; // [rsp+10h] [rbp-88h]
  unsigned __int64 v86; // [rsp+10h] [rbp-88h]
  unsigned __int64 v87; // [rsp+10h] [rbp-88h]
  unsigned __int64 v88; // [rsp+10h] [rbp-88h]
  unsigned __int64 v89; // [rsp+10h] [rbp-88h]
  unsigned __int64 v90; // [rsp+10h] [rbp-88h]
  __int64 v91; // [rsp+18h] [rbp-80h]
  unsigned __int64 v92; // [rsp+28h] [rbp-70h]
  __int64 v93; // [rsp+30h] [rbp-68h]
  __int64 v94; // [rsp+38h] [rbp-60h]
  unsigned __int64 v95; // [rsp+38h] [rbp-60h]
  unsigned __int64 v96; // [rsp+38h] [rbp-60h]
  unsigned __int64 v97; // [rsp+38h] [rbp-60h]
  unsigned __int64 v98; // [rsp+38h] [rbp-60h]
  unsigned __int64 v99; // [rsp+38h] [rbp-60h]
  unsigned __int64 v100; // [rsp+38h] [rbp-60h]
  int v101; // [rsp+40h] [rbp-58h]
  int v102; // [rsp+40h] [rbp-58h]
  _QWORD *v103; // [rsp+48h] [rbp-50h]
  _QWORD *v104; // [rsp+48h] [rbp-50h]
  int v105[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v106; // [rsp+58h] [rbp-40h]

  v3 = a2;
  v5 = *(_QWORD *)(a3 + 8);
  v106 = __readfsqword(0x28u);
  *(_BYTE *)(v5 + a2) = 1;
  v7 = *(_DWORD *)a3;
  v8 = *(_QWORD **)(a3 + 32);
  ++*(_DWORD *)a3;
  v9 = v8[4];
  if ( !v9 )
  {
    v37 = v8[1];
    v105[0] = -1;
    if ( !v37 )
      goto LABEL_7;
    v38 = v8[3];
    v39 = v8[5];
    v40 = v8 + 3;
    if ( (unsigned __int64)v105 < v38 || (unsigned __int64)v105 >= v38 + 4 * v39 )
    {
      v67 = 0;
      if ( v39 >= v37
        || (v88 = v3, v68 = qvector_reserve(v40, v38, v37, 4), v67 = v8[4], v3 = v88, v8[3] = v68, v38 = v68, v67 < v37) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v38 + 4 * v67++) = -1;
          if ( v67 == v37 )
            break;
          v38 = v8[3];
        }
      }
    }
    else
    {
      v41 = 0;
      if ( v39 >= v37
        || (v89 = v3, v81 = qvector_reserve(v40, v38, v37, 4), v3 = v89, v8[3] = v81, v38 = v81, v41 = v8[4], v41 < v37) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v38 + 4 * v41++) = -1;
          if ( v41 == v37 )
            break;
          v38 = v8[3];
        }
      }
    }
    v8[4] = v37;
    do
    {
      v42 = *(int *)(*v8 + 4 * v9);
      if ( (_DWORD)v42 != -1 )
        *(_DWORD *)(v8[3] + 4 * v42) = v9;
      ++v9;
    }
    while ( v9 != v37 );
  }
  if ( v7 >= 0 && (unsigned __int64)v7 < v8[1] && a2 >= 0 && v3 < v8[4] )
  {
    *(_DWORD *)(*v8 + 4LL * v7) = a2;
    *(_DWORD *)(v8[3] + 4 * v3) = v7;
  }
LABEL_7:
  v10 = *(__int64 (__fastcall **)(__int64, int))(*a1 + 96LL);
  if ( v10 == interactive_graph_t__::vfunc_12 )
  {
    v11 = *(_DWORD *)(a1[22] + 24 * v3 + 8);
  }
  else
  {
    v86 = v3;
    v11 = v10((__int64)a1, a2);
    v3 = v86;
  }
  if ( v11 > 0 )
  {
    v92 = v3;
    v12 = 0;
    v85 = v11;
    v91 = 24 * v3;
    v93 = 4 * v3;
    while ( 1 )
    {
      v13 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 112LL);
      v14 = v13 == interactive_graph_t__::vfunc_14
          ? *(_DWORD *)(*(_QWORD *)(a1[22] + v91) + 4 * v12)
          : v13((__int64)a1, a2, v12);
      v15 = *(_QWORD *)(a3 + 56);
      if ( !v15 )
        break;
      v16 = *(_QWORD *)(a3 + 56);
      v105[1] = v14;
      v105[0] = a2;
      if ( v15 + 8 == sub_29DC10(v16, v105) )
        break;
LABEL_15:
      if ( ++v12 == v85 )
      {
        v3 = v92;
        goto LABEL_17;
      }
    }
    v21 = v14;
    if ( !*(_BYTE *)(*(_QWORD *)(a3 + 8) + v14) )
    {
      v22 = 1;
      sub_29DC80(a1, (unsigned int)v14, a3);
      goto LABEL_26;
    }
    v24 = *(_QWORD **)(a3 + 32);
    v25 = v24[4];
    if ( v25 )
    {
      if ( a2 >= 0 )
      {
        if ( v92 < v25 )
        {
          v26 = *(_QWORD **)(a3 + 32);
          v27 = *(_DWORD *)(v24[3] + v93);
LABEL_32:
          if ( v14 >= 0 )
          {
            if ( v21 >= v26[4] )
            {
              if ( v27 < -1 )
                goto LABEL_35;
              goto LABEL_40;
            }
LABEL_34:
            if ( *(_DWORD *)(v26[3] + 4 * v21) > v27 )
            {
LABEL_35:
              v22 = 2;
              goto LABEL_26;
            }
LABEL_40:
            v29 = *(_QWORD **)(a3 + 40);
            v30 = v29[4];
            if ( v30 )
              goto LABEL_41;
            v69 = v29[1];
            if ( !v69 )
            {
LABEL_133:
              if ( v14 < 0 )
                goto LABEL_43;
              v30 = v29[4];
LABEL_41:
              if ( v21 < v30 )
              {
                v31 = v29[3];
                v22 = 4;
                if ( *(_DWORD *)(v31 + 4 * v21) != -1 )
                {
LABEL_26:
                  v23 = *(_QWORD *)(a3 + 48);
                  if ( v23 )
                    *(_DWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v23 + 8LL))(
                                 v23,
                                 (unsigned int)a2,
                                 (unsigned int)v14) = v22;
                  goto LABEL_15;
                }
              }
LABEL_43:
              v32 = *(_QWORD *)(a3 + 56);
              if ( v32 )
              {
                v33 = sub_28FC60(*(_QWORD *)(a3 + 56), a2, v14);
                if ( v34 )
                {
                  v35 = 1;
                  if ( !v33 && v34 != v32 + 8 && a2 >= *(_DWORD *)(v34 + 32) )
                  {
                    v35 = 0;
                    if ( a2 == *(_DWORD *)(v34 + 32) )
                      v35 = v14 < *(_DWORD *)(v34 + 36);
                  }
                  v94 = v34;
                  v36 = operator new(0x28u);
                  *(_DWORD *)(v36 + 36) = v14;
                  *(_DWORD *)(v36 + 32) = a2;
                  std::_Rb_tree_insert_and_rebalance(v35, v36, v94, v32 + 8);
                  ++*(_QWORD *)(v32 + 40);
                }
              }
              v22 = 3;
              goto LABEL_26;
            }
LABEL_123:
            v70 = v29[3];
            v71 = v29[5];
            v72 = v29 + 3;
            v105[0] = -1;
            if ( (unsigned __int64)v105 < v70 || (unsigned __int64)v105 >= v70 + 4 * v71 )
            {
              if ( v71 < v69 )
              {
                v99 = v21;
                v80 = qvector_reserve(v72, v70, v69, 4);
                v21 = v99;
                v29[3] = v80;
              }
              v76 = v29[4];
              if ( v76 < v69 )
              {
                do
                  *(_DWORD *)(v29[3] + 4 * v76++) = -1;
                while ( v69 != v76 );
              }
            }
            else
            {
              if ( v71 < v69 )
              {
                v100 = v21;
                v83 = qvector_reserve(v72, v70, v69, 4);
                v21 = v100;
                v29[3] = v83;
              }
              v73 = v29[4];
              if ( v73 < v69 )
              {
                do
                  *(_DWORD *)(v29[3] + 4 * v73++) = -1;
                while ( v69 != v73 );
              }
            }
            v29[4] = v69;
            for ( i = 0; i != v69; ++i )
            {
              v75 = *(int *)(*v29 + 4 * i);
              if ( (_DWORD)v75 != -1 )
                *(_DWORD *)(v29[3] + 4 * v75) = i;
            }
            goto LABEL_133;
          }
          if ( v27 < -1 )
            goto LABEL_35;
LABEL_143:
          v29 = *(_QWORD **)(a3 + 40);
          if ( v29[4] )
            goto LABEL_43;
          v69 = v29[1];
          if ( !v69 )
            goto LABEL_43;
          goto LABEL_123;
        }
        v55 = v24[4];
        v26 = *(_QWORD **)(a3 + 32);
        goto LABEL_167;
      }
      v26 = *(_QWORD **)(a3 + 32);
LABEL_162:
      if ( v14 < 0 )
        goto LABEL_143;
      v55 = v26[4];
      goto LABEL_164;
    }
    v28 = v24[1];
    v105[0] = -1;
    if ( !v28 )
    {
      if ( a2 < 0 )
        goto LABEL_39;
LABEL_157:
      if ( v14 < 0 )
        goto LABEL_143;
      if ( v21 >= v24[4] )
        goto LABEL_40;
      v26 = v24;
LABEL_160:
      v27 = -1;
      goto LABEL_34;
    }
    v49 = v24[3];
    v50 = v24[5];
    v51 = v24 + 3;
    if ( (unsigned __int64)v105 < v49 || (unsigned __int64)v105 >= v49 + 4 * v50 )
    {
      v62 = 0;
      if ( v50 >= v28
        || (v95 = v28,
            v63 = qvector_reserve(v51, v49, v28, 4),
            v62 = v24[4],
            v28 = v95,
            v24[3] = v63,
            v21 = v14,
            v49 = v63,
            v62 < v95) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v49 + 4 * v62++) = -1;
          if ( v28 == v62 )
            break;
          v49 = v24[3];
        }
      }
    }
    else
    {
      v52 = 0;
      if ( v50 >= v28
        || (v98 = v28,
            v79 = qvector_reserve(v51, v49, v28, 4),
            v52 = v24[4],
            v28 = v98,
            v24[3] = v79,
            v21 = v14,
            v49 = v79,
            v52 < v98) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v49 + 4 * v52++) = -1;
          if ( v28 == v52 )
            break;
          v49 = v24[3];
        }
      }
    }
    v24[4] = v28;
    for ( j = 0; j != v28; ++j )
    {
      v54 = *(int *)(*v24 + 4 * j);
      if ( (_DWORD)v54 != -1 )
        *(_DWORD *)(v24[3] + 4 * v54) = j;
    }
    v26 = *(_QWORD **)(a3 + 32);
    v55 = v26[4];
    if ( a2 < 0 )
    {
      if ( v55 )
        goto LABEL_162;
      v56 = v26[1];
      v105[0] = -1;
      if ( !v56 )
      {
LABEL_39:
        if ( v14 >= 0 )
          goto LABEL_40;
        goto LABEL_143;
      }
    }
    else
    {
      if ( v92 < v24[4] )
      {
        v27 = *(_DWORD *)(v24[3] + v93);
        if ( v55 )
          goto LABEL_32;
        v56 = v26[1];
        if ( !v56 )
          goto LABEL_32;
        v105[0] = -1;
LABEL_88:
        v57 = v26[3];
        v58 = v26[5];
        v59 = v26 + 3;
        if ( (unsigned __int64)v105 < v57 || (unsigned __int64)v105 >= v57 + 4 * v58 )
        {
          if ( v58 < v56 )
          {
            v103 = v26;
            v101 = v27;
            v96 = v21;
            v77 = qvector_reserve(v59, v57, v56, 4);
            v26 = v103;
            v27 = v101;
            v21 = v96;
            v103[3] = v77;
          }
          v64 = v26[4];
          if ( v64 < v56 )
          {
            do
              *(_DWORD *)(v26[3] + 4 * v64++) = -1;
            while ( v64 != v56 );
          }
        }
        else
        {
          if ( v58 < v56 )
          {
            v104 = v26;
            v102 = v27;
            v97 = v21;
            v78 = qvector_reserve(v59, v57, v56, 4);
            v26 = v104;
            v27 = v102;
            v21 = v97;
            v104[3] = v78;
          }
          v60 = v26[4];
          if ( v60 < v56 )
          {
            do
              *(_DWORD *)(v26[3] + 4 * v60++) = -1;
            while ( v60 != v56 );
          }
        }
        v26[4] = v56;
        do
        {
          v61 = *(int *)(*v26 + 4 * v25);
          if ( (_DWORD)v61 != -1 )
            *(_DWORD *)(v26[3] + 4 * v61) = v25;
          ++v25;
        }
        while ( v25 != v56 );
        goto LABEL_32;
      }
      if ( v55 )
      {
LABEL_167:
        if ( v14 < 0 )
          goto LABEL_143;
LABEL_164:
        if ( v21 >= v55 )
          goto LABEL_40;
        goto LABEL_160;
      }
      v56 = v26[1];
      v105[0] = -1;
      if ( !v56 )
      {
        v24 = v26;
        goto LABEL_157;
      }
    }
    v27 = -1;
    goto LABEL_88;
  }
LABEL_17:
  v17 = *(_DWORD *)(a3 + 4);
  v18 = *(_QWORD **)(a3 + 40);
  *(_DWORD *)(a3 + 4) = v17 + 1;
  v19 = v18[4];
  if ( !v19 )
  {
    v43 = v18[1];
    v105[0] = -1;
    if ( !v43 )
      return v106 - __readfsqword(0x28u);
    v44 = v18[3];
    v45 = v18[5];
    v46 = v18 + 3;
    if ( (unsigned __int64)v105 < v44 || (unsigned __int64)v105 >= v44 + 4 * v45 )
    {
      v65 = 0;
      if ( v45 >= v43
        || (v87 = v3, v66 = qvector_reserve(v46, v44, v43, 4),
                      v65 = v18[4],
                      v3 = v87,
                      v18[3] = v66,
                      v44 = v66,
                      v65 < v43) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v44 + 4 * v65++) = -1;
          if ( v43 == v65 )
            break;
          v44 = v18[3];
        }
      }
    }
    else
    {
      v47 = 0;
      if ( v45 >= v43
        || (v90 = v3, v82 = qvector_reserve(v46, v44, v43, 4), v3 = v90,
                                                               v18[3] = v82,
                                                               v44 = v82,
                                                               v47 = v18[4],
                                                               v47 < v43) )
      {
        while ( 1 )
        {
          *(_DWORD *)(v44 + 4 * v47++) = -1;
          if ( v43 == v47 )
            break;
          v44 = v18[3];
        }
      }
    }
    v18[4] = v43;
    do
    {
      v48 = *(int *)(*v18 + 4 * v19);
      if ( (_DWORD)v48 != -1 )
        *(_DWORD *)(v18[3] + 4 * v48) = v19;
      ++v19;
    }
    while ( v43 != v19 );
  }
  if ( v17 >= 0 && (unsigned __int64)v17 < v18[1] && a2 >= 0 && v3 < v18[4] )
  {
    *(_DWORD *)(*v18 + 4LL * v17) = a2;
    *(_DWORD *)(v18[3] + 4 * v3) = v17;
  }
  return v106 - __readfsqword(0x28u);
}

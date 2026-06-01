unsigned __int64 __fastcall sub_294EA0(__int64 **a1)
{
  __int64 *v1; // rax
  __int64 v3; // rax
  __int64 *v4; // rdx
  __int64 *v5; // rdx
  __int64 **v6; // rbp
  _DWORD *v7; // rbx
  __int64 (__fastcall *v8)(__int64); // rax
  signed int v9; // r13d
  __int64 *v10; // rdi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(__int64, unsigned int); // rdx
  __int64 (*v13)(void); // rax
  signed int v14; // eax
  _DWORD *v15; // rax
  int v16; // edx
  int v17; // edx
  signed int v18; // r14d
  __int64 v19; // rax
  __int64 **v20; // rdi
  __int64 v21; // rsi
  signed int v22; // ecx
  __int64 **v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // r13d
  __int64 v27; // rax
  __int64 v28; // rdi
  __int64 v29; // rsi
  _DWORD *v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rdi
  _DWORD *v33; // rsi
  __int64 v34; // r8
  __int64 v35; // rdi
  signed int v36; // ecx
  int v37; // eax
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  _DWORD *v42; // rax
  __int64 v43; // rax
  _DWORD *v44; // rdx
  _BOOL8 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // rdi
  _DWORD *v50; // rax
  _BOOL4 v51; // eax
  void *v52; // [rsp+8h] [rbp-80h]
  __int64 *v53; // [rsp+8h] [rbp-80h]
  void *v54; // [rsp+8h] [rbp-80h]
  __int64 *v55; // [rsp+8h] [rbp-80h]
  __int64 v56; // [rsp+18h] [rbp-70h]
  signed int v57; // [rsp+24h] [rbp-64h] BYREF
  int *v58; // [rsp+28h] [rbp-60h] BYREF
  __int64 *v59; // [rsp+30h] [rbp-58h] BYREF
  signed int v60; // [rsp+38h] [rbp-50h]
  unsigned __int64 v61; // [rsp+48h] [rbp-40h]

  v1 = *a1;
  v61 = __readfsqword(0x28u);
  v60 = 0;
  v59 = v1;
  v3 = node_iterator_goup(&v59);
  v4 = *(__int64 **)v3;
  LODWORD(v3) = *(_DWORD *)(v3 + 8);
  v59 = v4;
  v5 = *a1;
  v6 = a1 + 10;
  v7 = a1 + 4;
  v60 = v3;
  v8 = *(__int64 (__fastcall **)(__int64))(*v5 + 56);
  if ( v8 != interactive_graph_t__::vfunc_7 )
    goto LABEL_48;
LABEL_2:
  v9 = v60;
  if ( *((_DWORD *)v5 + 46) == v60 )
    goto LABEL_49;
  do
  {
    do
    {
      v10 = *a1;
      v11 = **a1;
      v12 = *(__int64 (__fastcall **)(__int64, unsigned int))(v11 + 152);
      if ( v12 == interactive_graph_t__::vfunc_19 )
      {
        v13 = *(__int64 (**)(void))(v11 + 56);
        if ( (char *)v13 == (char *)interactive_graph_t__::vfunc_7 )
        {
          v14 = *((_DWORD *)v10 + 46);
        }
        else
        {
          v55 = *a1;
          v14 = v13();
          v10 = v55;
        }
        if ( v9 >= v14 )
          sub_16B930((__int64)"nrect(%d) failed", v9);
        v15 = (_DWORD *)(v10[28] + 16LL * v9);
      }
      else
      {
        v15 = (_DWORD *)v12((__int64)v10, v9);
      }
      v16 = v15[2] - *v15;
      if ( *((_DWORD *)a1 + 3) < v16 )
        *((_DWORD *)a1 + 3) = v16;
      v17 = v15[3] - v15[1];
      if ( *((_DWORD *)a1 + 2) < v17 )
        *((_DWORD *)a1 + 2) = v17;
      v57 = sub_2949D0((__int64 *)a1, v9);
      v18 = v57;
      v52 = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v57), _mm_cvtsi32_si128(v9)).m128i_u64[0];
      v19 = operator new(0x28u);
      v20 = (__int64 **)a1[11];
      v21 = v19;
      *(_QWORD *)(v19 + 32) = v52;
      if ( v20 )
      {
        while ( 1 )
        {
          v22 = *((_DWORD *)v20 + 8);
          v23 = (__int64 **)v20[3];
          if ( v18 < v22 )
            v23 = (__int64 **)v20[2];
          if ( !v23 )
            break;
          v20 = v23;
        }
        v51 = 1;
        if ( v6 != v20 )
          v51 = v18 < v22;
      }
      else
      {
        v20 = a1 + 10;
        v51 = 1;
      }
      std::_Rb_tree_insert_and_rebalance(v51, v21, v20, a1 + 10);
      v24 = (__int64)a1[5];
      a1[14] = (__int64 *)((char *)a1[14] + 1);
      v25 = (__int64)(a1 + 4);
      v26 = v57;
      if ( !v24 )
        goto LABEL_57;
      v27 = v24;
      do
      {
        while ( 1 )
        {
          v28 = *(_QWORD *)(v27 + 16);
          v29 = *(_QWORD *)(v27 + 24);
          if ( v57 > *(_DWORD *)(v27 + 32) )
            break;
          v25 = v27;
          v27 = *(_QWORD *)(v27 + 16);
          if ( !v28 )
            goto LABEL_25;
        }
        v27 = *(_QWORD *)(v27 + 24);
      }
      while ( v29 );
LABEL_25:
      if ( v7 != (_DWORD *)v25 && v57 >= *(_DWORD *)(v25 + 32) )
      {
        v30 = a1 + 4;
        do
        {
          while ( 1 )
          {
            v31 = *(_QWORD *)(v24 + 16);
            v32 = *(_QWORD *)(v24 + 24);
            if ( v57 > *(_DWORD *)(v24 + 32) )
              break;
            v30 = (_DWORD *)v24;
            v24 = *(_QWORD *)(v24 + 16);
            if ( !v31 )
              goto LABEL_31;
          }
          v24 = *(_QWORD *)(v24 + 24);
        }
        while ( v32 );
LABEL_31:
        if ( v7 == v30 || v57 < v30[8] )
        {
          v58 = &v57;
          v30 = sub_2900D0(a1 + 3, (__int64)v30, &v58);
        }
        ++v30[9];
LABEL_35:
        v24 = (__int64)a1[5];
        v26 = v57;
        if ( !v24 )
          goto LABEL_62;
        goto LABEL_36;
      }
      v25 = (__int64)(a1 + 4);
      v39 = v24;
      do
      {
        while ( 1 )
        {
          v40 = *(_QWORD *)(v39 + 16);
          v41 = *(_QWORD *)(v39 + 24);
          if ( v57 > *(_DWORD *)(v39 + 32) )
            break;
          v25 = v39;
          v39 = *(_QWORD *)(v39 + 16);
          if ( !v40 )
            goto LABEL_55;
        }
        v39 = *(_QWORD *)(v39 + 24);
      }
      while ( v41 );
LABEL_55:
      if ( v7 == (_DWORD *)v25 || v57 < *(_DWORD *)(v25 + 32) )
      {
LABEL_57:
        v56 = v25;
        v42 = (_DWORD *)operator new(0x28u);
        v42[8] = v26;
        v42[9] = 1;
        v54 = v42;
        v43 = sub_28FAB0(a1 + 3, v56, v26);
        if ( !v44 )
        {
          if ( v54 )
            operator delete(v54, 0x28u);
          goto LABEL_35;
        }
        v45 = v43 || v7 == v44 || v26 < v44[8];
        std::_Rb_tree_insert_and_rebalance(v45, v54, v44, a1 + 4);
        v24 = (__int64)a1[5];
        a1[8] = (__int64 *)((char *)a1[8] + 1);
        v26 = v57;
        if ( !v24 )
          goto LABEL_62;
      }
LABEL_36:
      v33 = a1 + 4;
      do
      {
        while ( 1 )
        {
          v34 = *(_QWORD *)(v24 + 16);
          v35 = *(_QWORD *)(v24 + 24);
          if ( *(_DWORD *)(v24 + 32) < v26 )
            break;
          v33 = (_DWORD *)v24;
          v24 = *(_QWORD *)(v24 + 16);
          if ( !v34 )
            goto LABEL_40;
        }
        v24 = *(_QWORD *)(v24 + 24);
      }
      while ( v35 );
LABEL_40:
      if ( v33 != v7 )
      {
        if ( v26 >= v33[8] )
          goto LABEL_43;
        goto LABEL_42;
      }
LABEL_62:
      v33 = a1 + 4;
LABEL_42:
      v58 = &v57;
      v33 = sub_2900D0(a1 + 3, (__int64)v33, &v58);
LABEL_43:
      if ( v33[9] <= *((_DWORD *)a1 + 5) )
      {
        v36 = v57;
        goto LABEL_45;
      }
      v46 = (__int64)a1[5];
      if ( v46 )
      {
        v36 = v57;
        v47 = (__int64)(a1 + 4);
        do
        {
          while ( 1 )
          {
            v48 = *(_QWORD *)(v46 + 16);
            v49 = *(_QWORD *)(v46 + 24);
            if ( v57 > *(_DWORD *)(v46 + 32) )
              break;
            v47 = v46;
            v46 = *(_QWORD *)(v46 + 16);
            if ( !v48 )
              goto LABEL_68;
          }
          v46 = *(_QWORD *)(v46 + 24);
        }
        while ( v49 );
LABEL_68:
        if ( v7 != (_DWORD *)v47 && v57 >= *(_DWORD *)(v47 + 32) )
          goto LABEL_71;
      }
      else
      {
        v47 = (__int64)(a1 + 4);
      }
      v58 = &v57;
      v50 = sub_2900D0(a1 + 3, v47, &v58);
      v36 = v57;
      v47 = (__int64)v50;
LABEL_71:
      *((_DWORD *)a1 + 5) = *(_DWORD *)(v47 + 36);
LABEL_45:
      if ( *((_DWORD *)a1 + 4) < v36 )
        *((_DWORD *)a1 + 4) = v36;
      ++v60;
      node_iterator_goup(&v59);
      v5 = *a1;
      v8 = *(__int64 (__fastcall **)(__int64))(**a1 + 56);
      if ( v8 == interactive_graph_t__::vfunc_7 )
        goto LABEL_2;
LABEL_48:
      v53 = v5;
      v37 = v8((__int64)v5);
      v9 = v60;
      v5 = v53;
    }
    while ( v37 != v60 );
LABEL_49:
    ;
  }
  while ( v5 != v59 );
  return v61 - __readfsqword(0x28u);
}

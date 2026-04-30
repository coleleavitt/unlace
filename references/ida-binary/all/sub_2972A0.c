__int64 __fastcall sub_2972A0(__int64 *a1, double a2, __int64 a3, __int64 a4, _QWORD *a5, _QWORD *a6, char a7)
{
  __int64 v8; // rbp
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rax
  int v14; // r12d
  double v15; // xmm1_8
  __int64 v16; // rax
  double *v17; // rdx
  __int64 v18; // rsi
  double *v19; // rax
  __int64 v20; // rbx
  void *v21; // rdi
  int *v22; // r13
  int v23; // r14d
  __int64 v24; // rbp
  _DWORD *v25; // rax
  int v26; // edx
  __int64 v27; // rdx
  int v28; // edi
  _DWORD *v29; // rax
  __int64 v30; // rsi
  __int64 v31; // rcx
  _QWORD **v32; // rbx
  void *v33; // rdi
  int i; // r15d
  __int64 v36; // rax
  __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdi
  _BOOL8 v42; // rdi
  double v43; // [rsp+8h] [rbp-C0h]
  int v45; // [rsp+1Ch] [rbp-ACh]
  unsigned __int64 v47; // [rsp+30h] [rbp-98h]
  int *v49; // [rsp+48h] [rbp-80h] BYREF
  int v50; // [rsp+58h] [rbp-70h] BYREF
  void *v51; // [rsp+60h] [rbp-68h]
  int *v52; // [rsp+68h] [rbp-60h]
  int *v53; // [rsp+70h] [rbp-58h]
  __int64 v54; // [rsp+78h] [rbp-50h]
  unsigned __int64 v55; // [rsp+88h] [rbp-40h]

  v8 = a4 + 8;
  v10 = a5[1];
  v55 = __readfsqword(0x28u);
  v47 = v10;
  v52 = &v50;
  v53 = &v50;
  v11 = 0;
  v50 = 0;
  v51 = nullptr;
  v54 = 0;
  v45 = 0;
  if ( !v10 )
    goto LABEL_14;
  do
  {
    v12 = *(_DWORD *)(*a5 + 4 * v11);
    v13 = *a1;
    if ( a7 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v13 + 104))(a1, v12);
      if ( v14 > 0 )
        goto LABEL_33;
    }
    else
    {
      v14 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(v13 + 96))(a1, v12);
      if ( v14 > 0 )
      {
LABEL_33:
        v43 = 0.0;
        for ( i = 0; i != v14; ++i )
        {
          v36 = *a1;
          v37 = v12;
          if ( a7 )
            v38 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v36 + 120))(a1, v12, (unsigned int)i);
          else
            v38 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD))(v36 + 112))(a1, v12, (unsigned int)i);
          v39 = a4;
          v40 = *(_QWORD *)(a4 + 16);
          if ( !v40 )
            goto LABEL_43;
          v41 = v8;
          do
          {
            while ( 1 )
            {
              v37 = *(_QWORD *)(v40 + 16);
              v39 = *(_QWORD *)(v40 + 24);
              if ( *(_DWORD *)(v40 + 32) < v38 )
                break;
              v41 = v40;
              v40 = *(_QWORD *)(v40 + 16);
              if ( !v37 )
                goto LABEL_41;
            }
            v40 = *(_QWORD *)(v40 + 24);
          }
          while ( v39 );
LABEL_41:
          if ( v41 == v8 || v38 < *(_DWORD *)(v41 + 32) )
          {
LABEL_43:
            if ( under_debugger )
              BUG();
            v41 = 40149;
            interr(40149, v37, v40, v39, a2);
          }
          a2 = (double)*(int *)(v41 + 36) + v43;
          v43 = a2;
        }
        a2 = (double)i;
        v15 = v43 / (double)i;
        goto LABEL_5;
      }
    }
    v15 = (double)v45;
LABEL_5:
    v16 = operator new(0x30u);
    v17 = (double *)v51;
    *(_DWORD *)(v16 + 40) = v12;
    v18 = v16;
    *(double *)(v16 + 32) = v15;
    if ( !v17 )
    {
      v17 = (double *)&v50;
      v42 = 1;
      goto LABEL_13;
    }
    while ( 1 )
    {
      a2 = v17[4];
      if ( a2 <= v15 )
        break;
      v19 = *((double **)v17 + 2);
      if ( !v19 )
        goto LABEL_11;
LABEL_8:
      v17 = v19;
    }
    v19 = *((double **)v17 + 3);
    if ( v19 )
      goto LABEL_8;
LABEL_11:
    v42 = 1;
    if ( v17 != (double *)&v50 )
      v42 = a2 > v15;
LABEL_13:
    std::_Rb_tree_insert_and_rebalance(v42, v18, v17, &v50);
    v11 = ++v45;
    ++v54;
  }
  while ( v45 < v47 );
LABEL_14:
  v20 = a6[2];
  while ( v20 )
  {
    sub_2920A0(*(_QWORD **)(v20 + 24));
    v21 = (void *)v20;
    v20 = *(_QWORD *)(v20 + 16);
    operator delete(v21, 0x28u);
  }
  v22 = v52;
  v23 = 0;
  LODWORD(v24) = 0;
  a6[2] = 0;
  a6[3] = a6 + 1;
  a6[4] = a6 + 1;
  a6[5] = 0;
  if ( v22 != &v50 )
  {
    while ( 1 )
    {
      v25 = (_DWORD *)(*a5 + 4LL * v23);
      v26 = v22[10];
      if ( *v25 != v26 )
      {
        *v25 = v26;
        LODWORD(v24) = v24 + 1;
      }
      v27 = a6[2];
      if ( v27 )
      {
        v28 = v22[10];
        v29 = a6 + 1;
        do
        {
          while ( 1 )
          {
            v30 = *(_QWORD *)(v27 + 16);
            v31 = *(_QWORD *)(v27 + 24);
            if ( *(_DWORD *)(v27 + 32) < v28 )
              break;
            v29 = (_DWORD *)v27;
            v27 = *(_QWORD *)(v27 + 16);
            if ( !v30 )
              goto LABEL_24;
          }
          v27 = *(_QWORD *)(v27 + 24);
        }
        while ( v31 );
LABEL_24:
        if ( v29 != (_DWORD *)(a6 + 1) && v28 >= v29[8] )
          goto LABEL_27;
      }
      else
      {
        v29 = a6 + 1;
      }
      v49 = v22 + 10;
      v29 = sub_2900D0(a6, (__int64)v29, &v49);
LABEL_27:
      v29[9] = v23++;
      v22 = (int *)std::_Rb_tree_increment(v22);
      if ( v22 == &v50 )
      {
        v24 = (int)v24;
        goto LABEL_29;
      }
    }
  }
  v24 = 0;
LABEL_29:
  v32 = (_QWORD **)v51;
  if ( v51 )
  {
    do
    {
      sub_290CB0(v32[3]);
      v33 = v32;
      v32 = (_QWORD **)v32[2];
      operator delete(v33, 0x30u);
    }
    while ( v32 );
  }
  return v24;
}

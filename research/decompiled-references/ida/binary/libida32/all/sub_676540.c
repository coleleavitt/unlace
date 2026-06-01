unsigned __int64 __fastcall sub_676540(_QWORD *a1, unsigned int a2, int a3, int a4)
{
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int i; // r13d
  int *v11; // rbp
  unsigned int v12; // r13d
  _QWORD *v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbp
  char *v20; // r13
  int *j; // rbp
  int v22; // eax
  __int64 v23; // rdx
  char *v24; // rbp
  char *v25; // r13
  __int64 v26; // rax
  _QWORD *v27; // rbp
  _QWORD *v28; // r14
  unsigned int v29; // edx
  unsigned int v30; // ecx
  __int64 v31; // rax
  int v32; // rsi^4
  unsigned int v33; // ecx
  _DWORD *v34; // rax
  int v35; // edi
  int *v36; // rsi
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // r15
  char *v40; // r14
  int *k; // r13
  __int64 v42; // r15
  __int64 v43; // rax
  __int64 v44; // rdx
  char *v45; // rbx
  char *v46; // rbp
  int v48; // [rsp+0h] [rbp-A8h]
  unsigned int v49; // [rsp+8h] [rbp-A0h]
  int *v51; // [rsp+10h] [rbp-98h]
  _QWORD *v52; // [rsp+18h] [rbp-90h]
  __int64 *v53; // [rsp+20h] [rbp-88h] BYREF
  _DWORD v54[2]; // [rsp+28h] [rbp-80h] BYREF
  __int64 v55; // [rsp+30h] [rbp-78h] BYREF
  int v56; // [rsp+38h] [rbp-70h] BYREF
  void *v57; // [rsp+40h] [rbp-68h]
  int *v58; // [rsp+48h] [rbp-60h]
  int *v59; // [rsp+50h] [rbp-58h]
  __int64 v60; // [rsp+58h] [rbp-50h]
  unsigned __int64 v61; // [rsp+68h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v48 = a3 - a2;
  v56 = 0;
  v57 = nullptr;
  v58 = &v56;
  v59 = &v56;
  v60 = 0;
  v49 = a4 + a2;
  v5 = a1[3];
  if ( v5 )
  {
    v6 = (__int64)(a1 + 2);
    v7 = a1 + 2;
    do
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v5 + 16);
        v9 = *(_QWORD *)(v5 + 24);
        if ( *(_DWORD *)(v5 + 32) < a2 )
          break;
        v7 = (_QWORD *)v5;
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v8 )
          goto LABEL_6;
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
    while ( v9 );
LABEL_6:
    if ( (_QWORD *)v6 != v7 )
    {
      for ( i = *((_DWORD *)v7 + 8); i < v49; i = *(_DWORD *)(v19 + 32) )
      {
        v11 = &v56;
        v12 = v48 + i;
        v13 = v57;
        if ( !v57 )
          goto LABEL_15;
        do
        {
          while ( 1 )
          {
            v14 = v13[2];
            v15 = v13[3];
            if ( *((_DWORD *)v13 + 8) < v12 )
              break;
            v11 = (int *)v13;
            v13 = (_QWORD *)v13[2];
            if ( !v14 )
              goto LABEL_13;
          }
          v13 = (_QWORD *)v13[3];
        }
        while ( v15 );
LABEL_13:
        if ( v11 == &v56 || v12 < v11[8] )
        {
LABEL_15:
          v16 = operator new(0x30u);
          *(_DWORD *)(v16 + 32) = v12;
          *(_QWORD *)(v16 + 40) = 0;
          v51 = (int *)v16;
          v11 = (int *)sub_673200(&v55, (__int64)v11, v12);
          if ( v17 )
          {
            std::_Rb_tree_insert_and_rebalance();
            ++v60;
            v11 = v51;
          }
          else if ( v51 )
          {
            clear_tinfo_t(v51 + 10);
            operator delete(v51, 0x30u);
          }
        }
        v18 = *((_QWORD *)v11 + 5);
        *((_QWORD *)v11 + 5) = v7[5];
        v7[5] = v18;
        v19 = std::_Rb_tree_increment();
        v20 = (char *)std::_Rb_tree_rebalance_for_erase();
        clear_tinfo_t(v20 + 40);
        operator delete(v20, 0x30u);
        --a1[6];
        if ( v6 == v19 )
          break;
        v7 = (_QWORD *)v19;
      }
      for ( j = v58; j != &v56; j = (int *)std::_Rb_tree_increment() )
      {
        sub_673200(a1 + 1, v6, j[8]);
        if ( v23 )
        {
          v52 = (_QWORD *)operator new(0x30u);
          v22 = j[8];
          v52[5] = 0;
          *((_DWORD *)v52 + 8) = v22;
          copy_tinfo_t(v52 + 5);
          std::_Rb_tree_insert_and_rebalance();
          ++a1[6];
        }
      }
      v24 = (char *)v57;
      if ( v57 )
      {
        do
        {
          v25 = v24;
          sub_673690(*((_QWORD **)v24 + 3));
          v24 = *((char **)v24 + 2);
          clear_tinfo_t(v25 + 40);
          operator delete(v25, 0x30u);
        }
        while ( v24 );
      }
    }
  }
  v26 = a1[9];
  v27 = a1 + 8;
  v56 = 0;
  v57 = nullptr;
  v28 = a1 + 8;
  v58 = &v56;
  v59 = &v56;
  v60 = 0;
  if ( !v26 )
    return v61 - __readfsqword(0x28u);
  do
  {
    while ( 1 )
    {
      v29 = *(_DWORD *)(v26 + 32);
      if ( v29 < a2 )
      {
        v26 = *(_QWORD *)(v26 + 24);
        goto LABEL_32;
      }
      if ( a2 == v29 && *(int *)(v26 + 36) < 0 )
        break;
      v28 = (_QWORD *)v26;
      v26 = *(_QWORD *)(v26 + 16);
      if ( !v26 )
        goto LABEL_33;
    }
    v26 = *(_QWORD *)(v26 + 24);
LABEL_32:
    ;
  }
  while ( v26 );
LABEL_33:
  if ( v28 == v27 )
    return v61 - __readfsqword(0x28u);
  v30 = *((_DWORD *)v28 + 8);
  if ( v30 >= v49 )
    goto LABEL_47;
  while ( 2 )
  {
    v31 = v28[4];
    v54[1] = HIDWORD(v31);
    v32 = HIDWORD(v31);
    v33 = v48 + v30;
    v34 = v57;
    v35 = v32;
    v36 = &v56;
    v54[0] = v33;
    if ( !v57 )
      goto LABEL_60;
    while ( 1 )
    {
LABEL_39:
      v37 = v34[8];
      if ( v37 < v33 )
      {
        v34 = *((_DWORD **)v34 + 3);
        goto LABEL_41;
      }
      if ( v33 == v37 && v35 > v34[9] )
        break;
      v36 = v34;
      v34 = *((_DWORD **)v34 + 2);
      if ( !v34 )
        goto LABEL_42;
    }
    v34 = *((_DWORD **)v34 + 3);
LABEL_41:
    if ( v34 )
      goto LABEL_39;
LABEL_42:
    if ( v36 == &v56 || v33 < v36[8] || v33 == v36[8] && v36[9] > v35 )
    {
LABEL_60:
      v53 = (__int64 *)v54;
      v36 = (int *)sub_676470(&v55, (__int64)v36, &v53);
    }
    v38 = *((_QWORD *)v36 + 5);
    *((_QWORD *)v36 + 5) = v28[5];
    v28[5] = v38;
    v39 = std::_Rb_tree_increment();
    v40 = (char *)std::_Rb_tree_rebalance_for_erase();
    clear_tinfo_t(v40 + 40);
    operator delete(v40, 0x30u);
    --a1[12];
    if ( v27 != (_QWORD *)v39 )
    {
      v28 = (_QWORD *)v39;
      v30 = *(_DWORD *)(v39 + 32);
      if ( v30 < v49 )
        continue;
    }
    break;
  }
LABEL_47:
  for ( k = v58; k != &v56; k = (int *)std::_Rb_tree_increment() )
  {
    sub_675720(a1 + 7, (__int64)(a1 + 8), (unsigned int *)k + 8);
    if ( v44 )
    {
      v42 = operator new(0x30u);
      v43 = *((_QWORD *)k + 4);
      *(_QWORD *)(v42 + 40) = 0;
      *(_QWORD *)(v42 + 32) = v43;
      copy_tinfo_t(v42 + 40);
      std::_Rb_tree_insert_and_rebalance();
      ++a1[12];
    }
  }
  v45 = (char *)v57;
  if ( v57 )
  {
    do
    {
      v46 = v45;
      sub_673450(*((_QWORD **)v45 + 3));
      v45 = *((char **)v45 + 2);
      clear_tinfo_t(v46 + 40);
      operator delete(v46, 0x30u);
    }
    while ( v45 );
  }
  return v61 - __readfsqword(0x28u);
}


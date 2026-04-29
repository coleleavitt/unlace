__int64 __fastcall sub_60A80(__int64 a1, __int64 a2, int a3, int a4, _QWORD *a5)
{
  __int64 v5; // r12
  __int64 v6; // r14
  _QWORD *v7; // rbx
  __int64 v8; // r14
  _QWORD *v9; // rbp
  __int64 v10; // r15
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  unsigned __int64 v14; // r9
  int *v15; // r13
  unsigned __int64 v16; // rcx
  char v17; // si
  int *v18; // rax
  __int64 v19; // r13
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // r15
  _QWORD *v24; // rax
  _QWORD *v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // r12
  __int64 v29; // rax
  void *v30; // r10
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  int *v34; // r12
  int *v35; // r14
  unsigned __int64 v36; // rax
  int *v37; // rsi
  bool v38; // al
  _QWORD *v39; // r8
  _QWORD *v40; // r14
  unsigned __int64 v41; // r15
  _QWORD *v42; // r13
  unsigned __int64 v43; // rax
  _QWORD *v44; // rsi
  bool v45; // al
  _QWORD *k; // rax
  __int64 v48; // r9
  __int64 v49; // rdi
  __int64 v50; // r13
  void *v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  int *i; // rax
  __int64 v55; // r10
  __int64 v56; // rdi
  __int64 v57; // r14
  void *v58; // rax
  __int64 v59; // rax
  _QWORD *v60; // rax
  __int64 v61; // rax
  __int64 module_data; // rax
  unsigned __int64 v63; // [rsp+10h] [rbp-B8h]
  __int64 j; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v65; // [rsp+18h] [rbp-B0h]
  __int64 v66; // [rsp+18h] [rbp-B0h]
  __int64 v67; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v68; // [rsp+20h] [rbp-A8h]
  _QWORD *v69; // [rsp+28h] [rbp-A0h]
  void *v70; // [rsp+28h] [rbp-A0h]
  _QWORD *v71; // [rsp+28h] [rbp-A0h]
  _QWORD *v72; // [rsp+28h] [rbp-A0h]
  void *v73; // [rsp+28h] [rbp-A0h]
  void *v74; // [rsp+28h] [rbp-A0h]
  __int64 v75; // [rsp+30h] [rbp-98h]
  _QWORD *v76; // [rsp+30h] [rbp-98h]
  _QWORD *v77; // [rsp+30h] [rbp-98h]
  int v78; // [rsp+58h] [rbp-70h] BYREF
  int *v79; // [rsp+60h] [rbp-68h]
  int *v80; // [rsp+68h] [rbp-60h]
  int *v81; // [rsp+70h] [rbp-58h]
  __int64 v82; // [rsp+78h] [rbp-50h]
  unsigned __int64 v83; // [rsp+88h] [rbp-40h]

  v5 = a4;
  v6 = a5[1];
  v83 = __readfsqword(0x28u);
  v65 = *a5 + 2LL;
  v63 = v6 + 2;
  v7 = *(_QWORD **)(a1 + 8LL * a3 + 8);
  v8 = a3;
  if ( !v7 )
  {
    switch_dbctx();
    module_data = get_module_data();
    *(_QWORD *)(a1 + 8 * v8 + 8) = module_data;
    v7 = (_QWORD *)module_data;
    v75 = *(_QWORD *)(a1 + 8 * v5 + 8);
    if ( v75 )
      goto LABEL_3;
LABEL_113:
    switch_dbctx();
    v75 = get_module_data();
    *(_QWORD *)(a1 + 8 * v5 + 8) = v75;
    goto LABEL_3;
  }
  v75 = *(_QWORD *)(a1 + 8LL * a4 + 8);
  if ( !v75 )
    goto LABEL_113;
LABEL_3:
  v9 = v7 + 66;
  v78 = 0;
  v10 = (__int64)(v7 + 66);
  v80 = &v78;
  v81 = &v78;
  v11 = (_QWORD *)v7[67];
  v79 = 0;
  v82 = 0;
  if ( v11 )
  {
    do
    {
      while ( 1 )
      {
        v12 = v11[2];
        v13 = v11[3];
        if ( v11[4] < v65 )
          break;
        v10 = (__int64)v11;
        v11 = (_QWORD *)v11[2];
        if ( !v12 )
          goto LABEL_8;
      }
      v11 = (_QWORD *)v11[3];
    }
    while ( v13 );
LABEL_8:
    if ( v9 != (_QWORD *)v10 )
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v10 + 32);
        if ( v14 >= v63 )
          goto LABEL_20;
        v15 = v79;
        if ( !v79 )
          break;
        while ( 1 )
        {
          v16 = *((_QWORD *)v15 + 4);
          v17 = 0;
          v18 = (int *)*((_QWORD *)v15 + 3);
          if ( v14 < v16 )
          {
            v18 = (int *)*((_QWORD *)v15 + 2);
            v17 = 1;
          }
          if ( !v18 )
            break;
          v15 = v18;
        }
        if ( v17 )
        {
          if ( v15 == v80 )
            goto LABEL_18;
LABEL_81:
          v68 = *(_QWORD *)(v10 + 32);
          v53 = std::_Rb_tree_decrement();
          v14 = v68;
          v16 = *(_QWORD *)(v53 + 32);
        }
        if ( v16 < v14 )
          goto LABEL_18;
LABEL_19:
        v10 = std::_Rb_tree_increment();
        if ( v9 == (_QWORD *)v10 )
          goto LABEL_20;
      }
      if ( v80 == &v78 )
      {
LABEL_18:
        *(_QWORD *)(operator new(0x28u) + 32) = *(_QWORD *)(v10 + 32);
        std::_Rb_tree_insert_and_rebalance();
        ++v82;
        goto LABEL_19;
      }
      goto LABEL_81;
    }
  }
LABEL_20:
  switch_dbctx();
  v19 = v75 + 528;
  v20 = *(_QWORD **)(v75 + 536);
  v67 = v75 + 528;
  if ( v20 )
  {
    do
    {
      while ( 1 )
      {
        v21 = v20[2];
        v22 = v20[3];
        if ( v20[4] < v65 )
          break;
        v19 = (__int64)v20;
        v20 = (_QWORD *)v20[2];
        if ( !v21 )
          goto LABEL_25;
      }
      v20 = (_QWORD *)v20[3];
    }
    while ( v22 );
LABEL_25:
    if ( v67 != v19 )
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)(v19 + 32);
        if ( v23 >= v63 )
          goto LABEL_52;
        netnode_supset();
        v24 = (_QWORD *)v7[67];
        v25 = v7 + 66;
        if ( !v24 )
          break;
        do
        {
          while ( 1 )
          {
            v26 = v24[2];
            v27 = v24[3];
            if ( v24[4] < v23 )
              break;
            v25 = v24;
            v24 = (_QWORD *)v24[2];
            if ( !v26 )
              goto LABEL_32;
          }
          v24 = (_QWORD *)v24[3];
        }
        while ( v27 );
LABEL_32:
        if ( v9 == v25 )
          break;
        if ( v23 >= v25[4] )
          goto LABEL_41;
        v69 = v25;
        v28 = (__int64)(v7 + 65);
        v29 = operator new(0x30u);
        v25 = v69;
        *(_QWORD *)(v29 + 32) = v23;
        v30 = (void *)v29;
        *(_WORD *)(v29 + 40) = 0;
        *(_BYTE *)(v29 + 42) = 0;
        v31 = v69[4];
        if ( v23 < v31 )
        {
          v32 = (__int64)v69;
          if ( (_QWORD *)v7[68] == v69 )
            goto LABEL_39;
          v70 = (void *)v29;
          v76 = v25;
          v33 = std::_Rb_tree_decrement();
          v30 = v70;
          v32 = v33;
          if ( *(_QWORD *)(v33 + 32) < v23 )
          {
            v25 = 0;
            if ( *(_QWORD *)(v33 + 24) )
            {
              v25 = v76;
              v32 = (__int64)v76;
            }
LABEL_39:
            if ( v32 )
              goto LABEL_40;
            goto LABEL_96;
          }
LABEL_100:
          v73 = v30;
          v60 = sub_60580(v28, v23);
          v30 = v73;
          v25 = v60;
          goto LABEL_39;
        }
        if ( v31 >= v23 )
          goto LABEL_96;
        if ( (_QWORD *)v7[69] != v69 )
        {
          v74 = (void *)v29;
          v77 = v25;
          v61 = std::_Rb_tree_increment();
          v30 = v74;
          v32 = v61;
          if ( v23 >= *(_QWORD *)(v61 + 32) )
            goto LABEL_100;
          v25 = v77;
          if ( v77[3] )
          {
            v25 = (_QWORD *)v61;
            goto LABEL_39;
          }
        }
        if ( v25 )
        {
LABEL_40:
          v71 = v30;
          std::_Rb_tree_insert_and_rebalance();
          ++v7[70];
          v25 = v71;
          goto LABEL_41;
        }
LABEL_96:
        if ( v30 )
        {
          v72 = v25;
          operator delete(v30, 0x30u);
          v25 = v72;
        }
LABEL_41:
        *((_WORD *)v25 + 20) = *(_WORD *)(v19 + 40);
        *((_BYTE *)v25 + 42) = *(_BYTE *)(v19 + 42);
        if ( v79 )
        {
          v34 = &v78;
          v35 = v79;
          while ( 1 )
          {
            while ( 1 )
            {
              v36 = *((_QWORD *)v35 + 4);
              if ( v36 >= v23 )
                break;
              v35 = (int *)*((_QWORD *)v35 + 3);
              if ( !v35 )
                goto LABEL_47;
            }
            v37 = (int *)*((_QWORD *)v35 + 2);
            if ( v23 >= v36 )
              break;
            v34 = v35;
            v35 = (int *)*((_QWORD *)v35 + 2);
            if ( !v37 )
            {
LABEL_47:
              v38 = v34 == &v78;
              goto LABEL_48;
            }
          }
          for ( i = (int *)*((_QWORD *)v35 + 3); i; i = (int *)*((_QWORD *)i + 3) )
          {
            while ( 1 )
            {
              v55 = *((_QWORD *)i + 2);
              if ( v23 >= *((_QWORD *)i + 4) )
                break;
              v34 = i;
              i = (int *)*((_QWORD *)i + 2);
              if ( !v55 )
                goto LABEL_86;
            }
          }
LABEL_86:
          while ( v37 )
          {
            while ( 1 )
            {
              v56 = *((_QWORD *)v37 + 2);
              if ( *((_QWORD *)v37 + 4) < v23 )
                break;
              v35 = v37;
              v37 = (int *)*((_QWORD *)v37 + 2);
              if ( !v56 )
                goto LABEL_89;
            }
            v37 = (int *)*((_QWORD *)v37 + 3);
          }
LABEL_89:
          if ( v80 != v35 || v34 != &v78 )
          {
            if ( v34 != v35 )
            {
              do
              {
                v57 = std::_Rb_tree_increment();
                v58 = (void *)std::_Rb_tree_rebalance_for_erase();
                operator delete(v58, 0x28u);
                --v82;
              }
              while ( (int *)v57 != v34 );
            }
            goto LABEL_51;
          }
        }
        else
        {
          v34 = &v78;
          v38 = 1;
LABEL_48:
          if ( v80 != v34 || !v38 )
            goto LABEL_51;
        }
        sub_608A0(v79);
        v79 = 0;
        v82 = 0;
        v80 = &v78;
        v81 = &v78;
LABEL_51:
        v19 = std::_Rb_tree_increment();
        if ( v67 == v19 )
          goto LABEL_52;
      }
      v28 = (__int64)(v7 + 65);
      v59 = operator new(0x30u);
      *(_QWORD *)(v59 + 32) = v23;
      v30 = (void *)v59;
      *(_WORD *)(v59 + 40) = 0;
      *(_BYTE *)(v59 + 42) = 0;
      if ( v7[70] )
      {
        v32 = v7[69];
        v25 = 0;
        if ( *(_QWORD *)(v32 + 32) < v23 )
          goto LABEL_39;
      }
      goto LABEL_100;
    }
  }
LABEL_52:
  for ( j = (__int64)v80; (int *)j != &v78; j = std::_Rb_tree_increment() )
  {
    v39 = (_QWORD *)v7[67];
    v40 = v7 + 66;
    v41 = *(_QWORD *)(j + 32);
    if ( v39 )
    {
      v42 = (_QWORD *)v7[67];
      while ( 1 )
      {
        while ( 1 )
        {
          v43 = v42[4];
          if ( v43 >= v41 )
            break;
          v42 = (_QWORD *)v42[3];
          if ( !v42 )
            goto LABEL_59;
        }
        v44 = (_QWORD *)v42[2];
        if ( v41 >= v43 )
          break;
        v40 = v42;
        v42 = (_QWORD *)v42[2];
        if ( !v44 )
        {
LABEL_59:
          v45 = v9 == v40;
          goto LABEL_60;
        }
      }
      for ( k = (_QWORD *)v42[3]; k; k = (_QWORD *)k[3] )
      {
        while ( 1 )
        {
          v48 = k[2];
          if ( v41 >= k[4] )
            break;
          v40 = k;
          k = (_QWORD *)k[2];
          if ( !v48 )
            goto LABEL_69;
        }
      }
LABEL_69:
      while ( v44 )
      {
        while ( 1 )
        {
          v49 = v44[2];
          if ( v44[4] < v41 )
            break;
          v42 = v44;
          v44 = (_QWORD *)v44[2];
          if ( !v49 )
            goto LABEL_72;
        }
        v44 = (_QWORD *)v44[3];
      }
LABEL_72:
      v66 = v7[70];
      if ( (_QWORD *)v7[68] != v42 || v9 != v40 )
      {
        if ( v40 == v42 )
          continue;
        do
        {
          v50 = std::_Rb_tree_increment();
          v51 = (void *)std::_Rb_tree_rebalance_for_erase();
          operator delete(v51, 0x30u);
          v52 = v7[70] - 1LL;
          v7[70] = v52;
        }
        while ( v40 != (_QWORD *)v50 );
        if ( v66 - v52 != 1 )
          continue;
LABEL_77:
        netnode_supdel();
        continue;
      }
    }
    else
    {
      v45 = 1;
LABEL_60:
      v66 = v7[70];
      if ( (_QWORD *)v7[68] != v40 || !v45 )
        continue;
    }
    sub_606D0(v39);
    v7[67] = 0;
    v7[68] = v9;
    v7[69] = v9;
    v7[70] = 0;
    if ( v66 == 1 )
      goto LABEL_77;
  }
  sub_608A0(v79);
  return 1;
}

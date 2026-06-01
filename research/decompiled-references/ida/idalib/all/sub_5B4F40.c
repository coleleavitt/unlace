unsigned __int64 __fastcall sub_5B4F40(__int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  _QWORD *v16; // rdi
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned __int64 v20; // r13
  _QWORD *v21; // r12
  __int64 v22; // rax
  _QWORD *v23; // rdi
  _QWORD *v24; // rdx
  _QWORD *v25; // rsi
  __int64 v26; // rbx
  __int64 v27; // rdi
  __int64 v28; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // rdi
  __int64 v32; // rax
  _QWORD *v33; // r12
  _QWORD *v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rdx
  _QWORD *v38; // rax
  _QWORD *v39; // rbp
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  _BOOL8 v43; // rdi
  _QWORD *v44; // rdx
  _QWORD *v45; // rbx
  __int64 v46; // [rsp+0h] [rbp-68h]
  __int64 v47; // [rsp+8h] [rbp-60h]
  unsigned __int64 v48; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 *v49; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+28h] [rbp-40h]

  v50 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a2 + 56);
  if ( !v5 )
    goto LABEL_8;
  v6 = (_QWORD *)(a2 + 48);
  v10 = v6;
  do
  {
    while ( 1 )
    {
      v11 = v5[2];
      v12 = v5[3];
      if ( v5[4] < a3 )
        break;
      v10 = v5;
      v5 = (_QWORD *)v5[2];
      if ( !v11 )
        goto LABEL_6;
    }
    v5 = (_QWORD *)v5[3];
  }
  while ( v12 );
LABEL_6:
  if ( v10 == v6 || a3 < v10[4] )
  {
LABEL_8:
    if ( !under_debugger )
      interr(2451);
    goto LABEL_77;
  }
  v13 = v10[5];
  *(_QWORD *)(a2 + 136) = v13;
  if ( v13 != -1 )
  {
    v14 = switch_dbctx(*(int *)(a2 + 8));
    *(_QWORD *)(a2 + 96) = 0;
    *(_QWORD *)(a2 + 120) = 0;
    v15 = v14;
    sub_7BEA80(*(_QWORD *)(v14 + 1672) + 2456LL, **(_QWORD **)(v14 + 1672), a2 + 88, a3, 83);
    v16 = *(_QWORD **)(v15 + 1672);
    v17 = (_QWORD *)*v16;
    sub_7BEA80(v16 + 307, *v16, a2 + 112, a3, 70);
    v46 = switch_dbctx(*(int *)(a1 + 8));
    if ( a4 )
    {
      v30 = *(_QWORD **)(a1 + 56);
      v21 = (_QWORD *)(a1 + 48);
      if ( !v30 )
        goto LABEL_39;
      v17 = (_QWORD *)(a1 + 48);
      do
      {
        while ( 1 )
        {
          v19 = v30[2];
          v18 = v30[3];
          if ( v30[4] < a3 )
            break;
          v17 = v30;
          v30 = (_QWORD *)v30[2];
          if ( !v19 )
            goto LABEL_37;
        }
        v30 = (_QWORD *)v30[3];
      }
      while ( v18 );
LABEL_37:
      if ( v17 == v21 || a3 < v17[4] )
LABEL_39:
        sub_5B3630();
      v20 = *(_QWORD *)(a2 + 136);
      if ( v17[5] == v20 )
      {
        sub_5B4290(*(_QWORD *)(v46 + 1672));
        v31 = *(_QWORD **)(v46 + 1672);
        if ( *(_QWORD *)(a2 + 120) )
          sub_5B47F0(v31, a3, *(const char **)(a2 + 112), 0, 1);
        else
          sub_5B47F0(v31, a3, haystack, 0, 1);
        if ( *(_QWORD *)(a2 + 96) <= 1u )
          sub_7BE850(*(_QWORD *)(v46 + 1672) + 2456LL, v46, a3, 83);
        if ( *(_QWORD *)(a2 + 120) <= 1u )
          sub_7BE850(*(_QWORD *)(v46 + 1672) + 2456LL, v46, a3, 70);
LABEL_21:
        v24 = *(_QWORD **)(a1 + 56);
        v48 = a3;
        v25 = v21;
        v26 = *(_QWORD *)(a2 + 136);
        if ( !v24 )
          goto LABEL_28;
        do
        {
          while ( 1 )
          {
            v27 = v24[2];
            v28 = v24[3];
            if ( v24[4] < a3 )
              break;
            v25 = v24;
            v24 = (_QWORD *)v24[2];
            if ( !v27 )
              goto LABEL_26;
          }
          v24 = (_QWORD *)v24[3];
        }
        while ( v28 );
LABEL_26:
        if ( v25 == v21 || a3 < v25[4] )
        {
LABEL_28:
          v49 = &v48;
          v25 = sub_5B3810((_QWORD *)(a1 + 40), v25, &v49);
        }
        v25[5] = v26;
        return v50 - __readfsqword(0x28u);
      }
    }
    else
    {
      v20 = *(_QWORD *)(a2 + 136);
      v21 = (_QWORD *)(a1 + 48);
    }
    v22 = *(_QWORD *)(a1 + 64);
    if ( (_QWORD *)v22 != v21 )
    {
      while ( *(_QWORD *)(v22 + 40) != v20 )
      {
        v22 = std::_Rb_tree_increment(v22, v17, v18, v19);
        if ( (_QWORD *)v22 == v21 )
          goto LABEL_19;
      }
      if ( (_QWORD *)v22 != v21 )
      {
        v47 = v22;
        sub_5B4B10(*(_QWORD **)(v46 + 1672), v20, v20 + 1);
        *(_QWORD *)(v47 + 40) = -1;
      }
    }
LABEL_19:
    sub_5B4290(*(_QWORD *)(v46 + 1672));
    v23 = *(_QWORD **)(v46 + 1672);
    if ( *(_QWORD *)(a2 + 120) )
      sub_5B47F0(v23, a3, *(const char **)(a2 + 112), 0, 1);
    else
      sub_5B47F0(v23, a3, haystack, 0, 1);
    goto LABEL_21;
  }
  v32 = switch_dbctx(*(int *)(a1 + 8));
  if ( a4 )
  {
    v44 = *(_QWORD **)(a1 + 56);
    v33 = (_QWORD *)(a1 + 48);
    if ( !v44 )
      goto LABEL_70;
    v45 = (_QWORD *)(a1 + 48);
    do
    {
      if ( v44[4] >= a3 )
      {
        v45 = v44;
        v44 = (_QWORD *)v44[2];
      }
      else
      {
        v44 = (_QWORD *)v44[3];
      }
    }
    while ( v44 );
    if ( v33 == v45 || a3 < v45[4] )
    {
LABEL_70:
      if ( !under_debugger )
        interr(2450);
LABEL_77:
      BUG();
    }
    sub_5B4B10(*(_QWORD **)(v32 + 1672), v45[5], v45[5] + 1LL);
    v45[5] = -1;
  }
  else
  {
    v33 = (_QWORD *)(a1 + 48);
  }
  v34 = *(_QWORD **)(a1 + 56);
  v35 = v33;
  if ( !v34 )
    goto LABEL_56;
  do
  {
    while ( 1 )
    {
      v36 = v34[2];
      v37 = v34[3];
      if ( v34[4] < a3 )
        break;
      v35 = v34;
      v34 = (_QWORD *)v34[2];
      if ( !v36 )
        goto LABEL_54;
    }
    v34 = (_QWORD *)v34[3];
  }
  while ( v37 );
LABEL_54:
  if ( v35 == v33 || a3 < v35[4] )
  {
LABEL_56:
    v38 = (_QWORD *)operator new(0x30u);
    v38[4] = a3;
    v39 = v38;
    v38[5] = 0;
    v41 = sub_5B3740((_QWORD *)(a1 + 40), v35, a3, v40);
    v35 = v41;
    if ( v42 )
    {
      v43 = v41 || v33 == v42 || a3 < v42[4];
      v35 = v39;
      std::_Rb_tree_insert_and_rebalance(v43, v39, v42, v33);
      ++*(_QWORD *)(a1 + 80);
    }
    else if ( v39 )
    {
      operator delete(v39, 0x30u);
    }
  }
  v35[5] = -1;
  return v50 - __readfsqword(0x28u);
}

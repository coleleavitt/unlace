unsigned __int64 __fastcall sub_59AD40(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  _QWORD *v5; // r14
  _QWORD *v6; // rsi
  unsigned __int64 v9; // r15
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // r12
  unsigned int v16; // r12d
  __int64 v17; // rbp
  __int64 v18; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rdx
  __int64 v21; // rsi
  int v22; // ebx
  __int64 v23; // rdi
  __int64 v24; // rcx
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rdx
  _QWORD *v30; // rdi
  __int64 v31; // rax
  _QWORD *v32; // rbp
  _QWORD *v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // r12
  __int64 v39; // rdx
  _QWORD *v40; // rdx
  _QWORD *v41; // rbx
  __int64 v43; // [rsp+10h] [rbp-68h]
  __int64 v44; // [rsp+18h] [rbp-60h]
  unsigned __int64 v45; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 *v46; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v47; // [rsp+38h] [rbp-40h]

  v47 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a2 + 56);
  if ( !v5 )
    goto LABEL_8;
  v6 = (_QWORD *)(a2 + 48);
  v9 = a3;
  v10 = v6;
  do
  {
    while ( 1 )
    {
      v11 = v5[2];
      v12 = v5[3];
      if ( v5[4] < v9 )
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
  if ( v10 == v6 || v9 < v10[4] )
  {
LABEL_8:
    if ( !under_debugger )
      interr(2451);
    goto LABEL_73;
  }
  v13 = *((_DWORD *)v10 + 10);
  *(_DWORD *)(a2 + 136) = v13;
  if ( v13 != -1 )
  {
    v14 = switch_dbctx(*(int *)(a2 + 8));
    *(_QWORD *)(a2 + 96) = 0;
    *(_QWORD *)(a2 + 120) = 0;
    v15 = v14;
    sub_79B6F0(*(_QWORD *)(v14 + 1480) + 2352LL, **(_QWORD **)(v14 + 1480), a2 + 88, a3, 83);
    sub_79B6F0(*(_QWORD *)(v15 + 1480) + 2352LL, **(_QWORD **)(v15 + 1480), a2 + 112, a3, 70);
    v43 = switch_dbctx(*(int *)(a1 + 8));
    if ( a4 )
    {
      v26 = *(_QWORD **)(a1 + 56);
      v17 = a1 + 48;
      if ( !v26 )
        goto LABEL_39;
      v27 = (_QWORD *)(a1 + 48);
      do
      {
        while ( 1 )
        {
          v28 = v26[2];
          v29 = v26[3];
          if ( v26[4] < v9 )
            break;
          v27 = v26;
          v26 = (_QWORD *)v26[2];
          if ( !v28 )
            goto LABEL_37;
        }
        v26 = (_QWORD *)v26[3];
      }
      while ( v29 );
LABEL_37:
      if ( v27 == (_QWORD *)v17 || v9 < v27[4] )
LABEL_39:
        sub_599470();
      v16 = *(_DWORD *)(a2 + 136);
      if ( *((_DWORD *)v27 + 10) == v16 )
      {
        sub_59A0B0(*(_QWORD *)(v43 + 1480));
        v30 = *(_QWORD **)(v43 + 1480);
        if ( *(_QWORD *)(a2 + 120) )
          sub_59A5F0(v30, a3, *(const char **)(a2 + 112), 0, 1);
        else
          sub_59A5F0(v30, a3, haystack, 0, 1);
        if ( *(_QWORD *)(a2 + 96) <= 1u )
          sub_79B4D0(*(_QWORD *)(v43 + 1480) + 2352LL, v43, a3, 83);
        if ( *(_QWORD *)(a2 + 120) <= 1u )
          sub_79B4D0(*(_QWORD *)(v43 + 1480) + 2352LL, v43, a3, 70);
LABEL_21:
        v20 = *(_QWORD **)(a1 + 56);
        v45 = v9;
        v21 = v17;
        v22 = *(_DWORD *)(a2 + 136);
        if ( !v20 )
          goto LABEL_28;
        do
        {
          while ( 1 )
          {
            v23 = v20[2];
            v24 = v20[3];
            if ( v20[4] < v9 )
              break;
            v21 = (__int64)v20;
            v20 = (_QWORD *)v20[2];
            if ( !v23 )
              goto LABEL_26;
          }
          v20 = (_QWORD *)v20[3];
        }
        while ( v24 );
LABEL_26:
        if ( v21 == v17 || v9 < *(_QWORD *)(v21 + 32) )
        {
LABEL_28:
          v46 = &v45;
          v21 = sub_599650((_QWORD *)(a1 + 40), (_QWORD *)v21, &v46);
        }
        *(_DWORD *)(v21 + 40) = v22;
        return v47 - __readfsqword(0x28u);
      }
    }
    else
    {
      v16 = *(_DWORD *)(a2 + 136);
      v17 = a1 + 48;
    }
    v18 = *(_QWORD *)(a1 + 64);
    if ( v18 != v17 )
    {
      while ( *(_DWORD *)(v18 + 40) != v16 )
      {
        v18 = std::_Rb_tree_increment();
        if ( v18 == v17 )
          goto LABEL_19;
      }
      if ( v18 != v17 )
      {
        v44 = v18;
        sub_59A900(*(_QWORD **)(v43 + 1480), v16, v16 + 1);
        *(_DWORD *)(v44 + 40) = -1;
      }
    }
LABEL_19:
    sub_59A0B0(*(_QWORD *)(v43 + 1480));
    v19 = *(_QWORD **)(v43 + 1480);
    if ( *(_QWORD *)(a2 + 120) )
      sub_59A5F0(v19, a3, *(const char **)(a2 + 112), 0, 1);
    else
      sub_59A5F0(v19, a3, haystack, 0, 1);
    goto LABEL_21;
  }
  v31 = switch_dbctx(*(int *)(a1 + 8));
  if ( a4 )
  {
    v40 = *(_QWORD **)(a1 + 56);
    v32 = (_QWORD *)(a1 + 48);
    if ( !v40 )
      goto LABEL_67;
    v41 = (_QWORD *)(a1 + 48);
    do
    {
      if ( v40[4] >= v9 )
      {
        v41 = v40;
        v40 = (_QWORD *)v40[2];
      }
      else
      {
        v40 = (_QWORD *)v40[3];
      }
    }
    while ( v40 );
    if ( v32 == v41 || v9 < v41[4] )
    {
LABEL_67:
      if ( !under_debugger )
        interr(2450);
LABEL_73:
      BUG();
    }
    sub_59A900(*(_QWORD **)(v31 + 1480), *((_DWORD *)v41 + 10), *((_DWORD *)v41 + 10) + 1);
    *((_DWORD *)v41 + 10) = -1;
  }
  else
  {
    v32 = (_QWORD *)(a1 + 48);
  }
  v33 = *(_QWORD **)(a1 + 56);
  v34 = v32;
  if ( !v33 )
    goto LABEL_56;
  do
  {
    while ( 1 )
    {
      v35 = v33[2];
      v36 = v33[3];
      if ( v33[4] < v9 )
        break;
      v34 = v33;
      v33 = (_QWORD *)v33[2];
      if ( !v35 )
        goto LABEL_54;
    }
    v33 = (_QWORD *)v33[3];
  }
  while ( v36 );
LABEL_54:
  if ( v32 == v34 || v9 < v34[4] )
  {
LABEL_56:
    v37 = operator new(0x30u);
    *(_QWORD *)(v37 + 32) = v9;
    v38 = (_QWORD *)v37;
    *(_DWORD *)(v37 + 40) = 0;
    v34 = sub_599580((_QWORD *)(a1 + 40), v34, v9);
    if ( v39 )
    {
      v34 = v38;
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(a1 + 80);
    }
    else if ( v38 )
    {
      operator delete(v38, 0x30u);
    }
  }
  *((_DWORD *)v34 + 10) = -1;
  return v47 - __readfsqword(0x28u);
}


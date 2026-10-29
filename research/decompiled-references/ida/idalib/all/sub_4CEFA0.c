unsigned __int64 __fastcall sub_4CEFA0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r14
  unsigned __int64 v11; // rbx
  __int64 v12; // r9
  __int64 v13; // r12
  int *v14; // r10
  unsigned __int64 v15; // r15
  int *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  int *v19; // rax
  __int64 v20; // rdx
  int *v21; // r11
  unsigned __int64 v22; // rsi
  int *v23; // rdx
  __int64 v24; // rax
  int *v25; // rax
  _BOOL8 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // r9
  __int64 i; // rbx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // [rsp+0h] [rbp-B8h]
  int *v36; // [rsp+10h] [rbp-A8h]
  int *v37; // [rsp+10h] [rbp-A8h]
  int *v38; // [rsp+10h] [rbp-A8h]
  int *v39; // [rsp+10h] [rbp-A8h]
  int *v40; // [rsp+18h] [rbp-A0h]
  int *v41; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+30h] [rbp-88h] BYREF
  __int64 v43; // [rsp+38h] [rbp-80h] BYREF
  char v44[8]; // [rsp+40h] [rbp-78h] BYREF
  int v45; // [rsp+48h] [rbp-70h] BYREF
  int *v46; // [rsp+50h] [rbp-68h]
  int *v47; // [rsp+58h] [rbp-60h]
  int *v48; // [rsp+60h] [rbp-58h]
  __int64 v49; // [rsp+68h] [rbp-50h]
  unsigned __int64 v50; // [rsp+78h] [rbp-40h]

  v6 = *a1;
  v50 = __readfsqword(0x28u);
  sub_4E0A40(v6);
  if ( (unsigned __int8)sub_631AD0(*a1, 35) != 10 )
    return v50 - __readfsqword(0x28u);
  v45 = 0;
  v46 = nullptr;
  v47 = &v45;
  v48 = &v45;
  v49 = 0;
  v35 = a3 - a2;
  v9 = sub_3BDD60(a1, a2);
  v10 = sub_3BDD60(a1, a2 + a4);
  v11 = netnode_lower_bound(a1[303], v9, 83);
  if ( v11 < v10 )
  {
    while ( 1 )
    {
      v13 = netnode_altval(a1[303], v11, 65);
      if ( v13 )
        break;
LABEL_27:
      v11 = netnode_supnext(a1[303], v11, 65);
      if ( v11 >= v10 )
        goto LABEL_28;
    }
    v14 = &v45;
    v15 = v35 + v11;
    v16 = v46;
    if ( v46 )
    {
      do
      {
        while ( 1 )
        {
          v17 = *((_QWORD *)v16 + 2);
          v18 = *((_QWORD *)v16 + 3);
          if ( *((_QWORD *)v16 + 4) < v15 )
            break;
          v14 = v16;
          v16 = *((int **)v16 + 2);
          if ( !v17 )
            goto LABEL_10;
        }
        v16 = *((int **)v16 + 3);
      }
      while ( v18 );
LABEL_10:
      if ( v14 != &v45 && v15 >= *((_QWORD *)v14 + 4) )
      {
LABEL_26:
        *((_QWORD *)v14 + 5) = v13;
        netnode_supdel(a1[303], v11, 65);
        v27 = a1[302];
        v42 = v15 + 1;
        netnode_supset(v27, v13, &v42, 8, 65, v28);
        goto LABEL_27;
      }
    }
    v36 = v14;
    v19 = (int *)operator new(0x30u);
    v14 = v36;
    *((_QWORD *)v19 + 4) = v15;
    v21 = v19;
    *((_QWORD *)v19 + 5) = 0;
    if ( v36 == &v45 )
    {
      if ( v49 )
      {
        v23 = v48;
        v14 = nullptr;
        if ( *((_QWORD *)v48 + 4) < v15 )
          goto LABEL_21;
      }
    }
    else
    {
      v22 = *((_QWORD *)v36 + 4);
      if ( v15 >= v22 )
      {
        if ( v22 >= v15 )
          goto LABEL_36;
        if ( v48 != v36 )
        {
          v41 = v19;
          v34 = std::_Rb_tree_increment(v36, v22, v20, v44);
          v21 = v41;
          v23 = (int *)v34;
          if ( v15 >= *(_QWORD *)(v34 + 32) )
            goto LABEL_20;
          v14 = v36;
          if ( *((_QWORD *)v36 + 3) )
          {
            v14 = (int *)v34;
            goto LABEL_21;
          }
        }
        v23 = v14;
        if ( v14 )
          goto LABEL_39;
        goto LABEL_36;
      }
      v23 = v36;
      if ( v47 == v36 )
        goto LABEL_21;
      v40 = v19;
      v24 = std::_Rb_tree_decrement(v36);
      v21 = v40;
      v23 = (int *)v24;
      if ( *(_QWORD *)(v24 + 32) < v15 )
      {
        v14 = nullptr;
        if ( *(_QWORD *)(v24 + 24) )
        {
          v14 = v36;
          v23 = v36;
        }
LABEL_21:
        if ( v23 )
        {
          if ( v23 == &v45 || v14 )
          {
            v26 = 1;
LABEL_25:
            v38 = v21;
            std::_Rb_tree_insert_and_rebalance(v26, v21, v23, &v45);
            ++v49;
            v14 = v38;
            goto LABEL_26;
          }
          v22 = *((_QWORD *)v23 + 4);
LABEL_39:
          v26 = v15 < v22;
          goto LABEL_25;
        }
LABEL_36:
        if ( v21 )
        {
          v39 = v14;
          operator delete(v21, 0x30u);
          v14 = v39;
        }
        goto LABEL_26;
      }
    }
LABEL_20:
    v37 = v21;
    v25 = (int *)sub_4C7C00((__int64)v44, v15);
    v21 = v37;
    v14 = v25;
    goto LABEL_21;
  }
LABEL_28:
  for ( i = (__int64)v47; (int *)i != &v45; i = std::_Rb_tree_increment(i, v30, v32, v33) )
  {
    v30 = *(_QWORD *)(i + 32);
    v31 = a1[303];
    v43 = *(_QWORD *)(i + 40);
    netnode_supset(v31, v30, &v43, 8, 65, v12);
  }
  sub_4C8700(v46);
  return v50 - __readfsqword(0x28u);
}

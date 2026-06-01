unsigned __int64 __fastcall sub_3D7E40(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r15
  unsigned __int64 v9; // rdi
  int v10; // ebx
  int *v11; // r14
  int *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int *v15; // rax
  __int64 i; // rbx
  __int64 v17; // r13
  __int64 v18; // rsi
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD **v26; // rbx
  void *v27; // rdi
  __int64 v29; // rax
  _QWORD *v30; // [rsp+8h] [rbp-B0h]
  __int64 v31; // [rsp+18h] [rbp-A0h]
  unsigned __int64 v32; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 *v33; // [rsp+30h] [rbp-88h] BYREF
  __int64 v34; // [rsp+38h] [rbp-80h] BYREF
  __int64 v35; // [rsp+40h] [rbp-78h] BYREF
  int v36; // [rsp+48h] [rbp-70h] BYREF
  void *v37; // [rsp+50h] [rbp-68h]
  int *v38; // [rsp+58h] [rbp-60h]
  int *v39; // [rsp+60h] [rbp-58h]
  __int64 v40; // [rsp+68h] [rbp-50h]
  unsigned __int64 v41; // [rsp+78h] [rbp-40h]

  v41 = __readfsqword(0x28u);
  v30 = a1 + 186;
  v4 = (_QWORD *)a1[187];
  v36 = 0;
  v37 = nullptr;
  v38 = &v36;
  v39 = &v36;
  v40 = 0;
  if ( v4 )
  {
    v31 = (__int64)(a1 + 186);
    do
    {
      while ( 1 )
      {
        v6 = v4[2];
        v7 = v4[3];
        if ( v4[4] < a2 )
          break;
        v31 = (__int64)v4;
        v4 = (_QWORD *)v4[2];
        if ( !v6 )
          goto LABEL_6;
      }
      v4 = (_QWORD *)v4[3];
    }
    while ( v7 );
LABEL_6:
    if ( v30 != (_QWORD *)v31 )
    {
      v8 = v31;
      while ( 1 )
      {
        v9 = *(_QWORD *)(v8 + 32);
        if ( v9 >= a3 )
          goto LABEL_21;
        v10 = *(_DWORD *)(v8 + 40);
        v11 = (int *)*a1;
        v32 = *(_QWORD *)(v8 + 32);
        v12 = v11;
        v34 = ea2node(v9);
        sub_7BE850(&v34, v11, 8, 65);
        if ( (v10 & 0x43821) != 0 )
          break;
LABEL_8:
        v8 = std::_Rb_tree_increment(v8, v12, v13, v14);
        if ( v30 == (_QWORD *)v8 )
          goto LABEL_21;
      }
      v15 = (int *)v37;
      if ( v37 )
      {
        v12 = &v36;
        do
        {
          while ( 1 )
          {
            v14 = *((_QWORD *)v15 + 2);
            v13 = *((_QWORD *)v15 + 3);
            if ( *((_QWORD *)v15 + 4) < v32 )
              break;
            v12 = v15;
            v15 = *((int **)v15 + 2);
            if ( !v14 )
              goto LABEL_16;
          }
          v15 = *((int **)v15 + 3);
        }
        while ( v13 );
LABEL_16:
        if ( v12 != &v36 && v32 >= *((_QWORD *)v12 + 4) )
          goto LABEL_19;
      }
      else
      {
        v12 = &v36;
      }
      v33 = &v32;
      v12 = (int *)sub_3B9D00(&v35, v12, &v33);
LABEL_19:
      v12[10] = v10;
      goto LABEL_8;
    }
    v8 = v31;
  }
  else
  {
    v31 = (__int64)(a1 + 186);
    v8 = (__int64)(a1 + 186);
  }
LABEL_21:
  if ( (unsigned __int8)sub_3CD340(v31, v8, 14) )
    sub_3D7370((__int64)(a1 + 185), v31, v8);
  for ( i = (__int64)v38; (int *)i != &v36; i = std::_Rb_tree_increment(i, v18, v20, v21) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(i + 32);
      v18 = 0;
      v19 = *(_DWORD *)(i + 40);
      show_auto(v17, 0);
      if ( (v19 & 1) != 0 )
      {
        v29 = ea2node(v17);
        v18 = 9;
        netnode_supdel(v29, 9, 65);
      }
      if ( (v19 & 0x20) != 0 )
        break;
      if ( (v19 & 0x800) != 0 )
        goto LABEL_34;
LABEL_26:
      if ( (v19 & 0x1000) != 0 )
        goto LABEL_35;
LABEL_27:
      if ( (v19 & 0x2000) != 0 )
        goto LABEL_36;
LABEL_28:
      if ( (v19 & 0x40000) == 0 )
        goto LABEL_29;
LABEL_37:
      v23 = ea2node(v17);
      netnode_supdel(v23, 20, 65);
      i = std::_Rb_tree_increment(i, 20, v24, v25);
      if ( (int *)i == &v36 )
        goto LABEL_38;
    }
    v22 = ea2node(v17);
    v18 = 0x2000;
    netnode_delblob(v22, 0x2000, 83);
    if ( (v19 & 0x800) == 0 )
      goto LABEL_26;
LABEL_34:
    v18 = 0;
    set_tinfo(v17, 0);
    if ( (v19 & 0x1000) == 0 )
      goto LABEL_27;
LABEL_35:
    v18 = 0;
    set_op_tinfo(v17, 0, 0);
    if ( (v19 & 0x2000) == 0 )
      goto LABEL_28;
LABEL_36:
    v18 = 1;
    set_op_tinfo(v17, 1, 0);
    if ( (v19 & 0x40000) != 0 )
      goto LABEL_37;
LABEL_29:
    ;
  }
LABEL_38:
  v26 = (_QWORD **)v37;
  if ( v37 )
  {
    do
    {
      sub_3BBB90(v26[3]);
      v27 = v26;
      v26 = (_QWORD **)v26[2];
      operator delete(v27, 0x30u);
    }
    while ( v26 );
  }
  return v41 - __readfsqword(0x28u);
}

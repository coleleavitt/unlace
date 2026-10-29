unsigned __int64 __fastcall sub_3D2160(__int64 *a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r15
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // r14
  _QWORD *v12; // rax
  int *v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  int *i; // rbx
  unsigned int v17; // r13d
  int v18; // r12d
  unsigned int v19; // eax
  unsigned int v20; // eax
  _QWORD **v21; // rbx
  void *v22; // rdi
  unsigned int v24; // eax
  _QWORD *v25; // [rsp+8h] [rbp-A0h]
  __int64 v26; // [rsp+18h] [rbp-90h]
  unsigned int v27; // [rsp+20h] [rbp-88h] BYREF
  int v28; // [rsp+24h] [rbp-84h] BYREF
  unsigned int *v29; // [rsp+28h] [rbp-80h] BYREF
  __int64 v30; // [rsp+30h] [rbp-78h] BYREF
  int v31; // [rsp+38h] [rbp-70h] BYREF
  void *v32; // [rsp+40h] [rbp-68h]
  int *v33; // [rsp+48h] [rbp-60h]
  int *v34; // [rsp+50h] [rbp-58h]
  __int64 v35; // [rsp+58h] [rbp-50h]
  unsigned __int64 v36; // [rsp+68h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v25 = a1 + 180;
  v4 = a1[181];
  v31 = 0;
  v32 = nullptr;
  v33 = &v31;
  v34 = &v31;
  v35 = 0;
  if ( v4 )
  {
    v26 = (__int64)(a1 + 180);
    do
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)(v4 + 16);
        v7 = *(_QWORD *)(v4 + 24);
        if ( *(_DWORD *)(v4 + 32) < a2 )
          break;
        v26 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v6 )
          goto LABEL_6;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v7 );
LABEL_6:
    if ( v25 != (_QWORD *)v26 )
    {
      v8 = v26;
      while ( 1 )
      {
        v9 = *(unsigned int *)(v8 + 32);
        if ( (unsigned int)v9 >= a3 )
          goto LABEL_21;
        v10 = *(_DWORD *)(v8 + 36);
        v11 = *a1;
        v27 = *(_DWORD *)(v8 + 32);
        v28 = ea2node(v9);
        sub_79B4D0(&v28, v11, 8, 65);
        if ( (v10 & 0x43821) != 0 )
          break;
LABEL_8:
        v8 = std::_Rb_tree_increment();
        if ( v25 == (_QWORD *)v8 )
          goto LABEL_21;
      }
      v12 = v32;
      if ( v32 )
      {
        v13 = &v31;
        do
        {
          while ( 1 )
          {
            v14 = v12[2];
            v15 = v12[3];
            if ( *((_DWORD *)v12 + 8) < v27 )
              break;
            v13 = (int *)v12;
            v12 = (_QWORD *)v12[2];
            if ( !v14 )
              goto LABEL_16;
          }
          v12 = (_QWORD *)v12[3];
        }
        while ( v15 );
LABEL_16:
        if ( v13 != &v31 && v27 >= v13[8] )
          goto LABEL_19;
      }
      else
      {
        v13 = &v31;
      }
      v29 = &v27;
      v13 = sub_3B5530(&v30, (__int64)v13, &v29);
LABEL_19:
      v13[9] = v10;
      goto LABEL_8;
    }
    v8 = v26;
  }
  else
  {
    v26 = (__int64)(a1 + 180);
    v8 = (__int64)(a1 + 180);
  }
LABEL_21:
  if ( (unsigned __int8)sub_3A0490(v26, v8, 14) )
    sub_3A07C0((__int64)(a1 + 179), v26, v8);
  for ( i = v33; i != &v31; i = (int *)std::_Rb_tree_increment() )
  {
    while ( 1 )
    {
      v17 = i[8];
      v18 = i[9];
      show_auto(v17, 0);
      if ( (v18 & 1) != 0 )
      {
        v24 = ea2node(v17);
        netnode_supdel(v24, 9, 65);
      }
      if ( (v18 & 0x20) != 0 )
        break;
      if ( (v18 & 0x800) != 0 )
        goto LABEL_34;
LABEL_26:
      if ( (v18 & 0x1000) != 0 )
        goto LABEL_35;
LABEL_27:
      if ( (v18 & 0x2000) != 0 )
        goto LABEL_36;
LABEL_28:
      if ( (v18 & 0x40000) == 0 )
        goto LABEL_29;
LABEL_37:
      v20 = ea2node(v17);
      netnode_supdel(v20, 20, 65);
      i = (int *)std::_Rb_tree_increment();
      if ( i == &v31 )
        goto LABEL_38;
    }
    v19 = ea2node(v17);
    netnode_delblob(v19, 0x2000, 83);
    if ( (v18 & 0x800) == 0 )
      goto LABEL_26;
LABEL_34:
    set_tinfo(v17, 0);
    if ( (v18 & 0x1000) == 0 )
      goto LABEL_27;
LABEL_35:
    set_op_tinfo(v17, 0, 0);
    if ( (v18 & 0x2000) == 0 )
      goto LABEL_28;
LABEL_36:
    set_op_tinfo(v17, 1, 0);
    if ( (v18 & 0x40000) != 0 )
      goto LABEL_37;
LABEL_29:
    ;
  }
LABEL_38:
  v21 = (_QWORD **)v32;
  if ( v32 )
  {
    do
    {
      sub_3B66F0(v21[3]);
      v22 = v21;
      v21 = (_QWORD **)v21[2];
      operator delete(v22, 0x28u);
    }
    while ( v21 );
  }
  return v36 - __readfsqword(0x28u);
}


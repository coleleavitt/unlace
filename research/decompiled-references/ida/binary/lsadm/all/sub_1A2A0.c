unsigned __int64 __fastcall sub_1A2A0(_QWORD *a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int8 *v3; // r12
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  int *v6; // r14
  int v7; // r13d
  int v8; // edx
  int *v9; // rax
  __int64 v10; // rdx
  unsigned __int8 v11; // r13
  __int64 v12; // r15
  __int64 v13; // r14
  unsigned __int8 *v14; // rax
  _QWORD **v15; // rbx
  void *v16; // rdi
  __int64 v18; // rax
  int v20; // [rsp+28h] [rbp-70h] BYREF
  void *v21; // [rsp+30h] [rbp-68h]
  int *v22; // [rsp+38h] [rbp-60h]
  int *v23; // [rsp+40h] [rbp-58h]
  __int64 v24; // [rsp+48h] [rbp-50h]
  unsigned __int64 v25; // [rsp+58h] [rbp-40h]

  v3 = a2;
  v4 = a1[10] + a3;
  v25 = __readfsqword(0x28u);
  v20 = 0;
  v22 = &v20;
  v23 = &v20;
  v21 = nullptr;
  v24 = 0;
  if ( a1[11] < v4 )
  {
    a2 = (unsigned __int8 *)a1[9];
    a1[9] = sub_29E60(a1 + 9, a2, v4, 24);
    if ( a3 )
      goto LABEL_3;
LABEL_18:
    v15 = (_QWORD **)v21;
    if ( v21 )
    {
      do
      {
        sub_19FB0(v15[3]);
        v16 = v15;
        v15 = (_QWORD **)v15[2];
        operator delete(v16, 0x28u);
      }
      while ( v15 );
    }
  }
  else if ( a3 )
  {
LABEL_3:
    v5 = 0;
    while ( 1 )
    {
      if ( !*((_QWORD *)v3 + 1) )
      {
        if ( !byte_7BCA0 )
          sub_2A3D0(1619, a2);
LABEL_29:
        BUG();
      }
      v6 = (int *)v21;
      v7 = *v3;
      if ( !v21 )
        break;
      while ( 1 )
      {
        v8 = v6[8];
        v9 = *((int **)v6 + 3);
        if ( v7 < v8 )
          v9 = *((int **)v6 + 2);
        LOBYTE(a2) = v7 < v8;
        if ( !v9 )
          break;
        v6 = v9;
      }
      if ( v7 < v8 )
      {
        if ( v22 == v6 )
          goto LABEL_15;
        goto LABEL_22;
      }
LABEL_12:
      if ( v7 <= v8 )
      {
        if ( !byte_7BCA0 )
          sub_2A3D0(1620, a2);
        goto LABEL_29;
      }
LABEL_15:
      *(_DWORD *)(operator new(0x28u) + 32) = v7;
      std::_Rb_tree_insert_and_rebalance();
      v10 = a1[10];
      ++v24;
      v11 = *v3;
      v12 = *((_QWORD *)v3 + 1);
      v13 = *((_QWORD *)v3 + 2);
      a2 = (unsigned __int8 *)a1[9];
      if ( a1[11] < (unsigned __int64)(v10 + 1) )
      {
        v18 = sub_29E60(a1 + 9, a2, v10 + 1, 24);
        a1[9] = v18;
        v10 = a1[10];
        a2 = (unsigned __int8 *)v18;
      }
      ++v5;
      v3 += 24;
      v14 = &a2[24 * v10];
      *v14 = v11;
      *((_QWORD *)v14 + 1) = v12;
      *((_QWORD *)v14 + 2) = v13;
      ++a1[10];
      if ( v5 >= a3 )
        goto LABEL_18;
    }
    if ( v22 == &v20 )
      goto LABEL_15;
LABEL_22:
    v8 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
    goto LABEL_12;
  }
  return v25 - __readfsqword(0x28u);
}


unsigned __int64 __fastcall sub_7C25A0(_QWORD *a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  int *v6; // r14
  int v7; // r13d
  int v8; // edx
  int *v9; // rax
  bool v10; // r15
  __int64 v11; // rax
  __int64 v12; // rdx
  char v13; // r13
  __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rsi
  __int64 v17; // rax
  _QWORD **v18; // rbx
  void *v19; // rdi
  __int64 v21; // rax
  int v23; // [rsp+28h] [rbp-70h] BYREF
  void *v24; // [rsp+30h] [rbp-68h]
  int *v25; // [rsp+38h] [rbp-60h]
  int *v26; // [rsp+40h] [rbp-58h]
  __int64 v27; // [rsp+48h] [rbp-50h]
  unsigned __int64 v28; // [rsp+58h] [rbp-40h]

  v4 = a1[10] + a3;
  v28 = __readfsqword(0x28u);
  v23 = 0;
  v25 = &v23;
  v26 = &v23;
  v24 = nullptr;
  v27 = 0;
  if ( a1[11] < v4 )
  {
    a1[9] = qvector_reserve(a1 + 9, a1[9], v4, 24);
    if ( a3 )
      goto LABEL_3;
LABEL_20:
    v18 = (_QWORD **)v24;
    if ( v24 )
    {
      do
      {
        sub_7C2370(v18[3]);
        v19 = v18;
        v18 = (_QWORD **)v18[2];
        operator delete(v19, 0x28u);
      }
      while ( v18 );
    }
  }
  else if ( a3 )
  {
LABEL_3:
    v5 = 0;
    while ( 1 )
    {
      if ( !*((_QWORD *)a2 + 1) )
      {
        if ( !under_debugger )
          interr(1619);
LABEL_31:
        BUG();
      }
      v6 = (int *)v24;
      v7 = *a2;
      if ( v24 )
        break;
      v6 = &v23;
      if ( v25 != &v23 )
        goto LABEL_24;
      v6 = &v23;
      v10 = 1;
LABEL_17:
      v11 = operator new(0x28u);
      *(_DWORD *)(v11 + 32) = v7;
      std::_Rb_tree_insert_and_rebalance(v10, v11, v6, &v23);
      v12 = a1[10];
      ++v27;
      v13 = *a2;
      v14 = *((_QWORD *)a2 + 1);
      v15 = *((_QWORD *)a2 + 2);
      v16 = a1[9];
      if ( a1[11] < (unsigned __int64)(v12 + 1) )
      {
        v21 = qvector_reserve(a1 + 9, v16, v12 + 1, 24);
        a1[9] = v21;
        v12 = a1[10];
        v16 = v21;
      }
      ++v5;
      a2 += 24;
      v17 = v16 + 24 * v12;
      *(_BYTE *)v17 = v13;
      *(_QWORD *)(v17 + 8) = v14;
      *(_QWORD *)(v17 + 16) = v15;
      ++a1[10];
      if ( v5 >= a3 )
        goto LABEL_20;
    }
    while ( 1 )
    {
      v8 = v6[8];
      v9 = *((int **)v6 + 3);
      if ( v7 < v8 )
        v9 = *((int **)v6 + 2);
      if ( !v9 )
        break;
      v6 = v9;
    }
    if ( v7 < v8 )
    {
      if ( v25 == v6 )
      {
LABEL_15:
        v10 = 1;
        if ( v6 != &v23 )
          v10 = v7 < v6[8];
        goto LABEL_17;
      }
LABEL_24:
      v8 = *(_DWORD *)(std::_Rb_tree_decrement(v6) + 32);
    }
    if ( v7 <= v8 )
    {
      if ( !under_debugger )
        interr(1620);
      goto LABEL_31;
    }
    goto LABEL_15;
  }
  return v28 - __readfsqword(0x28u);
}

unsigned __int64 __fastcall sub_79F140(_QWORD *a1, unsigned __int8 *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rbx
  int *v6; // r14
  int v7; // r13d
  int v8; // edx
  int *v9; // rax
  __int64 v10; // rdx
  char v11; // r13
  __int64 v12; // r15
  __int64 v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  _QWORD **v16; // rbx
  void *v17; // rdi
  __int64 v19; // rax
  int v21; // [rsp+28h] [rbp-70h] BYREF
  void *v22; // [rsp+30h] [rbp-68h]
  int *v23; // [rsp+38h] [rbp-60h]
  int *v24; // [rsp+40h] [rbp-58h]
  __int64 v25; // [rsp+48h] [rbp-50h]
  unsigned __int64 v26; // [rsp+58h] [rbp-40h]

  v4 = a1[10] + a3;
  v26 = __readfsqword(0x28u);
  v21 = 0;
  v23 = &v21;
  v24 = &v21;
  v22 = nullptr;
  v25 = 0;
  if ( a1[11] < v4 )
  {
    a1[9] = qvector_reserve(a1 + 9, a1[9], v4, 24);
    if ( a3 )
      goto LABEL_3;
LABEL_18:
    v16 = (_QWORD **)v22;
    if ( v22 )
    {
      do
      {
        sub_79EF20(v16[3]);
        v17 = v16;
        v16 = (_QWORD **)v16[2];
        operator delete(v17, 0x28u);
      }
      while ( v16 );
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
LABEL_29:
        BUG();
      }
      v6 = (int *)v22;
      v7 = *a2;
      if ( !v22 )
        break;
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
        if ( v23 == v6 )
          goto LABEL_15;
        goto LABEL_22;
      }
LABEL_12:
      if ( v7 <= v8 )
      {
        if ( !under_debugger )
          interr(1620);
        goto LABEL_29;
      }
LABEL_15:
      *(_DWORD *)(operator new(0x28u) + 32) = v7;
      std::_Rb_tree_insert_and_rebalance();
      v10 = a1[10];
      ++v25;
      v11 = *a2;
      v12 = *((_QWORD *)a2 + 1);
      v13 = *((_QWORD *)a2 + 2);
      v14 = a1[9];
      if ( a1[11] < (unsigned __int64)(v10 + 1) )
      {
        v19 = qvector_reserve(a1 + 9, v14, v10 + 1, 24);
        a1[9] = v19;
        v10 = a1[10];
        v14 = v19;
      }
      ++v5;
      a2 += 24;
      v15 = v14 + 24 * v10;
      *(_BYTE *)v15 = v11;
      *(_QWORD *)(v15 + 8) = v12;
      *(_QWORD *)(v15 + 16) = v13;
      ++a1[10];
      if ( v5 >= a3 )
        goto LABEL_18;
    }
    if ( v23 == &v21 )
      goto LABEL_15;
LABEL_22:
    v8 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
    goto LABEL_12;
  }
  return v26 - __readfsqword(0x28u);
}


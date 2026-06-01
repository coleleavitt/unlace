unsigned __int64 __fastcall sub_50B440(__int64 a1)
{
  unsigned __int64 v1; // rbp
  bool v2; // zf
  int *v4; // r14
  __int64 v5; // rax
  unsigned int v6; // r15d
  __int64 v7; // rax
  int *v8; // r12
  unsigned int v9; // esi
  _DWORD *v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // r8
  __int64 i; // r9
  _QWORD *v16; // rax
  unsigned int v17; // esi
  int *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  _QWORD **v21; // rbx
  void *v22; // rdi
  __int64 v24; // rax
  _BYTE v25[8]; // [rsp+10h] [rbp-78h] BYREF
  int v26; // [rsp+18h] [rbp-70h] BYREF
  void *v27; // [rsp+20h] [rbp-68h]
  int *v28; // [rsp+28h] [rbp-60h]
  int *v29; // [rsp+30h] [rbp-58h]
  __int64 v30; // [rsp+38h] [rbp-50h]
  unsigned __int64 v31; // [rsp+48h] [rbp-40h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 48) == 0;
  v31 = __readfsqword(0x28u);
  v26 = 0;
  v27 = nullptr;
  v4 = &v26;
  v28 = &v26;
  v29 = &v26;
  v30 = 0;
  if ( !v2 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8 * v1);
        if ( v5 )
          break;
LABEL_11:
        if ( ++v1 >= *(_QWORD *)(a1 + 48) )
          goto LABEL_12;
      }
      v6 = *(_DWORD *)(v5 + 56);
      v7 = operator new(0x30u);
      *(_DWORD *)(v7 + 32) = v6;
      v8 = (int *)v7;
      *(_QWORD *)(v7 + 40) = v1;
      if ( v4 == &v26 )
        break;
      v9 = v4[8];
      if ( v6 < v9 )
      {
        v10 = v4;
        if ( v28 == v4 )
          goto LABEL_9;
        v11 = std::_Rb_tree_decrement();
        v10 = (_DWORD *)v11;
        if ( *(_DWORD *)(v11 + 32) < v6 )
        {
          if ( *(_QWORD *)(v11 + 24) )
            v10 = v4;
          else
            v4 = nullptr;
          goto LABEL_9;
        }
        goto LABEL_38;
      }
      if ( v9 >= v6 )
        goto LABEL_33;
      if ( v29 != v4 )
      {
        v24 = std::_Rb_tree_increment();
        v10 = (_DWORD *)v24;
        if ( v6 >= *(_DWORD *)(v24 + 32) )
          goto LABEL_38;
        if ( *((_QWORD *)v4 + 3) )
        {
          v4 = (int *)v24;
          goto LABEL_9;
        }
      }
      if ( v4 )
      {
LABEL_10:
        v4 = v8;
        std::_Rb_tree_insert_and_rebalance();
        ++v30;
        goto LABEL_11;
      }
LABEL_33:
      if ( !v8 )
        goto LABEL_11;
      ++v1;
      operator delete(v8, 0x30u);
      if ( v1 >= *(_QWORD *)(a1 + 48) )
        goto LABEL_12;
    }
    if ( v30 )
    {
      v10 = v29;
      v4 = nullptr;
      if ( v29[8] < v6 )
      {
LABEL_9:
        if ( v10 )
          goto LABEL_10;
        goto LABEL_33;
      }
    }
LABEL_38:
    v4 = (int *)sub_507980((__int64)v25, v6);
    goto LABEL_9;
  }
LABEL_12:
  v12 = *(int *)(a1 + 8);
  if ( (_DWORD)v12 == -1 )
    v13 = 0;
  else
    v13 = *(_QWORD *)(switch_dbctx(v12) + 1592);
  sub_50AF90((_QWORD *)v13);
  if ( *(_DWORD *)(v13 + 64) == 3 )
  {
    if ( v30 )
    {
      if ( !under_debugger )
        interr(1887);
      BUG();
    }
  }
  else
  {
    v14 = *(_QWORD *)(v13 + 16);
    for ( i = v14 + (*(_QWORD *)(v13 + 24) << 6); v14 != i; v14 += 64 )
    {
      v16 = v27;
      v17 = *(_DWORD *)(v14 + 56);
      v18 = &v26;
      if ( v27 )
      {
        do
        {
          while ( 1 )
          {
            v19 = v16[2];
            v20 = v16[3];
            if ( *((_DWORD *)v16 + 8) < v17 )
              break;
            v18 = (int *)v16;
            v16 = (_QWORD *)v16[2];
            if ( !v19 )
              goto LABEL_21;
          }
          v16 = (_QWORD *)v16[3];
        }
        while ( v20 );
LABEL_21:
        if ( v18 != &v26 && v17 < v18[8] )
          v18 = &v26;
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL * *((_QWORD *)v18 + 5)) = v14;
    }
  }
  v21 = (_QWORD **)v27;
  if ( v27 )
  {
    do
    {
      sub_507F10(v21[3]);
      v22 = v21;
      v21 = (_QWORD **)v21[2];
      operator delete(v22, 0x30u);
    }
    while ( v21 );
  }
  return v31 - __readfsqword(0x28u);
}


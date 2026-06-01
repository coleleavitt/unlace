__int64 __fastcall sub_19CDE0(unsigned __int16 *a1)
{
  __int64 v1; // rdi
  _DWORD *v2; // r14
  int v3; // ebp
  unsigned __int16 v4; // r15
  __int64 v5; // rax
  int *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rax
  _DWORD *v10; // r13
  unsigned __int16 v11; // cx
  __int64 v12; // rdx
  __int64 v13; // rax
  unsigned __int16 v14; // cx
  int *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 result; // rax
  void *v19; // rdi
  __int64 v20; // rax
  bool v21; // zf
  __int64 v22; // rax

  v1 = qword_256F50;
  if ( !qword_256F68 )
  {
    v2 = &unk_1D8960;
    do
    {
      v3 = v2[1];
      v4 = *(_WORD *)v2;
      if ( v1 )
      {
        while ( 1 )
        {
          v5 = v1;
          v6 = &dword_256F48;
          do
          {
            while ( 1 )
            {
              v7 = *(_QWORD *)(v5 + 16);
              v8 = *(_QWORD *)(v5 + 24);
              if ( *(_WORD *)(v5 + 32) < v4 )
                break;
              v6 = (int *)v5;
              v5 = *(_QWORD *)(v5 + 16);
              if ( !v7 )
                goto LABEL_8;
            }
            v5 = *(_QWORD *)(v5 + 24);
          }
          while ( v8 );
LABEL_8:
          if ( v6 == &dword_256F48 )
            goto LABEL_31;
          if ( v4 < *((_WORD *)v6 + 16) )
            break;
          v2 += 2;
          v6[9] = v3;
          if ( v2 == (_DWORD *)&unk_1D8E20 )
            goto LABEL_20;
          v3 = v2[1];
          v4 = *(_WORD *)v2;
        }
        v9 = operator new(0x28u);
        *(_WORD *)(v9 + 32) = v4;
        v10 = (_DWORD *)v9;
        *(_DWORD *)(v9 + 36) = 0;
        v11 = *((_WORD *)v6 + 16);
        if ( v4 >= v11 )
        {
          if ( v11 >= v4 )
            goto LABEL_28;
          if ( (int *)qword_256F60 == v6 )
          {
            if ( v6 )
              goto LABEL_18;
LABEL_42:
            v19 = v10;
            v10 = nullptr;
            goto LABEL_29;
          }
          v22 = std::_Rb_tree_increment();
          v12 = v22;
          if ( v4 >= *(_WORD *)(v22 + 32) )
            goto LABEL_33;
          if ( *((_QWORD *)v6 + 3) )
          {
            v6 = (int *)v22;
            goto LABEL_17;
          }
          if ( !v6 )
            goto LABEL_42;
          goto LABEL_18;
        }
        v12 = (__int64)v6;
        if ( (int *)qword_256F58 == v6 )
          goto LABEL_17;
        v13 = std::_Rb_tree_decrement();
        v12 = v13;
        if ( *(_WORD *)(v13 + 32) >= v4 )
        {
LABEL_33:
          v6 = (int *)sub_199A00((__int64)&unk_256F40, v4);
          goto LABEL_17;
        }
        if ( *(_QWORD *)(v13 + 24) )
          v12 = (__int64)v6;
        else
          v6 = nullptr;
      }
      else
      {
LABEL_31:
        v20 = operator new(0x28u);
        v21 = qword_256F68 == 0;
        *(_WORD *)(v20 + 32) = v4;
        v10 = (_DWORD *)v20;
        *(_DWORD *)(v20 + 36) = 0;
        if ( v21 )
          goto LABEL_33;
        v12 = qword_256F60;
        v6 = nullptr;
        if ( *(_WORD *)(qword_256F60 + 32) >= v4 )
          goto LABEL_33;
      }
LABEL_17:
      if ( !v12 )
      {
LABEL_28:
        v19 = v10;
        v10 = v6;
LABEL_29:
        if ( v19 )
          operator delete(v19, 0x28u);
        goto LABEL_19;
      }
LABEL_18:
      std::_Rb_tree_insert_and_rebalance();
      ++qword_256F68;
LABEL_19:
      v2 += 2;
      v10[9] = v3;
      v1 = qword_256F50;
    }
    while ( &unk_1D8E20 != (_UNKNOWN *)v2 );
  }
LABEL_20:
  v14 = *a1;
  if ( !v1 )
    return 0;
  v15 = &dword_256F48;
  do
  {
    while ( 1 )
    {
      v16 = *(_QWORD *)(v1 + 16);
      v17 = *(_QWORD *)(v1 + 24);
      if ( *(_WORD *)(v1 + 32) < v14 )
        break;
      v15 = (int *)v1;
      v1 = *(_QWORD *)(v1 + 16);
      if ( !v16 )
        goto LABEL_25;
    }
    v1 = *(_QWORD *)(v1 + 24);
  }
  while ( v17 );
LABEL_25:
  result = 0;
  if ( v15 != &dword_256F48 && v14 >= *((_WORD *)v15 + 16) )
    return (unsigned int)v15[9];
  return result;
}


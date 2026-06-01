__int64 __fastcall sub_1B01420(_QWORD *a1, int *a2)
{
  _QWORD *v2; // r14
  _QWORD *v4; // rbx
  int v5; // r12d
  _QWORD *v6; // rax
  char v7; // dl
  int v8; // edi
  _BOOL4 v9; // r15d
  __int64 v10; // r12
  __int64 v12; // rax

  v2 = a1 + 1;
  v4 = (_QWORD *)a1[2];
  if ( !v4 )
  {
    v4 = a1 + 1;
    if ( v2 == (_QWORD *)a1[3] )
    {
      v9 = 1;
      goto LABEL_11;
    }
    v5 = *a2;
    goto LABEL_13;
  }
  v5 = *a2;
  while ( 1 )
  {
    v8 = *((_DWORD *)v4 + 8);
    if ( v5 >= v8 )
      break;
    v6 = (_QWORD *)v4[2];
    v7 = 1;
    if ( !v6 )
      goto LABEL_7;
LABEL_4:
    v4 = v6;
  }
  v6 = (_QWORD *)v4[3];
  v7 = 0;
  if ( v6 )
    goto LABEL_4;
LABEL_7:
  if ( v7 )
  {
    if ( v4 == (_QWORD *)a1[3] )
      goto LABEL_9;
LABEL_13:
    v12 = std::_Rb_tree_decrement(v4);
    if ( v5 > *(_DWORD *)(v12 + 32) )
      goto LABEL_9;
    return v12;
  }
  if ( v5 <= v8 )
    return (__int64)v4;
LABEL_9:
  v9 = 1;
  if ( v2 != v4 )
    v9 = v5 < *((_DWORD *)v4 + 8);
LABEL_11:
  v10 = operator new(0x28u);
  *(_DWORD *)(v10 + 32) = *a2;
  std::_Rb_tree_insert_and_rebalance(v9, v10, v4, v2);
  ++a1[5];
  return v10;
}

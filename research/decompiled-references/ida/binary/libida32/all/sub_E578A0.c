__int64 __fastcall sub_E578A0(_QWORD *a1, int *a2)
{
  _QWORD *v3; // rbx
  int v4; // ebp
  _QWORD *v5; // rax
  char v6; // si
  int v7; // edx
  _QWORD *v8; // rcx
  __int64 v10; // rbp
  char v11; // al
  __int64 v12; // rax

  v3 = (_QWORD *)a1[2];
  if ( !v3 )
  {
    v3 = a1 + 1;
    if ( (_QWORD *)a1[3] == a1 + 1 )
      goto LABEL_16;
    v4 = *a2;
    goto LABEL_18;
  }
  v4 = *a2;
  while ( 1 )
  {
    v7 = *((_DWORD *)v3 + 8);
    if ( v4 < v7 || v4 == v7 && *((_BYTE *)a2 + 4) < *((_BYTE *)v3 + 36) )
      break;
    v5 = (_QWORD *)v3[3];
    v6 = 0;
    if ( !v5 )
      goto LABEL_9;
LABEL_6:
    v3 = v5;
  }
  v5 = (_QWORD *)v3[2];
  v6 = 1;
  if ( v5 )
    goto LABEL_6;
LABEL_9:
  if ( v6 )
  {
    if ( (_QWORD *)a1[3] == v3 )
      goto LABEL_16;
LABEL_18:
    v12 = std::_Rb_tree_decrement();
    v7 = *(_DWORD *)(v12 + 32);
    if ( v4 <= v7 )
    {
      v8 = v3;
      v3 = (_QWORD *)v12;
      goto LABEL_11;
    }
    goto LABEL_16;
  }
  v8 = v3;
  if ( v4 > v7 )
    goto LABEL_16;
LABEL_11:
  if ( v4 != v7 || *((_BYTE *)v3 + 36) >= *((_BYTE *)a2 + 4) )
    return (__int64)v3;
  if ( !v8 )
    return 0;
LABEL_16:
  v10 = operator new(0x28u);
  v11 = *((_BYTE *)a2 + 4);
  *(_DWORD *)(v10 + 32) = *a2;
  *(_BYTE *)(v10 + 36) = v11;
  std::_Rb_tree_insert_and_rebalance();
  ++a1[5];
  return v10;
}


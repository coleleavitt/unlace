_QWORD *__fastcall sub_F5CCC0(__int64 a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rbx
  unsigned __int64 v3; // r8
  _QWORD *v4; // rax
  char v5; // r9
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  _QWORD *result; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = *(_QWORD **)(a1 + 16);
  if ( !v2 )
  {
    v2 = (_QWORD *)(a1 + 8);
    goto LABEL_21;
  }
  v3 = *a2;
  while ( 1 )
  {
    v6 = v2[4];
    if ( v6 == v3 )
      break;
    if ( v6 > v3 )
      goto LABEL_10;
LABEL_4:
    v4 = (_QWORD *)v2[3];
    v5 = 0;
    if ( !v4 )
      goto LABEL_11;
LABEL_5:
    v2 = v4;
  }
  v7 = v2[6];
  if ( (__int64)a2[2] >= v7 && (a2[2] != v7 || a2[3] >= v2[7]) )
    goto LABEL_4;
LABEL_10:
  v4 = (_QWORD *)v2[2];
  v5 = 1;
  if ( v4 )
    goto LABEL_5;
LABEL_11:
  if ( !v5 )
    goto LABEL_12;
LABEL_21:
  result = nullptr;
  if ( *(_QWORD **)(a1 + 24) != v2 )
  {
    v10 = std::_Rb_tree_decrement();
    v3 = *a2;
    v6 = *(_QWORD *)(v10 + 32);
    v2 = (_QWORD *)v10;
LABEL_12:
    if ( v3 == v6 )
    {
      v9 = a2[2];
      if ( v2[6] < v9 || v2[6] == v9 && v2[7] < a2[3] )
        return nullptr;
      return v2;
    }
    else
    {
      if ( v3 <= v6 )
        return v2;
      return nullptr;
    }
  }
  return result;
}


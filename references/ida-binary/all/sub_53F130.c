_QWORD *__fastcall sub_53F130(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rbp
  _QWORD *v9; // rax
  char v10; // dl
  __int64 v11; // r15
  __int64 v12; // r14
  __int64 v14; // rax

  v6 = *(_QWORD **)(a1 + 16);
  if ( !v6 )
  {
    v6 = (_QWORD *)(a1 + 8);
    goto LABEL_12;
  }
  v7 = *(_QWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a2 + 16);
  while ( 1 )
  {
    v11 = v6[5];
    v12 = v6[6];
    if ( (int)QT::QtPrivate::compareStrings(v8, v7, v12, v11, 1, a6) >= 0 )
      break;
    v9 = (_QWORD *)v6[2];
    v10 = 1;
    if ( !v9 )
      goto LABEL_7;
LABEL_4:
    v6 = v9;
  }
  v9 = (_QWORD *)v6[3];
  v10 = 0;
  if ( v9 )
    goto LABEL_4;
LABEL_7:
  if ( !v10 )
  {
LABEL_8:
    if ( (int)QT::QtPrivate::compareStrings(v12, v11, v8, v7, 1, a6) < 0 )
      return nullptr;
    return v6;
  }
LABEL_12:
  if ( *(_QWORD **)(a1 + 24) != v6 )
  {
    v14 = std::_Rb_tree_decrement(v6);
    v7 = *(_QWORD *)(a2 + 8);
    v8 = *(_QWORD *)(a2 + 16);
    v11 = *(_QWORD *)(v14 + 40);
    v12 = *(_QWORD *)(v14 + 48);
    v6 = (_QWORD *)v14;
    goto LABEL_8;
  }
  return nullptr;
}

_BYTE *__fastcall sub_3FB4D0(_QWORD *a1, _QWORD *a2, const QT::QPersistentModelIndex **a3)
{
  _BYTE *v5; // rax
  const QT::QPersistentModelIndex *v6; // r12
  _BYTE *v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rdi
  _QWORD *v11; // rcx
  _QWORD *v12; // rbp
  char v14; // al
  _QWORD *v15; // [rsp+0h] [rbp-38h]

  v5 = (_BYTE *)operator new(0x30u);
  v6 = (const QT::QPersistentModelIndex *)(v5 + 32);
  v7 = v5;
  QT::QPersistentModelIndex::QPersistentModelIndex((QT::QPersistentModelIndex *)(v5 + 32), *a3);
  v7[40] = 0;
  v8 = sub_3FB3A0(a1, a2, v6);
  if ( v9 )
  {
    v10 = 1;
    v11 = a1 + 1;
    if ( !v8 && v9 != v11 )
    {
      v15 = v9;
      v14 = QT::compareThreeWay(v6, (const QT::QPersistentModelIndex *)(v9 + 4));
      v11 = a1 + 1;
      v9 = v15;
      v10 = (unsigned int)v14 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v10, v7, v9, v11);
    ++a1[5];
    return v7;
  }
  v12 = v8;
  if ( !v7 )
    return v12;
  QT::QPersistentModelIndex::~QPersistentModelIndex(v6);
  operator delete(v7, 0x30u);
  return v12;
}

unsigned __int64 __fastcall sub_3F3BA0(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rsi
  _QWORD *v8; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  _QWORD *v11; // rdx
  _BOOL4 v12; // r9d
  __int64 v13; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v14; // [rsp+10h] [rbp-38h]
  __int64 v15; // [rsp+18h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  if ( a2 != -1 )
  {
    QT::QPersistentModelIndex::QPersistentModelIndex(&v13);
    v4 = v13;
    v14 = a2;
    v13 = 0;
    v15 = v4;
    v5 = operator new(0x30u);
    v6 = v14;
    v7 = v5;
    v8 = (_QWORD *)a1[4];
    *(_QWORD *)(v5 + 32) = v14;
    v9 = v15;
    v15 = 0;
    *(_QWORD *)(v7 + 40) = v9;
    if ( v8 )
    {
      while ( 1 )
      {
        v10 = v8[4];
        v11 = (_QWORD *)v8[3];
        if ( v6 < v10 )
          v11 = (_QWORD *)v8[2];
        if ( !v11 )
          break;
        v8 = v11;
      }
      v12 = 1;
      if ( a1 + 3 != v8 )
        v12 = v6 < v10;
    }
    else
    {
      v8 = a1 + 3;
      v12 = 1;
    }
    std::_Rb_tree_insert_and_rebalance(v12, v7, v8, a1 + 3);
    ++a1[7];
    QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)&v15);
    QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)&v13);
  }
  return v16 - __readfsqword(0x28u);
}

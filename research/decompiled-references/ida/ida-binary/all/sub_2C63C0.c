__int64 __fastcall sub_2C63C0(_QWORD *a1, __int64 a2, __int64 a3, _DWORD **a4)
{
  __int64 v6; // rbx
  _DWORD *v7; // rbp
  int v8; // r15d
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  _BOOL8 v12; // rdi
  __int64 v13; // rax
  int v14; // ecx
  int v16; // [rsp+Ch] [rbp-3Ch]

  v6 = a2;
  v7 = (_DWORD *)operator new(0x40u);
  v7[8] = **a4;
  QT::QImage::QImage((QT::QImage *)(v7 + 10));
  v8 = v7[8];
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] )
    {
      v10 = a1[4];
      v6 = 0;
      if ( v8 > *(_DWORD *)(v10 + 32) )
        goto LABEL_6;
    }
LABEL_5:
    v6 = sub_2B2580((__int64)a1, v8);
    goto LABEL_6;
  }
  v9 = *(_DWORD *)(a2 + 32);
  if ( v8 < v9 )
  {
    v10 = a1[3];
    if ( a2 == v10 )
      goto LABEL_6;
    v11 = std::_Rb_tree_decrement(a2);
    v10 = v11;
    if ( v8 <= *(_DWORD *)(v11 + 32) )
      goto LABEL_5;
    if ( *(_QWORD *)(v11 + 24) )
    {
      v10 = a2;
      goto LABEL_6;
    }
    goto LABEL_27;
  }
  v16 = *(_DWORD *)(a2 + 32);
  if ( v8 <= v9 )
    goto LABEL_17;
  v10 = a1[4];
  if ( a2 == v10 )
  {
LABEL_27:
    v6 = 0;
    goto LABEL_6;
  }
  v13 = std::_Rb_tree_increment(a2);
  v10 = v13;
  if ( v8 >= *(_DWORD *)(v13 + 32) )
    goto LABEL_5;
  v14 = v16;
  if ( !*(_QWORD *)(a2 + 24) )
  {
    v10 = a2;
    if ( a2 )
      goto LABEL_26;
    goto LABEL_17;
  }
  v6 = v13;
LABEL_6:
  if ( v10 )
  {
    if ( v6 || a1 + 1 == (_QWORD *)v10 )
    {
      v12 = 1;
LABEL_10:
      v6 = (__int64)v7;
      std::_Rb_tree_insert_and_rebalance(v12, v7, v10, a1 + 1);
      ++a1[5];
      return v6;
    }
    v14 = *(_DWORD *)(v10 + 32);
LABEL_26:
    v12 = v8 < v14;
    goto LABEL_10;
  }
LABEL_17:
  if ( v7 )
  {
    QT::QImage::~QImage((QT::QImage *)(v7 + 10));
    operator delete(v7, 0x40u);
  }
  return v6;
}

QT::QGridLayout *__fastcall sub_4EE5F0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned __int64 v4; // rbx
  QT::QGridLayout *v5; // r14
  unsigned __int64 v6; // r13
  const QT::QObject *v7; // rbx
  __int64 v8; // rax
  QT::QWidget *v9; // r15
  QT::QLabel *v10; // rax
  _QWORD *v12; // rbx
  _QWORD *v13; // rbp
  QT::QWidget *v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r15
  unsigned int *v17; // rbx
  __int64 v18; // rsi
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  int v20; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v21; // [rsp+18h] [rbp-40h]

  v2 = *(_DWORD *)(a2 + 32);
  v21 = __readfsqword(0x28u);
  if ( v2 == 3 )
  {
    v15 = *(_QWORD *)(a2 + 64);
    v5 = (QT::QGridLayout *)operator new(0x20u);
    QT::QGridLayout::QGridLayout(v5, nullptr);
    if ( (unsigned __int8)sub_4EE540(&v20, *(_DWORD *)(a2 + 36), *(_DWORD *)(a2 + 40)) )
      QT::QGridLayout::setHorizontalSpacing(v5, v20);
    if ( (unsigned __int8)sub_4EE540(&v20, *(_DWORD *)(a2 + 44), *(_DWORD *)(a2 + 48)) )
      QT::QGridLayout::setVerticalSpacing(v5, v20);
    if ( v15 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = (unsigned int *)(*(_QWORD *)(a2 + 56) + 16 * v16);
        v18 = sub_4EE930(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v16));
        if ( !v18 )
          break;
        ++v16;
        QT::QGridLayout::addWidget(v5, v18, *v17, v17[1], v17[2], v17[3], 0);
        if ( v15 == v16 )
          return v5;
      }
      return nullptr;
    }
    return v5;
  }
  if ( v2 <= 3 )
  {
    if ( v2 - 1 <= 1 )
    {
      if ( v2 == 1 )
      {
        v5 = (QT::QGridLayout *)operator new(0x20u);
        QT::QHBoxLayout::QHBoxLayout(v5);
      }
      else
      {
        v5 = (QT::QGridLayout *)operator new(0x20u);
        QT::QVBoxLayout::QVBoxLayout(v5);
      }
      v12 = *(_QWORD **)(a2 + 8);
      v13 = &v12[*(_QWORD *)(a2 + 16)];
      if ( v12 != v13 )
      {
        while ( 1 )
        {
          v14 = (QT::QWidget *)sub_4EE930(a1, *v12);
          if ( !v14 )
            break;
          ++v12;
          QT::QLayout::addWidget(v5, v14);
          if ( v13 == v12 )
            return v5;
        }
        return nullptr;
      }
      return v5;
    }
LABEL_19:
    sub_169A50(a1, (__int64)"Unsupported form layout type: %d\n", v2);
    return nullptr;
  }
  if ( v2 != 4 )
    goto LABEL_19;
  v4 = *(_QWORD *)(a2 + 16);
  v19 = v4;
  v5 = (QT::QGridLayout *)operator new(0x20u);
  QT::QFormLayout::QFormLayout(v5, nullptr);
  if ( v4 )
  {
    v6 = 0;
    while ( 1 )
    {
      v7 = (const QT::QObject *)sub_4EE930(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v6));
      v8 = sub_4EE930(a1, *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v6 + 8));
      v9 = (QT::QWidget *)v8;
      if ( !v7 || !v8 )
        break;
      v10 = (QT::QLabel *)QT::QMetaObject::cast((QT::QMetaObject *)&QT::QLabel::staticMetaObject, v7);
      if ( v10 )
        QT::QLabel::setBuddy(v10, v9);
      v6 += 2LL;
      QT::QFormLayout::addRow(v5, v7, v9);
      if ( v6 >= v19 )
        return v5;
    }
    return nullptr;
  }
  return v5;
}

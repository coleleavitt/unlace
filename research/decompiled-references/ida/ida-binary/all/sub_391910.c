__int64 __fastcall sub_391910(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx
  QT::QTreeWidgetItem *v5; // r14
  __int64 v6; // rax
  __int64 v7; // rbx
  _DWORD *v8; // r15
  void (__fastcall *v9)(__int64, _QWORD, __int64, _BYTE *); // rbx
  void (__fastcall *v10)(__int64, _QWORD, __int64, _BYTE *); // rbx
  void (__fastcall *v11)(_DWORD *, _QWORD, __int64, _BYTE *); // [rsp+0h] [rbp-88h]
  __int64 v12; // [rsp+8h] [rbp-80h]
  _BYTE v13[8]; // [rsp+18h] [rbp-70h] BYREF
  _BYTE v14[40]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  if ( !a2 )
    return 0;
  v2 = *(_DWORD *)(a2 + 92);
  if ( v2 == 2 )
  {
    v5 = *(QT::QTreeWidgetItem **)(a2 + 56);
    v6 = *((_QWORD *)v5 + 10);
    if ( (int)v6 > 0 )
    {
      v7 = 0;
      v12 = (unsigned int)(v6 - 1);
      while ( 1 )
      {
        v8 = nullptr;
        if ( v6 > v7 )
        {
          QT::QTreeWidgetItem::executePendingSort(v5);
          v8 = *(_DWORD **)(*((_QWORD *)v5 + 9) + 8 * v7);
        }
        v8[23] = 2;
        sub_390E80((QT::QIcon *)v13, 2);
        v11 = *(void (__fastcall **)(_DWORD *, _QWORD, __int64, _BYTE *))(*(_QWORD *)v8 + 32LL);
        QT::QIcon::operator QT::QVariant(v14, v13);
        v11(v8, 0, 1, v14);
        QT::QVariant::~QVariant((QT::QVariant *)v14);
        QT::QIcon::~QIcon((QT::QIcon *)v13);
        if ( v7 == v12 )
          break;
        v6 = *((_QWORD *)v5 + 10);
        ++v7;
      }
    }
    *(_DWORD *)(a2 + 92) = 1;
    sub_390E80((QT::QIcon *)v13, 1);
    v9 = *(void (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)a2 + 32LL);
    QT::QIcon::operator QT::QVariant(v14, v13);
    v9(a2, 0, 1, v14);
    goto LABEL_12;
  }
  v3 = 0;
  if ( v2 == 1 )
  {
    *(_DWORD *)(a2 + 92) = 2;
    sub_390E80((QT::QIcon *)v13, 2);
    v10 = *(void (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)a2 + 32LL);
    QT::QIcon::operator QT::QVariant(v14, v13);
    v10(a2, 0, 1, v14);
LABEL_12:
    QT::QVariant::~QVariant((QT::QVariant *)v14);
    QT::QIcon::~QIcon((QT::QIcon *)v13);
    return 1;
  }
  return v3;
}

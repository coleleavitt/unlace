void __fastcall sub_4F2C60(QT::QObject *a1, QT::QColor *a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // [rsp+8h] [rbp-20h]

  v3 = QT::QObject::sender(a1);
  if ( !v3
    || (v4 = *(_QWORD *)(v3 + 8), (*(_BYTE *)(v4 + 48) & 1) == 0)
    || (v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_897980, *(const QT::QObject **)(v4 + 16))) == 0 )
  {
    v5 = 0;
LABEL_4:
    sub_4F2BB0((__int64)a1, v5);
    return;
  }
  v9 = v6;
  v5 = v6;
  v7 = sub_4F23C0((__int64)a1, v6, 12, 0);
  if ( !v7 )
    goto LABEL_4;
  v8 = -1;
  if ( *(_DWORD *)a2 )
  {
    v5 = v9;
    v8 = __ROR4__(_byteswap_ulong(QT::QColor::rgb(a2)), 8) & 0xFFFFFF;
  }
  **(_DWORD **)(v7 + 104) = v8;
  sub_4F2BB0((__int64)a1, v5);
}

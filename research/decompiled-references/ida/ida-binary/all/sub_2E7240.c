unsigned __int64 __fastcall sub_2E7240(QT::QAbstractItemModel *this, __int64 a2)
{
  int v2; // edx
  QT::QAbstractItemView *v4; // rax
  QT::QAbstractItemView *v5; // rbp
  unsigned int v6; // r13d
  int v7; // r12d
  int v8; // ecx
  int v9; // r12d
  int v10; // eax
  _QWORD v11[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-30h]

  v2 = *(_DWORD *)a2;
  v12 = __readfsqword(0x28u);
  if ( v2 >= 0 && *(int *)(a2 + 4) >= 0 && *(_QWORD *)(a2 + 16) )
    return v12 - __readfsqword(0x28u);
  if ( *((_DWORD *)this + 18) != 2 )
    return v12 - __readfsqword(0x28u);
  v4 = (QT::QAbstractItemView *)QT::QMetaObject::cast(
                                  (QT::QMetaObject *)&off_889E80,
                                  *(const QT::QObject **)(*((_QWORD *)this + 1) + 16LL));
  v5 = v4;
  if ( !v4 )
    return v12 - __readfsqword(0x28u);
  v6 = *((_DWORD *)this + 16);
  v7 = *((_DWORD *)this + 6);
  v8 = (*(__int64 (__fastcall **)(QT::QAbstractItemView *, _QWORD))(*(_QWORD *)v4 + 504LL))(v4, 0);
  v9 = v7 - v6;
  if ( v8 < 16 )
    v8 = 16;
  v10 = (*(_DWORD *)(*((_QWORD *)v5 + 4) + 32LL) + 1 - *(_DWORD *)(*((_QWORD *)v5 + 4) + 24LL)) / v8;
  if ( !v6 && v10 < *((_DWORD *)this + 17) + 1 )
    v10 = *((_DWORD *)this + 17) + 1;
  if ( v9 > v10 )
    v9 = v10;
  if ( v9 <= 0 )
    return v12 - __readfsqword(0x28u);
  v11[0] = -1;
  v11[1] = 0;
  v11[2] = 0;
  ((void (__fastcall *)(QT::QAbstractItemModel *, _QWORD *, _QWORD, _QWORD))QT::QAbstractItemModel::beginInsertRows)(
    this,
    v11,
    v6,
    v9 + v6 - 1);
  *((_DWORD *)this + 16) += v9;
  QT::QAbstractItemModel::endInsertRows(this);
  if ( v6 )
    return v12 - __readfsqword(0x28u);
  else
    return sub_2E6340((__int64 *)this, v5);
}

__int64 __fastcall sub_42C3D0(QT::QAbstractItemView *this, __int64 a2, unsigned int *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned int v9; // eax
  _QWORD *v10; // rdx

  if ( a2 == 65 )
  {
    v6 = QT::QAbstractItemView::model(this);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 440LL))(v6);
    v8 = v7;
    if ( v7 && *(_BYTE *)(v7 + 64) )
    {
      v9 = *a3;
      if ( *a3 > 0x2F )
      {
        v10 = *((_QWORD **)a3 + 1);
        *((_QWORD *)a3 + 1) = v10 + 1;
      }
      else
      {
        v10 = (_QWORD *)(*((_QWORD *)a3 + 2) + v9);
        *a3 = v9 + 8;
      }
      sub_490580(v8, *v10);
    }
    goto LABEL_3;
  }
  if ( (unsigned __int64)(a2 - 66) <= 5 )
  {
LABEL_3:
    QT::QAbstractItemView::model(this);
    sub_48F2A0(this);
  }
  return 0;
}

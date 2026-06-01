__int64 __fastcall sub_48F2A0(QT::QAbstractItemView *this, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v5; // rdx

  result = QT::QAbstractItemView::model(this);
  v5 = *(_QWORD *)(result + 216);
  if ( v5 )
  {
    if ( a2 != v5 )
      return result;
LABEL_5:
    if ( a3 <= 0x46 )
    {
      if ( a3 <= 0x40 )
        return (*(__int64 (__fastcall **)(QT::QAbstractItemView *, _QWORD))(*(_QWORD *)this + 832LL))(this, a3);
    }
    else if ( a3 - 90 > 1 )
    {
      return (*(__int64 (__fastcall **)(QT::QAbstractItemView *, _QWORD))(*(_QWORD *)this + 832LL))(this, a3);
    }
    *(_BYTE *)(QT::QAbstractItemView::model(this) + 200LL) = 1;
    return (*(__int64 (__fastcall **)(QT::QAbstractItemView *, _QWORD))(*(_QWORD *)this + 832LL))(this, a3);
  }
  if ( a2 == *(_QWORD *)(result + 208) )
    goto LABEL_5;
  return result;
}

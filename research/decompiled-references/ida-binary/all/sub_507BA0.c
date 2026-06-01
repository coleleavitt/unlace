__int64 __fastcall sub_507BA0(QT::QWidget *this, QT::QCloseEvent *a2)
{
  __int64 (__fastcall *v2)(__int64, char *); // rax
  __int64 result; // rax
  __int64 v4; // rdx
  void (*v5)(void); // rdx

  v2 = *((__int64 (__fastcall **)(__int64, char *))this + 20);
  *((_BYTE *)this + 128) = 1;
  if ( !v2 || *((_DWORD *)this + 44) != 1 )
  {
    *((_BYTE *)this + 128) = 0;
    return QT::QWidget::closeEvent(this, a2);
  }
  v4 = *(_QWORD *)this;
  *((_DWORD *)this + 44) = 2;
  v5 = *(void (**)(void))(v4 + 424);
  if ( v5 == nullsub_293 )
  {
    result = v2(4294967293LL, (char *)this + 88);
  }
  else
  {
    v5();
    result = (*((__int64 (__fastcall **)(__int64, char *))this + 20))(4294967293LL, (char *)this + 88);
  }
  *((_BYTE *)this + 128) = 0;
  *((_DWORD *)this + 44) = 1;
  if ( (int)result > 0 )
    return QT::QWidget::closeEvent(this, a2);
  *((_BYTE *)a2 + 12) = 0;
  return result;
}

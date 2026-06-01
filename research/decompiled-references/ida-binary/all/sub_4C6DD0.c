__int64 __fastcall sub_4C6DD0(QT::QCoreApplication *this, __int64 a2)
{
  __int64 v2; // rax
  _BYTE *v4; // rdx
  __int64 v5; // r12
  int v6; // r13d
  __int64 v7; // rax

  v2 = *((_QWORD *)this + 5);
  if ( *(_BYTE *)(v2 + 80) )
  {
    *(_BYTE *)(v2 + 80) = 0;
    v4 = *((_BYTE **)this + 5);
    if ( *(char *)(*((_QWORD *)this + 4) + 9LL) < 0 )
    {
      v5 = *(_QWORD *)v4;
      v6 = 0;
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 440LL))(*(_QWORD *)v4);
      while ( v6 < (*(int (__fastcall **)(__int64))(*(_QWORD *)v5 + 464LL))(v5) )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 456LL))(v5, (unsigned int)v6);
        if ( *(_DWORD *)(v7 + 40) )
          sub_4C54D0(v7);
        ++v6;
      }
    }
    else
    {
      v4[80] = 1;
    }
    sub_4C6D70(this);
  }
  return QT::QWidget::showEvent(this, a2);
}

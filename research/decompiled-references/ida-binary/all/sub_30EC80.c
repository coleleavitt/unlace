__int64 __fastcall ConsoleWidget__::vfunc_5(QT::QWidget *this, QT::QEvent *a2)
{
  __int64 v4; // r13
  __int64 *v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rsi
  void (__fastcall *v10)(__int64, __int64); // [rsp+8h] [rbp-40h]

  if ( *((_WORD *)a2 + 4) == 2005 )
  {
    v4 = *((_QWORD *)this + 6);
    if ( v4 )
    {
      v5 = *((__int64 **)a2 + 2);
      v6 = v5[1];
      v10 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 104LL);
      if ( !v6 )
        goto LABEL_12;
      v7 = *v5;
      v8 = 0;
      while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "cli") )
      {
        ++v8;
        v7 += 40;
        if ( v6 == v8 )
          goto LABEL_12;
      }
      if ( *(_DWORD *)(v7 + 24) == 5 )
        v9 = *(unsigned __int8 *)(v7 + 32);
      else
LABEL_12:
        v9 = 1;
      v10(v4, v9);
    }
  }
  return QT::QWidget::event(this, a2);
}

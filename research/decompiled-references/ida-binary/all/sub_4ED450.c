QT::QGroupBox *__fastcall sub_4ED450(__int64 a1, __int64 a2, char a3)
{
  QT::QGroupBox *v3; // rbx
  unsigned __int64 v5; // r13
  const char *v6; // r12
  QT::QGroupBox *v7; // rax
  __int64 v8; // rdx
  size_t v9; // rax
  void *ptr[9]; // [rsp+0h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( a3 )
  {
    v3 = (QT::QGroupBox *)operator new(0x28u);
    QT::QWidget::QWidget(v3, 0, 0);
    *(_QWORD *)v3 = &forms_ui::form_widget2_t___vtable;
    *((_QWORD *)v3 + 2) = forms_ui::form_widget2_t___vtable_at__16;
  }
  else if ( *(_DWORD *)(a2 + 112) == 1 )
  {
    LOBYTE(v5) = a3;
    v6 = &s1;
    v7 = (QT::QGroupBox *)operator new(0x28u);
    v8 = *(_QWORD *)(a2 + 128);
    v3 = v7;
    v9 = 0;
    if ( v8 )
    {
      v9 = v8 - 1;
      v6 = *(const char **)(a2 + 120);
      v5 = (unsigned __int64)(v8 - 1) >> 63;
    }
    if ( !v6 || (_BYTE)v5 )
    {
      v9 = 0;
      if ( v6 )
        v9 = strlen(v6);
    }
    QT::QString::fromUtf8(ptr, v9, v6);
    QT::QGroupBox::QGroupBox(v3, (const QT::QString *)ptr, nullptr);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
  }
  else
  {
    v3 = (QT::QGroupBox *)operator new(0x28u);
    QT::QWidget::QWidget(v3, 0, 0);
  }
  return v3;
}

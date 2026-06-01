QT::QAbstractButton *__fastcall sub_4ED900(__int64 a1, __int64 a2, __int64 a3, __int64 a4, double a5)
{
  bool v5; // zf
  __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rbp
  __int64 v10; // rax
  size_t v11; // rdx
  size_t v12; // rax
  const char *v13; // r12
  QT::QAbstractButton *v14; // rbp
  __int64 v16; // rdi
  QT::QDialogButtonBox *v17; // r12
  void *ptr[7]; // [rsp+0h] [rbp-38h] BYREF

  v5 = *(_QWORD *)(a1 + 32) == 0;
  ptr[3] = (void *)__readfsqword(0x28u);
  v6 = a2;
  if ( v5 )
  {
    v17 = (QT::QDialogButtonBox *)operator new(0x28u);
    QT::QDialogButtonBox::QDialogButtonBox(v17, 1, 0);
    *(_QWORD *)(a1 + 32) = v17;
    a2 = 1;
    QT::QDialogButtonBox::setCenterButtons(v17, 1);
  }
  v7 = *(int *)(v6 + 132);
  if ( !(_DWORD)v7 )
  {
    v8 = *(_DWORD *)(v6 + 136);
    if ( !v8 )
      return nullptr;
    v9 = *(_QWORD *)(a1 + 32);
    if ( v8 == 1 )
    {
      v10 = *(_QWORD *)(v6 + 112);
      if ( v10 )
      {
        v12 = v10 - 1;
        v13 = *(const char **)(v6 + 104);
        v11 = v12 >> 63;
      }
      else
      {
        LOBYTE(v11) = 0;
        v12 = 0;
        v13 = &s1;
      }
      if ( !v13 || (_BYTE)v11 )
      {
        v12 = 0;
        if ( v13 )
          v12 = strlen(v13);
      }
      QT::QString::fromUtf8(ptr, v12, v13);
      v14 = (QT::QAbstractButton *)QT::QDialogButtonBox::addButton(v9, ptr, 3);
      goto LABEL_11;
    }
    if ( under_debugger )
LABEL_31:
      BUG();
    interr(70208, a2, a3, a4, a5);
LABEL_29:
    if ( !under_debugger )
      interr(70207, a2, a3, a4, a5);
    goto LABEL_31;
  }
  v16 = *(_QWORD *)(a1 + 32);
  if ( (unsigned int)v7 > 5 )
    goto LABEL_29;
  v14 = (QT::QAbstractButton *)QT::QDialogButtonBox::addButton(v16, dword_6CC290[v7]);
  if ( (unsigned int)(*(_DWORD *)(v6 + 132) - 1) > 1 )
    goto LABEL_18;
  QT::QString::fromUtf8(ptr, 3, "O&K");
  QT::QAbstractButton::setText(v14, (const QT::QString *)ptr);
LABEL_11:
  if ( !ptr[0] || _InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
LABEL_18:
    if ( !v14 )
      return nullptr;
    goto LABEL_19;
  }
  free(ptr[0]);
  if ( !v14 )
    return nullptr;
LABEL_19:
  if ( *(_QWORD *)(v6 + 112) > 1u )
  {
    sub_518A60((QT::QString *)ptr);
    QT::QAbstractButton::setText(v14, (const QT::QString *)ptr);
    if ( ptr[0] )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
  }
  return v14;
}

unsigned __int64 __fastcall sub_186C80(__int64 a1, unsigned int a2)
{
  QT::QLineEdit *v3; // r12
  __int64 v4; // rax
  const char *v5; // rdx
  __int64 v6; // rax
  QT::QLineEdit *v7; // r12
  unsigned __int64 v8; // rdx
  size_t v9; // rax
  const char *v10; // r13
  _BOOL8 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rbp
  __int64 v17; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi
  bool v20; // [rsp+Fh] [rbp-89h] BYREF
  __int64 v21; // [rsp+10h] [rbp-88h] BYREF
  __int128 v22; // [rsp+18h] [rbp-80h]
  const char *v23; // [rsp+30h] [rbp-68h] BYREF
  __int128 v24; // [rsp+38h] [rbp-60h]
  void *ptr[3]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v26; // [rsp+68h] [rbp-30h]

  v26 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 56) & 8) != 0 )
  {
    sub_1864C0(a1, 1);
    *(_QWORD *)(a1 + 104) = -1;
    v3 = *(QT::QLineEdit **)(a1 + 136);
    if ( a2 == -1 )
    {
      QT::QString::fromUtf8(ptr, 0, &unk_5C2F25);
      QT::QLineEdit::setText(v3, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 136), 0);
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 152), 0);
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 160), 0);
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 168), 0);
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 176), 0);
      *(_QWORD *)(a1 + 96) = 0;
    }
    else
    {
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 136), 1);
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 152), 1);
      QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 160), 0);
      if ( a2 < *(_DWORD *)(a1 + 80) )
      {
        v4 = *(_QWORD *)(a1 + 72);
        *(_QWORD *)(a1 + 104) = (int)a2;
        v5 = &s1;
        v6 = *(_QWORD *)(v4 + 8LL * (int)a2);
        v22 = 0;
        v21 = 0;
        *(_QWORD *)(a1 + 96) = v6;
        if ( *(_QWORD *)(v6 + 40) )
          v5 = *(const char **)(v6 + 32);
        sub_4B1970(&v21, &v20, v5);
        v23 = nullptr;
        v24 = 0;
        sub_532CD0(&v23, &v21, 0);
        v7 = *(QT::QLineEdit **)(a1 + 136);
        if ( (_QWORD)v24 )
        {
          v9 = v24 - 1;
          v10 = v23;
          v8 = (unsigned __int64)(v24 - 1) >> 63;
        }
        else
        {
          LOBYTE(v8) = 0;
          v9 = 0;
          v10 = &s1;
        }
        if ( !v10 || (_BYTE)v8 )
        {
          v9 = 0;
          if ( v10 )
            v9 = strlen(v10);
        }
        QT::QString::fromUtf8(ptr, v9, v10);
        QT::QLineEdit::setText(v7, (const QT::QString *)ptr);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 168), v20);
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 16LL) > 1u;
        QT::QWidget::setEnabled(*(QT::QWidget **)(a1 + 176), v11);
        if ( v23 )
        {
          *(_QWORD *)&v24 = 0;
          qfree(v23, v11, v12, v13, v14);
        }
        v15 = v21;
        if ( v21 )
        {
          v16 = v22;
          if ( (_QWORD)v22 )
          {
            v17 = 0;
            do
            {
              v18 = (__int64 *)(v15 + 24 * v17);
              v19 = *v18;
              if ( *v18 )
              {
                v18[1] = 0;
                qfree(v19, v11, v15, v13, v14);
                v15 = v21;
              }
              ++v17;
            }
            while ( v16 != v17 );
          }
          *(_QWORD *)&v22 = 0;
          qfree(v15, v11, v15, v13, v14);
        }
      }
    }
  }
  return v26 - __readfsqword(0x28u);
}

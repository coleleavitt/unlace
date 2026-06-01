unsigned __int64 __fastcall sub_364F20(__int64 a1)
{
  __int64 v1; // rax
  QT::QAbstractButton *v3; // rbp
  _BOOL8 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rbp
  bool v9; // r15
  QT::QAbstractButton *v10; // r13
  bool v11; // dl
  __int64 v12; // rax
  size_t v13; // rdx
  size_t v14; // rax
  const char *v15; // r12
  QT::QLineEdit *v16; // r13
  unsigned __int64 v17; // r13
  QT::QLineEdit *v18; // rbx
  size_t v19; // rax
  char *v20; // rbp
  unsigned __int64 v21; // rdx
  double v22; // xmm0_8
  __int64 v24; // rax
  int v25; // eax
  __int16 v26; // r14
  const void *v27; // rbp
  bool v28; // [rsp+Ch] [rbp-7Ch]
  char *s; // [rsp+10h] [rbp-78h] BYREF
  __int128 v30; // [rsp+18h] [rbp-70h]
  void *ptr[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 56);
  v32 = __readfsqword(0x28u);
  v3 = *(QT::QAbstractButton **)(v1 + 1784);
  v4 = (unsigned int)reg_int_op("AutoUseLumina", 0, 0, 0) != 0;
  QT::QAbstractButton::setChecked(v3, v4);
  v6 = *(_QWORD *)(get_current_config(v3, v4, v5) + 632);
  v8 = *(_QWORD *)(get_current_config(v3, v4, v7) + 640);
  sub_364D50(
    a1,
    v6,
    *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1632LL),
    *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1648LL));
  sub_364D50(
    a1,
    v8,
    *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1672LL),
    *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1688LL));
  if ( *(_QWORD *)(v6 + 16) && !strcmp(*(const char **)(v6 + 8), "lumina.hex-rays.com") )
  {
    v9 = *(_WORD *)(v6 + 32) == 443;
    v10 = *(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1656LL);
    v11 = v9;
    if ( !*(_QWORD *)(v8 + 16) )
      goto LABEL_4;
  }
  else
  {
    v24 = *(_QWORD *)(a1 + 56);
    v10 = *(QT::QAbstractButton **)(v24 + 1656);
    if ( !*(_QWORD *)(v8 + 16) )
    {
      QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(v24 + 1656), 0);
      QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1696LL), 0);
      goto LABEL_33;
    }
    v11 = 0;
    v9 = 0;
  }
  v28 = v11;
  v25 = strcmp(*(const char **)(v8 + 8), "lumina.hex-rays.com");
  v11 = v28;
  if ( v25 )
  {
LABEL_4:
    QT::QAbstractButton::setChecked(v10, v11);
    QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1696LL), 0);
    if ( v9 )
      goto LABEL_5;
LABEL_33:
    if ( *(_QWORD *)(v6 + 16) > 1u )
    {
      v8 = v6;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v26 = *(_WORD *)(v8 + 32);
  QT::QAbstractButton::setChecked(v10, v28);
  QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1696LL), v26 == 443);
  if ( !v9 && *(_QWORD *)(v6 + 16) > 1u )
  {
    v8 = v6;
    goto LABEL_6;
  }
  if ( v26 == 443 )
    goto LABEL_31;
LABEL_5:
  if ( *(_QWORD *)(v8 + 16) <= 1u )
  {
LABEL_31:
    QT::QLineEdit::clear(*(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1728LL));
    return QT::QLineEdit::clear(*(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1744LL));
  }
LABEL_6:
  if ( !v8 )
    goto LABEL_31;
  v12 = *(_QWORD *)(v8 + 48);
  if ( v12 )
  {
    v14 = v12 - 1;
    v15 = *(const char **)(v8 + 40);
    v13 = v14 >> 63;
  }
  else
  {
    LOBYTE(v13) = 0;
    v14 = 0;
    v15 = &s1;
  }
  if ( !v15 || (_BYTE)v13 )
  {
    v14 = 0;
    if ( v15 )
      v14 = strlen(v15);
  }
  v16 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1728LL);
  QT::QString::fromUtf8(ptr, v14, v15);
  QT::QLineEdit::setText(v16, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v17 = *(_QWORD *)(v8 + 72);
  s = nullptr;
  v30 = 0;
  if ( v17 > 1 )
  {
    if ( &s == (char **)(v8 + 64) )
    {
      LOBYTE(v21) = 0;
      v20 = (char *)&s1;
      v18 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1744LL);
      v19 = 0;
      goto LABEL_18;
    }
    v27 = *(const void **)(v8 + 64);
    s = (char *)qvector_reserve(&s, 0, v17, 1);
    *(_QWORD *)&v30 = v17;
    memmove(s, v27, v17 - 1);
    s[v17 - 1] = 0;
  }
  else
  {
    (*(void (__fastcall **)(__int64, char **, _QWORD))(*(_QWORD *)v8 + 32LL))(v8, &s, 0);
  }
  v18 = *(QT::QLineEdit **)(*(_QWORD *)(a1 + 56) + 1744LL);
  if ( (_QWORD)v30 )
  {
    v19 = v30 - 1;
    v20 = s;
    v21 = (unsigned __int64)(v30 - 1) >> 63;
  }
  else
  {
    LOBYTE(v21) = 0;
    v19 = 0;
    v20 = (char *)&s1;
  }
LABEL_18:
  if ( !v20 || (_BYTE)v21 )
  {
    v19 = 0;
    if ( v20 )
      v19 = strlen(v20);
  }
  v22 = QT::QString::fromUtf8(ptr, v19, v20);
  QT::QLineEdit::setText(v18, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( s )
  {
    *(_QWORD *)&v30 = 0;
    qfree(s, (const char *)ptr, v22);
  }
  return v32 - __readfsqword(0x28u);
}

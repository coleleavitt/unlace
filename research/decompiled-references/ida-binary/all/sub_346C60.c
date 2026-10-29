unsigned __int64 __fastcall sub_346C60(QT::QWidget **a1, __int64 *a2, double a3, double a4)
{
  __int64 v4; // r8
  QT::QLabel *v5; // r12
  double v6; // xmm0_8
  _BOOL8 v7; // rsi
  QT::QWidget **v8; // rbx
  QT::QWidget **v9; // rbp
  bool v10; // r13
  bool v11; // r12
  QT::QWidget *v12; // rdi
  bool v13; // si
  double v15; // xmm0_8
  QT::QLabel *v16; // r12
  size_t v17; // rax
  void *ptr[4]; // [rsp+0h] [rbp-458h] BYREF
  char s[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v20; // [rsp+428h] [rbp-30h]

  v4 = *a2;
  v20 = __readfsqword(0x28u);
  if ( v4 == -1 || a2[1] == -1 )
  {
    v5 = a1[86];
    v6 = QT::QString::fromUtf8(ptr, 9, "Navigator");
    QT::QLabel::setText(v5, (const QT::QString *)ptr);
  }
  else
  {
    v15 = qsnprintf(
            s,
            1024,
            "Navigator Scale: 1 pixel = %llu bytes; Range: %08a-%08a",
            *((_QWORD *)a1[87] + 21),
            a3,
            a4);
    v16 = a1[86];
    v17 = strlen(s);
    v6 = QT::QString::fromUtf8(ptr, v17, s, v15);
    QT::QLabel::setText(v16, (const QT::QString *)ptr);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    if ( !*((_BYTE *)a1[87] + 344) )
      goto LABEL_7;
  }
  else if ( !*((_BYTE *)a1[87] + 344) )
  {
    goto LABEL_7;
  }
  if ( (unsigned __int8)netnode_inited(v6) )
  {
    v7 = *((_QWORD *)a1[87] + 21) != 0;
    goto LABEL_8;
  }
LABEL_7:
  v7 = 0;
LABEL_8:
  v8 = a1 + 89;
  v9 = a1 + 93;
  (*((void (__fastcall **)(QT::QWidget **, _BOOL8, double))*a1 + 13))(a1, v7, v6);
  v10 = sub_33F840((__int64)a1[87], 1);
  v11 = sub_33F840((__int64)a1[87], 0);
  do
  {
    v12 = *v8;
    v13 = v10;
    if ( !*((_BYTE *)*v8 + 44) )
      v13 = v11;
    ++v8;
    QT::QWidget::setEnabled(v12, v13);
  }
  while ( v9 != v8 );
  return v20 - __readfsqword(0x28u);
}

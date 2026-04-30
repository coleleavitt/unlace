__int64 __fastcall sub_3477F0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 i; // rbx
  size_t v3; // rax
  char *v4; // r13
  unsigned __int64 v5; // rdx
  double v6; // xmm0_8
  unsigned int v7; // esi
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // r14d
  int v12; // r13d
  int v13; // eax
  QT::QWidget *v14; // r14
  __int64 v16; // [rsp+0h] [rbp-A8h]
  char *s; // [rsp+10h] [rbp-98h] BYREF
  __int128 v18; // [rsp+18h] [rbp-90h]
  void *ptr[4]; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v20[11]; // [rsp+50h] [rbp-58h] BYREF

  v1 = a1[8];
  v20[3] = __readfsqword(0x28u);
  v16 = v1;
  if ( v1 )
  {
    for ( i = 0; v16 != i; ++i )
    {
      v7 = *(_DWORD *)(a1[7] + 16 * i + 8);
      v8 = sub_340F70(a1[87], v7);
      v9 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v8), 8), v7);
      s = nullptr;
      v20[1] = v10;
      v18 = 0;
      v20[0] = v9;
      v11 = QT::QColor::blue((QT::QColor *)v20);
      v12 = QT::QColor::green((QT::QColor *)v20);
      v13 = QT::QColor::red((QT::QColor *)v20);
      sub_169A50((__int64 *)&s, (__int64)"* { background-color: rgb(%d, %d, %d) }", v13, v12, v11);
      v14 = *(QT::QWidget **)(a1[7] + 16 * i);
      if ( (_QWORD)v18 )
      {
        v3 = v18 - 1;
        v4 = s;
        v5 = (unsigned __int64)(v18 - 1) >> 63;
        if ( !s )
          goto LABEL_13;
      }
      else
      {
        v4 = (char *)&s1;
        LOBYTE(v5) = 0;
        v3 = 0;
        if ( !&s1 )
        {
LABEL_13:
          v3 = 0;
          if ( v4 )
            v3 = strlen(v4);
          goto LABEL_5;
        }
      }
      if ( (_BYTE)v5 )
        goto LABEL_13;
LABEL_5:
      v6 = QT::QString::fromUtf8(ptr, v3, v4);
      QT::QWidget::setStyleSheet(v14, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( s )
      {
        *(_QWORD *)&v18 = 0;
        qfree(s, (const char *)ptr, v6);
      }
    }
  }
  return QT::QWidget::update((QT::QWidget *)a1[87]);
}

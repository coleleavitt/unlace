unsigned __int64 __fastcall sub_27F6D0(__int64 *a1, const char *a2, const char *a3)
{
  __int64 (__fastcall ****v3)(_QWORD, double); // rbx
  volatile signed __int32 *v4; // rax
  __int64 (__fastcall ***v5)(_QWORD, double); // rbp
  size_t v6; // rax
  double v7; // xmm0_8
  QT::QMetaObject *v8; // rax
  const char *v9; // rax
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // rsi
  char v15; // [rsp+Fh] [rbp-99h]
  void *ptr[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v18[2]; // [rsp+50h] [rbp-58h] BYREF
  void *v19; // [rsp+60h] [rbp-48h]
  unsigned __int64 v20; // [rsp+68h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v3 = (__int64 (__fastcall ****)(_QWORD, double))qword_8CC7D0;
  if ( 8LL * (_QWORD)xmmword_8CC7D8 )
  {
    while ( 1 )
    {
      v5 = *v3;
      v6 = 0;
      if ( a2 )
        v6 = strlen(a2);
      v7 = QT::QString::fromUtf8(v18, v6, a2);
      QT::QWidget::windowTitle((QT::QWidget *)ptr);
      if ( v19 != ptr[2] )
        break;
      v15 = QT::QtPrivate::equalStrings(v19, ptr[1], v19, v18[1]);
      if ( !v15 )
      {
        v4 = (volatile signed __int32 *)ptr[0];
        if ( !ptr[0] )
        {
LABEL_19:
          if ( v18[0] && !_InterlockedSub((volatile signed __int32 *)v18[0], 1u) )
            free(v18[0]);
          goto LABEL_10;
        }
        goto LABEL_4;
      }
      if ( a3 )
      {
        v8 = (QT::QMetaObject *)(**v5)(v5, v7);
        v9 = (const char *)QT::QMetaObject::className(v8);
        v10 = strcmp(a3, v9) == 0;
        v4 = (volatile signed __int32 *)ptr[0];
        v15 = v10;
        if ( !ptr[0] )
          goto LABEL_6;
        goto LABEL_4;
      }
      v4 = (volatile signed __int32 *)ptr[0];
      if ( ptr[0] )
        goto LABEL_4;
      if ( v18[0] && !_InterlockedSub((volatile signed __int32 *)v18[0], 1u) )
        free(v18[0]);
LABEL_24:
      v11 = a1[1];
      v12 = *a1;
      if ( a1[2] < (unsigned __int64)(v11 + 1) )
      {
        v12 = qvector_reserve(a1, v12, v11 + 1, 8);
        *a1 = v12;
        v11 = a1[1];
      }
      *(_QWORD *)(v12 + 8 * v11) = v5;
      ++a1[1];
LABEL_10:
      if ( ++v3 == (__int64 (__fastcall ****)(_QWORD, double))(qword_8CC7D0 + 8 * xmmword_8CC7D8) )
        return v20 - __readfsqword(0x28u);
    }
    v4 = (volatile signed __int32 *)ptr[0];
    v15 = 0;
    if ( !ptr[0] )
      goto LABEL_19;
LABEL_4:
    if ( !_InterlockedSub(v4, 1u) )
      free(ptr[0]);
LABEL_6:
    if ( v18[0] && !_InterlockedSub((volatile signed __int32 *)v18[0], 1u) )
      free(v18[0]);
    if ( !v15 )
      goto LABEL_10;
    goto LABEL_24;
  }
  return v20 - __readfsqword(0x28u);
}

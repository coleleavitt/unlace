void __fastcall sub_4F3330(QT::QObject *a1, const QT::QString *a2)
{
  __int64 v3; // r12
  __int64 v4; // rbp
  int v5; // eax
  char *v6; // r13
  __int64 *v7; // r15
  size_t v8; // rax
  size_t v9; // rbp
  char *v10; // r15
  size_t v11; // r13
  unsigned __int8 (__fastcall *v12)(QT::QObject *, __int64 *, __int64 *, __int64); // rax
  const char *v13; // rdi
  const char *v14; // rsi
  __int64 v15; // rdi
  char *v16; // r15
  size_t v17; // r13
  void *v18; // rdi
  size_t v19; // rdx
  void *v20; // rdi
  size_t v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r11
  __int64 v24; // rax
  void *v25; // rdi
  size_t v26; // rdx
  __int64 v27; // rax
  size_t v28; // [rsp+0h] [rbp-98h]
  __int64 v29; // [rsp+18h] [rbp-80h] BYREF
  __int64 v30; // [rsp+20h] [rbp-78h] BYREF
  __int128 v31; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+40h] [rbp-58h] BYREF
  char *s; // [rsp+48h] [rbp-50h]
  size_t n; // [rsp+50h] [rbp-48h]
  unsigned __int64 v35; // [rsp+58h] [rbp-40h]

  v35 = __readfsqword(0x28u);
  v3 = QT::QObject::sender(a1);
  v4 = sub_4F23C0((__int64)a1, v3, 0, 0);
  if ( !v4 )
  {
    v22 = QT::QMetaObject::cast(
            (QT::QMetaObject *)&QT::QComboBox::staticMetaObject,
            *(const QT::QObject **)(*(_QWORD *)(v3 + 8) + 16LL));
    if ( !v22 )
      goto LABEL_11;
    v4 = sub_4F23C0((__int64)a1, v22, 0, 0);
    if ( !v4 )
      goto LABEL_11;
    v3 = v23;
  }
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 != 4 )
  {
    if ( v5 != 5 )
    {
      if ( v5 == 3 )
      {
        QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
        v6 = s;
        v7 = *(__int64 **)(v4 + 136);
        if ( (s || (v6 = (char *)&QT::QByteArray::_empty) != nullptr) && (v8 = strlen(v6), (v9 = v8) != 0) )
        {
          v25 = (void *)*v7;
          v26 = v8 + 1;
          if ( v7[2] < v8 + 1 )
          {
            v28 = v8 + 1;
            v27 = qvector_reserve(v7, *v7, v26, 1);
            *v7 = v27;
            v26 = v28;
            v25 = (void *)v27;
          }
          v7[1] = v26;
          memmove(v25, v6, v9);
          *(_BYTE *)(*v7 + v9) = 0;
        }
        else
        {
          v7[1] = 0;
        }
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
      goto LABEL_11;
    }
    v29 = -1;
    QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
    v10 = s;
    v11 = n;
    if ( !s )
      v10 = (char *)&QT::QByteArray::_empty;
    v30 = 0;
    v31 = 0;
    if ( n )
    {
      v18 = nullptr;
      v19 = n + 1;
      if ( n != -1 )
      {
        v30 = qvector_reserve(&v30, 0, v19, 1);
        v19 = v11 + 1;
        v18 = (void *)v30;
      }
      *(_QWORD *)&v31 = v19;
      memmove(v18, v10, v11);
      *(_BYTE *)(v30 + v11) = 0;
    }
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    v12 = *(unsigned __int8 (__fastcall **)(QT::QObject *, __int64 *, __int64 *, __int64))(*(_QWORD *)a1 + 120LL);
    if ( (char *)v12 == (char *)sub_4F1ED0 )
    {
      v13 = &s1;
      if ( (_QWORD)v31 )
        v13 = (const char *)v30;
      v14 = "%a";
      if ( (unsigned int)qsscanf(v13, "%a", &ptr) != 1 )
      {
LABEL_22:
        v15 = v30;
        if ( !v30 )
          goto LABEL_11;
LABEL_23:
        *(_QWORD *)&v31 = 0;
        qfree(v15, v14);
        goto LABEL_11;
      }
      v24 = (__int64)ptr;
      v29 = (__int64)ptr;
    }
    else
    {
      v14 = (const char *)&v29;
      if ( !v12(a1, &v29, &v30, v4) )
        goto LABEL_22;
      v24 = v29;
    }
    **(_QWORD **)(v4 + 136) = v24;
    goto LABEL_22;
  }
  v29 = 0;
  QT::QString::toUtf8_helper((QT::QString *)&ptr, a2);
  v16 = s;
  v17 = n;
  if ( !s )
    v16 = (char *)&QT::QByteArray::_empty;
  v30 = 0;
  v31 = 0;
  if ( n )
  {
    v20 = nullptr;
    v21 = n + 1;
    if ( n != -1 )
    {
      v30 = qvector_reserve(&v30, 0, v21, 1);
      v21 = v17 + 1;
      v20 = (void *)v30;
    }
    *(_QWORD *)&v31 = v21;
    memmove(v20, v16, v17);
    *(_BYTE *)(v30 + v17) = 0;
  }
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
    free(ptr);
  v14 = (const char *)&v29;
  if ( (*(unsigned __int8 (__fastcall **)(QT::QObject *, __int64 *, __int64 *, __int64))(*(_QWORD *)a1 + 104LL))(
         a1,
         &v29,
         &v30,
         v4 + 144) )
  {
    **(_QWORD **)(v4 + 136) = v29;
  }
  v15 = v30;
  if ( v30 )
    goto LABEL_23;
LABEL_11:
  sub_4F2BB0((__int64)a1, v3);
}

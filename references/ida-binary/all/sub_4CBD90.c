QT::QWidget *__fastcall sub_4CBD90(QT::QWidget ***a1, QT::QWidget *a2, __int64 a3)
{
  struct _Unwind_Exception *v3; // rbx
  __int64 v4; // r13
  __int64 i; // r12
  __int64 *v6; // rbp
  __int64 v7; // rdi
  __int64 v9; // r15
  const char *v10; // rbp
  int v11; // eax
  double v12; // xmm0_8
  int v13; // eax
  int v14; // r14d
  const QT::QObject *v15; // r13
  __int64 v16; // rax
  __int64 v17; // rsi
  QT::QObject *v18; // rdi
  __int64 v19; // rcx
  const char *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  char *v23; // rsi
  QT::QWidget *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // edx
  QT::QWidget *v29; // r12
  __int64 v30; // rdi
  __int64 v31; // r13
  __int64 v32; // rbx
  __int64 *v33; // rbp
  __int64 v34; // rdi
  QT::QWidget *v36; // r13
  QT::QObject *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // r15d
  _QWORD *v41; // rax
  __int64 v42; // rax
  char *v43; // rbx
  signed __int64 v44; // rax
  const QT::QObject *v45; // rax
  size_t v46; // rax
  __int64 v47; // rax
  unsigned int v49; // [rsp+14h] [rbp-F4h]
  char v50; // [rsp+1Bh] [rbp-EDh]
  char v51; // [rsp+1Eh] [rbp-EAh]
  char v52; // [rsp+1Fh] [rbp-E9h]
  void *v53[4]; // [rsp+20h] [rbp-E8h] BYREF
  void *v54[2]; // [rsp+40h] [rbp-C8h] BYREF
  QT::QWidget *v55; // [rsp+50h] [rbp-B8h]
  char v56; // [rsp+58h] [rbp-B0h]
  char *s; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v58; // [rsp+68h] [rbp-A0h]
  __int64 v59; // [rsp+78h] [rbp-90h] BYREF
  __int128 v60; // [rsp+80h] [rbp-88h]
  __m128i si128; // [rsp+90h] [rbp-78h] BYREF
  void *ptr[2]; // [rsp+A0h] [rbp-68h]
  __int64 v63; // [rsp+B0h] [rbp-58h]
  int v64; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v65; // [rsp+C8h] [rbp-40h]

  v9 = (__int64)QT::QCoreApplication::self;
  v65 = __readfsqword(0x28u);
  v10 = (const char *)a3;
  if ( !a3 )
  {
    v12 = 0.0;
    s = nullptr;
    v14 = 0;
    v59 = 0;
    v63 = 0;
    v64 = 0;
    v52 = 0;
    v50 = 0;
    v49 = 0;
    v51 = 1;
    v58 = 0;
    v60 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
    *(_OWORD *)ptr = 0;
    goto LABEL_35;
  }
  v11 = *(_DWORD *)(a3 + 88);
  v12 = 0.0;
  s = nullptr;
  v10 = *(const char **)a3;
  v58 = 0;
  v50 = HIBYTE(v11);
  v59 = 0;
  v49 = v11 & 0xFFFFFFFB;
  v63 = 0;
  v64 = 0;
  v60 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  *(_OWORD *)ptr = 0;
  if ( (v11 & 4) != 0 )
    goto LABEL_15;
LABEL_3:
  v51 = 1;
  v52 = 0;
  v13 = HIWORD(v49) & 0x80;
  v14 = HIWORD(v49) & 0xFFF;
  while ( 1 )
  {
    if ( (v14 & 0xF) == 0 )
    {
LABEL_35:
      v51 &= (v14 & 0x50) != 0;
      goto LABEL_6;
    }
    if ( v13 )
    {
      if ( (v14 & 0xF) == 0 )
        goto LABEL_35;
      v51 = 0;
    }
LABEL_6:
    QT::QWidget::windowTitle((QT::QWidget *)v54);
    v15 = (const QT::QObject *)sub_4C6BB0((__int64)a1, (__int64)v54, v12);
    if ( v54[0] && !_InterlockedSub((volatile signed __int32 *)v54[0], 1u) )
      free(v54[0]);
    v16 = QT::QMetaObject::cast((QT::QMetaObject *)&off_86E240, v15);
    if ( !v16 )
    {
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v9 + 16) + 88LL))(v9 + 16);
      v16 = (*(__int64 (__fastcall **)(__int64, QT::QWidget *, _QWORD))(*(_QWORD *)v27 + 128LL))(v27, a2, v49);
    }
    a2 = (QT::QWidget *)v16;
    QT::QObject::QObject((QT::QObject *)v54, nullptr);
    v17 = (__int64)a2;
    v18 = (QT::QObject *)v54;
    v55 = nullptr;
    v54[0] = &object_lifecycle_monitor_t___vtable;
    sub_478D00((char *)v54, (__int64)a2, v12, (__int64)&object_lifecycle_monitor_t___vtable, v19, v20);
    if ( !v15 )
    {
      if ( v52 )
      {
        if ( v56 )
          goto LABEL_86;
        v18 = (QT::QObject *)sub_4CD6B0(v55, 0);
        v17 = (__int64)&v59;
        sub_4B8A80((__int64)v18, (__int64)&v59);
      }
      ++dword_8D1DC0;
      if ( !v51 )
      {
        if ( v56 )
          goto LABEL_90;
        v17 = (__int64)v55;
        v10 = (const char *)v53;
        sub_4CAF60((QT::QWidget *)a1, (__int64)v55, (__int64)&si128, 1);
LABEL_54:
        v18 = (QT::QObject *)v53;
        sub_4D2110(v53);
        goto LABEL_12;
      }
      if ( (v50 & 0x20) != 0 )
      {
        v36 = *a1[5];
      }
      else
      {
        v46 = 0;
        if ( v10 )
          v46 = strlen(v10);
        v12 = QT::QString::fromUtf8(v53, v46, v10);
        v18 = (QT::QObject *)&off_86E240;
        v17 = sub_4C6BB0((__int64)a1, (__int64)v53, v12);
        v36 = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_86E240, (const QT::QObject *)v17);
        if ( v53[0] && !_InterlockedSub((volatile signed __int32 *)v53[0], 1u) )
        {
          v18 = (QT::QObject *)v53[0];
          free(v53[0]);
        }
      }
      if ( v36 || (v18 = (QT::QObject *)v9, (v36 = (QT::QWidget *)sub_47A7A0((QT::QApplication *)v9)) != nullptr) )
      {
        if ( v14 && (v14 & 0x40) == 0 )
        {
LABEL_59:
          if ( (v14 & 0x10) == 0 )
          {
            if ( v56 )
              goto LABEL_87;
            v9 = (__int64)v55;
            v10 = (const char *)v53;
            v42 = sub_4CE6E0(v36);
            if ( v42 )
            {
              v17 = v9;
              sub_4CB350(v42, (QT::QWidget *)v9, v36, v14, v12);
            }
            goto LABEL_54;
          }
LABEL_45:
          v37 = (QT::QObject *)sub_4CE740(v36);
          v18 = v37;
          if ( v37
            && *((_DWORD *)v37 + 10) == 2
            && (v17 = (__int64)v36,
                v40 = (*(__int64 (__fastcall **)(QT::QObject *, QT::QWidget *))(*(_QWORD *)v37 + 448LL))(v37, v36),
                v40 != -1) )
          {
            v9 = (unsigned int)((v14 & 0x20) == 0) + v40;
          }
          else
          {
            v9 = 0xFFFFFFFFLL;
          }
          if ( v56 )
            goto LABEL_89;
          v10 = (const char *)v53;
          a2 = v55;
          v41 = (_QWORD *)sub_4CE6E0(v36);
          if ( v41 )
          {
            v17 = (__int64)a2;
            sub_4C9FD0(v41, (__int64)a2, (__int64)v36, (v14 & 0x10) != 0, v9, v12);
          }
          goto LABEL_54;
        }
      }
      else
      {
        v17 = -1;
        v18 = sub_479A70(v9 + 168, -1, -1, 1);
        v47 = sub_4CF3F0(v18);
        v36 = (QT::QWidget *)v47;
        if ( v14 && (v14 & 0x40) == 0 )
        {
          if ( v47 )
            goto LABEL_59;
          goto LABEL_56;
        }
        if ( !v47 )
        {
LABEL_56:
          if ( v56 )
            goto LABEL_88;
          v17 = (__int64)v55;
          v10 = (const char *)v53;
          sub_4CAC80((QT::QWidget *)a1, (__int64)v55, 4, v12);
          goto LABEL_54;
        }
      }
      v18 = v36;
      if ( sub_4CE6E0(v36) )
        goto LABEL_45;
      goto LABEL_56;
    }
LABEL_12:
    if ( v56 )
    {
      sub_4C48B0(v12, (__int64)v18, v17, v21, v22);
LABEL_86:
      sub_4C48B0(v12, (__int64)v18, v17, v21, v22);
LABEL_87:
      sub_4C48B0(v12, (__int64)v18, v17, v21, v22);
LABEL_88:
      sub_4C48B0(v12, (__int64)v18, v17, v21, v22);
LABEL_89:
      sub_4C48B0(v12, (__int64)v18, v17, v38, v39);
LABEL_90:
      v3 = (struct _Unwind_Exception *)sub_4C48B0(v12, (__int64)v18, v17, v21, v22);
      sub_16D970(v54);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v59 )
      {
        v4 = v60;
        for ( i = 0; v4 != i; ++i )
        {
          v6 = (__int64 *)(v59 + 40 * i);
          jvalue_t_clear(v6 + 3);
          v7 = *v6;
          if ( *v6 )
          {
            v6[1] = 0;
            qfree(v7, (const char *)v17);
          }
        }
        *(_QWORD *)&v60 = 0;
        v12 = qfree(v59, (const char *)v17);
      }
      if ( s )
      {
        *(_QWORD *)&v58 = 0;
        qfree(s, (const char *)v17, v12);
      }
      _Unwind_Resume(v3);
    }
    v23 = (char *)v55;
    v24 = (QT::QWidget *)a1;
    sub_4CB2D0((QT::QWidget *)a1, v55, 1u, v12);
    if ( !v56 )
    {
      QT::QCoreApplication::sendPostedEvents(nullptr, (QT::QObject *)((char *)&qword_48 + 4), v25);
      v23 = &byte_9[5];
      v24 = nullptr;
      QT::QCoreApplication::sendPostedEvents(nullptr, (QT::QObject *)&byte_9[5], v28);
      if ( !v56 )
        break;
    }
    sub_4C48B0(v12, (__int64)v24, (__int64)v23, v25, v26);
LABEL_15:
    v52 = sub_47A7F0(v9, (__m128i *)&s);
    if ( !v52 )
      goto LABEL_3;
    if ( (unsigned __int64)v58 > 1 )
    {
      v43 = s;
      v44 = v58 - 1;
      if ( !s || v44 < 0 )
      {
        v44 = 0;
        if ( s )
          v44 = strlen(s);
      }
      v12 = QT::QString::fromUtf8(v54, v44, v43);
      v45 = (const QT::QObject *)sub_4C6BB0((__int64)a1, (__int64)v54, v12);
      if ( !QT::QMetaObject::cast((QT::QMetaObject *)&off_86E240, v45) )
      {
        if ( v54[0] && !_InterlockedSub((volatile signed __int32 *)v54[0], 1u) )
          free(v54[0]);
        goto LABEL_3;
      }
      v10 = s;
      if ( v54[0] )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)v54[0], 1u) )
          free(v54[0]);
      }
    }
    v14 = v64;
    v13 = v64 & 0x80;
    v51 = !((unsigned __int8)(v64 & 0x80) >> 7);
  }
  v29 = v55;
  v54[0] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)v54);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v30 = v59;
  if ( v59 )
  {
    v31 = v60;
    if ( (_QWORD)v60 )
    {
      v32 = 0;
      do
      {
        v33 = (__int64 *)(v30 + 40 * v32);
        jvalue_t_clear(v33 + 3);
        v34 = *v33;
        if ( *v33 )
        {
          v33[1] = 0;
          qfree(v34, &byte_9[5]);
        }
        ++v32;
        v30 = v59;
      }
      while ( v31 != v32 );
    }
    *(_QWORD *)&v60 = 0;
    v12 = qfree(v30, &byte_9[5]);
  }
  if ( s )
  {
    *(_QWORD *)&v58 = 0;
    qfree(s, &byte_9[5], v12);
  }
  return v29;
}

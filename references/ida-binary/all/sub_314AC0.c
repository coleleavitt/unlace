unsigned __int64 __fastcall sub_314AC0(__int64 a1, QT::QWidget **a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int *v5; // rax
  QT::QAction **v6; // rdx
  QT::QAction **v7; // rbx
  QT::QAction **i; // r14
  QT::QAction *v9; // r12
  const char *v10; // rax
  const QT::QObject *v11; // rax
  const QT::QObject *v12; // rax
  const QT::QObject *v13; // rbx
  __int64 (*v14)(); // rax
  volatile signed __int32 *v15; // rax
  unsigned __int64 *v17; // rax
  __int64 v18; // rdi
  double v19; // xmm0_8
  QT::QWidget *v20; // rsi
  unsigned int *v21; // rbx
  unsigned int v22; // r14d
  _QWORD *custom_data_type; // r13
  __int64 v24; // rax
  __int64 v25; // rax
  QT::QWidget *v26; // rax
  const char *v27; // r13
  QT::QWidget *v28; // r12
  size_t v29; // rax
  unsigned int *v30; // r12
  unsigned int v31; // r13d
  __int64 custom_data_format; // r14
  bool v33; // r13
  __int64 v34; // rax
  __int64 v35; // rax
  void *v36; // r14
  __int64 v37; // rax
  QT::QAction *v38; // r12
  const char *v39; // [rsp+18h] [rbp-318h]
  QT::QWidget *v40; // [rsp+20h] [rbp-310h]
  __int64 v41; // [rsp+30h] [rbp-300h]
  unsigned int *v42; // [rsp+40h] [rbp-2F0h]
  __int64 v43; // [rsp+48h] [rbp-2E8h]
  unsigned int *v44; // [rsp+50h] [rbp-2E0h]
  int s1b; // [rsp+58h] [rbp-2D8h]
  char *s1; // [rsp+58h] [rbp-2D8h]
  unsigned int s1a; // [rsp+58h] [rbp-2D8h]
  char v48; // [rsp+63h] [rbp-2CDh] BYREF
  int v49; // [rsp+64h] [rbp-2CCh] BYREF
  unsigned __int64 v50; // [rsp+68h] [rbp-2C8h] BYREF
  void *ptr; // [rsp+70h] [rbp-2C0h] BYREF
  QT::QAction **v52; // [rsp+78h] [rbp-2B8h]
  __int64 v53; // [rsp+80h] [rbp-2B0h]
  __int64 v54; // [rsp+90h] [rbp-2A0h] BYREF
  __int128 v55; // [rsp+98h] [rbp-298h]
  const char *v56; // [rsp+B0h] [rbp-280h] BYREF
  __int128 v57; // [rsp+B8h] [rbp-278h]
  unsigned int *v58; // [rsp+D0h] [rbp-260h] BYREF
  __int128 v59; // [rsp+D8h] [rbp-258h]
  unsigned int *v60; // [rsp+F0h] [rbp-240h] BYREF
  __int128 v61; // [rsp+F8h] [rbp-238h]
  void *v62[4]; // [rsp+110h] [rbp-220h] BYREF
  _WORD v63[16]; // [rsp+130h] [rbp-200h] BYREF
  _OWORD v64[2]; // [rsp+150h] [rbp-1E0h] BYREF
  _BYTE v65[32]; // [rsp+170h] [rbp-1C0h] BYREF
  __int128 v66; // [rsp+190h] [rbp-1A0h] BYREF
  __int64 v67; // [rsp+1A0h] [rbp-190h]
  __int64 v68; // [rsp+1A8h] [rbp-188h]
  __int64 v69; // [rsp+1B0h] [rbp-180h]
  char v70; // [rsp+1B8h] [rbp-178h] BYREF
  unsigned __int64 v71; // [rsp+2F8h] [rbp-38h] BYREF

  v71 = __readfsqword(0x28u);
  if ( *a2 )
  {
    QT::QWidget::actions((QT::QWidget *)&ptr);
    v5 = (int *)ptr;
    if ( !ptr || *(int *)ptr > 1 )
    {
      sub_1821F0((__int64)&ptr, 0, 0, 0, v3, v4);
      v5 = (int *)ptr;
    }
    v6 = v52;
    v7 = v52;
    if ( !v5 || *v5 > 1 )
    {
      sub_1821F0((__int64)&ptr, 0, 0, 0, v3, v4);
      v6 = v52;
    }
    for ( i = &v6[v53]; i != v7; ++v7 )
    {
      v9 = *v7;
      QT::QAction::data((QT::QAction *)&v66);
      s1b = QT::QVariant::toUInt((QT::QVariant *)&v66, nullptr);
      QT::QVariant::~QVariant((QT::QVariant *)&v66);
      if ( s1b != -559035650 )
      {
        v10 = (const char *)sub_531430(v9);
        if ( !v10 )
          continue;
        s1 = (char *)v10;
        if ( strncmp(v10, "data_type_t:", 0xCu) )
        {
          if ( strncmp(s1, "data_format_t:", 0xEu) )
            continue;
        }
      }
      QT::QWidget::removeAction(*a2, v9);
    }
    v11 = (const QT::QObject *)(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 48LL))(QT::QCoreApplication::self + 2);
    v63[0] = -1;
    v12 = (const QT::QObject *)QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v11);
    v13 = v12;
    if ( !v12 )
      goto LABEL_17;
    v14 = *(__int64 (**)())(*(_QWORD *)v12 + 608LL);
    if ( v14 == sub_30E350 || !((unsigned __int8 (__fastcall *)(const QT::QObject *, _WORD *))v14)(v13, v63) )
      goto LABEL_17;
    v49 = 0;
    v17 = (unsigned __int64 *)&v70;
    v50 = -1;
    v67 = -1;
    v68 = 0;
    v69 = 0;
    memset(v64, 0, sizeof(v64));
    v66 = -1;
    do
    {
      *(_WORD *)v17 = 0;
      v17 += 5;
      *((_WORD *)v17 - 19) = 0;
      *((_WORD *)v17 - 18) = 0;
      *((_DWORD *)v17 - 2) = 0;
      *((_WORD *)v17 - 17) = 0;
      *((_OWORD *)v17 - 2) = 0;
      *(v17 - 2) = 0;
    }
    while ( &v71 != v17 );
    v48 = 0;
    v18 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87CC60, v13);
    if ( v18 )
      sub_2DFC10(v18, (__int64)&v66, (__int64)v64, &v50, (unsigned int *)&v49, &v48, 0.0);
    v19 = 0.0;
    v20 = nullptr;
    v54 = 0;
    v56 = nullptr;
    v58 = nullptr;
    v55 = 0;
    v57 = 0;
    v59 = 0;
    get_custom_data_types(&v58, 0, -1);
    v21 = v58;
    v44 = &v58[v59];
    if ( v44 != v58 )
    {
      do
      {
        v22 = *v21;
        s1a = *v21;
        custom_data_type = (_QWORD *)get_custom_data_type(*v21);
        if ( v63[0] == v22 )
        {
          v60 = nullptr;
          v61 = 0;
          get_custom_data_formats(&v60, s1a);
          v26 = (QT::QWidget *)operator new(0x28u);
          v27 = (const char *)custom_data_type[3];
          v28 = *a2;
          v40 = v26;
          v29 = 0;
          if ( v27 )
            v29 = strlen(v27);
          v19 = QT::QString::fromUtf8(v62, v29, v27);
          sub_2DE650(v40, (const QT::QString *)v62, v28);
          if ( v62[0] && !_InterlockedSub((volatile signed __int32 *)v62[0], 1u) )
            free(v62[0]);
          v30 = v60;
          v42 = &v60[v61];
          if ( v42 != v60 )
          {
            do
            {
              v31 = *v30;
              custom_data_format = get_custom_data_format(*v30);
              if ( *(_QWORD *)(custom_data_format + 32) )
              {
                v43 = sub_336B40(&v54, v31);
                v41 = sub_534430(v43);
                if ( v41 )
                {
                  v33 = (__int16)v63[v49 + 1] == v31;
                  v39 = *(const char **)(custom_data_format + 32);
                  if ( v48
                    && (*(unsigned __int8 (__fastcall **)(_QWORD, const char **, _OWORD *, unsigned __int64, __int64, _QWORD, _QWORD))(custom_data_format + 64))(
                         *(_QWORD *)(custom_data_format + 8),
                         &v56,
                         v64,
                         v50,
                         v67,
                         v49,
                         s1a) )
                  {
                    v37 = v57;
                    if ( (unsigned __int64)v57 > 1 )
                    {
                      tag_remove(&v56, v56, 0);
                      v37 = v57;
                    }
                    v39 = &::s1;
                    if ( v37 )
                      v39 = v56;
                  }
                  v34 = sub_534430(v43);
                  if ( v34 )
                    sub_537630(v34, 1, v39);
                  LOBYTE(v62[0]) = v33;
                  v35 = sub_534430(v43);
                  if ( v35 )
                    sub_537630(v35, 7, v62);
                  QT::QWidget::addAction(v40, *(QT::QAction **)(v41 + 192));
                }
              }
              ++v30;
            }
            while ( v42 != v30 );
          }
          v20 = v40;
          QT::QWidget::actions((QT::QWidget *)v62);
          v36 = v62[2];
          if ( v62[0] && !_InterlockedSub((volatile signed __int32 *)v62[0], 1u) )
            free(v62[0]);
          if ( v36 )
          {
            v38 = (QT::QAction *)QT::QMenu::menuAction(v40);
            QT::QVariant::QVariant((QT::QVariant *)v65, 0xDEADCAFE);
            QT::QAction::setData(v38, (const QT::QVariant *)v65);
            QT::QVariant::~QVariant((QT::QVariant *)v65);
            v20 = (QT::QWidget *)QT::QMenu::menuAction(v40);
            sub_534250(a2, v20, 1, v19);
          }
          if ( v60 )
          {
            *(_QWORD *)&v61 = 0;
            v19 = qfree(v60, (const char *)v20);
          }
        }
        else if ( custom_data_type[4] )
        {
          if ( custom_data_type[6] )
          {
            v20 = (QT::QWidget *)s1a;
            v24 = sub_3369A0(&v54, s1a);
            v25 = sub_534430(v24);
            if ( v25 )
            {
              v20 = *(QT::QWidget **)(v25 + 192);
              sub_534250(a2, v20, 1, v19);
            }
          }
        }
        ++v21;
      }
      while ( v44 != v21 );
      v21 = v58;
    }
    if ( v21 )
    {
      *(_QWORD *)&v59 = 0;
      qfree(v21, (const char *)v20);
    }
    if ( v56 )
    {
      *(_QWORD *)&v57 = 0;
      qfree(v56, (const char *)v20);
    }
    if ( v54 )
    {
      *(_QWORD *)&v55 = 0;
      qfree(v54, (const char *)v20);
      v15 = (volatile signed __int32 *)ptr;
      if ( !ptr )
        return v71 - __readfsqword(0x28u);
    }
    else
    {
LABEL_17:
      v15 = (volatile signed __int32 *)ptr;
      if ( !ptr )
        return v71 - __readfsqword(0x28u);
    }
    if ( !_InterlockedSub(v15, 1u) )
      free(ptr);
  }
  return v71 - __readfsqword(0x28u);
}

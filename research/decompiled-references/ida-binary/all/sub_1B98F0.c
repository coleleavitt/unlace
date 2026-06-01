QT::QWidget *__fastcall sub_1B98F0(_QWORD *a1, __int64 *a2)
{
  char *v3; // rsi
  char *v4; // rbx
  size_t v5; // r8
  __int64 v6; // r15
  char *v7; // rbp
  char *v8; // rax
  QT::QWidget *v9; // rbx
  signed __int64 v10; // r14
  char *v12; // rax
  char *v13; // r13
  size_t v14; // rax
  size_t v15; // rbp
  void *v16; // rdi
  size_t v17; // r14
  __int64 v18; // rax
  size_t n; // [rsp+8h] [rbp-A0h]
  char *haystack; // [rsp+10h] [rbp-98h] BYREF
  __int128 v21; // [rsp+18h] [rbp-90h]
  void *ptr[4]; // [rsp+30h] [rbp-78h] BYREF
  void *v23; // [rsp+50h] [rbp-58h] BYREF
  char *s; // [rsp+58h] [rbp-50h]
  unsigned __int64 v25; // [rsp+68h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  QT::QObject::objectName((QT::QObject *)ptr);
  v3 = (char *)ptr;
  QT::QString::toUtf8_helper((QT::QString *)&v23, (const QT::QString *)ptr);
  v4 = s;
  haystack = nullptr;
  v21 = 0;
  if ( s )
  {
    v5 = strlen(s);
    v6 = v5 + 1;
LABEL_3:
    n = v5;
    v3 = v4;
    haystack = (char *)qvector_reserve(&haystack, 0, v6, 1);
    *(_QWORD *)&v21 = v6;
    memmove(haystack, v4, n);
    haystack[n] = 0;
    goto LABEL_4;
  }
  v4 = (char *)&QT::QByteArray::_empty;
  if ( &QT::QByteArray::_empty )
  {
    v6 = 1;
    v5 = 0;
    goto LABEL_3;
  }
LABEL_4:
  if ( v23 && !_InterlockedSub((volatile signed __int32 *)v23, 1u) )
    free(v23);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v7 = haystack;
  if ( !(_QWORD)v21 )
    goto LABEL_14;
  v3 = "__";
  v8 = strstr(haystack, "__");
  v9 = (QT::QWidget *)v8;
  if ( !v8 )
    goto LABEL_15;
  v10 = v8 - v7;
  if ( v8 - v7 == -1 )
    goto LABEL_14;
  *v8 = 0;
  v7 = haystack;
  if ( !(_QWORD)v21 )
    goto LABEL_14;
  if ( !strcmp(haystack, "CustomIDAMemo") )
  {
    v3 = (char *)QT::QStackedWidget::currentWidget(*(QT::QStackedWidget **)(a1[32] + 176LL));
    v9 = (QT::QWidget *)QT::QMetaObject::cast((QT::QMetaObject *)&off_881840, (const QT::QObject *)v3);
  }
  else
  {
    v3 = "navband_t";
    if ( !strcmp(v7, "navband_t") )
    {
      v9 = (QT::QWidget *)a1[36];
    }
    else
    {
      v3 = "TextArrows";
      if ( !strcmp(v7, "TextArrows") )
      {
        v9 = (QT::QWidget *)a1[37];
      }
      else
      {
        v3 = "text_area_t";
        if ( !strcmp(v7, "text_area_t") )
        {
          v9 = (QT::QWidget *)a1[40];
        }
        else
        {
          v3 = "MainMsgList";
          if ( !strcmp(v7, "MainMsgList") )
          {
            v9 = (QT::QWidget *)a1[38];
          }
          else
          {
            v3 = "TCpuRegs";
            if ( !strcmp(v7, "TCpuRegs") )
            {
              v9 = (QT::QWidget *)a1[39];
            }
            else
            {
              v3 = "GraphMiniView";
              if ( strcmp(v7, "GraphMiniView") )
              {
LABEL_14:
                v9 = nullptr;
                goto LABEL_15;
              }
              v9 = (QT::QWidget *)a1[41];
            }
          }
        }
      }
    }
  }
  if ( v9 )
  {
    QT::QWidget::ensurePolished(v9);
    v12 = (char *)&s1;
    if ( (_QWORD)v21 )
      v12 = haystack;
    v13 = &v12[v10 + 2];
    if ( &v12[v10] == (char *)-2LL || (v14 = strlen(&v12[v10 + 2]), (v15 = v14) == 0) )
    {
      a2[1] = 0;
      v7 = haystack;
      goto LABEL_15;
    }
    v16 = (void *)*a2;
    v17 = v14 + 1;
    if ( a2[2] < v14 + 1 )
    {
      v18 = qvector_reserve(a2, *a2, v14 + 1, 1);
      *a2 = v18;
      v16 = (void *)v18;
    }
    a2[1] = v17;
    v3 = v13;
    memmove(v16, v13, v15);
    *(_BYTE *)(*a2 + v15) = 0;
  }
  v7 = haystack;
LABEL_15:
  if ( v7 )
  {
    *(_QWORD *)&v21 = 0;
    qfree(v7, v3);
  }
  return v9;
}

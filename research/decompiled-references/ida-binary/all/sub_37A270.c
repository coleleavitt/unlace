__int64 __fastcall sub_37A270(int a1, __int64 a2, int a3, QT::QCoreApplication *a4, int *a5)
{
  unsigned int v9; // ebx
  char *v11; // rsi
  QT::QEvent *v12; // rdx
  __int64 v13; // rdi
  unsigned int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 **v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rdx
  const char *v20; // rsi
  QT::QEvent *v21; // rdx
  __int64 v22; // rdi
  unsigned int v23; // eax
  __int64 **v24; // rdx
  __int64 *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  char **v28; // rdx
  __int64 (__fastcall **v29)(QT::QEvent *); // [rsp+0h] [rbp-88h] BYREF
  unsigned __int8 v30; // [rsp+Ch] [rbp-7Ch]
  __int64 v31; // [rsp+10h] [rbp-78h]
  int v32; // [rsp+18h] [rbp-70h]
  __int64 v33; // [rsp+20h] [rbp-68h]
  __int128 v34; // [rsp+28h] [rbp-60h]
  __int64 v35; // [rsp+38h] [rbp-50h]
  unsigned __int64 v36; // [rsp+48h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  if ( !a4 )
    return 0;
  if ( !a1 )
  {
    QT::QEvent::QEvent(&v29, 3005);
    v20 = (const char *)&v29;
    v29 = widget_function_query_event_t___vtable;
    v31 = a2;
    v32 = a3;
    v33 = 0;
    v30 = 0;
    v34 = 0;
    QT::QCoreApplication::sendEvent(a4, (QT::QObject *)&v29, v21);
    v9 = v30;
    v22 = v33;
    if ( v30 )
    {
      v23 = *a5;
      if ( (unsigned int)*a5 > 0x2F )
      {
        v24 = *((__int64 ***)a5 + 1);
        *((_QWORD *)a5 + 1) = v24 + 1;
      }
      else
      {
        v24 = (__int64 **)(*((_QWORD *)a5 + 2) + v23);
        *a5 = v23 + 8;
      }
      v25 = *v24;
      v26 = **v24;
      v27 = v25[2];
      *v25 = v22;
      v22 = v26;
      v25[1] = v34;
      v20 = *((const char **)&v34 + 1);
      v25[2] = *((_QWORD *)&v34 + 1);
      v33 = v26;
      *((_QWORD *)&v34 + 1) = v27;
    }
    v29 = widget_function_query_event_t___vtable;
    if ( v22 )
    {
      *(_QWORD *)&v34 = 0;
      qfree(v22, v20);
      QT::QEvent::~QEvent((QT::QEvent *)&v29);
      return v9;
    }
    goto LABEL_15;
  }
  if ( a1 == 1 )
  {
    QT::QEvent::QEvent(&v29, 3006);
    v11 = (char *)&v29;
    v29 = widget_types_query_event_t___vtable;
    v31 = a2;
    v32 = a3;
    v33 = 0;
    v35 = 0;
    v30 = 0;
    v34 = 0;
    QT::QCoreApplication::sendEvent(a4, (QT::QObject *)&v29, v12);
    v9 = v30;
    v13 = v33;
    if ( !v30 )
    {
LABEL_13:
      v29 = widget_types_query_event_t___vtable;
      if ( v13 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v13, v11);
      }
LABEL_15:
      QT::QEvent::~QEvent((QT::QEvent *)&v29);
      return v9;
    }
    v14 = *a5;
    if ( (unsigned int)*a5 > 0x2F )
    {
      v28 = *((char ***)a5 + 1);
      v17 = (__int64 **)(v28 + 1);
      *((_QWORD *)a5 + 1) = v28 + 1;
      v11 = *v28;
    }
    else
    {
      v15 = *((_QWORD *)a5 + 2);
      v16 = v14 + 8;
      *a5 = v16;
      v11 = *(char **)(v15 + v14);
      if ( (unsigned int)v16 <= 0x2F )
      {
        v17 = (__int64 **)(v16 + v15);
        *a5 = v14 + 16;
LABEL_10:
        v18 = *v17;
        if ( v11 )
          *(_QWORD *)v11 = v35;
        v13 = *v18;
        v19 = v18[2];
        *v18 = v33;
        *(_OWORD *)(v18 + 1) = v34;
        v33 = v13;
        *((_QWORD *)&v34 + 1) = v19;
        goto LABEL_13;
      }
      v17 = *((__int64 ***)a5 + 1);
    }
    *((_QWORD *)a5 + 1) = v17 + 1;
    goto LABEL_10;
  }
  return 0;
}

unsigned __int64 __fastcall sub_23C050(char *a1, char a2, __int64 a3, __int64 a4, const char *a5)
{
  QT::QObject *v7; // rdi
  unsigned __int64 debugger_plugins; // r14
  QT::QComboBox *v10; // r15
  __int64 v11; // rax
  QT::QComboBox *v12; // rdx
  const char *v13; // rdx
  size_t v14; // rax
  int v15; // eax
  int v16; // [rsp+0h] [rbp-C8h]
  int v17; // [rsp+8h] [rbp-C0h]
  QT::QComboBox *v18; // [rsp+8h] [rbp-C0h]
  int v19[2]; // [rsp+18h] [rbp-B0h]
  int v20; // [rsp+18h] [rbp-B0h]
  __int64 v21; // [rsp+20h] [rbp-A8h]
  int v22; // [rsp+2Ch] [rbp-9Ch]
  __int64 v23; // [rsp+30h] [rbp-98h] BYREF
  char v24[8]; // [rsp+38h] [rbp-90h] BYREF
  void *ptr[4]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v26; // [rsp+60h] [rbp-68h] BYREF
  __int64 v27; // [rsp+70h] [rbp-58h]
  __int64 v28; // [rsp+78h] [rbp-50h]
  unsigned __int64 v29; // [rsp+88h] [rbp-40h]

  v7 = *((QT::QObject **)a1 + 46);
  v29 = __readfsqword(0x28u);
  QT::QObject::disconnect(
    v7,
    (const QT::QObject *)"2currentIndexChanged(int)",
    a1,
    (const QT::QObject *)"1ComboBoxDebuggersChanged()",
    a5);
  QT::QComboBox::clear(*((QT::QComboBox **)a1 + 46));
  v23 = 0;
  if ( !byte_8CD800 )
  {
    debugger_plugins = get_debugger_plugins(&v23);
    if ( debugger_plugins )
    {
      if ( (unsigned __int8)netnode_inited() )
      {
        v27 = 0;
        v10 = *((QT::QComboBox **)a1 + 46);
        v28 = 2;
        v26 = 0;
        QT::QMetaObject::tr((QT::QMetaObject *)ptr, (const char *)&off_88BBA0, "No debugger", 0);
        v17 = QT::QComboBox::count(v10);
        QT::QIcon::QIcon((QT::QIcon *)v24);
        QT::QComboBox::insertItem(
          v10,
          v17,
          (const QT::QIcon *)v24,
          (const QT::QString *)ptr,
          (const QT::QVariant *)&v26);
        QT::QIcon::~QIcon((QT::QIcon *)v24);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
        QT::QVariant::~QVariant((QT::QVariant *)&v26);
        v16 = 0;
        v11 = 0;
        v22 = 0;
        do
        {
          v27 = 0;
          v12 = *((QT::QComboBox **)a1 + 46);
          v21 = 16 * v11;
          v28 = 2;
          v26 = 0;
          v18 = v12;
          v13 = *(const char **)(*(_QWORD *)(v23 + 16 * v11) + 24LL);
          v14 = 0;
          if ( v13 )
          {
            *(_QWORD *)v19 = v13;
            v14 = strlen(v13);
            v13 = *(const char **)v19;
          }
          QT::QString::fromUtf8(ptr, v14, v13);
          v20 = QT::QComboBox::count(v18);
          QT::QIcon::QIcon((QT::QIcon *)v24);
          QT::QComboBox::insertItem(
            v18,
            v20,
            (const QT::QIcon *)v24,
            (const QT::QString *)ptr,
            (const QT::QVariant *)&v26);
          QT::QIcon::~QIcon((QT::QIcon *)v24);
          if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            free(ptr[0]);
          QT::QVariant::~QVariant((QT::QVariant *)&v26);
          ++v16;
          if ( a2 )
          {
            v15 = v22;
            if ( *(_QWORD *)(v23 + v21 + 8) == dbg )
              v15 = v16;
            v22 = v15;
          }
          v11 = v16;
        }
        while ( v16 < debugger_plugins );
        QT::QComboBox::setCurrentIndex(*((QT::QComboBox **)a1 + 46), v22);
      }
    }
  }
  QT::QObject::connect(ptr, *((_QWORD *)a1 + 46), "2currentIndexChanged(int)", a1, "1ComboBoxDebuggersChanged()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)ptr);
  return v29 - __readfsqword(0x28u);
}

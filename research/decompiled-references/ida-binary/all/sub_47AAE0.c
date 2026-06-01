unsigned __int64 __fastcall sub_47AAE0(__int64 a1, char *a2)
{
  __int64 (__fastcall **v2)(char *); // rax
  QT::QMetaObject *v3; // rdi
  int v4; // eax
  int v6; // r12d
  QT::QStyleHints *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  char v10; // [rsp+7h] [rbp-89h]
  __int128 v11; // [rsp+10h] [rbp-80h] BYREF
  __int64 v12; // [rsp+20h] [rbp-70h]
  __int64 v13; // [rsp+28h] [rbp-68h]
  __int128 v14; // [rsp+30h] [rbp-60h] BYREF
  __int64 v15; // [rsp+40h] [rbp-50h]
  unsigned __int64 v16; // [rsp+58h] [rbp-38h]

  v2 = *(__int64 (__fastcall ***)(char *))a2;
  v16 = __readfsqword(0x28u);
  v3 = (QT::QMetaObject *)(*v2)(a2);
  v4 = QT::QMetaObject::indexOfMethod(v3, "repolish()");
  if ( v4 >= 0 )
  {
    v6 = v4;
    v7 = (QT::QStyleHints *)QT::QGuiApplication::styleHints(v3);
    if ( (unsigned int)QT::QStyleHints::colorScheme(v7) == 2 )
    {
      QT::QVariant::QVariant((QT::QVariant *)&v11, 1);
    }
    else
    {
      v12 = 0;
      v13 = 2;
      v11 = 0;
    }
    QT::QObject::property((QT::QObject *)&v14, a2);
    v10 = QT::QVariant::equals((QT::QVariant *)&v14, (const QT::QVariant *)&v11);
    QT::QVariant::~QVariant((QT::QVariant *)&v14);
    if ( !v10 )
    {
      QT::QObject::doSetProperty((QT::QObject *)a2, "os-dark-theme", (const QT::QVariant *)&v11, nullptr);
      v8 = QT::QMetaObject::method(v3, v6);
      v15 = 0;
      v14 = 0;
      QT::QMetaMethod::invokeImpl(v8, v9, a2, 0, 1, &v14, (char *)&v14 + 8);
    }
    QT::QVariant::~QVariant((QT::QVariant *)&v11);
  }
  return v16 - __readfsqword(0x28u);
}

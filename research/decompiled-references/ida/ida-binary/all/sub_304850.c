unsigned __int64 __fastcall sub_304850(QT::QObject *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // r13
  const QT::QObject *v6; // rbx
  char *v7; // rdi
  int v8; // eax
  char v9; // di
  __int64 v11[5]; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v1 = QT::QObject::sender(a1);
  v2 = sub_5313F0(v1);
  if ( v2 )
  {
    v3 = v2;
    v4 = (*(__int64 (__fastcall **)(_QWORD *))(*((_QWORD *)a1 + 2) + 48LL))((_QWORD *)a1 + 2);
    v5 = v4;
    if ( !v4 )
      goto LABEL_7;
    v6 = (const QT::QObject *)v4;
    while ( !QT::QMetaObject::cast((QT::QMetaObject *)&off_87E980, v6) )
    {
      v6 = *(const QT::QObject **)(*((_QWORD *)v6 + 1) + 16LL);
      if ( !v6 )
        goto LABEL_7;
    }
    if ( sub_186640(v3) )
    {
LABEL_7:
      if ( qword_8CC7C0 )
        sub_1EAF00();
      QT::QObject::QObject((QT::QObject *)v11, nullptr);
      v11[2] = 0;
      sub_478D00((char *)v11, (__int64)&object_lifecycle_monitor_t___vtable);
      v7 = (char *)&s1;
      if ( *(_QWORD *)(v3 + 40) )
        v7 = *(char **)(v3 + 32);
      if ( sub_1EAE80(v7) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 16LL))(v3, v5);
      if ( !byte_8CD800 )
      {
        v8 = *(_DWORD *)(v3 + 112);
        v9 = 0;
        if ( (v8 & 0x40000) == 0 )
        {
          v9 = 1;
          if ( (v8 & 0x80000) != 0 )
            v9 = (*(_BYTE *)(v3 + 67) & 0x40) == 0;
        }
        sub_1EAD80(v9);
        sub_17D730((__int64)v11);
      }
      v11[0] = (__int64)&object_lifecycle_monitor_t___vtable;
      QT::QObject::~QObject((QT::QObject *)v11);
    }
  }
  return v12 - __readfsqword(0x28u);
}

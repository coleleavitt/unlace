__int64 __fastcall sub_4EBE10(__int64 a1, __int64 *a2, __int64 a3, double a4)
{
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v7; // rsi
  char v8; // al
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD); // rbp
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 (__fastcall ***v17)(_QWORD); // rbx
  char v18; // al
  __int64 v19; // rax
  __int128 v20; // [rsp+10h] [rbp-68h] BYREF
  __int64 v21; // [rsp+20h] [rbp-58h] BYREF
  int v22; // [rsp+28h] [rbp-50h]
  unsigned __int64 v23; // [rsp+38h] [rbp-40h]

  v4 = 0;
  v5 = a3;
  v23 = __readfsqword(0x28u);
  if ( a3 )
  {
    while ( 1 )
    {
      v7 = v5;
      v20 = 0;
      v8 = sub_4EB9F0((__int64 *)&v20 + 1, (__int64 (__fastcall ***)(_QWORD))v5);
      v12 = *((_QWORD *)&v20 + 1);
      v11 = nullptr;
      if ( v8 && !(_QWORD)v20 )
        v11 = (__int64 (__fastcall ***)(_QWORD))v5;
      ++v4;
      v5 = *(_QWORD *)(*(_QWORD *)(v5 + 8) + 16LL);
      if ( v4 == 3 || !v5 )
        break;
      if ( *((_QWORD *)&v20 + 1) )
        goto LABEL_10;
      if ( v11 )
        goto LABEL_31;
    }
    if ( *((_QWORD *)&v20 + 1) )
      goto LABEL_10;
    v17 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 48LL))(QT::QCoreApplication::self + 2);
    if ( !v17 )
      return 0;
    if ( v11 )
    {
LABEL_31:
      if ( !under_debugger )
        interr(40806, v7, v9, v10, a4);
      BUG();
    }
  }
  else
  {
    v19 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 48LL))(QT::QCoreApplication::self + 2);
    v17 = (__int64 (__fastcall ***)(_QWORD))v19;
    if ( !v19 )
      return 0;
  }
  a4 = 0.0;
  v20 = 0;
  v18 = sub_4EB9F0((__int64 *)&v20 + 1, v17);
  v12 = *((_QWORD *)&v20 + 1);
  v11 = nullptr;
  if ( v18 && !(_QWORD)v20 )
    v11 = v17;
  if ( !*((_QWORD *)&v20 + 1) )
    return 0;
LABEL_10:
  if ( a1 )
  {
    if ( (*(_BYTE *)(v12 + 48) & 2) != 0 )
      sub_4EBCA0((QT::QFont *)&v21, (__int64)v11[4], a4);
    else
      QT::QFont::QFont((QT::QFont *)&v21, (const QT::QFont *)(v11[4] + 7));
    QT::QFont::operator=(a1, &v21);
    QT::QFont::~QFont((QT::QFont *)&v21);
  }
  if ( a2 )
  {
    v13 = *QT::QCoreApplication::self;
    if ( (*(_BYTE *)(v12 + 48) & 2) != 0 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD *))(v13 + 112))(QT::QCoreApplication::self);
      sub_4EBCA0((QT::QFont *)&v21, *(_QWORD *)(v14 + 32), a4);
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(v13 + 208))(&v21, QT::QCoreApplication::self, v12);
    }
    v15 = *a2;
    *a2 = v21;
    v21 = v15;
    LODWORD(v15) = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 2) = v22;
    v22 = v15;
    QT::QFont::~QFont((QT::QFont *)&v21);
  }
  return v12;
}

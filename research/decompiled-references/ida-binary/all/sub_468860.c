unsigned __int64 __fastcall sub_468860(QT::QMetaObject *a1, int a2, const QT::QMetaObject *a3, __int64 a4, void **a5)
{
  __int64 v6; // rax
  int v7; // eax
  int v8; // [rsp+Ch] [rbp-2Ch] BYREF
  int v9[2]; // [rsp+10h] [rbp-28h] BYREF
  int *v10; // [rsp+18h] [rbp-20h]
  unsigned __int64 v11; // [rsp+28h] [rbp-10h]

  v11 = __readfsqword(0x28u);
  if ( a2 )
  {
    if ( a2 == 5 )
    {
      v6 = *(_QWORD *)(a4 + 8);
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, int, __int64, __int64, void **))v6 == sub_468800
        && !*(_QWORD *)(v6 + 8) )
      {
        **(_DWORD **)a4 = 0;
      }
    }
  }
  else if ( !(_DWORD)a3 )
  {
    v7 = **(_DWORD **)(a4 + 8);
    *(_QWORD *)v9 = 0;
    v8 = v7;
    v10 = &v8;
    QT::QMetaObject::activate(a1, (QT::QObject *)&off_888DC0, a3, (int)v9, a5);
  }
  return v11 - __readfsqword(0x28u);
}

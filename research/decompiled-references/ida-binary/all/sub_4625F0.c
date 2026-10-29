__int64 __fastcall sub_4625F0(__int64 a1, int a2, const QT::QMetaObject *a3, _DWORD **a4, void **a5)
{
  _DWORD *v6; // rax
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
      v6 = a4[1];
      if ( *(unsigned __int64 (__fastcall **)(QT::QMetaObject *, int, __int64, __int64, void **))v6 == sub_462450
        && !*((_QWORD *)v6 + 1) )
      {
        **a4 = 0;
      }
    }
    return v11 - __readfsqword(0x28u);
  }
  if ( (_DWORD)a3 == 1 )
    return sub_1DD7C0((QT::QDockWidget *)a1, *a4[1]);
  if ( (_DWORD)a3 != 2 )
  {
    if ( !(_DWORD)a3 )
    {
      v7 = *a4[1];
      *(_QWORD *)v9 = 0;
      v8 = v7;
      v10 = &v8;
      QT::QMetaObject::activate((QT::QMetaObject *)a1, (QT::QObject *)&off_882020, a3, (int)v9, a5);
    }
    return v11 - __readfsqword(0x28u);
  }
  return sub_1DD870(a1);
}

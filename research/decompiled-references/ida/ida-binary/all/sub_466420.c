__int64 __fastcall CIMBridge__::vfunc_2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned int v8; // ebx
  __int64 v10; // rax

  v5 = QT::QObject::qt_metacall();
  v8 = v5;
  if ( v5 >= 0 )
  {
    if ( (_DWORD)a2 )
    {
      if ( (_DWORD)a2 != 7 )
        return v8;
      if ( v5 <= 3 )
        **(_QWORD **)a4 = 0;
    }
    else if ( v5 <= 3 )
    {
      switch ( v5 )
      {
        case 2:
          sub_2A6BD0(a1);
          break;
        case 3:
          v10 = sub_2A6BE0(a1);
          if ( *(_QWORD *)a4 )
            **(_QWORD **)a4 = v10;
          break;
        case 1:
          sub_2A6FF0(a1, a2, v6, v7);
          break;
        default:
          sub_2A6F90(a1, **(_DWORD **)(a4 + 8));
          break;
      }
    }
    v8 -= 4;
  }
  return v8;
}

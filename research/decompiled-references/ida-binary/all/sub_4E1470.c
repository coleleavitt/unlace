__int64 __fastcall sub_4E1470(_DWORD *a1, QT::QCoreApplication *a2, __int64 a3)
{
  int v3; // ecx
  __int64 result; // rax
  int v5; // ecx
  int v6; // ebp

  v3 = *(unsigned __int16 *)(a3 + 8);
  if ( v3 == 2001 )
  {
    v5 = a1[420];
    result = 0;
    if ( (v5 & 0x100) == 0 && (v5 & 1) == 0 )
    {
      v6 = *(unsigned __int8 *)(a3 + 24);
      a1[460] += v6;
      result = sub_4E0CB0(a1, *(_QWORD *)(a3 + 16));
      a1[460] -= v6;
    }
  }
  else
  {
    result = 0;
    if ( v3 == 2002 )
    {
      QT::QCoreApplication::removePostedEvents(a2, (QT::QObject *)((char *)&stru_7C0.st_size + 1), a3);
      a1[420] |= 0x100u;
      return 1;
    }
  }
  return result;
}

__int64 __fastcall sub_312030(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r12d
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[3] = __readfsqword(0x28u);
  if ( !*(_QWORD *)a2 )
    return 7;
  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == -1 )
    return 6;
  if ( v2 == 27 )
  {
    if ( *(_QWORD *)(a2 + 176) )
      return 7;
    v3 = 3;
  }
  else
  {
    v3 = 2;
  }
  QT::QFont::QFont((QT::QFont *)v5);
  if ( !sub_4EBE10(v5, 0, *(_QWORD *)(a2 + 168)) || (unsigned int)QT::QFont::pointSize((QT::QFont *)v5) == 10 )
  {
    QT::QFont::~QFont((QT::QFont *)v5);
    return 7;
  }
  QT::QFont::~QFont((QT::QFont *)v5);
  return v3;
}

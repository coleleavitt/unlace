unsigned __int64 __fastcall sub_513560(__int64 a1)
{
  __int64 v2; // [rsp+0h] [rbp-28h] BYREF
  __int128 v3; // [rsp+8h] [rbp-20h]
  unsigned __int64 v4; // [rsp+18h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v2 = 0;
  v3 = 0;
  if ( (unsigned __int8)sub_5132B0(a1, (__int64)&v2) )
    sub_47C5A0((QT::QGuiApplication *)(QT::QCoreApplication::self + 2), (__int64)&v2, 0);
  if ( v2 )
  {
    *(_QWORD *)&v3 = 0;
    qfree(v2, (const char *)&v2);
  }
  return v4 - __readfsqword(0x28u);
}

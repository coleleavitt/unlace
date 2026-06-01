__int64 __fastcall sub_507ED0()
{
  unsigned int v0; // ebx
  int v1; // eax

  v1 = sub_1698A0(0, (int)"ICON WARNING\nAUTOHIDE NONE\nHIDECANCEL\n@0:1464[]\nReset hidden messages?");
  LOBYTE(v0) = v1 > 0;
  if ( v1 > 0 )
    (*(void (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 200LL))(QT::QCoreApplication::self + 2);
  return v0;
}

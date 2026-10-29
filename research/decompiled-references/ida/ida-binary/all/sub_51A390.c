bool __fastcall sub_51A390(QT::QKeyEvent *a1)
{
  int v1; // eax
  int v2; // edx

  v1 = QT::QKeyEvent::modifiers(a1);
  v2 = *((_DWORD *)a1 + 16);
  if ( v1 == 0x4000000 )
    return (unsigned int)(v2 - 16777220) <= 1;
  else
    return v2 == 75 && v1 == 0x8000000;
}

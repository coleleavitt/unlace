__int64 __fastcall sub_47B6A0(QT::QGuiApplication *a1, __int64 a2)
{
  QT::QGuiApplication *v2; // rbp
  int v3; // eax
  unsigned int v4; // eax
  int v5; // ebx
  int v6; // edx
  int v7; // edx
  __int64 result; // rax

  v2 = a1;
  if ( !a2 )
    goto LABEL_5;
  v3 = *(unsigned __int16 *)(a2 + 8);
  if ( (unsigned int)(v3 - 2) <= 3 )
  {
    v4 = *(_DWORD *)(a2 + 32);
  }
  else
  {
    if ( (unsigned int)(v3 - 6) > 1 && v3 != 51 )
    {
LABEL_5:
      v4 = QT::QGuiApplication::keyboardModifiers(a1);
      a2 = 0;
      goto LABEL_6;
    }
    a1 = (QT::QGuiApplication *)a2;
    v4 = QT::QKeyEvent::modifiers((QT::QKeyEvent *)a2);
    a2 = 0;
  }
LABEL_6:
  v5 = (v4 >> 25) & 1 | 2;
  if ( (v4 & 0x8000000) == 0 )
    v5 = (v4 >> 25) & 1;
  if ( !*((_BYTE *)v2 + 531) && (v4 & 0x4000000) != 0 )
    v5 |= 4u;
  v6 = v5;
  if ( (v4 & 0x10000000) != 0 )
  {
    LOBYTE(v6) = v5 | 0x80;
    v5 = v6;
  }
  if ( a2 )
    v7 = *(_DWORD *)(a2 + 68);
  else
    LOBYTE(v7) = QT::QGuiApplication::mouseButtons(a1);
  result = v5 | (8 * (v7 & 1u));
  if ( (v7 & 2) != 0 )
    result = v5 | (8 * (v7 & 1)) | 0x10u;
  if ( (v7 & 4) != 0 )
    return (unsigned int)result | 0x20;
  return result;
}

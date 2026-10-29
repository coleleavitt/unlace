__int64 __fastcall sub_271FC0(QT::QGuiApplication *a1)
{
  __int64 result; // rax
  __int64 v2; // rax

  result = QT::QGuiApplication::mouseButtons(a1);
  if ( (result & 1) != 0 )
  {
    result = QT::QGuiApplication::keyboardModifiers(a1);
    if ( (result & 0x2000000) == 0 )
    {
      v2 = sub_277DF0();
      return sub_278DE0(v2, a1);
    }
  }
  return result;
}

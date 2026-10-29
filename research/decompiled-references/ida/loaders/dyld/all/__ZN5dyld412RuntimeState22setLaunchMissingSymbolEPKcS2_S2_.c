void __fastcall dyld4::RuntimeState::setLaunchMissingSymbol(
        dyld4::RuntimeState *this,
        const char *a2,
        const char *a3,
        const char *a4)
{
  _QWORD *v4; // x8

  v4 = gProcessInfo;
  *((_QWORD *)gProcessInfo + 15) = 4;
  v4[16] = a4;
  v4[17] = a3;
  v4[18] = a2;
}

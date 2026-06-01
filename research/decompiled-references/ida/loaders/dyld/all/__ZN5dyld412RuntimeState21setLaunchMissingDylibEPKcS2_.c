void __fastcall dyld4::RuntimeState::setLaunchMissingDylib(dyld4::RuntimeState *this, const char *a2, const char *a3)
{
  _QWORD *v3; // x8

  v3 = gProcessInfo;
  *((_QWORD *)gProcessInfo + 15) = 1;
  v3[16] = a3;
  v3[17] = a2;
  v3[18] = 0;
}

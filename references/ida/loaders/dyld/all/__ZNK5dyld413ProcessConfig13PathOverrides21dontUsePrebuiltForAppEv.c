bool __fastcall dyld4::ProcessConfig::PathOverrides::dontUsePrebuiltForApp(dyld4::ProcessConfig::PathOverrides *this)
{
  return *(_QWORD *)this
      || *((_QWORD *)this + 1)
      || *((_QWORD *)this + 4)
      || *((_QWORD *)this + 5)
      || *((_QWORD *)this + 12)
      || *((_QWORD *)this + 13)
      || *((_QWORD *)this + 11)
      || *((_QWORD *)this + 10)
      || *((_QWORD *)this + 6)
      || *((_QWORD *)this + 7) != 0;
}

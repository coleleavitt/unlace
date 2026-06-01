__int64 __fastcall dyld4::APIs::dyld_is_simulator_platform(dyld4::APIs *this, __int64 a2)
{
  int v2; // w21
  __int64 isSimulatorPlatform; // x0
  __int64 v5; // x20

  v2 = a2;
  isSimulatorPlatform = dyld3::MachOFile::isSimulatorPlatform(a2, 0);
  v5 = isSimulatorPlatform;
  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 184LL) )
    dyld4::RuntimeState::log(this, "dyld_is_simulator_platform(%d) => %d\n", v2, isSimulatorPlatform);
  return v5;
}

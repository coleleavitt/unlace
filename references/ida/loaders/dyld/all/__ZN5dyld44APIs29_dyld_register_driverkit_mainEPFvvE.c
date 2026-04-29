dyld4::RuntimeState *__fastcall dyld4::APIs::_dyld_register_driverkit_main(
        dyld4::RuntimeState *this,
        void (__fastcall *a2)())
{
  dyld4::RuntimeState *v3; // x19
  __int64 v4; // x8
  __int64 _28; // [xsp+28h] [xbp+8h]

  v3 = this;
  v4 = *((_QWORD *)this + 1);
  if ( *(_BYTE *)(v4 + 184) )
  {
    this = (dyld4::RuntimeState *)dyld4::RuntimeState::log(this, "_dyld_register_driverkit_main(%p)\n", a2);
    v4 = *((_QWORD *)v3 + 1);
  }
  if ( *(_DWORD *)(v4 + 68) == 10 )
  {
    if ( *((_QWORD *)v3 + 90) )
      dyld4::halt((dyld4 *)"_dyld_register_driverkit_main() may only be called once", (const char *)a2);
    *((_QWORD *)v3 + 90) = a2;
  }
  else
  {
    if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return (dyld4::RuntimeState *)dyld4::RuntimeState::log(
                                    v3,
                                    "_dyld_register_driverkit_main() can only be called in DriverKit processes\n");
  }
  return this;
}

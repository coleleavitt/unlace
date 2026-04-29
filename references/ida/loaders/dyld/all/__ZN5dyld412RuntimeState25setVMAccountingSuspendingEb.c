__int64 __fastcall dyld4::RuntimeState::setVMAccountingSuspending(__int64 this, int a2)
{
  __int64 v3; // x20
  bool v4; // zf
  int v5; // w21
  int *v6; // x0
  size_t v7; // [xsp+10h] [xbp-30h] BYREF
  int v8; // [xsp+18h] [xbp-28h] BYREF
  int v9; // [xsp+1Ch] [xbp-24h] BYREF

  if ( *(unsigned __int8 *)(this + 824) != a2 )
  {
    v3 = this;
    if ( *(_BYTE *)(*(_QWORD *)(this + 8) + 182LL) )
      dyld4::RuntimeState::log((dyld4::RuntimeState *)this, "set vm.footprint_suspend=%d\n", a2);
    v8 = 0;
    v9 = a2;
    v7 = 4;
    this = sysctlbyname("vm.footprint_suspend", &v8, &v7, &v9, 4u);
    if ( *(_BYTE *)(*(_QWORD *)(v3 + 8) + 182LL) )
      v4 = (_DWORD)this == 0;
    else
      v4 = 1;
    if ( !v4 )
    {
      v5 = this;
      v6 = __error();
      this = dyld4::RuntimeState::log((dyld4::RuntimeState *)v3, "vm.footprint_suspend => %d, errno=%d\n", v5, *v6);
    }
    *(_BYTE *)(v3 + 824) = a2;
  }
  return this;
}

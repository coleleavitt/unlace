__int64 __fastcall ___ZNK5dyld46Loader25findAndRunAllInitializersERNS_12RuntimeStateE_block_invoke(
        _QWORD *a1,
        unsigned int a2)
{
  dyld4::Loader *v3; // x20
  const void *v4; // x19
  __int64 result; // x0
  dyld4::RuntimeState *v6; // x21
  const char *v7; // x0

  v3 = (dyld4::Loader *)a1[4];
  v4 = (const void *)(a1[5] + a2);
  result = (*(__int64 (__fastcall **)(_QWORD, const void *, _QWORD))(**(_QWORD **)(a1[6] + 120LL) + 80LL))(
             *(_QWORD *)(a1[6] + 120LL),
             v4,
             0);
  v6 = (dyld4::RuntimeState *)a1[6];
  if ( *(_BYTE *)(*((_QWORD *)v6 + 1) + 183LL) )
  {
    v7 = (const char *)dyld4::Loader::path(v3);
    return dyld4::RuntimeState::log(v6, "registering old style destructor %p for %s\n", v4, v7);
  }
  return result;
}

__int64 __fastcall dyld4::RuntimeState::notifyDebuggerUnload(dyld4::RuntimeState *a1, __int64 *a2)
{
  __int64 v4; // x24
  __int64 v5; // x0
  __int64 v6; // x8
  char *v7; // x20
  __int64 v8; // x21
  __int64 v9; // x25
  __int64 *v10; // x26
  __int64 v11; // x27
  dyld4::Loader *v12; // x22
  __int64 Address; // x23
  __int64 v14; // x0
  dyld4 *v15; // x0
  const mach_header *v16; // x1
  _QWORD v19[6]; // [xsp+8h] [xbp-88h] BYREF

  v19[0] = _NSConcreteStackBlock;
  v19[1] = 0x40000000;
  v19[2] = ___ZN5dyld412RuntimeState20notifyDebuggerUnloadERKNSt3__14spanIPKNS_6LoaderELm18446744073709551615EEE_block_invoke;
  v19[3] = &__block_descriptor_tmp_65;
  v19[4] = a1;
  v19[5] = a2;
  dyld4::RuntimeState::withCurrentProcessSnapshot((__int64)a1, (__int64)v19);
  v4 = a2[1];
  v5 = __chkstk_darwin();
  v7 = (char *)&v19[-1] - ((v6 + 23) & 0xFFFFFFFFFFFFFFF0LL);
  if ( !v4 )
    dyld4::RuntimeState::notifyDebuggerUnload(v5);
  v8 = 0;
  v9 = *a2;
  v10 = (__int64 *)(v7 + 8);
  v11 = 8 * v4;
  do
  {
    v12 = *(dyld4::Loader **)(v9 + 8 * v8);
    Address = dyld4::Loader::loadAddress(v12, a1);
    v14 = dyld4::Loader::path(v12);
    if ( v4 == v8 )
      dyld4::RuntimeState::notifyDebuggerUnload(v14);
    ++v8;
    *(v10 - 1) = Address;
    *v10 = v14;
    v10[1] = 0;
    v15 = (dyld4 *)dyld4::Loader::loadAddress(v12, a1);
    dyld4::removeImageFromAllImages(v15, v16);
    v10 += 3;
    v11 -= 8;
  }
  while ( v11 );
  return (*((__int64 (__fastcall **)(__int64, __int64, char *))gProcessInfo + 2))(1, v8, v7);
}

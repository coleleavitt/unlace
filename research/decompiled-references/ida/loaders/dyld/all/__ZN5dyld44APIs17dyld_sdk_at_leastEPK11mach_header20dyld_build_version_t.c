__int64 __fastcall dyld4::APIs::dyld_sdk_at_least(dyld4::RuntimeState *a1, const void *a2, __int64 a3)
{
  __int64 v6; // x19
  _QWORD v8[6]; // [xsp+20h] [xbp-70h] BYREF
  __int64 v9; // [xsp+50h] [xbp-40h] BYREF
  __int64 *v10; // [xsp+58h] [xbp-38h]
  __int64 v11; // [xsp+60h] [xbp-30h]
  char v12; // [xsp+68h] [xbp-28h]

  v9 = 0;
  v10 = &v9;
  v11 = 0x2000000000LL;
  v12 = 0;
  v8[0] = _NSConcreteStackBlock;
  v8[1] = 0x40000000;
  v8[2] = ___ZN5dyld44APIs17dyld_sdk_at_leastEPK11mach_header20dyld_build_version_t_block_invoke;
  v8[3] = &unk_966F0;
  v8[4] = &v9;
  v8[5] = dyld4::APIs::mapFromVersionSet(a1, a3);
  dyld4::APIs::forEachImageVersion(a1, a2, v8);
  if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 184LL) )
    dyld4::RuntimeState::log(
      a1,
      "dyld_sdk_at_least(%p, <%d,0x%08X>) => %d\n",
      a2,
      a3,
      HIDWORD(a3),
      *((unsigned __int8 *)v10 + 24));
  v6 = *((unsigned __int8 *)v10 + 24);
  _Block_object_dispose(&v9, 8);
  return v6;
}

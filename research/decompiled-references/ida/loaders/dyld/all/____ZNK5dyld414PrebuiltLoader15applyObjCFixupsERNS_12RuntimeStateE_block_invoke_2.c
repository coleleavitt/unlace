dyld4::RuntimeState *__fastcall ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_2(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // x9
  unsigned __int64 v3; // x8
  dyld4::PrebuiltLoader::BindTargetRef *v6; // x0
  const char *v7; // x21
  __int64 v8; // x21
  dyld4::RuntimeState *result; // x0
  const char **v10; // x19

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  v3 = *(unsigned int *)(v2 + 24);
  *(_DWORD *)(v2 + 24) = v3 + 1;
  if ( *(_QWORD *)(a1 + 56) <= v3 )
    ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_2_cold_1();
  v6 = (dyld4::PrebuiltLoader::BindTargetRef *)(*(_QWORD *)(a1 + 40) + 8 * v3);
  if ( (*(_QWORD *)v6 & 0x8000000000000000LL) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    v7 = (const char *)(v8
                      + *(int *)(v8
                               + (unsigned int)(*(_DWORD *)(v8 + 16) + 1)
                               + *(unsigned int *)(v8 + 4)
                               + 4LL
                               * (unsigned int)dyld4::PrebuiltLoader::BindTargetRef::value(
                                                 v6,
                                                 *(dyld4::RuntimeState **)(a1 + 72))
                               + 1056));
  }
  else
  {
    v7 = (const char *)dyld4::PrebuiltLoader::BindTargetRef::value(v6, *(dyld4::RuntimeState **)(a1 + 72));
  }
  result = *(dyld4::RuntimeState **)(a1 + 72);
  v10 = (const char **)(*(_QWORD *)(a1 + 80) + a2);
  if ( *(_BYTE *)(*((_QWORD *)result + 1) + 182LL) )
    result = (dyld4::RuntimeState *)dyld4::RuntimeState::log(
                                      result,
                                      "fixup: *0x%012lX = 0x%012lX <objc-selector '%s'>\n",
                                      v10,
                                      v7,
                                      v7);
  *v10 = v7;
  return result;
}

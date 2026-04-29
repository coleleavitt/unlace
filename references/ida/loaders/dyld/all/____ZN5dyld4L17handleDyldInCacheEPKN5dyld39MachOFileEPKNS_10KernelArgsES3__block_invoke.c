__int64 __fastcall ___ZN5dyld4L17handleDyldInCacheEPKN5dyld39MachOFileEPKNS_10KernelArgsES3__block_invoke(
        __int64 result,
        __int64 a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x8
  unsigned __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x11
  __int64 v8; // x12
  _QWORD *v9; // x8

  v3 = result;
  if ( *(_BYTE *)(result + 48) || (result = _platform_strcmp(*(const char **)(a2 + 40), "__DATA_DIRTY"), (_DWORD)result) )
  {
    v4 = *(_QWORD **)(*(_QWORD *)(v3 + 32) + 8LL);
    v5 = v4[7];
    if ( v5 >= v4[6] )
      ___ZN5dyld4L17handleDyldInCacheEPKN5dyld39MachOFileEPKNS_10KernelArgsES3__block_invoke_cold_1();
    v6 = *(_QWORD *)(a2 + 24);
    v7 = *(_QWORD *)(v3 + 40) + *(_QWORD *)(a2 + 16);
    v8 = v4[5];
    v4[7] = v5 + 1;
    v9 = (_QWORD *)(v8 + 16 * v5);
    *v9 = v7;
    v9[1] = v6;
  }
  return result;
}

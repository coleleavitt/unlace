__int64 __fastcall ___ZN5dyld46Loader11forEachPathER11DiagnosticsRNS_12RuntimeStateEPKcRKNS0_11LoadOptionsEU13block_pointerFvS6_NS_13ProcessConfig13PathOverrides4TypeERbE_block_invoke(
        __int64 a1,
        char *a2,
        int a3)
{
  int v4; // w8
  __int64 v5; // x0
  __int64 result; // x0
  char v7[1024]; // [xsp+8h] [xbp-818h] BYREF
  char __dst[1024]; // [xsp+408h] [xbp-418h] BYREF
  __int64 vars8; // [xsp+828h] [xbp+8h]

  if ( a3 != 9 || *(_BYTE *)(*(_QWORD *)(a1 + 48) + 1LL) || (v4 = **(unsigned __int8 **)(a1 + 56), v4 == 47) || v4 == 64 )
  {
    v5 = *(_QWORD *)(a1 + 64);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return dyld4::Loader::forEachResolvedAtPathVar(v5, a2);
  }
  else
  {
    strcpy(__dst, "@rpath/");
    strlcat(__dst, a2, 0x400u);
    result = dyld4::Loader::forEachResolvedAtPathVar(*(_QWORD *)(a1 + 64), __dst);
    if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL) )
    {
      strcpy(v7, "/usr/lib/");
      strlcat(v7, *(const char **)(a1 + 56), 0x400u);
      result = (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 24LL) )
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 8LL) + 169LL) )
          return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
      }
    }
  }
  return result;
}

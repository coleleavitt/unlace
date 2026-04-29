void *__fastcall ___ZN5dyld414PrebuiltLoader9serializeER11DiagnosticsRNS_12RuntimeStateERKNS_16JustInTimeLoaderENS_6Loader9LoaderRefEU13block_pointerFvjjRKNS8_14ResolvedSymbolEERKNS_12PrebuiltObjCERKNS_13PrebuiltSwiftERNS_13BumpAllocatorE_block_invoke(
        __int64 a1,
        __int64 a2)
{
  dyld4::BumpAllocator *v4; // x0
  __int64 v5; // x8
  __int64 v6; // x9
  __int64 *v7; // x9
  unsigned __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x8
  dyld4::BumpAllocator *v11; // x20
  const void *v12; // x19
  size_t v13; // x21
  __int64 v14; // x22
  void *v15; // x0
  __int64 _28; // [xsp+28h] [xbp+8h]

  v4 = *(dyld4::BumpAllocator **)(a1 + 32);
  v5 = *((_QWORD *)v4 + 2);
  v6 = *(_QWORD *)v4;
  if ( (((_BYTE)v5 - (unsigned __int8)*(_QWORD *)v4) & 7) != 0 )
  {
    v4 = dyld4::BumpAllocator::zeroFill(v4, (char *)(8LL - (((_BYTE)v5 - (unsigned __int8)*(_QWORD *)v4) & 7)));
    v7 = *(__int64 **)(a1 + 32);
    v5 = v7[2];
    v6 = *v7;
  }
  v8 = v5 - (*(_QWORD *)(a1 + 40) + v6);
  v9 = **(_QWORD **)(a1 + 48) + *(_QWORD *)(a1 + 56);
  *(_WORD *)(v9 + 22) = v8;
  if ( v8 >= 0x10000 )
    ___ZN5dyld414PrebuiltLoader9serializeER11DiagnosticsRNS_12RuntimeStateERKNS_16JustInTimeLoaderENS_6Loader9LoaderRefEU13block_pointerFvjjRKNS8_14ResolvedSymbolEERKNS_12PrebuiltObjCERKNS_13PrebuiltSwiftERNS_13BumpAllocatorE_block_invoke_cold_2(v4);
  *(_WORD *)(v9 + 20) = *(_WORD *)(v9 + 20) & 0xF | (16 * *(_WORD *)(a2 + 16));
  v10 = *(_QWORD *)(a2 + 16);
  if ( !v10 )
    ___ZN5dyld414PrebuiltLoader9serializeER11DiagnosticsRNS_12RuntimeStateERKNS_16JustInTimeLoaderENS_6Loader9LoaderRefEU13block_pointerFvjjRKNS8_14ResolvedSymbolEERKNS_12PrebuiltObjCERKNS_13PrebuiltSwiftERNS_13BumpAllocatorE_block_invoke_cold_1(v4);
  v11 = *(dyld4::BumpAllocator **)(a1 + 32);
  v12 = *(const void **)a2;
  v13 = 16 * v10;
  v14 = *((_QWORD *)v11 + 2) - *(_QWORD *)v11;
  dyld4::BumpAllocator::zeroFill(v11, (char *)(16 * v10));
  v15 = (void *)(*(_QWORD *)v11 + v14);
  if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return _platform_memmove(v15, v12, v13);
}

__int64 __fastcall ___ZN5dyld412RuntimeState13setMainLoaderEPKNS_6LoaderE_block_invoke(__int64 result, __int64 a2)
{
  __int64 v2; // x19
  dyld4::RuntimeState *v3; // x20
  vm_size_t v4; // x21
  __int64 v5; // x22
  int v6; // w23
  const char *v7; // x0
  __int64 v8; // x8
  __int64 v9; // x10
  __int64 v10; // x8
  __int64 v11; // [xsp+18h] [xbp-48h]

  v2 = result;
  v3 = *(dyld4::RuntimeState **)(result + 40);
  v4 = (*(_QWORD *)(a2 + 8) + vm_page_size - 1) & -(__int64)vm_page_size;
  if ( !v4 )
  {
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) )
      v4 = 0;
    else
      v4 = *(_QWORD *)(result + 56);
  }
  if ( *(_BYTE *)(*((_QWORD *)v3 + 1) + 181LL) )
  {
    v5 = *(_QWORD *)(result + 48) + *(_QWORD *)(a2 + 16);
    v6 = *(_DWORD *)(a2 + 52);
    v7 = (const char *)dyld3::MachOLoaded::segmentName(
                         *(dyld3::MachOLoaded **)(result + 56),
                         *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL));
    v8 = 120;
    if ( (v6 & 4) == 0 )
      v8 = 46;
    v9 = 119;
    if ( (v6 & 2) == 0 )
      v9 = 46;
    v11 = v8;
    v10 = 114;
    if ( (v6 & 1) == 0 )
      v10 = 46;
    result = dyld4::RuntimeState::log(v3, "%14s (%c%c%c) 0x%012llX->0x%012llX \n", v7, v10, v9, v11, v5, v4 + v5);
  }
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 32) + 8LL) + 24LL);
  return result;
}

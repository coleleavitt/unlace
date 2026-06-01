__int64 __fastcall ___ZN5dyld44APIs17findImageMappedAtEPKvPPKN5dyld311MachOLoadedEPbPPKcPS2_PyPh_block_invoke_3(
        __int64 result)
{
  dyld4::RuntimeState *v1; // x20
  __int64 v2; // x8
  __int64 v3; // x19
  dyld4::Loader **v4; // x22
  __int64 v5; // x23
  dyld4::Loader **v6; // x24
  dyld4::Loader *v7; // x16
  dyld4::Loader *v8; // x21
  bool *v9; // x8
  void **v10; // x8
  unsigned __int64 *v11; // x8
  unsigned __int8 *v12; // x8
  unsigned __int8 v13; // [xsp+Fh] [xbp-41h] BYREF
  unsigned __int64 v14; // [xsp+10h] [xbp-40h] BYREF
  void *v15; // [xsp+18h] [xbp-38h] BYREF

  v1 = *(dyld4::RuntimeState **)(result + 40);
  v2 = *((_QWORD *)v1 + 6);
  if ( v2 )
  {
    v3 = result;
    v4 = *((dyld4::Loader ***)v1 + 5);
    v5 = 8 * v2;
    v6 = v4;
    while ( 1 )
    {
      v7 = *v6;
      if ( ((*((unsigned __int16 *)*v6 + 2) >> 1) & 1) == *(_BYTE *)(v3 + 104) )
      {
        v8 = *v6;
        v14 = 0;
        v15 = nullptr;
        v13 = 0;
        result = dyld4::Loader::contains(v7, v1, *(const void **)(v3 + 48), (const void **)&v15, &v14, &v13);
        if ( (_DWORD)result )
          break;
      }
      ++v6;
      ++v4;
      v5 -= 8;
      if ( !v5 )
        return result;
    }
    if ( *(_QWORD *)(v3 + 56) )
    {
      result = dyld4::Loader::loadAddress(v8, v1);
      **(_QWORD **)(v3 + 56) = result;
    }
    v9 = *(bool **)(v3 + 64);
    if ( v9 )
      *v9 = (*((_BYTE *)v8 + 4) & 0x20) != 0;
    if ( *(_QWORD *)(v3 + 72) )
    {
      result = dyld4::Loader::path(v8);
      **(_QWORD **)(v3 + 72) = result;
    }
    v10 = *(void ***)(v3 + 80);
    if ( v10 )
      *v10 = v15;
    v11 = *(unsigned __int64 **)(v3 + 88);
    if ( v11 )
      *v11 = v14;
    v12 = *(unsigned __int8 **)(v3 + 96);
    if ( v12 )
      *v12 = v13;
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 24LL) = 1;
  }
  return result;
}

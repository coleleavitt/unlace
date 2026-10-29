__int64 __fastcall ___ZN5dyld44APIs5dlsymEPvPKc_block_invoke(__int64 result)
{
  dyld4::RuntimeState *v1; // x20
  __int64 v2; // x8
  __int64 v3; // x19
  dyld4::Loader **v4; // x22
  __int64 v5; // x23
  dyld4::Loader **v6; // x24
  dyld4::Loader *v7; // x21

  v1 = *(dyld4::RuntimeState **)(result + 56);
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
      result = dyld4::Loader::hiddenFromFlat(*v6, 0);
      if ( (result & 1) == 0 )
      {
        result = dyld4::Loader::hasExportedSymbol(
                   v7,
                   (dyld3::MachOFile *)(*(_QWORD *)(*(_QWORD *)(v3 + 32) + 8LL) + 40LL),
                   v1,
                   *(const unsigned __int8 **)(v3 + 64),
                   1,
                   (dyld4::Loader **)(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL) + 40LL),
                   0);
        if ( (_DWORD)result )
          break;
      }
      ++v6;
      ++v4;
      v5 -= 8;
      if ( !v5 )
        return result;
    }
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8LL) + 24LL) = 1;
  }
  return result;
}

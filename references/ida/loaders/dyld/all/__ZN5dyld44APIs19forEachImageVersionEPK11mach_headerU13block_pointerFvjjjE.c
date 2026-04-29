void __fastcall dyld4::APIs::forEachImageVersion(__int64 a1, unsigned int *a2, __int64 a3)
{
  const dyld3::MachOFile *v6; // x2
  __int64 v7; // x8
  vm_address_t v8; // [xsp+8h] [xbp-28h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v8);
  v7 = *(_QWORD *)(a1 + 8);
  if ( *(unsigned int **)(v7 + 8) == a2 )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a3 + 16))(
      a3,
      *(unsigned int *)(v7 + 68),
      *(unsigned int *)(v7 + 48),
      *(unsigned int *)(v7 + 56));
  }
  else if ( DyldSharedCache::inDyldCache(*(DyldSharedCache **)(v7 + 200), (const DyldSharedCache *)a2, v6) )
  {
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(a3 + 16))(
      a3,
      *(unsigned int *)(*(_QWORD *)(a1 + 8) + 328LL),
      *(unsigned int *)(*(_QWORD *)(a1 + 8) + 332LL),
      *(unsigned int *)(*(_QWORD *)(a1 + 8) + 332LL));
  }
  else if ( (unsigned int)dyld3::MachOFile::isMachO((dyld3::MachOFile *)a2, (Diagnostics *)&v8, a2[5] + 32LL) )
  {
    dyld4::APIs::forEachPlatform(a1, a2, a3);
  }
  Diagnostics::~Diagnostics(&v8);
}

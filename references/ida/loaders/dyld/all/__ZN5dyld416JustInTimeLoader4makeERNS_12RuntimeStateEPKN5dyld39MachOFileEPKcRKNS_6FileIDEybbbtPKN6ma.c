__int64 __fastcall dyld4::JustInTimeLoader::make(
        __int64 a1,
        dyld3::MachOFile *this,
        const char *a3,
        _OWORD *a4,
        __int64 a5,
        char a6,
        char a7,
        int a8,
        __int16 a9)
{
  unsigned int v15; // w0
  __int64 v16; // x8
  __int64 v17; // x24
  __int64 v18; // x20
  __int64 v19; // x22
  size_t v20; // x0
  __int64 v21; // x22
  const dyld3::MachOFile *v22; // x2
  char hasPlusLoadMethod; // w28
  char v24; // w21
  char hasSection; // w0
  __int128 v26; // q1
  __int16 v27; // w8
  _BOOL4 isDylib; // w0
  unsigned __int64 v29; // x8
  char *v30; // x0
  __int64 v31; // x9
  unsigned __int64 v32; // x8
  __int64 v33; // x23
  __int64 v34; // x24
  const char *v38; // [xsp+20h] [xbp-B0h]
  __int64 v39; // [xsp+28h] [xbp-A8h] BYREF
  bool v40; // [xsp+37h] [xbp-99h] BYREF
  vm_address_t v41[5]; // [xsp+38h] [xbp-98h] BYREF
  __int64 v42; // [xsp+60h] [xbp-70h] BYREF
  __int64 *v43; // [xsp+68h] [xbp-68h]
  __int64 v44; // [xsp+70h] [xbp-60h]
  char v45; // [xsp+78h] [xbp-58h]

  v40 = 1;
  v15 = dyld3::MachOFile::dependentDylibCount(this, &v40);
  LODWORD(v16) = v15 - 1;
  if ( v15 )
    v16 = (unsigned int)v16;
  else
    v16 = 1;
  v17 = 8 * v16 + 96;
  v18 = v15;
  if ( v40 )
    v19 = 0;
  else
    v19 = v15;
  v38 = a3;
  v20 = _platform_strlen(a3);
  v21 = lsl::Allocator::malloc(*(lsl::Allocator **)(a1 + 16), v20 + v19 + v17 + 1);
  dyld4::Loader::InitialOptions::InitialOptions(&v39);
  LOBYTE(v39) = DyldSharedCache::inDyldCache(*(DyldSharedCache **)(*(_QWORD *)(a1 + 8) + 200LL), this, v22);
  BYTE1(v39) = dyld3::MachOFile::hasObjC(this);
  Diagnostics::Diagnostics((Diagnostics *)v41);
  hasPlusLoadMethod = dyld3::MachOFile::hasPlusLoadMethod(this, (Diagnostics *)v41);
  Diagnostics::~Diagnostics(v41);
  BYTE2(v39) = hasPlusLoadMethod;
  v42 = 0;
  v43 = &v42;
  v44 = 0x2000000000LL;
  v45 = 0;
  v41[0] = (vm_address_t)_NSConcreteStackBlock;
  v41[1] = 0x40000000;
  v41[2] = (vm_address_t)___ZN5dyld4L12hasDataConstEPKN5dyld39MachOFileE_block_invoke;
  v41[3] = (vm_address_t)&unk_96240;
  v41[4] = (vm_address_t)&v42;
  dyld3::MachOFile::forEachSegment(this, (__int64)v41);
  v24 = *((_BYTE *)v43 + 24);
  _Block_object_dispose(&v42, 8);
  BYTE3(v39) = v24;
  BYTE4(v39) = a6 | a8;
  BYTE5(v39) = a7;
  if ( BYTE1(v39) )
    hasSection = dyld3::MachOFile::hasSection(this, "__DATA_CONST", "__objc_selrefs");
  else
    hasSection = 0;
  BYTE6(v39) = hasSection;
  HIBYTE(v39) = dyld3::MachOFile::enforceFormat(this, 16) ^ 1;
  dyld4::Loader::Loader(v21, (const dyld4::Loader::InitialOptions *)&v39, 0, 0, 0);
  *(_QWORD *)(v21 + 8) = this;
  v26 = a4[1];
  *(_OWORD *)(v21 + 32) = *a4;
  *(_OWORD *)(v21 + 48) = v26;
  *(_QWORD *)(v21 + 88) = 0;
  if ( v40 )
    v27 = 0;
  else
    v27 = v18;
  *(_QWORD *)(v21 + 16) = *(_QWORD *)(v21 + 16) & 0xFFFFFFFFFFF00000LL | (unsigned __int16)(v27 + v17);
  isDylib = dyld3::MachOFile::isDylib(this);
  v29 = 0;
  if ( isDylib )
  {
    v30 = dyld3::MachOFile::installName(this);
    v29 = (unsigned __int64)(_platform_strcmp(v30, v38) != 0) << 20;
  }
  *(_QWORD *)(v21 + 16) = *(_QWORD *)(v21 + 16) & 0x7FFFFFFF4FFFFFLL | v29 | ((unsigned __int64)v40 << 23);
  *(_QWORD *)(v21 + 24) = a5;
  if ( (dyld3::MachOFile::hasExportTrie(this, (unsigned int *)(v21 + 80), (unsigned int *)(v21 + 84)) & 1) == 0 )
    *(_QWORD *)(v21 + 80) = 0;
  *(_QWORD *)(v21 + 64) = 0;
  v31 = 0x400000;
  if ( !a8 )
    v31 = 0;
  v32 = v31 & 0xFF80000000FFFFFFLL
      | ((unsigned __int64)(a9 & 0x7FFF) << 24) & 0xFF80007FFFFFFFFFLL
      | ((unsigned __int64)(unsigned __int16)v18 << 39)
      | *(_QWORD *)(v21 + 16) & 0xFF80000000BFFFFFLL;
  *(_QWORD *)(v21 + 16) = v32;
  if ( (_DWORD)v18 )
  {
    v33 = 0;
    v34 = v21 + 88;
    do
    {
      *(_QWORD *)(v21 + 88 + 8 * v33) = 0;
      if ( !v40 )
        *(_BYTE *)dyld4::JustInTimeLoader::dependentKind((dyld4::JustInTimeLoader *)v21, v33) = 0;
      ++v33;
      v34 += 8;
    }
    while ( v18 != v33 );
    LOWORD(v32) = *(_WORD *)(v21 + 16);
  }
  strcpy((char *)(v21 + (unsigned __int16)v32), v38);
  dyld4::RuntimeState::add((dyld4::RuntimeState *)a1, (const dyld4::Loader *)v21);
  if ( a8 && !(_BYTE)v39 )
    *(_BYTE *)(a1 + 822) = 1;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 187LL) )
    dyld4::RuntimeState::log((dyld4::RuntimeState *)a1, "using JustInTimeLoader %p for %s\n", (const void *)v21, v38);
  return v21;
}

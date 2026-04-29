void __fastcall dyld4::RuntimeState::buildInterposingTables(dyld4::RuntimeState *this)
{
  __int64 v2; // x8
  dyld4::Loader **v3; // x22
  __int64 v4; // x27
  dyld4::Loader **v5; // x24
  dyld4::Loader *v6; // x20
  dyld3::MachOFile *v7; // x0
  dyld3::MachOFile *v8; // x21
  __int64 v9; // x8
  dyld4::Loader **v10; // x21
  __int64 v11; // x24
  dyld4::Loader *v12; // t1
  __int64 v13; // x0
  _QWORD v14[7]; // [xsp+0h] [xbp-1A0h] BYREF
  _QWORD v15[7]; // [xsp+38h] [xbp-168h] BYREF
  vm_address_t v16; // [xsp+70h] [xbp-130h] BYREF
  __int64 v17; // [xsp+78h] [xbp-128h] BYREF
  __int64 *v18; // [xsp+80h] [xbp-120h]
  __int64 v19; // [xsp+88h] [xbp-118h]
  __int64 (__fastcall *v20)(); // [xsp+90h] [xbp-110h]
  __int64 (__fastcall *v21)(); // [xsp+98h] [xbp-108h]
  char *v22; // [xsp+A0h] [xbp-100h]
  __int64 v23; // [xsp+A8h] [xbp-F8h]
  __int64 v24; // [xsp+B0h] [xbp-F0h]
  vm_address_t address; // [xsp+B8h] [xbp-E8h]
  vm_size_t size; // [xsp+C0h] [xbp-E0h]
  __int64 v27; // [xsp+C8h] [xbp-D8h] BYREF
  __int64 *v28; // [xsp+D0h] [xbp-D0h]
  __int64 v29; // [xsp+D8h] [xbp-C8h]
  int v30; // [xsp+E0h] [xbp-C0h]
  char v31; // [xsp+E8h] [xbp-B8h] BYREF

  if ( *(_BYTE *)(*((_QWORD *)this + 1) + 175LL) )
  {
    v27 = 0;
    v28 = &v27;
    v29 = 0x2000000000LL;
    v30 = 0;
    v17 = 0;
    v18 = &v17;
    v19 = 0x5002000000LL;
    v20 = __Block_byref_object_copy__46;
    v21 = __Block_byref_object_dispose__47;
    v22 = &v31;
    v23 = 8;
    v24 = 0;
    address = 0;
    size = 0;
    v2 = *((_QWORD *)this + 6);
    if ( v2 )
    {
      v3 = *((dyld4::Loader ***)this + 5);
      v4 = 8 * v2;
      v5 = v3;
      do
      {
        v6 = *v5;
        v7 = (dyld3::MachOFile *)dyld4::Loader::analyzer(*v5, this);
        if ( (*((_WORD *)v6 + 2) & 2) == 0 )
        {
          v8 = v7;
          if ( dyld3::MachOFile::isDylib(v7) )
          {
            Diagnostics::Diagnostics((Diagnostics *)&v16);
            v15[0] = _NSConcreteStackBlock;
            v15[1] = 0x40000000;
            v15[2] = ___ZN5dyld412RuntimeState22buildInterposingTablesEv_block_invoke;
            v15[3] = &unk_957A0;
            v15[4] = &v27;
            v15[5] = &v17;
            v15[6] = v6;
            dyld3::MachOFile::forEachInterposingSection(v8, &v16, v15);
            Diagnostics::~Diagnostics(&v16);
          }
        }
        ++v5;
        ++v3;
        v4 -= 8;
      }
      while ( v4 );
      if ( *((_DWORD *)v28 + 6) )
      {
        lsl::Vector<dyld4::InterposeTupleAll>::reserve((char *)this + 128);
        lsl::Vector<dyld4::InterposeTupleSpecific>::reserve((char *)this + 160, *((unsigned int *)v28 + 6));
        v9 = v18[7];
        if ( v9 )
        {
          v10 = (dyld4::Loader **)v18[5];
          v11 = 8 * v9;
          do
          {
            v12 = *v10++;
            Diagnostics::Diagnostics((Diagnostics *)&v16);
            v13 = dyld4::Loader::analyzer(v12, this);
            v14[0] = _NSConcreteStackBlock;
            v14[1] = 0x40000000;
            v14[2] = ___ZN5dyld412RuntimeState22buildInterposingTablesEv_block_invoke_2;
            v14[3] = &__block_descriptor_tmp_50;
            v14[4] = this;
            v14[5] = v12;
            v14[6] = v13;
            dyld3::MachOFile::forEachInterposingSection(v13, &v16, v14);
            Diagnostics::~Diagnostics(&v16);
            v11 -= 8;
          }
          while ( v11 );
        }
      }
    }
    _Block_object_dispose(&v17, 8);
    v24 = 0;
    if ( address )
      vm_deallocate(mach_task_self_, address, size);
    _Block_object_dispose(&v27, 8);
  }
}

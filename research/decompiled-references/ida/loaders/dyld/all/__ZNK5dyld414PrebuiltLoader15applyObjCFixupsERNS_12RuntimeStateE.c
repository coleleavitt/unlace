void __fastcall dyld4::PrebuiltLoader::applyObjCFixups(dyld4::PrebuiltLoader *this, dyld4::RuntimeState *a2)
{
  __int64 v3; // x8
  char *v5; // x20
  dyld3::MachOAnalyzer *Address; // x21
  dyld3::MachOFile *v7; // x0
  int v8; // w22
  char *v9; // x8
  __int64 v10; // x0
  __int64 v11; // x24
  __int64 v12; // x8
  __int64 v13; // x9
  __int64 v14; // x2
  __int64 v15; // x8
  __int64 v16; // x9
  char *v17; // x10
  _QWORD v18[8]; // [xsp+10h] [xbp-260h] BYREF
  _QWORD v19[8]; // [xsp+50h] [xbp-220h] BYREF
  _QWORD v20[8]; // [xsp+90h] [xbp-1E0h] BYREF
  int v21; // [xsp+D0h] [xbp-1A0h]
  _QWORD v22[7]; // [xsp+D8h] [xbp-198h] BYREF
  _QWORD v23[11]; // [xsp+110h] [xbp-160h] BYREF
  _QWORD v24[13]; // [xsp+168h] [xbp-108h] BYREF
  _QWORD *v25; // [xsp+1D0h] [xbp-A0h] BYREF
  _QWORD *v26; // [xsp+1D8h] [xbp-98h]
  __int64 v27; // [xsp+1E0h] [xbp-90h]
  int v28; // [xsp+1E8h] [xbp-88h]
  __int64 v29; // [xsp+1F0h] [xbp-80h] BYREF
  _BYTE v30[24]; // [xsp+1F8h] [xbp-78h] BYREF
  dyld3::MachOAnalyzer *v31; // [xsp+210h] [xbp-60h] BYREF
  dyld3::MachOAnalyzer *v32; // [xsp+218h] [xbp-58h] BYREF

  if ( this )
  {
    v3 = *((unsigned int *)this + 8);
    if ( (_DWORD)v3 )
    {
      v5 = (char *)this + v3;
      Address = (dyld3::MachOAnalyzer *)dyld4::PrebuiltLoader::loadAddress(this, a2);
      v31 = Address;
      v32 = Address;
      v7 = (dyld3::MachOFile *)dyld4::PrebuiltLoader::loadAddress(this, a2);
      v8 = dyld3::MachOFile::pointerSize(v7);
      v9 = (char *)Address + *(_QWORD *)v5;
      *((_DWORD *)v9 + 1) |= 0x80u;
      if ( *(_BYTE *)(*((_QWORD *)a2 + 1) + 182LL) )
        dyld4::RuntimeState::log(a2, "fixup: *0x%012lX = 0x%012lX <objc-info preoptimized>\n", v9, *(_QWORD *)v9);
      dyld3::MachOAnalyzer::makeVMAddrConverter(Address, 1, (__int64)v30);
      v10 = dyld3::MachOFile::preferredLoadAddress(Address);
      v11 = v10;
      v29 = v10;
      v12 = *((unsigned int *)v5 + 16);
      if ( (_DWORD)v12 )
      {
        v13 = *(_QWORD *)(*((_QWORD *)a2 + 85) + 56LL) + *(_QWORD *)(*((_QWORD *)a2 + 1) + 200LL);
        v14 = *((unsigned int *)v5 + 13);
        v25 = nullptr;
        v26 = &v25;
        v27 = 0x2000000000LL;
        v28 = 0;
        v24[0] = _NSConcreteStackBlock;
        v24[1] = 0x40000000;
        v24[2] = ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke;
        v24[3] = &unk_96290;
        v24[6] = v14;
        v24[7] = v14;
        v24[4] = &v25;
        v24[5] = &v5[v12];
        v24[8] = v10;
        v24[9] = Address;
        v24[10] = v13;
        v24[11] = a2;
        v24[12] = v24;
        dyld3::MachOAnalyzer::forEachObjCProtocol(Address, *((_QWORD *)v5 + 4));
        _Block_object_dispose(&v25, 8);
      }
      v15 = *((unsigned int *)v5 + 18);
      if ( (_DWORD)v15 )
      {
        v16 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 248LL);
        v17 = &v5[*((unsigned int *)v5 + 17)];
        v25 = nullptr;
        v26 = &v25;
        v27 = 0x2000000000LL;
        v28 = 0;
        v23[0] = _NSConcreteStackBlock;
        v23[1] = 0x40000000;
        v23[2] = ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_2;
        v23[3] = &unk_962B8;
        v23[6] = v15;
        v23[7] = v15;
        v23[4] = &v25;
        v23[5] = v17;
        v23[8] = v16;
        v23[9] = a2;
        v23[10] = Address;
        dyld4::PrebuiltObjC::forEachSelectorReferenceToUnique(a2, this, v11, v5, v23);
        _Block_object_dispose(&v25, 8);
      }
      if ( v5[56] )
      {
        v22[0] = _NSConcreteStackBlock;
        v22[1] = 0x40000000;
        v22[2] = ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_3;
        v22[3] = &__block_descriptor_tmp_35;
        v22[4] = v11;
        v22[5] = Address;
        v22[6] = a2;
        v25 = v22;
        dyld3::MachOAnalyzer::forEachObjCClass(Address, *((_QWORD *)v5 + 2), *((unsigned int *)v5 + 11), v30, &v25);
      }
      if ( v5[57] )
      {
        v20[0] = _NSConcreteStackBlock;
        v20[1] = 0x40000000;
        v20[2] = ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_4;
        v20[3] = &__block_descriptor_tmp_36_1;
        v20[4] = &v29;
        v20[5] = &v32;
        v20[6] = &v31;
        v20[7] = a2;
        v21 = v8;
        v25 = v20;
        dyld3::MachOAnalyzer::forEachObjCClass(Address, *((_QWORD *)v5 + 2), *((unsigned int *)v5 + 11), v30, &v25);
      }
      if ( v5[58] )
      {
        v19[0] = _NSConcreteStackBlock;
        v19[1] = 0x40000000;
        v19[2] = ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_5;
        v19[3] = &__block_descriptor_tmp_38_1;
        v19[4] = &v29;
        v19[5] = &v32;
        v19[6] = &v31;
        v19[7] = a2;
        v25 = v19;
        dyld3::MachOAnalyzer::forEachObjCCategory(v32, *((_QWORD *)v5 + 3), *((unsigned int *)v5 + 12), v30, &v25);
      }
      if ( v5[59] )
      {
        v18[0] = _NSConcreteStackBlock;
        v18[1] = 0x40000000;
        v18[2] = ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_6;
        v18[3] = &__block_descriptor_tmp_39;
        v18[4] = &v29;
        v18[5] = &v32;
        v18[6] = &v31;
        v18[7] = a2;
        v25 = v18;
        dyld3::MachOAnalyzer::forEachObjCProtocol(v32, *((_QWORD *)v5 + 4));
      }
    }
  }
}

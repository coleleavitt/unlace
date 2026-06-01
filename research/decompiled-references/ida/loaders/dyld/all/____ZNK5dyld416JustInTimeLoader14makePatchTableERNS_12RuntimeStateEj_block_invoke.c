void __fastcall ___ZNK5dyld416JustInTimeLoader14makePatchTableERNS_12RuntimeStateEj_block_invoke(
        __int64 a1,
        unsigned int a2,
        const unsigned __int8 *a3,
        int a4)
{
  dyld4::Loader *v8; // x22
  int hasExportedSymbol; // w0
  __int64 v10; // x8
  __int64 Address; // x0
  dyld3::MachOAnalyzer *v12; // x20
  __int64 v13; // x0
  __int64 v14; // x22
  __int64 v15; // x21
  __int64 v16; // x8
  __int64 v17; // x9
  _QWORD *v18; // x8
  dyld3::MachOAnalyzer *v19; // x22
  __int64 v20; // x0
  dyld3::MachOAnalyzer *v21; // x23
  dyld3::MachOAnalyzer *v22; // x21
  __int64 v23; // x24
  __int64 v24; // x8
  __int64 v25; // x9
  dyld3::MachOAnalyzer **v26; // x8
  __int64 v27; // x24
  __int64 v28; // x8
  __int64 v29; // x9
  dyld3::MachOAnalyzer **v30; // x8
  dyld3::MachOAnalyzer *v31; // [xsp+0h] [xbp-60h] BYREF
  dyld4::Loader *v32[4]; // [xsp+8h] [xbp-58h] BYREF
  vm_address_t v33; // [xsp+28h] [xbp-38h] BYREF

  v8 = *(dyld4::Loader **)(a1 + 56);
  Diagnostics::Diagnostics((Diagnostics *)&v33);
  hasExportedSymbol = dyld4::Loader::hasExportedSymbol(
                        v8,
                        (dyld3::MachOFile *)&v33,
                        *(dyld4::RuntimeState **)(a1 + 64),
                        a3,
                        0,
                        v32,
                        0);
  v10 = 0;
  if ( hasExportedSymbol )
  {
    Address = dyld4::Loader::loadAddress(v32[0], *(dyld4::RuntimeState **)(a1 + 64));
    v12 = (dyld4::Loader *)((char *)v32[2] + Address);
    if ( a4 == 8 )
    {
      v19 = (dyld3::MachOAnalyzer *)Address;
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 40LL;
      v31 = v12;
      if ( dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::find(v20, &v31) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 96LL)
                                                                                                 + 16LL
                                                                                                 * *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 8LL) + 112LL) )
      {
        v21 = *(dyld3::MachOAnalyzer **)(a1 + 72);
        if ( (dyld3::MachOAnalyzer::isSwiftClass(v19, v12) & 1) == 0 )
        {
          v22 = (dyld3::MachOAnalyzer *)((char *)v21 + a2);
          if ( (dyld3::MachOAnalyzer::isSwiftClass(v21, v22) & 1) == 0 )
          {
            v23 = *(_QWORD *)(a1 + 64);
            lsl::Vector<dyld4::InterposeTupleAll>::reserve(v23 + 192, *(_QWORD *)(v23 + 208) + 1LL);
            v24 = *(_QWORD *)(v23 + 200);
            v25 = *(_QWORD *)(v23 + 208);
            *(_QWORD *)(v23 + 208) = v25 + 1;
            v26 = (dyld3::MachOAnalyzer **)(v24 + 16 * v25);
            *v26 = v22;
            v26[1] = v12;
            v27 = *(_QWORD *)(a1 + 64);
            lsl::Vector<dyld4::ObjCClassReplacement>::reserve(v27 + 224, *(_QWORD *)(v27 + 240) + 1LL);
            v28 = *(_QWORD *)(v27 + 232);
            v29 = *(_QWORD *)(v27 + 240);
            *(_QWORD *)(v27 + 240) = v29 + 1;
            v30 = (dyld3::MachOAnalyzer **)(v28 + 32 * v29);
            *v30 = v21;
            v30[1] = v22;
            v30[2] = v19;
            v30[3] = v12;
            v10 = 1;
            goto LABEL_10;
          }
        }
      }
    }
    else if ( a4 == 1 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 40LL;
      v31 = v12;
      if ( dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::find(v13, &v31) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 96LL)
                                                                                                 + 16LL
                                                                                                 * *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 112LL) )
      {
        v14 = *(_QWORD *)(a1 + 64);
        v15 = *(_QWORD *)(a1 + 72) + a2;
        lsl::Vector<dyld4::InterposeTupleAll>::reserve(v14 + 256, *(_QWORD *)(v14 + 272) + 1LL);
        v16 = *(_QWORD *)(v14 + 264);
        v17 = *(_QWORD *)(v14 + 272);
        *(_QWORD *)(v14 + 272) = v17 + 1;
        v18 = (_QWORD *)(v16 + 16 * v17);
        *v18 = v15;
        v18[1] = v12;
        v10 = 2;
        goto LABEL_10;
      }
    }
    v10 = (__int64)v12 - *(_QWORD *)(a1 + 88);
  }
LABEL_10:
  *(_QWORD *)(*(_QWORD *)(a1 + 80) + 8LL * (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 8LL) + 24LL))++) = v10;
  Diagnostics::~Diagnostics(&v33);
}

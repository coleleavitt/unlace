void __fastcall dyld4::RuntimeState::setUpTLVs(dyld4::RuntimeState *this, const dyld3::MachOAnalyzer *a2)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3
  __int64 v7; // x4
  __int64 v8; // x5
  __int64 v9; // x6
  __int64 v10; // x21
  __int64 v11; // x8
  unsigned __int64 v12; // x22
  bool v13; // w8
  int v14; // w0
  __int64 *v15; // x8
  int v16; // w1
  _QWORD v17[6]; // [xsp+0h] [xbp-100h] BYREF
  _QWORD v18[8]; // [xsp+30h] [xbp-D0h] BYREF
  bool v19; // [xsp+70h] [xbp-90h]
  vm_address_t v20; // [xsp+78h] [xbp-88h] BYREF
  __int64 v21; // [xsp+80h] [xbp-80h] BYREF
  __int64 *v22; // [xsp+88h] [xbp-78h]
  __int64 v23; // [xsp+90h] [xbp-70h]
  __int64 (__fastcall *v24)(); // [xsp+98h] [xbp-68h]
  __int64 (__fastcall *v25)(); // [xsp+A0h] [xbp-60h]
  const dyld3::MachOAnalyzer *v26; // [xsp+A8h] [xbp-58h]
  __int64 v27; // [xsp+B0h] [xbp-50h]

  v21 = 0;
  v22 = &v21;
  v23 = 0x4002000000LL;
  v24 = __Block_byref_object_copy__79;
  v25 = __Block_byref_object_dispose__80;
  v26 = a2;
  v27 = 0;
  Diagnostics::Diagnostics((Diagnostics *)&v20);
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 15) + 144LL))(*((_QWORD *)this + 15));
  v11 = *((_QWORD *)this + 1);
  v12 = *(_QWORD *)(v11 + 200);
  v13 = v12
     && v12 < (unsigned __int64)a2
     && v12 + DyldSharedCache::mappedSize(*(DyldSharedCache **)(v11 + 200), v4, v5, v6, v7, v8, v9) > (unsigned __int64)a2;
  v18[0] = _NSConcreteStackBlock;
  v18[1] = 0x40000000;
  v18[2] = ___ZN5dyld412RuntimeState9setUpTLVsEPKN5dyld313MachOAnalyzerE_block_invoke;
  v18[3] = &unk_958E0;
  v19 = v13;
  v18[4] = &v21;
  v18[5] = this;
  v18[6] = v10;
  v18[7] = v10;
  v14 = dyld3::MachOAnalyzer::forEachThreadLocalVariable(a2, &v20, v18);
  v15 = v22;
  *((_DWORD *)v22 + 14) = v14;
  *((_DWORD *)v15 + 15) = v16;
  v17[0] = _NSConcreteStackBlock;
  v17[1] = 0x40000000;
  v17[2] = ___ZN5dyld412RuntimeState9setUpTLVsEPKN5dyld313MachOAnalyzerE_block_invoke_2;
  v17[3] = &unk_95908;
  v17[4] = &v21;
  v17[5] = this;
  dyld4::RuntimeState::withTLVLock((__int64)this, (__int64)v17);
  Diagnostics::~Diagnostics(&v20);
  _Block_object_dispose(&v21, 8);
}

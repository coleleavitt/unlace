void __fastcall ___ZN5dyld44APIs16dlopen_preflightEPKc_block_invoke(_QWORD *a1, dyld3 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // x23
  __int64 v8; // x0
  __int64 v9; // x8
  __int64 v10; // x8
  _BOOL4 v11; // w22
  Diagnostics *v12; // x21
  const char *v13; // x0
  _QWORD v14[9]; // [xsp+18h] [xbp-A8h] BYREF
  __int64 v15; // [xsp+60h] [xbp-60h] BYREF
  __int64 *v16; // [xsp+68h] [xbp-58h]
  __int64 v17; // [xsp+70h] [xbp-50h]
  __int64 (__fastcall *v18)(__int64, __int64); // [xsp+78h] [xbp-48h]
  void (__fastcall *v19)(__int64); // [xsp+80h] [xbp-40h]
  vm_address_t v20; // [xsp+88h] [xbp-38h] BYREF

  v7 = a1[6];
  v15 = 0;
  v16 = &v15;
  v17 = 0x3002000000LL;
  v18 = __Block_byref_object_copy__7;
  v19 = __Block_byref_object_dispose__7;
  Diagnostics::Diagnostics((Diagnostics *)&v20);
  v8 = *(_QWORD *)(v7 + 8);
  v14[0] = _NSConcreteStackBlock;
  v14[1] = 0x40000000;
  v14[2] = ___ZN5dyld44APIs16dlopen_preflightEPKc_block_invoke_2;
  v14[3] = &unk_96908;
  v9 = a1[7];
  v14[6] = v7;
  v14[7] = v9;
  v10 = a1[4];
  v14[4] = &v15;
  v14[5] = v10;
  v14[8] = a4;
  dyld4::SyscallDelegate::withReadOnlyMappedFile(v8, (_DWORD)v16 + 40, a2, 1, (__int64)v14);
  if ( !*(_BYTE *)(*(_QWORD *)(a1[4] + 8LL) + 24LL) && Diagnostics::hasError((Diagnostics *)(v16 + 5)) )
  {
    v11 = Diagnostics::noError((Diagnostics *)(*(_QWORD *)(a1[5] + 8LL) + 40LL));
    v12 = (Diagnostics *)(*(_QWORD *)(a1[5] + 8LL) + 40LL);
    v13 = (const char *)Diagnostics::errorMessage((Diagnostics *)(v16 + 5));
    if ( v11 )
      Diagnostics::error(v12, "tried: '%s' (%s)", (const char *)a2, v13);
    else
      Diagnostics::appendError(v12, ", '%s' (%s)", (const char *)a2, v13);
  }
  _Block_object_dispose(&v15, 8);
  Diagnostics::~Diagnostics(&v20);
}

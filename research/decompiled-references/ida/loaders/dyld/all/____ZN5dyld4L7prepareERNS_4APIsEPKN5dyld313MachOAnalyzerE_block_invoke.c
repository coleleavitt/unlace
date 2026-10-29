void __fastcall ___ZN5dyld4L7prepareERNS_4APIsEPKN5dyld313MachOAnalyzerE_block_invoke(__int64 a1, const char *a2)
{
  dyld4::Loader *Loader; // x0
  dyld4::Loader *v5; // x21
  __int64 v6; // x20
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x19
  __int64 v10; // x8
  __int64 v11; // x9
  dyld4::RuntimeState *v12; // x19
  const char *v13; // x0
  dyld4 *v14; // x0
  const char *v15; // x1
  vm_address_t v16; // [xsp+18h] [xbp-28h] BYREF

  Diagnostics::Diagnostics((Diagnostics *)&v16);
  Loader = dyld4::Loader::getLoader((Diagnostics *)&v16, *(_QWORD *)(a1 + 40), a2, (_BYTE *)(a1 + 48));
  if ( Loader )
  {
    v5 = Loader;
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
    dyld3::OverflowSafeArray<dyld4::Loader *,4294967295ul>::verifySpace(v6 + 40, 1);
    v7 = *(_QWORD *)(v6 + 40);
    v8 = *(_QWORD *)(v6 + 56);
    *(_QWORD *)(v6 + 56) = v8 + 1;
    *(_QWORD *)(v7 + 8 * v8) = v5;
    dyld4::RuntimeState::notifyDebuggerLoad(*(dyld4::RuntimeState **)(a1 + 40), v5);
    if ( (*((_WORD *)v5 + 2) & 1) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 40);
      lsl::Vector<dyld4::AuthenticatedValue<dyld4::Loader const*>>::reserve(v9 + 32, *(_QWORD *)(v9 + 48) + 1LL);
      v10 = *(_QWORD *)(v9 + 40);
      v11 = *(_QWORD *)(v9 + 48);
      *(_QWORD *)(v9 + 48) = v11 + 1;
      *(_QWORD *)(v10 + 8 * v11) = v5;
    }
  }
  else if ( Diagnostics::hasError((Diagnostics *)&v16) )
  {
    v12 = *(dyld4::RuntimeState **)(a1 + 40);
    if ( !*(_BYTE *)(*((_QWORD *)v12 + 1) + 174LL) )
    {
      v13 = (const char *)Diagnostics::errorMessageCStr((Diagnostics *)&v16);
      dyld4::RuntimeState::log(v12, "terminating because inserted dylib '%s' could not be loaded: %s\n", a2, v13);
      v14 = (dyld4 *)Diagnostics::errorMessage((Diagnostics *)&v16);
      dyld4::halt(v14, v15);
    }
  }
  Diagnostics::~Diagnostics(&v16);
}

__int64 __fastcall ___ZN5dyld412RuntimeState20notifyDebuggerUnloadERKNSt3__14spanIPKNS_6LoaderELm18446744073709551615EEE_block_invoke(
        __int64 a1,
        int a2,
        int a3)
{
  return dyld4::Atlas::ProcessSnapshot::removeImages(a3, *(dyld4::RuntimeState **)(a1 + 32));
}

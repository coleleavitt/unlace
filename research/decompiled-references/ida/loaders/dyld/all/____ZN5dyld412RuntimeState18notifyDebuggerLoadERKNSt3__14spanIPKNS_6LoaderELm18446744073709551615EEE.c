__int64 __fastcall ___ZN5dyld412RuntimeState18notifyDebuggerLoadERKNSt3__14spanIPKNS_6LoaderELm18446744073709551615EEE_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  return dyld4::Atlas::ProcessSnapshot::addImages(a3, *(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40));
}

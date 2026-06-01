void __fastcall ___ZN5dyld412RuntimeState22buildInterposingTablesEv_block_invoke_2(__int64 a1, __int64 a2)
{
  dyld4::RuntimeState::appendInterposingTuples(
    *(dyld4::RuntimeState **)(a1 + 32),
    *(const dyld4::Loader **)(a1 + 40),
    (const unsigned __int8 *)(*(_QWORD *)(a1 + 48) + a2));
}

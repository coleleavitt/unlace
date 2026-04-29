__n128 __fastcall ___ZN5dyld412RuntimeState9setUpTLVsEPKN5dyld313MachOAnalyzerE_block_invoke_2(__int64 a1)
{
  __int64 v1; // x19
  __int64 v2; // x20
  __int64 v3; // x8
  __int64 v4; // x9
  __n128 *v5; // x8
  __n128 result; // q0

  v1 = *(_QWORD *)(a1 + 40);
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL);
  lsl::Vector<dyld4::RuntimeState::TLV_Info>::reserve(v1 + 528, *(_QWORD *)(v1 + 544) + 1LL);
  v3 = *(_QWORD *)(v1 + 536);
  v4 = *(_QWORD *)(v1 + 544);
  *(_QWORD *)(v1 + 544) = v4 + 1;
  v5 = (__n128 *)(v3 + 24 * v4);
  result = *(__n128 *)(v2 + 40);
  v5[1].n128_u64[0] = *(_QWORD *)(v2 + 56);
  *v5 = result;
  return result;
}

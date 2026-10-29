__int64 __fastcall ___ZNK12objc_visitor7Visitor24forEachSelectorReferenceEU13block_pointerFv9VMAddressS1_PKcE_block_invoke(
        __int64 a1,
        const metadata_visitor::ResolvedValue *a2)
{
  __int64 v5[3]; // [xsp+8h] [xbp-48h] BYREF

  metadata_visitor::Visitor::resolveRebase(v5, *(metadata_visitor::Visitor **)(a1 + 40), a2);
  metadata_visitor::ResolvedValue::vmAddress(a2);
  metadata_visitor::ResolvedValue::vmAddress((metadata_visitor::ResolvedValue *)v5);
  metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v5);
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
}

void __fastcall objc_visitor::Visitor::forEachSelectorReference(objc_visitor::Visitor *a1, __int64 a2)
{
  _QWORD v2[6]; // [xsp+0h] [xbp-30h] BYREF

  v2[0] = _NSConcreteStackBlock;
  v2[1] = 0x40000000;
  v2[2] = ___ZNK12objc_visitor7Visitor24forEachSelectorReferenceEU13block_pointerFv9VMAddressS1_PKcE_block_invoke;
  v2[3] = &unk_97060;
  v2[4] = a2;
  v2[5] = a1;
  objc_visitor::Visitor::forEachSelectorReference(a1, (__int64)v2);
}

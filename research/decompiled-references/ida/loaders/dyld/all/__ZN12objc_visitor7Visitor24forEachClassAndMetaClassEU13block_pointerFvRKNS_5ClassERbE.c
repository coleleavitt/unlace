void __fastcall objc_visitor::Visitor::forEachClassAndMetaClass(objc_visitor::Visitor *a1, __int64 a2)
{
  _QWORD v2[5]; // [xsp+8h] [xbp-28h] BYREF

  v2[0] = _NSConcreteStackBlock;
  v2[1] = 0x40000000;
  v2[2] = ___ZN12objc_visitor7Visitor24forEachClassAndMetaClassEU13block_pointerFvRKNS_5ClassERbE_block_invoke;
  v2[3] = &unk_97038;
  v2[4] = a2;
  objc_visitor::Visitor::forEachClass(a1, 1, (__int64)v2);
}

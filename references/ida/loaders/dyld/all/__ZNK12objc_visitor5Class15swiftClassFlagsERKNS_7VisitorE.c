__int64 __fastcall objc_visitor::Class::swiftClassFlags(__int64 a1, metadata_visitor::Visitor *a2)
{
  int v4; // w20
  __int64 v5; // x0
  __int64 v6; // x8

  if ( (objc_visitor::Class::isSwiftStable() & 1) == 0 && !(unsigned int)objc_visitor::Class::isSwiftLegacy(a1, a2) )
    return 0;
  v4 = *(_DWORD *)a2;
  v5 = metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)(a1 + 8));
  v6 = 40;
  if ( v4 == 4 )
    v6 = 20;
  return *(unsigned int *)(v5 + v6) | 0x100000000LL;
}

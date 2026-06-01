__int64 __fastcall objc_visitor::Class::getVMAddress(objc_visitor::Class *this)
{
  return metadata_visitor::ResolvedValue::vmAddress((objc_visitor::Class *)((char *)this + 8));
}

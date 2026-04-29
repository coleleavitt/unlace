__int64 __fastcall objc_visitor::MethodList::usesRelativeOffsets(objc_visitor::MethodList *this)
{
  _DWORD *v1; // x0

  if ( !*((_BYTE *)this + 24) )
    return 0;
  v1 = (_DWORD *)metadata_visitor::ResolvedValue::value(this);
  if ( !v1 )
    objc_visitor::MethodList::usesRelativeOffsets();
  return *v1 >> 31;
}

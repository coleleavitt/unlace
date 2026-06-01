__int64 __fastcall objc_visitor::MethodList::numMethods(objc_visitor::MethodList *this)
{
  __int64 v1; // x0

  if ( !*((_BYTE *)this + 24) )
    return 0;
  v1 = metadata_visitor::ResolvedValue::value(this);
  if ( !v1 )
    objc_visitor::MethodList::numMethods();
  return *(unsigned int *)(v1 + 4);
}

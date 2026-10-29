__int64 __fastcall objc_visitor::ProtocolList::numProtocols(metadata_visitor::ResolvedValue *a1, _DWORD *a2)
{
  unsigned int *v3; // x0

  if ( !*((_BYTE *)a1 + 24) )
    return 0;
  v3 = (unsigned int *)metadata_visitor::ResolvedValue::value(a1);
  if ( !v3 )
    objc_visitor::ProtocolList::numProtocols();
  if ( *a2 == 4 )
    return *v3;
  else
    return *(_QWORD *)v3;
}

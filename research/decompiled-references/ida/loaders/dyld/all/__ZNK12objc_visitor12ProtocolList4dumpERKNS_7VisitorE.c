size_t __fastcall objc_visitor::ProtocolList::dump(metadata_visitor::ResolvedValue *a1, metadata_visitor::Visitor *a2)
{
  __int64 v4; // x21
  FILE *v5; // x22
  __int64 v6; // x0
  char v7; // w1
  __int64 v8; // x23
  const void *v9; // x0
  size_t result; // x0
  unsigned __int64 v11; // x22
  FILE *v12; // x24
  __int64 v13; // x0
  char v14; // w1
  __int64 v15; // x25
  const void *v16; // x0
  FILE *v17; // x3
  __int64 v18[3]; // [xsp+20h] [xbp-70h] BYREF
  __int64 v19[3]; // [xsp+38h] [xbp-58h] BYREF
  __int64 vars8; // [xsp+98h] [xbp+8h]

  if ( *((_BYTE *)a1 + 24) )
  {
    v4 = objc_visitor::ProtocolList::numProtocols(a1, a2);
    v5 = __stdoutp;
    v6 = metadata_visitor::ResolvedValue::vmAddress(a1);
    if ( !v7 )
      goto LABEL_11;
    v8 = v6;
    v9 = (const void *)metadata_visitor::ResolvedValue::value(a1);
    result = fprintf(v5, "Protocol list (count %lld): vmAddr 0x%llx at %p\n", v4, v8, v9);
    if ( v4 )
    {
      v11 = 0;
      while ( 1 )
      {
        objc_visitor::ProtocolList::getProtocolField(a1, a2, v11, v19);
        metadata_visitor::Visitor::resolveRebase(v18, a2, (const metadata_visitor::ResolvedValue *)v19);
        v12 = __stdoutp;
        v13 = metadata_visitor::ResolvedValue::vmAddress((metadata_visitor::ResolvedValue *)v18);
        if ( !v14 )
          break;
        v15 = v13;
        v16 = (const void *)metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)v18);
        result = fprintf(v12, "  Protocol[%lld]: vmAddr 0x%llx at %p\n", v11++, v15, v16);
        if ( v4 == v11 )
          return result;
      }
LABEL_11:
      std::__throw_bad_optional_access[abi:v15006]();
    }
  }
  else
  {
    v17 = __stdoutp;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return fwrite("no value\n", 9u, 1u, v17);
  }
  return result;
}

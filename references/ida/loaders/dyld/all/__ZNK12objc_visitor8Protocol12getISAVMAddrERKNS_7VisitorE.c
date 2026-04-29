__int64 *__usercall objc_visitor::Protocol::getISAVMAddr@<X0>(
        metadata_visitor::ResolvedValue *a1@<X0>,
        metadata_visitor::Visitor *a2@<X1>,
        __int64 a3@<X8>)
{
  const void *v6; // x0
  __int64 *result; // x0
  char v8; // w8
  __int64 v9; // x1
  __int64 v10[3]; // [xsp+8h] [xbp-58h] BYREF
  char v11; // [xsp+20h] [xbp-40h]
  __int64 v12[3]; // [xsp+28h] [xbp-38h] BYREF

  v6 = (const void *)metadata_visitor::ResolvedValue::value(a1);
  metadata_visitor::Visitor::getField(v12, a2, a1, v6);
  result = metadata_visitor::Visitor::resolveOptionalRebase(v10, a2, (const metadata_visitor::ResolvedValue *)v12);
  v8 = v11;
  if ( v11 )
  {
    result = (__int64 *)metadata_visitor::ResolvedValue::vmAddress((metadata_visitor::ResolvedValue *)v10);
    *(_QWORD *)a3 = result;
    *(_QWORD *)(a3 + 8) = v9;
    v8 = 1;
  }
  else
  {
    *(_BYTE *)a3 = 0;
  }
  *(_BYTE *)(a3 + 16) = v8;
  return result;
}

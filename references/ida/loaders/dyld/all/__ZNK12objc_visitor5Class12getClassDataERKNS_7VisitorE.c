__int64 __usercall objc_visitor::Class::getClassData@<X0>(
        __int64 a1@<X0>,
        metadata_visitor::Visitor *a2@<X1>,
        __int64 a3@<X8>)
{
  const metadata_visitor::ResolvedValue *v5; // x21
  int v6; // w22
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 result; // x0
  char v10; // w1
  __int64 v11; // x8
  __int64 v12; // x8
  __int64 v13; // x21
  __int64 v14; // x8
  __int64 v15; // x0
  __int128 v16; // [xsp+8h] [xbp-68h] BYREF
  __int64 v17; // [xsp+18h] [xbp-58h]
  __int128 v18; // [xsp+20h] [xbp-50h] BYREF
  __int64 v19; // [xsp+30h] [xbp-40h]
  __int64 v20[3]; // [xsp+38h] [xbp-38h] BYREF

  v5 = (const metadata_visitor::ResolvedValue *)(a1 + 8);
  v6 = *(_DWORD *)a2;
  v7 = metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)(a1 + 8));
  v8 = 32;
  if ( v6 == 4 )
    v8 = 16;
  metadata_visitor::Visitor::getField(v20, a2, v5, (const void *)(v7 + v8));
  metadata_visitor::Visitor::resolveRebase((__int64 *)&v18, a2, (const metadata_visitor::ResolvedValue *)v20);
  result = metadata_visitor::ResolvedValue::vmAddress((metadata_visitor::ResolvedValue *)&v18);
  if ( !v10 )
    std::__throw_bad_optional_access[abi:v15006]();
  v11 = 4294967292LL;
  if ( *(_DWORD *)a2 != 4 )
    v11 = 0x7FFFFFFFFFF8LL;
  v12 = v11 & result;
  v13 = v12 - result;
  if ( v12 == result )
  {
    *(_OWORD *)a3 = v18;
    v14 = v19;
  }
  else
  {
    v15 = metadata_visitor::ResolvedValue::value((metadata_visitor::ResolvedValue *)&v18);
    result = (__int64)metadata_visitor::Visitor::getField(
                        (__int64 *)&v16,
                        a2,
                        (const metadata_visitor::ResolvedValue *)&v18,
                        (const void *)(v15 + v13));
    *(_OWORD *)a3 = v16;
    v14 = v17;
  }
  *(_QWORD *)(a3 + 16) = v14;
  return result;
}

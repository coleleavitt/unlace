__int64 __usercall metadata_visitor::SwiftConformance::SwiftRelativePointer::getTargetPointer@<X0>(
        metadata_visitor::SwiftConformance::SwiftRelativePointer *this@<X0>,
        const metadata_visitor::SwiftVisitor *a2@<X1>,
        char *a3@<X8>)
{
  int v6; // w22
  __int64 v7; // x0
  char v8; // w1
  char v9; // w8

  v6 = *(_DWORD *)metadata_visitor::ResolvedValue::value(this);
  v7 = metadata_visitor::ResolvedValue::vmAddress(this);
  if ( (v6 & 1) != 0 )
  {
    if ( v8 )
    {
      v9 = 0;
      v6 &= ~1u;
      goto LABEL_6;
    }
LABEL_7:
    std::__throw_bad_optional_access[abi:v15006](v7);
  }
  if ( !v8 )
    goto LABEL_7;
  v9 = 1;
LABEL_6:
  *a3 = v9;
  return metadata_visitor::Visitor::getValueFor(a2, v7 + v6, 1);
}

metadata_visitor::ResolvedValue *__usercall metadata_visitor::SwiftConformance::SwiftTypeRefPointer::getTargetPointer@<X0>(
        metadata_visitor::ResolvedValue *this@<X0>,
        const metadata_visitor::SwiftVisitor *a2@<X1>,
        char *a3@<X8>)
{
  metadata_visitor::ResolvedValue *v4; // x21
  signed int v6; // w22
  __int64 v7; // x0
  char v8; // w1
  char v9; // w8
  int v10; // w22
  char v11; // w1

  if ( *((_DWORD *)this + 6) <= 3u )
  {
    v4 = this;
    switch ( *((_DWORD *)this + 6) )
    {
      case 0:
      case 2:
        v6 = *(_DWORD *)metadata_visitor::ResolvedValue::value(this);
        v7 = metadata_visitor::ResolvedValue::vmAddress(v4);
        if ( !v8 )
          goto LABEL_9;
        v9 = 1;
        goto LABEL_7;
      case 1:
      case 3:
        v10 = *(_DWORD *)metadata_visitor::ResolvedValue::value(this);
        v7 = metadata_visitor::ResolvedValue::vmAddress(v4);
        if ( !v11 )
LABEL_9:
          std::__throw_bad_optional_access[abi:v15006](v7);
        v9 = 0;
        v6 = v10 & 0xFFFFFFFE;
LABEL_7:
        *a3 = v9;
        this = (metadata_visitor::ResolvedValue *)metadata_visitor::Visitor::getValueFor(a2, v7 + v6, 1);
        break;
      default:
        return this;
    }
  }
  return this;
}

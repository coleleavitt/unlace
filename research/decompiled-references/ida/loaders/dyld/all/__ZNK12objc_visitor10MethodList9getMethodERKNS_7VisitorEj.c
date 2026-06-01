double __usercall objc_visitor::MethodList::getMethod@<D0>(
        metadata_visitor::ResolvedValue *a1@<X0>,
        metadata_visitor::Visitor *a2@<X1>,
        int a3@<W2>,
        __int64 a4@<X8>)
{
  int *v8; // x0
  int *v9; // x23
  int v10; // w8
  double result; // d0
  __int128 v12; // [xsp+8h] [xbp-48h] BYREF
  __int64 v13; // [xsp+18h] [xbp-38h]

  if ( !*((_BYTE *)a1 + 24) )
    objc_visitor::MethodList::getMethod();
  v8 = (int *)metadata_visitor::ResolvedValue::value(a1);
  if ( !v8 )
    objc_visitor::MethodList::getMethod();
  v9 = v8;
  metadata_visitor::Visitor::getField((__int64 *)&v12, a2, a1, (char *)v8 + (*v8 & 0xFFFCu) * a3 + 8);
  if ( *v9 >= 0 )
    v10 = 2;
  else
    v10 = ((unsigned int)*v9 >> 30) & 1;
  result = *(double *)&v12;
  *(_OWORD *)(a4 + 8) = v12;
  *(_QWORD *)(a4 + 24) = v13;
  *(_DWORD *)a4 = v10;
  return result;
}

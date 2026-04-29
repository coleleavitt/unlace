__int64 *__usercall metadata_visitor::Visitor::resolveBindOrRebase@<X0>(
        __int64 *__return_ptr a1@<X8>,
        __int64 *this@<X0>,
        __int64 **a3@<X1>,
        bool *a4@<X2>)
{
  *a4 = 0;
  return metadata_visitor::Visitor::resolveRebase(a1, this, a3);
}

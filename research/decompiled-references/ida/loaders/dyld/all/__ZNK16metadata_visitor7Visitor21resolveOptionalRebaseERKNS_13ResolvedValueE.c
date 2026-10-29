__int64 *__usercall metadata_visitor::Visitor::resolveOptionalRebase@<X0>(
        __int64 *__return_ptr a1@<X8>,
        __int64 *this@<X0>,
        __int64 **a3@<X1>)
{
  __int64 v3; // x9
  __int64 v4; // x10

  v3 = **a3;
  if ( v3 )
  {
    if ( !*((_BYTE *)this + 24) )
      std::__throw_bad_optional_access[abi:v15006]();
    v4 = v3 - *(this + 1) + *(this + 2);
    *a1 = v3;
    a1[1] = v4;
    LOBYTE(v3) = 1;
    a1[2] = 1;
  }
  else
  {
    *(_BYTE *)a1 = 0;
  }
  *((_BYTE *)a1 + 24) = v3;
  return this;
}

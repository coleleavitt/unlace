__int64 *__usercall metadata_visitor::Visitor::getField@<X0>(
        __int64 *__return_ptr a1@<X8>,
        __int64 *this@<X0>,
        char *a3@<X2>)
{
  char *v4; // x9

  if ( !*((_BYTE *)this + 24) )
    std::__throw_bad_optional_access[abi:v15006]();
  v4 = &a3[*(this + 2) - *(this + 1)];
  *a1 = (__int64)a3;
  a1[1] = (__int64)v4;
  a1[2] = 1;
  return this;
}

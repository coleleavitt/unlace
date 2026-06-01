__int64 __usercall metadata_visitor::Visitor::getValueFor@<X0>(
        __int64 result@<X0>,
        __int64 a2@<X1>,
        __int64 a3@<X2>,
        _QWORD *a4@<X8>)
{
  if ( !(_BYTE)a3 || !*(_BYTE *)(result + 24) )
    std::__throw_bad_optional_access[abi:v15006]();
  *a4 = *(_QWORD *)(result + 8) + a2 - *(_QWORD *)(result + 16);
  a4[1] = a2;
  a4[2] = a3;
  return result;
}

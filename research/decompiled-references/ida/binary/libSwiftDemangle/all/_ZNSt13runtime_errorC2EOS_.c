// Alternative name is '_ZNSt13runtime_errorC1EOS_'
_QWORD *__fastcall std::runtime_error::runtime_error(_QWORD *a1, __int64 a2)
{
  *a1 = (char *)&`vtable for'std::runtime_error + 16;
  a1[1] = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = &std::string::_Rep::_S_empty_rep_storage + 3;
  return &std::string::_Rep::_S_empty_rep_storage + 3;
}


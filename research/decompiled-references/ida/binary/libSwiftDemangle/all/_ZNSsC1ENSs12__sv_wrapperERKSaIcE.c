// Alternative name is '_ZNSsC2ENSs12__sv_wrapperERKSaIcE'
_QWORD *__fastcall std::string::string(_QWORD *a1, size_t a2, unsigned __int8 *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r12
  _QWORD *v7; // rcx
  _QWORD *result; // rax

  if ( a2 )
  {
    if ( !a3 )
      std::__throw_logic_error("basic_string::_S_construct null not valid");
    v5 = std::string::_Rep::_S_create(a2, 0, a4);
    v6 = v5;
    v7 = (_QWORD *)(v5 + 24);
    if ( a2 == 1 )
    {
      result = (_QWORD *)*a3;
      *(_BYTE *)(v6 + 24) = (_BYTE)result;
    }
    else
    {
      result = memcpy((void *)(v5 + 24), a3, a2);
      v7 = result;
    }
    if ( (_QWORD *)v6 != &std::string::_Rep::_S_empty_rep_storage )
    {
      *(_DWORD *)(v6 + 16) = 0;
      *(_QWORD *)v6 = a2;
      *(_BYTE *)(v6 + a2 + 24) = 0;
    }
    *a1 = v7;
  }
  else
  {
    *a1 = &std::string::_Rep::_S_empty_rep_storage + 3;
    return &std::string::_Rep::_S_empty_rep_storage;
  }
  return result;
}


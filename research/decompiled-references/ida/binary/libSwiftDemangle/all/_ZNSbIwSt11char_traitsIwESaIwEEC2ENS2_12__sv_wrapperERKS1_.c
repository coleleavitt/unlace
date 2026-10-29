// Alternative name is '_ZNSbIwSt11char_traitsIwESaIwEEC1ENS2_12__sv_wrapperERKS1_'
wchar_t *__fastcall std::wstring::basic_string(_QWORD *a1, __int64 a2, const wchar_t *a3, __int64 a4)
{
  __int64 v4; // rsi
  size_t v6; // r14
  wchar_t *result; // rax
  wchar_t *v8; // r12
  char *v9; // r15

  v4 = 4 * a2;
  if ( v4 )
  {
    if ( !a3 )
      std::__throw_logic_error("basic_string::_S_construct null not valid");
    v6 = v4 >> 2;
    result = (wchar_t *)std::wstring::_Rep::_S_create(v4 >> 2, 0, a4);
    v8 = result;
    v9 = (char *)(result + 6);
    if ( v4 >> 2 == 1 )
    {
      result = (wchar_t *)*(unsigned int *)a3;
      v8[6] = (int)result;
    }
    else if ( v6 )
    {
      result = wmemcpy(result + 6, a3, v6);
    }
    if ( v8 != (wchar_t *)&std::wstring::_Rep::_S_empty_rep_storage )
    {
      v8[4] = 0;
      *(_QWORD *)v8 = v6;
      v8[(unsigned __int64)v4 / 4 + 6] = 0;
    }
  }
  else
  {
    result = (wchar_t *)&std::wstring::_Rep::_S_empty_rep_storage;
    v9 = (char *)&std::wstring::_Rep::_S_empty_rep_storage + 24;
  }
  *a1 = v9;
  return result;
}


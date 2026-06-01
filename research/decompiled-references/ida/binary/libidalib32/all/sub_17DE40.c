__int64 __fastcall sub_17DE40(__int64 a1, std::_Sp_make_shared_tag *a2)
{
  __int64 v2; // rbx

  v2 = a1 + 16;
  if ( a2 != (std::_Sp_make_shared_tag *)&std::_Sp_make_shared_tag::_S_ti(void)::__tag
    && !(unsigned __int8)std::_Sp_make_shared_tag::_S_eq(a2, a2) )
  {
    return 0;
  }
  return v2;
}


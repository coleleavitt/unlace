__int64 (*__fastcall proxim_graph_t__::vfunc_35(_QWORD *a1, int a2, unsigned int a3))(void)
{
  __int64 (*result)(void); // rax

  result = *(__int64 (**)(void))(*a1 + 296LL);
  if ( (char *)result == (char *)proxim_graph_t__::vfunc_37 )
  {
    if ( (unsigned __int64)a2 < a1[35] )
    {
      result = (__int64 (*)(void))(a1[34] + 40LL * a2);
      if ( *(_QWORD *)result != -1 )
        return (__int64 (*)(void))set_item_color(*(_QWORD *)result, a3);
    }
  }
  else
  {
    result = (__int64 (*)(void))result();
    if ( result != (__int64 (*)(void))-1LL )
      return (__int64 (*)(void))set_item_color(result, a3);
  }
  return result;
}

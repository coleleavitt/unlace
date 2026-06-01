__int64 __fastcall sub_2AD180(_DWORD *a1, unsigned int a2)
{
  __int64 (__fastcall *v3)(__int64, int); // rax
  __int64 (__fastcall *v4)(__int64); // rax

  do
  {
    while ( 1 )
    {
      ++a2;
      v4 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
      if ( v4 == interactive_graph_t__::vfunc_7 )
      {
        if ( (signed int)a2 >= a1[46] )
          return 0xFFFFFFFFLL;
      }
      else if ( (int)a2 >= (int)v4((__int64)a1) )
      {
        return 0xFFFFFFFFLL;
      }
      v3 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a1 + 72LL);
      if ( v3 != interactive_graph_t__::vfunc_9 )
        break;
      if ( (unsigned __int8)sub_29AC50((__int64)a1, a2) )
        return a2;
    }
  }
  while ( !(unsigned __int8)v3((__int64)a1, a2) );
  return a2;
}

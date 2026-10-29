__int64 __fastcall user_graph_place_t__::vfunc_9(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 (__fastcall *v3)(__int64, int); // rax

  v2 = *(_DWORD *)(a1 + 12);
  while ( (--v2 & 0x80000000) == 0 )
  {
    v3 = *(__int64 (__fastcall **)(__int64, int))(*(_QWORD *)a2 + 72LL);
    if ( v3 == interactive_graph_t__::vfunc_9 )
    {
      if ( (unsigned __int8)sub_29AC50(a2, v2) )
        return 0;
    }
    else if ( (unsigned __int8)v3(a2, v2) )
    {
      return 0;
    }
  }
  return 1;
}

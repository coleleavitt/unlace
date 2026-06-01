__int64 __fastcall disasm_graph_t__::vfunc_40(_QWORD *a1, int a2)
{
  __int64 v3; // rbx
  unsigned __int64 item_end; // rsi

  if ( a2 == -1 )
    return 0xFFFFFFFFLL;
  if ( qword_8BA598 != -1 )
    return (*(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 288LL))(a1, qword_8BA598);
  v3 = a1[44] + ((__int64)a2 << 6);
  item_end = get_item_end(qword_8BA5A8);
  if ( item_end < *(_QWORD *)(v3 + 8) )
    return 0xFFFFFFFFLL;
  else
    return (*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 288LL))(a1, item_end);
}

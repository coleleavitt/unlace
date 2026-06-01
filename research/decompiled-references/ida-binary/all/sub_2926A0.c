__int64 __fastcall drawable_graph_t::remove_reachable(__int64 a1, int a2)
{
  if ( *(_DWORD *)(a1 + 56) != a2 )
    *(_QWORD *)(a1 + 64) += sub_292510(*(_QWORD **)(a1 + 72), a2);
  return 0;
}

void __fastcall disasm_graph_t__::vfunc_35(__int64 a1, int a2, unsigned int a3)
{
  unsigned __int64 *v3; // rsi
  unsigned __int64 head; // rbx
  unsigned __int64 v5; // rbp

  v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 352) + ((__int64)a2 << 6));
  head = *v3;
  v5 = v3[1];
  if ( *v3 < v5 )
  {
    do
    {
      set_item_color(head, a3);
      head = next_head(head, v5);
    }
    while ( head < v5 );
  }
}

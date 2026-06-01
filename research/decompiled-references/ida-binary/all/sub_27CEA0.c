__int64 __fastcall disasm_graph_t__::vfunc_29(__m128i *a1)
{
  __int64 result; // rax

  if ( !a1[21].m128i_i64[0] || (result = get_func(a1[20].m128i_i64[0]), (a1[21].m128i_i64[0] = result) != 0) )
  {
    create_qflow_chart(&a1[17].m128i_u64[1]);
    return sub_27C280(a1);
  }
  return result;
}

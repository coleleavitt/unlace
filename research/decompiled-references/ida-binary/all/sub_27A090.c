__int64 __fastcall disasm_graph_t__::vfunc_37(__int64 a1, int a2)
{
  __int64 result; // rax

  result = -1;
  if ( (unsigned __int64)a2 < *(_QWORD *)(a1 + 360) )
    return *(_QWORD *)(*(_QWORD *)(a1 + 352) + ((__int64)a2 << 6));
  return result;
}

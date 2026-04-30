__int64 __fastcall disasm_graph_t__::vfunc_39(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  int v8; // ebx
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 360) )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      result = rangeset_t_add(a2, *(_QWORD *)(a1 + 352) + (v7 << 6), a3, a4, a5, a6);
      v7 = v8;
    }
    while ( (unsigned __int64)v8 < *(_QWORD *)(a1 + 360) );
  }
  return result;
}

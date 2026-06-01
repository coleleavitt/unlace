__int64 __fastcall user_graph_place_t__::vfunc_4(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 result; // rax

  result = qalloc_or_throw(16);
  *(_QWORD *)result = user_graph_place_t___vtable;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 8) = a4;
  return result;
}

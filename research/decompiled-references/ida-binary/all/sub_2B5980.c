__int64 __fastcall sub_2B5980(double a1, __int64 a2, _QWORD *a3, __int64 (__fastcall *a4)(__int64 a1), __int64 a5)
{
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  _DWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  int v9; // eax

  if ( (int)a4 < 0
    || (v5 = a3[6], v6 = (int)a4, (int)a4 >= v5)
    || (v7 = (_DWORD *)a3[1]) == nullptr
    || ((a4 = interactive_graph_t__::vfunc_7,
         v8 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 56LL),
         v8 != interactive_graph_t__::vfunc_7)
      ? (v9 = ((__int64 (*)(void))v8)())
      : (v9 = v7[46]),
        v5 != v9) )
  {
    if ( !under_debugger )
      interr(40495, a3, a4, a5, a1);
    BUG();
  }
  return *(unsigned int *)(a3[5] + 12 * v6);
}

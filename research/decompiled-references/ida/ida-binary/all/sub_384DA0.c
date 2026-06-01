__int64 __fastcall srcdbg_place_t__::vfunc_4(__int64 a1, __int64 a2, int a3, int a4)
{
  __int64 v6; // rbx

  v6 = qalloc_or_throw(24);
  *(_DWORD *)(v6 + 12) = a3;
  *(_DWORD *)(v6 + 8) = a4;
  *(_QWORD *)v6 = &srcdbg_place_t___vtable;
  *(_QWORD *)(v6 + 16) = -1;
  *(_QWORD *)(v6 + 16) = sub_384C20(a2, a3);
  return v6;
}

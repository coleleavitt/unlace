unsigned __int64 __fastcall sub_5D0440(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 func; // rax

  switch_dbctx(*(int *)(a2 + 8));
  func = get_func(a3);
  return sub_5D0380(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), *(_DWORD *)(a2 + 12), func);
}

unsigned __int64 __fastcall sub_5B5390(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 func; // rax

  switch_dbctx(*(int *)(a2 + 8));
  func = get_func(a3);
  return sub_5B52D0(*(_QWORD *)(a1 + 32), *(_DWORD *)(a1 + 12), *(_DWORD *)(a2 + 12), func);
}


__int64 __fastcall sub_368270(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 func; // rax

  v2 = *(_DWORD *)(a1 + 8);
  func = get_func(v2);
  *(_DWORD *)(a2 + 8) = get_sp_delta(func, v2);
  return 0;
}


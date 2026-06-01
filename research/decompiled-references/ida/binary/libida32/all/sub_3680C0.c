__int64 __fastcall sub_3680C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  __int64 func; // rax

  v2 = *(_DWORD *)(a1 + 40);
  func = get_func(*(unsigned int *)(a1 + 8));
  *(_DWORD *)(a2 + 8) = (unsigned __int8)remove_func_tail(func, v2);
  return 0;
}


__int64 __fastcall sub_3680F0(unsigned int *a1, __int64 a2)
{
  unsigned int v2; // r12d
  unsigned int v3; // ebp
  __int64 func; // rax

  v2 = a1[18];
  v3 = a1[10];
  func = get_func(a1[2]);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)append_func_tail(func, v3, v2);
  return 0;
}


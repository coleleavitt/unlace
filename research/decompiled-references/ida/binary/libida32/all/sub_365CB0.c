__int64 __fastcall sub_365CB0(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 func; // rax

  v3 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v3 == -1 )
    return 0;
  func = get_func(v3);
  if ( !func || (int)get_func_chunknum(func, *(unsigned int *)(a1 + 40)) < 0 )
    return 0;
  *(_DWORD *)(a2 + 8) = 1;
  return 0;
}


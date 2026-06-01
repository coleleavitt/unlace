__int64 __fastcall sub_368460(__int64 a1)
{
  const char *v1; // rbx
  _BOOL4 v2; // ebp
  __int64 func; // rax

  v1 = haystack;
  v2 = *(_DWORD *)(a1 + 72) != 0;
  if ( *(_QWORD *)(a1 + 48) )
    v1 = *(const char **)(a1 + 40);
  func = get_func(*(unsigned int *)(a1 + 8));
  set_func_cmt(func, v1, v2);
  return 0;
}


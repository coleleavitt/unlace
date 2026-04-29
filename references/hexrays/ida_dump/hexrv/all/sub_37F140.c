__int64 __fastcall sub_37F140(__int64 a1, __int64 a2)
{
  __int64 func; // rax
  __int64 v4; // rdi
  unsigned __int64 *v5; // rbx
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  char merge_state; // dl
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rdx

  func = get_func(*(_QWORD *)(a1 + 16));
  v4 = *(_QWORD *)(a2 + 16);
  v5 = (unsigned __int64 *)func;
  v6 = (unsigned __int64 *)get_func(v4);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  if ( !v6 )
    return 0xFFFFFFFFLL;
  v7 = *v6;
  if ( *v5 < *v6 )
    return 0xFFFFFFFFLL;
  result = 1;
  if ( v7 < *v5 )
    return result;
  v9 = *(unsigned int *)(a1 + 12);
  v10 = *(unsigned int *)(a2 + 12);
  if ( (unsigned int)v9 < (unsigned int)v10 )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)v10 >= (unsigned int)v9 )
  {
    merge_state = get_merge_state(v4, a2, v9, v10);
    result = 0;
    if ( (merge_state & 3) == 0 )
    {
      v12 = *(_QWORD *)(a1 + 24);
      v13 = *(_QWORD *)(a2 + 24);
      if ( v12 >= v13 )
        return v13 < v12;
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

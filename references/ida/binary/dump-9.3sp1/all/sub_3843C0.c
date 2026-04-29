__int64 __fastcall sub_3843C0(__int64 a1, __int64 a2)
{
  unsigned __int64 *func; // rbx
  unsigned __int64 *v3; // rax
  unsigned __int64 v4; // rcx
  __int64 result; // rax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  char merge_state; // dl
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx

  func = (unsigned __int64 *)get_func();
  v3 = (unsigned __int64 *)get_func();
  if ( !func )
    return 0xFFFFFFFFLL;
  if ( !v3 )
    return 0xFFFFFFFFLL;
  v4 = *v3;
  if ( *func < *v3 )
    return 0xFFFFFFFFLL;
  result = 1;
  if ( v4 < *func )
    return result;
  v6 = *(_DWORD *)(a1 + 12);
  v7 = *(_DWORD *)(a2 + 12);
  if ( v6 < v7 )
    return 0xFFFFFFFFLL;
  if ( v7 >= v6 )
  {
    merge_state = get_merge_state();
    result = 0;
    if ( (merge_state & 3) == 0 )
    {
      v9 = *(_QWORD *)(a1 + 24);
      v10 = *(_QWORD *)(a2 + 24);
      if ( v9 >= v10 )
        return v10 < v9;
      return 0xFFFFFFFFLL;
    }
  }
  return result;
}

__int64 __fastcall sub_12D8880(_QWORD *a1, __int64 a2, int *a3)
{
  int v4; // r13d
  int v5; // eax
  unsigned int v6; // r14d
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // edx
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rbx
  unsigned int v15; // edx
  int v16; // esi
  __int64 v17; // rcx

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_12D87B0((__int64)a1, a3);
    v14 = a1[4];
    v15 = a3[1];
    v16 = *(_DWORD *)(v14 + 32);
    if ( *a3 <= v16 && (*a3 != v16 || v15 <= *(_DWORD *)(v14 + 36)) )
      return sub_12D87B0((__int64)a1, a3);
    return 0;
  }
  v4 = *a3;
  v5 = *(_DWORD *)(a2 + 32);
  v6 = a3[1];
  if ( v5 <= *a3 )
  {
    v11 = *(unsigned int *)(a2 + 36);
    if ( v5 != v4 || (unsigned int)v11 <= v6 )
    {
      if ( v5 < v4 || (unsigned int)v11 < v6 )
      {
        if ( a1[4] != a2 )
        {
          v12 = std::_Rb_tree_increment(a2, (const char *)a2, v11);
          v13 = *(_DWORD *)(v12 + 32);
          if ( v4 < v13 || v6 < *(_DWORD *)(v12 + 36) && v4 == v13 )
          {
            v7 = 0;
            if ( *(_QWORD *)(a2 + 24) )
              return v12;
            return v7;
          }
          return sub_12D87B0((__int64)a1, a3);
        }
        return 0;
      }
      return a2;
    }
  }
  v7 = a2;
  if ( a1[3] == a2 )
    return v7;
  v8 = std::_Rb_tree_decrement(a2);
  v9 = *(_DWORD *)(v8 + 32);
  if ( v4 <= v9 && (v6 <= *(_DWORD *)(v8 + 36) || v4 != v9) )
    return sub_12D87B0((__int64)a1, a3);
  v17 = 0;
  if ( *(_QWORD *)(v8 + 24) )
    return a2;
  return v17;
}

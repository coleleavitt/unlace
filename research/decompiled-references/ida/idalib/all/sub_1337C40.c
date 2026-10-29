__int64 __fastcall sub_1337C40(_QWORD *a1, __int64 a2, __int64 a3)
{
  size_t v4; // rbp
  size_t v5; // r14
  size_t v6; // rdx
  int v7; // eax
  __int64 v8; // r14
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // r14
  __int64 v13; // rbp
  __int64 v14; // rdx

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] || sub_9C4B50(a1[4] + 32LL, a3) >= 0 )
      return sub_1337AC0((__int64)a1, a3);
    return 0;
  }
  v4 = *(_QWORD *)(a3 + 8);
  v5 = *(_QWORD *)(a2 + 40);
  v6 = v5;
  if ( v4 <= v5 )
    v6 = v4;
  if ( v6 && (v7 = memcmp(*(const void **)a3, *(const void **)(a2 + 32), v6)) != 0 )
  {
    if ( v7 >= 0 )
      goto LABEL_7;
  }
  else
  {
    v10 = v4 - v5;
    if ( v10 > 0x7FFFFFFF || v10 >= (__int64)0xFFFFFFFF80000000LL && (int)v10 >= 0 )
    {
LABEL_7:
      v8 = a2;
      if ( sub_9C4B50(a2 + 32, a3) >= 0 )
        return v8;
      if ( a1[4] != a2 )
      {
        v13 = std::_Rb_tree_increment(a2, (const char *)a3);
        if ( sub_9C4B50(a3, v13 + 32) < 0 )
        {
          v14 = 0;
          if ( *(_QWORD *)(a2 + 24) )
            return v13;
          return v14;
        }
        return sub_1337AC0((__int64)a1, a3);
      }
      return 0;
    }
  }
  v8 = a2;
  if ( a1[3] == a2 )
    return v8;
  v11 = std::_Rb_tree_decrement(a2);
  if ( sub_9C4B50(v11 + 32, a3) >= 0 )
    return sub_1337AC0((__int64)a1, a3);
  v12 = 0;
  if ( *(_QWORD *)(v11 + 24) )
    return a2;
  return v12;
}

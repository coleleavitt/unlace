__int64 __fastcall sub_10EC2D0(_QWORD *a1, _QWORD *a2, const void **a3)
{
  size_t v5; // rbp
  size_t v6; // r14
  const void *v8; // rdi
  const void *v9; // rsi
  size_t v10; // rdx
  int v11; // eax
  __int64 v12; // rbp
  _QWORD *v13; // r14
  __int64 v15; // rbp
  __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rdx

  if ( a2 == a1 + 1 )
  {
    if ( !a1[5] || sub_9A0E10(a1[4] + 32LL, (__int64)a3) >= 0 )
      return sub_10EB820((__int64)a1, (__int64)a3);
    return 0;
  }
  v5 = (size_t)a3[1];
  v6 = a2[5];
  v8 = *a3;
  v9 = (const void *)a2[4];
  v10 = v6;
  if ( v5 <= v6 )
    v10 = v5;
  v11 = sub_990B80(v8, v9, v10);
  if ( v11 )
  {
LABEL_8:
    if ( v11 >= 0 )
    {
LABEL_9:
      v13 = a2;
      if ( sub_9A0E10((__int64)(a2 + 4), (__int64)a3) >= 0 )
        return (__int64)v13;
      if ( (_QWORD *)a1[4] != a2 )
      {
        v17 = std::_Rb_tree_increment();
        if ( sub_9A0E10((__int64)a3, v17 + 32) < 0 )
        {
          v18 = 0;
          if ( a2[3] )
            return v17;
          return v18;
        }
        return sub_10EB820((__int64)a1, (__int64)a3);
      }
      return 0;
    }
    goto LABEL_11;
  }
  v12 = v5 - v6;
  if ( v12 > 0x7FFFFFFF )
    goto LABEL_9;
  if ( v12 >= (__int64)0xFFFFFFFF80000000LL )
  {
    v11 = v12;
    goto LABEL_8;
  }
LABEL_11:
  v13 = a2;
  if ( (_QWORD *)a1[3] == a2 )
    return (__int64)v13;
  v15 = std::_Rb_tree_decrement();
  if ( sub_9A0E10(v15 + 32, (__int64)a3) >= 0 )
    return sub_10EB820((__int64)a1, (__int64)a3);
  v16 = 0;
  if ( *(_QWORD *)(v15 + 24) )
    return (__int64)a2;
  return v16;
}


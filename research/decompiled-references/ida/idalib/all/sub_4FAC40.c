__int64 __fastcall sub_4FAC40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  unsigned int v7; // eax
  __int64 result; // rax
  unsigned __int64 v9; // rdx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  unsigned int v19; // edx
  unsigned int v20; // eax

  v4 = a3;
  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_4FA320((__int64)a1, (__int64 *)v4);
    v16 = a1[4];
    v17 = *(_QWORD *)a3;
    v18 = *(_QWORD *)(v16 + 32);
    if ( v18 >= v17 )
    {
      if ( v17 < v18 )
        return sub_4FA320((__int64)a1, (__int64 *)v4);
      v19 = *(_DWORD *)(v16 + 40);
      v20 = *(_DWORD *)(v4 + 8);
      if ( v19 == (_DWORD)&stru_10000 )
      {
        if ( v20 == (_DWORD)&stru_10000 )
          return sub_4FA320((__int64)a1, (__int64 *)v4);
      }
      else if ( v20 == (_DWORD)&stru_10000 || v19 >= v20 )
      {
        return sub_4FA320((__int64)a1, (__int64 *)v4);
      }
    }
    return 0;
  }
  v5 = *(_QWORD *)a3;
  v6 = *(_QWORD *)(a2 + 32);
  if ( *(_QWORD *)a3 >= v6 )
  {
    if ( v6 < v5 )
    {
LABEL_7:
      if ( a1[4] == a2 )
        return 0;
      result = std::_Rb_tree_increment(a2, a2, a3, a4);
      v9 = *(_QWORD *)(result + 32);
      if ( v5 < v9 )
      {
LABEL_13:
        if ( *(_QWORD *)(a2 + 24) )
          return result;
        return 0;
      }
      if ( v9 >= v5 )
      {
        v10 = *(_DWORD *)(v4 + 8);
        v11 = *(_DWORD *)(result + 40);
        if ( v10 == (_DWORD)&stru_10000 )
        {
          if ( v11 != (_DWORD)&stru_10000 )
            goto LABEL_13;
        }
        else if ( v11 != (_DWORD)&stru_10000 && v10 < v11 )
        {
          goto LABEL_13;
        }
      }
      return sub_4FA320((__int64)a1, (__int64 *)v4);
    }
    v7 = *(_DWORD *)(a3 + 8);
    a3 = *(unsigned int *)(a2 + 40);
    if ( v7 == (_DWORD)&stru_10000 )
    {
      if ( (_DWORD)a3 != (_DWORD)&stru_10000 )
        goto LABEL_16;
    }
    else
    {
      if ( v7 < (unsigned int)a3 )
      {
        if ( (_DWORD)a3 == (_DWORD)&stru_10000 )
          goto LABEL_7;
        goto LABEL_16;
      }
      if ( (_DWORD)a3 == (_DWORD)&stru_10000 || (unsigned int)a3 < v7 )
        goto LABEL_7;
    }
    return a2;
  }
LABEL_16:
  result = a2;
  if ( a1[3] != a2 )
  {
    v12 = std::_Rb_tree_decrement(a2);
    v13 = *(_QWORD *)(v12 + 32);
    if ( v13 >= v5 )
    {
      if ( v5 < v13 )
        return sub_4FA320((__int64)a1, (__int64 *)v4);
      v14 = *(_DWORD *)(v12 + 40);
      v15 = *(_DWORD *)(v4 + 8);
      if ( v14 == (_DWORD)&stru_10000 )
      {
        if ( v15 == (_DWORD)&stru_10000 )
          return sub_4FA320((__int64)a1, (__int64 *)v4);
      }
      else if ( v15 == (_DWORD)&stru_10000 || v14 >= v15 )
      {
        return sub_4FA320((__int64)a1, (__int64 *)v4);
      }
    }
    result = a2;
    if ( !*(_QWORD *)(v12 + 24) )
      return 0;
  }
  return result;
}

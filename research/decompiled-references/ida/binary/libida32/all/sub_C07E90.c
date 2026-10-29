__int64 __fastcall sub_C07E90(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned int v11; // eax
  unsigned int v12; // edx

  if ( (_QWORD *)a2 != a1 + 1 )
  {
    v4 = *(_QWORD *)a3;
    if ( *(_QWORD *)(a2 + 32) > *(_QWORD *)a3 )
      goto LABEL_3;
    if ( *(_QWORD *)(a2 + 32) == *(_QWORD *)a3 )
    {
      v11 = *(_DWORD *)(a3 + 8);
      v12 = *(_DWORD *)(a2 + 40);
      if ( v12 > v11 )
      {
LABEL_3:
        v5 = a2;
        if ( a1[3] != a2 )
        {
          v6 = std::_Rb_tree_decrement();
          if ( v4 > *(_QWORD *)(v6 + 32) || v4 == *(_QWORD *)(v6 + 32) && *(_DWORD *)(v6 + 40) < *(_DWORD *)(a3 + 8) )
          {
            v5 = 0;
            if ( *(_QWORD *)(v6 + 24) )
              return a2;
            return v5;
          }
          return sub_C07DD0((__int64)a1, (unsigned __int64 *)a3);
        }
        return v5;
      }
    }
    else
    {
      if ( *(_QWORD *)(a2 + 32) < *(_QWORD *)a3 )
        goto LABEL_12;
      v12 = *(_DWORD *)(a2 + 40);
      v11 = *(_DWORD *)(a3 + 8);
    }
    if ( v12 >= v11 )
      return a2;
LABEL_12:
    if ( a1[4] != a2 )
    {
      v8 = std::_Rb_tree_increment();
      if ( v4 < *(_QWORD *)(v8 + 32) || v4 == *(_QWORD *)(v8 + 32) && *(_DWORD *)(a3 + 8) < *(_DWORD *)(v8 + 40) )
      {
        v5 = 0;
        if ( *(_QWORD *)(a2 + 24) )
          return v8;
        return v5;
      }
      return sub_C07DD0((__int64)a1, (unsigned __int64 *)a3);
    }
    return 0;
  }
  if ( a1[5] )
  {
    v9 = a1[4];
    v10 = *(_QWORD *)(v9 + 32);
    if ( *(_QWORD *)a3 > v10 || *(_QWORD *)a3 == v10 && *(_DWORD *)(a3 + 8) > *(_DWORD *)(v9 + 40) )
      return 0;
  }
  return sub_C07DD0((__int64)a1, (unsigned __int64 *)a3);
}


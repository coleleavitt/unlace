__int64 __fastcall sub_4E4F90(_QWORD *a1, __int64 a2, unsigned int *a3)
{
  unsigned int v4; // r12d
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 result; // rax
  unsigned int v9; // edx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rcx
  unsigned int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // edx
  unsigned int v20; // eax

  if ( (_QWORD *)a2 == a1 + 1 )
  {
    if ( !a1[5] )
      return sub_4E3830((__int64)a1, a3);
    v16 = a1[4];
    v17 = *a3;
    v18 = *(_DWORD *)(v16 + 32);
    if ( v18 >= v17 )
    {
      if ( v17 < v18 )
        return sub_4E3830((__int64)a1, a3);
      v19 = *(_DWORD *)(v16 + 36);
      v20 = a3[1];
      if ( v19 == 0x10000 )
      {
        if ( v20 == 0x10000 )
          return sub_4E3830((__int64)a1, a3);
      }
      else if ( v20 == 0x10000 || v19 >= v20 )
      {
        return sub_4E3830((__int64)a1, a3);
      }
    }
    return 0;
  }
  v4 = *a3;
  v5 = *(_DWORD *)(a2 + 32);
  if ( *a3 >= v5 )
  {
    if ( v5 < v4 )
    {
LABEL_7:
      if ( a1[4] == a2 )
        return 0;
      result = std::_Rb_tree_increment();
      v9 = *(_DWORD *)(result + 32);
      if ( v4 < v9 )
      {
LABEL_13:
        if ( *(_QWORD *)(a2 + 24) )
          return result;
        return 0;
      }
      if ( v9 >= v4 )
      {
        v10 = a3[1];
        v11 = *(_DWORD *)(result + 36);
        if ( v10 == 0x10000 )
        {
          if ( v11 != 0x10000 )
            goto LABEL_13;
        }
        else if ( v11 != 0x10000 && v10 < v11 )
        {
          goto LABEL_13;
        }
      }
      return sub_4E3830((__int64)a1, a3);
    }
    v6 = a3[1];
    v7 = *(_DWORD *)(a2 + 36);
    if ( v6 == 0x10000 )
    {
      if ( v7 != 0x10000 )
        goto LABEL_16;
    }
    else
    {
      if ( v6 < v7 )
      {
        if ( v7 == 0x10000 )
          goto LABEL_7;
        goto LABEL_16;
      }
      if ( v7 == 0x10000 || v7 < v6 )
        goto LABEL_7;
    }
    return a2;
  }
LABEL_16:
  result = a2;
  if ( a1[3] != a2 )
  {
    v12 = std::_Rb_tree_decrement();
    v13 = *(_DWORD *)(v12 + 32);
    if ( v13 >= v4 )
    {
      if ( v4 < v13 )
        return sub_4E3830((__int64)a1, a3);
      v14 = *(_DWORD *)(v12 + 36);
      v15 = a3[1];
      if ( v14 == 0x10000 )
      {
        if ( v15 == 0x10000 )
          return sub_4E3830((__int64)a1, a3);
      }
      else if ( v15 == 0x10000 || v14 >= v15 )
      {
        return sub_4E3830((__int64)a1, a3);
      }
    }
    result = a2;
    if ( !*(_QWORD *)(v12 + 24) )
      return 0;
  }
  return result;
}


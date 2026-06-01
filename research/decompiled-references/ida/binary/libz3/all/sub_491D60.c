__int64 __fastcall sub_491D60(_QWORD *a1, __int64 a2, __int64 *a3)
{
  _DWORD *v3; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rdi

  v3 = *(_DWORD **)(a2 + 24);
  if ( v3 )
  {
    if ( *v3 == 5 )
    {
      if ( v3[1] == 6 )
      {
        v11 = sub_15E1AF0(a1[1]);
        v12 = v11;
        if ( v11 )
          ++*(_DWORD *)(v11 + 8);
        v13 = *a3;
        if ( *a3 )
        {
          v14 = a3[1];
          v10 = (*(_DWORD *)(v13 + 8))-- == 1;
          if ( v10 )
            sub_15D7BC0(v14, v13);
        }
        *a3 = v12;
        return 4;
      }
    }
    else if ( !*v3 && v3[1] == 5 )
    {
      v6 = sub_15E1AF0(*a1);
      v7 = v6;
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      v8 = *a3;
      if ( *a3 )
      {
        v9 = a3[1];
        v10 = (*(_DWORD *)(v8 + 8))-- == 1;
        if ( v10 )
          sub_15D7BC0(v9, v8);
      }
      *a3 = v7;
      return 4;
    }
    return 5;
  }
  return 5;
}


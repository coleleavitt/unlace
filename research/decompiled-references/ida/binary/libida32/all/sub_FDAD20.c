char __fastcall sub_FDAD20(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char result; // al
  _DWORD *v5; // rax
  _DWORD *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // rdx

  result = 1;
  if ( (_DWORD)a1 == 94 )
    return result;
  v5 = (_DWORD *)sub_20C9770(a1, a2, a3, a4);
  v6 = v5;
  v8 = 4 * v7;
  v9 = &v5[v7];
  v10 = (4 * v7) >> 4;
  v11 = v8 >> 2;
  if ( v10 <= 0 )
  {
    v13 = v5;
LABEL_15:
    if ( v11 != 2 )
    {
      if ( v11 != 3 )
      {
        result = 0;
        if ( v11 != 1 )
          return result;
LABEL_23:
        result = 0;
        if ( *v13 != 94 )
          return result;
        return v9 != v13;
      }
      if ( *v13 == 94 )
        return v9 != v13;
      ++v13;
    }
    if ( *v13 == 94 )
      return v9 != v13;
    ++v13;
    goto LABEL_23;
  }
  if ( *v5 == 94 )
    return v5 != v9;
  if ( v5[1] == 94 )
    return v9 != v5 + 1;
  if ( v5[2] == 94 )
    return v9 != v5 + 2;
  v12 = &v5[4 * v10];
  if ( v5[3] == 94 )
    return v9 != v5 + 3;
  while ( 1 )
  {
    v13 = v6 + 4;
    if ( v6 + 4 == v12 )
    {
      v11 = v9 - v12;
      goto LABEL_15;
    }
    if ( v6[4] == 94 )
      return v9 != v13;
    if ( v6[5] == 94 )
      return v9 != v6 + 5;
    if ( v6[6] == 94 )
      return v9 != v6 + 6;
    if ( v6[7] == 94 )
      return v9 != v6 + 7;
    v6 += 4;
  }
}


char __fastcall sub_FFE5D0(int a1)
{
  char result; // al
  _DWORD *v2; // rax
  _DWORD *v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  _DWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // rcx
  _DWORD *v10; // rdx

  result = 1;
  if ( a1 == 90 )
    return result;
  v2 = (_DWORD *)sub_20ED4B0();
  v3 = v2;
  v5 = 4 * v4;
  v6 = &v2[v4];
  v7 = (4 * v4) >> 4;
  v8 = v5 >> 2;
  if ( v7 <= 0 )
  {
    v10 = v2;
LABEL_15:
    if ( v8 != 2 )
    {
      if ( v8 != 3 )
      {
        result = 0;
        if ( v8 != 1 )
          return result;
        goto LABEL_23;
      }
      result = v10 != v6;
      if ( *v10 == 90 )
        return result;
      ++v10;
    }
    if ( *v10 == 90 )
      return v6 != v10;
    ++v10;
LABEL_23:
    result = 0;
    if ( *v10 != 90 )
      return result;
    return v6 != v10;
  }
  if ( *v2 == 90 )
    return v2 != v6;
  if ( v2[1] == 90 )
    return v6 != v2 + 1;
  if ( v2[2] == 90 )
    return v6 != v2 + 2;
  v9 = &v2[4 * v7];
  if ( v2[3] == 90 )
    return v6 != v2 + 3;
  while ( 1 )
  {
    v10 = v3 + 4;
    if ( v3 + 4 == v9 )
    {
      v8 = v6 - v9;
      goto LABEL_15;
    }
    if ( v3[4] == 90 )
      return v6 != v10;
    if ( v3[5] == 90 )
      return v6 != v3 + 5;
    if ( v3[6] == 90 )
      return v6 != v3 + 6;
    if ( v3[7] == 90 )
      return v6 != v3 + 7;
    v3 += 4;
  }
}

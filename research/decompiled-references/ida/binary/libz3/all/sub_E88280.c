_DWORD *__fastcall sub_E88280(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rax
  _DWORD *v6; // r8
  _DWORD *v7; // rdi
  _DWORD *result; // rax
  int v9; // esi
  int v10; // eax

  v3 = a1;
  v4 = 24LL * (a3 & (a2 - 1));
  v5 = 24LL * a2;
  v6 = &a1[(unsigned __int64)v4 / 4];
  v7 = &a1[(unsigned __int64)v5 / 4];
  if ( v4 == v5 )
  {
LABEL_10:
    while ( v6 != v3 )
    {
      v10 = v3[1];
      if ( v10 == 2 )
      {
        if ( *v3 == a3 && v3[2] == a3 )
          return v3;
      }
      else if ( !v10 )
      {
        return nullptr;
      }
      v3 += 6;
    }
    return nullptr;
  }
  result = v6;
  while ( 1 )
  {
    v9 = result[1];
    if ( v9 != 2 )
    {
      if ( !v9 )
        return nullptr;
      goto LABEL_4;
    }
    if ( *result == a3 && result[2] == a3 )
      return result;
LABEL_4:
    result += 6;
    if ( v7 == result )
      goto LABEL_10;
  }
}


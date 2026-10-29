_DWORD *__fastcall sub_98B080(_DWORD *a1, unsigned int a2, int a3)
{
  _DWORD *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rax
  _DWORD *v7; // r8
  _DWORD *v8; // r9
  _DWORD *result; // rax
  int v10; // esi
  int v11; // eax

  v3 = a1;
  v4 = a3 & (a2 - 1);
  v5 = 8LL * a2;
  v6 = 8 * v4;
  v7 = &a1[(unsigned __int64)v5 / 4];
  v8 = &a1[(unsigned __int64)v6 / 4];
  if ( v6 == v5 )
  {
LABEL_9:
    if ( v8 != a1 )
    {
      do
      {
        v11 = v3[1];
        if ( v11 + 0x80000000 > 1 )
        {
          if ( *v3 == a3 && v11 == a3 )
            return v3;
        }
        else if ( v11 == 0x80000000 )
        {
          return nullptr;
        }
        v3 += 2;
      }
      while ( v8 != v3 );
    }
    return nullptr;
  }
  result = &a1[(unsigned __int64)v6 / 4];
  while ( 1 )
  {
    v10 = result[1];
    if ( v10 + 0x80000000 > 1 )
      break;
    if ( v10 == 0x80000000 )
      return nullptr;
LABEL_5:
    result += 2;
    if ( v7 == result )
      goto LABEL_9;
  }
  if ( *result != a3 || v10 != a3 )
    goto LABEL_5;
  return result;
}


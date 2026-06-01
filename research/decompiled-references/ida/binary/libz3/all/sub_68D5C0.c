_DWORD *__fastcall sub_68D5C0(_QWORD *a1, __int64 a2)
{
  _DWORD *result; // rax
  _DWORD *v3; // rsi
  __int64 v4; // rdx
  unsigned int v5; // r8d
  __int64 v6; // rcx
  bool v7; // dl

  result = *(_DWORD **)(a2 + 8);
  if ( result )
  {
    v3 = &result[*(result - 1)];
    if ( v3 != result )
    {
      v4 = a1[424];
      if ( v4 )
      {
        v5 = *(_DWORD *)(v4 - 4);
        do
        {
          v6 = *result >> 1;
          if ( (unsigned int)v6 < v5 )
          {
            v7 = !(*result & 1);
            *(_BYTE *)(a1[443] + v6) = v7;
            *(_BYTE *)(a1[444] + v6) = v7;
          }
          ++result;
        }
        while ( v3 != result );
      }
    }
  }
  return result;
}


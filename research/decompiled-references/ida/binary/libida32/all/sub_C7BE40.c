unsigned __int64 __fastcall sub_C7BE40(__int64 *a1, unsigned int *a2, _BYTE *a3)
{
  __int64 v3; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v5; // r12
  unsigned __int64 v7; // rsi
  __int64 v8; // rsi

  v3 = *a1;
  result = a1[1] - *a1;
  if ( result + 4 <= 0xFFFFFFFF )
  {
    v5 = (result + 7) & 0xFFFFFFFFFFFFFFF8LL;
    v7 = v5 + 8;
    if ( result < v5 + 8 )
    {
      sub_C7BD20((__int64)a1, v7 - result);
      result = *a2;
      *(_DWORD *)(*a1 + v5) = result;
    }
    else
    {
      if ( result > v5 + 8 )
      {
        v8 = v3 + v7;
        if ( a1[1] != v8 )
          a1[1] = v8;
      }
      result = *a2;
      *(_DWORD *)(v3 + v5) = result;
    }
  }
  else
  {
    *a3 = 0;
  }
  return result;
}


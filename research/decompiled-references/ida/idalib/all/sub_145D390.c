__int64 __fastcall sub_145D390(__int64 a1, char a2, _DWORD *a3)
{
  __int64 result; // rax
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rcx
  _DWORD *v6; // rcx
  unsigned __int64 v7; // rbp

  result = *(unsigned __int8 *)(a1 + 3152);
  if ( a2 )
  {
    if ( !(_BYTE)result )
    {
      *(_BYTE *)(a1 + 3152) = 1;
      v4 = *(unsigned int *)(a1 + 3172);
      *(_DWORD *)(a1 + 3156) = *a3;
      v5 = *(unsigned int *)(a1 + 3168);
      if ( v5 >= v4 )
      {
        v7 = (unsigned int)*a3 | ((unsigned __int64)(unsigned int)*a3 << 32);
        if ( v4 < v5 + 1 )
        {
          sub_2237220(a1 + 3160, a1 + 3176, v5 + 1, 8);
          v5 = *(unsigned int *)(a1 + 3168);
          result = 0;
        }
        *(_QWORD *)(*(_QWORD *)(a1 + 3160) + 8 * v5) = v7;
        ++*(_DWORD *)(a1 + 3168);
      }
      else
      {
        v6 = (_DWORD *)(*(_QWORD *)(a1 + 3160) + 8 * v5);
        *v6 = *a3;
        v6[1] = *a3;
        ++*(_DWORD *)(a1 + 3168);
      }
    }
  }
  else if ( (_BYTE)result )
  {
    *(_BYTE *)(a1 + 3152) = 0;
    *(_DWORD *)(*(_QWORD *)(a1 + 3160) + 8LL * *(unsigned int *)(a1 + 3168) - 4) = *a3;
    return 0;
  }
  else
  {
    return 1;
  }
  return result;
}

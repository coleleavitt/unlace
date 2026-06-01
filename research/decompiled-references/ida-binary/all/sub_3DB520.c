void __fastcall sub_3DB520(_DWORD *a1, _DWORD *a2, char *a3, char *a4, __int64 a5)
{
  _DWORD *v6; // rdx
  char *v7; // rax
  signed __int64 v8; // rdx
  size_t v9; // rdx

  if ( a1 != a2 )
  {
    if ( a3 == a4 )
      return;
    v6 = a2 - 1;
    v7 = a4 - 4;
    while ( 1 )
    {
      if ( *(_DWORD *)v7 < *v6 )
      {
        *(_DWORD *)(a5 - 4) = *v6;
        if ( a1 == v6 )
        {
          v8 = v7 + 4 - a3;
          if ( v8 <= 4 )
          {
            if ( v8 == 4 )
              *(_DWORD *)(a5 - 8) = *(_DWORD *)a3;
          }
          else
          {
            memmove((void *)(a5 - 4 - v8), a3, v8);
          }
          return;
        }
        --v6;
      }
      else
      {
        *(_DWORD *)(a5 - 4) = *(_DWORD *)v7;
        if ( a3 == v7 )
          return;
        v7 -= 4;
      }
      a5 -= 4;
    }
  }
  v9 = a4 - a3;
  if ( a4 - a3 <= 4 )
  {
    if ( a4 - a3 == 4 )
      *(_DWORD *)(a5 - 4) = *(_DWORD *)a3;
  }
  else
  {
    memmove((void *)(a5 - v9), a3, v9);
  }
}

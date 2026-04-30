__int64 __fastcall sub_3DB1A0(_DWORD *src, _BYTE *a2, char *a3, char *a4, _DWORD *a5)
{
  char *v6; // rbx
  int v7; // ecx
  signed __int64 v8; // rsi
  signed __int64 v9; // rbp
  _DWORD *v10; // r8

  v6 = a3;
  if ( a2 != (_BYTE *)src && a4 != a3 )
  {
    do
    {
      v7 = *(_DWORD *)v6;
      if ( *src > *(_DWORD *)v6 )
      {
        v6 += 4;
        *a5++ = v7;
        if ( a4 == v6 )
          break;
      }
      else
      {
        *a5++ = *src++;
        if ( a4 == v6 )
          break;
      }
    }
    while ( a2 != (_BYTE *)src );
  }
  v8 = a2 - (_BYTE *)src;
  if ( v8 <= 4 )
  {
    if ( v8 == 4 )
      *a5 = *src;
  }
  else
  {
    a5 = memmove(a5, src, v8);
  }
  v9 = a4 - v6;
  v10 = (_DWORD *)((char *)a5 + v8);
  if ( v9 <= 4 )
  {
    if ( v9 == 4 )
      *v10 = *(_DWORD *)v6;
  }
  else
  {
    v10 = memmove(v10, v6, v9);
  }
  return (__int64)v10 + v9;
}

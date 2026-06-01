__int64 __fastcall sub_49C470(_QWORD *src, _BYTE *a2, char *a3, char *a4, _QWORD *a5)
{
  char *v6; // rbx
  __int64 v7; // rcx
  signed __int64 v8; // rsi
  signed __int64 v9; // rbp
  _QWORD *v10; // r8

  v6 = a3;
  if ( a2 != (_BYTE *)src && a4 != a3 )
  {
    do
    {
      v7 = *(_QWORD *)v6;
      if ( *(_QWORD *)v6 < *src )
      {
        v6 += 8;
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
  if ( v8 <= 8 )
  {
    if ( v8 == 8 )
      *a5 = *src;
  }
  else
  {
    a5 = memmove(a5, src, v8);
  }
  v9 = a4 - v6;
  v10 = (_QWORD *)((char *)a5 + v8);
  if ( v9 <= 8 )
  {
    if ( v9 == 8 )
      *v10 = *(_QWORD *)v6;
  }
  else
  {
    v10 = memmove(v10, v6, v9);
  }
  return (__int64)v10 + v9;
}

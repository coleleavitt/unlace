__int64 __fastcall sub_8E4CC0(char *src, _BYTE *a2, char *a3, char *a4, _QWORD *a5)
{
  char *v7; // rbx
  __int64 v8; // rsi
  signed __int64 v9; // r12
  bool v10; // zf
  signed __int64 v11; // rbp
  _QWORD *v12; // r8

  v7 = a3;
  if ( a4 != a3 )
  {
    while ( a2 != src )
    {
      v8 = *(_QWORD *)v7;
      if ( *(_DWORD *)(*(_QWORD *)src + 4LL * (*(_DWORD *)(*(_QWORD *)src + 4LL) & 0xFFFFFF) + 8) >= *(_DWORD *)(*(_QWORD *)v7 + 4LL * (*(_DWORD *)(*(_QWORD *)v7 + 4LL) & 0xFFFFFF) + 8) )
      {
        *a5 = *(_QWORD *)src;
        src += 8;
        ++a5;
        if ( a4 == v7 )
        {
          v9 = a2 - src;
          v10 = v9 == 8;
          if ( v9 > 8 )
            goto LABEL_6;
          goto LABEL_12;
        }
      }
      else
      {
        v7 += 8;
        *a5++ = v8;
        if ( a4 == v7 )
          break;
      }
    }
  }
  v9 = a2 - src;
  v10 = v9 == 8;
  if ( v9 <= 8 )
  {
LABEL_12:
    if ( v10 )
      *a5 = *(_QWORD *)src;
  }
  else
  {
LABEL_6:
    a5 = memmove(a5, src, v9);
  }
  v11 = a4 - v7;
  v12 = (_QWORD *)((char *)a5 + v9);
  if ( v11 <= 8 )
  {
    if ( v11 == 8 )
      *v12 = *(_QWORD *)v7;
  }
  else
  {
    v12 = memmove(v12, v7, v11);
  }
  return (__int64)v12 + v11;
}


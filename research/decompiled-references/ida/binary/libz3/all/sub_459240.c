__int64 __fastcall sub_459240(_QWORD *src, _BYTE *a2, char *a3, char *a4, _QWORD *a5)
{
  char *v6; // rbx
  _DWORD *v7; // rcx
  signed __int64 v8; // rsi
  signed __int64 v9; // r12
  bool v10; // zf
  signed __int64 v11; // rbp
  _QWORD *v12; // r8

  v6 = a3;
  if ( a4 != a3 )
  {
    while ( a2 != (_BYTE *)src )
    {
      v7 = *(_DWORD **)v6;
      if ( **(_DWORD **)v6 >= *(_DWORD *)*src )
      {
        *a5++ = *src++;
        if ( a4 == v6 )
        {
          v8 = a2 - (_BYTE *)src;
          v9 = v8;
          v10 = v8 == 8;
          if ( v8 > 8 )
            goto LABEL_6;
          goto LABEL_12;
        }
      }
      else
      {
        v6 += 8;
        *a5++ = v7;
        if ( a4 == v6 )
          break;
      }
    }
  }
  v8 = a2 - (_BYTE *)src;
  v9 = v8;
  v10 = v8 == 8;
  if ( v8 <= 8 )
  {
LABEL_12:
    if ( v10 )
      *a5 = *src;
  }
  else
  {
LABEL_6:
    a5 = memmove(a5, src, v8);
  }
  v11 = a4 - v6;
  v12 = (_QWORD *)((char *)a5 + v9);
  if ( v11 <= 8 )
  {
    if ( v11 == 8 )
      *v12 = *(_QWORD *)v6;
  }
  else
  {
    v12 = memmove(v12, v6, v11);
  }
  return (__int64)v12 + v11;
}


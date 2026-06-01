__int64 __fastcall sub_803E50(char *src, char *a2, char *a3, char *a4, _QWORD *a5)
{
  char *v7; // rbx
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int16 v12; // cx
  __int16 v13; // si
  signed __int64 v14; // r12
  signed __int64 v15; // rbp
  _QWORD *v16; // r8

  v7 = a3;
  if ( a4 != a3 && a2 != src )
  {
    do
    {
      v10 = *(_QWORD *)v7;
      v11 = *(_QWORD *)src;
      v12 = *(_WORD *)(*(_QWORD *)v7 + 4LL);
      v13 = *(_WORD *)(*(_QWORD *)src + 4LL);
      if ( v12 )
      {
        if ( v12 != 2 )
        {
          if ( v13 )
          {
            if ( v13 != 2 )
              goto LABEL_18;
            v8 = 1;
LABEL_7:
            v9 = *(_DWORD *)(v11 + 40);
LABEL_8:
            if ( v8 < v9 )
              goto LABEL_9;
            goto LABEL_18;
          }
          v8 = 1;
          goto LABEL_17;
        }
        v8 = *(_DWORD *)(v10 + 40);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v10 + 28);
      }
      if ( v13 )
      {
        v9 = 1;
        if ( v13 == 2 )
          goto LABEL_7;
        goto LABEL_8;
      }
LABEL_17:
      if ( v8 < *(unsigned __int16 *)(v11 + 28) )
      {
LABEL_9:
        *a5 = v10;
        v7 += 8;
        ++a5;
        if ( a2 == src )
          break;
        continue;
      }
LABEL_18:
      src += 8;
      *a5++ = v11;
      if ( a2 == src )
        break;
    }
    while ( a4 != v7 );
  }
  v14 = a2 - src;
  if ( v14 <= 8 )
  {
    if ( v14 == 8 )
      *a5 = *(_QWORD *)src;
  }
  else
  {
    a5 = memmove(a5, src, v14);
  }
  v15 = a4 - v7;
  v16 = (_QWORD *)((char *)a5 + v14);
  if ( v15 <= 8 )
  {
    if ( v15 == 8 )
      *v16 = *(_QWORD *)v7;
  }
  else
  {
    v16 = memmove(v16, v7, v15);
  }
  return (__int64)v16 + v15;
}


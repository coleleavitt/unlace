__int64 __fastcall sub_7AC1D0(char *src, char *a2, char *a3, char *a4, _QWORD *a5)
{
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // ecx
  signed __int64 v12; // rbp
  signed __int64 v13; // r12
  _QWORD *v14; // r8
  unsigned int v16; // ecx
  unsigned int v17; // esi

  v7 = a3;
  if ( a4 != a3 && a2 != src )
  {
    do
    {
      v8 = *(_QWORD *)src;
      v9 = *(_QWORD *)v7;
      v10 = *(_DWORD *)(*(_QWORD *)src + 24LL);
      v11 = *(_DWORD *)(*(_QWORD *)v7 + 24LL);
      if ( v11 < v10 )
        goto LABEL_8;
      if ( v10 != v11 )
        goto LABEL_5;
      v16 = *(_DWORD *)(v9 + 28);
      v17 = *(_DWORD *)(v8 + 28);
      if ( v16 < v17 )
      {
LABEL_8:
        v7 += 8;
      }
      else
      {
        if ( v17 != v16 || *(_DWORD *)(v9 + 32) >= *(_DWORD *)(v8 + 32) )
        {
LABEL_5:
          src += 8;
          *a5++ = v8;
          if ( a2 == src )
            break;
          continue;
        }
        v7 += 8;
      }
      *a5++ = v9;
      if ( a2 == src )
        break;
    }
    while ( a4 != v7 );
  }
  v12 = a2 - src;
  if ( v12 <= 8 )
  {
    if ( v12 == 8 )
      *a5 = *(_QWORD *)src;
  }
  else
  {
    a5 = memmove(a5, src, v12);
  }
  v13 = a4 - v7;
  v14 = (_QWORD *)((char *)a5 + v12);
  if ( v13 <= 8 )
  {
    if ( v13 == 8 )
      *v14 = *(_QWORD *)v7;
  }
  else
  {
    v14 = memmove(v14, v7, v13);
  }
  return (__int64)v14 + v13;
}


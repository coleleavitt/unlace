__int64 __fastcall sub_6060(__int64 a1)
{
  int v1; // edx
  char *v2; // r14
  char *v4; // r12
  unsigned __int64 v5; // rdx
  unsigned int *v6; // rbp
  int v7; // ebp
  int v8; // eax
  unsigned int v9; // r15d
  int *v10; // rdi
  unsigned int *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  int v17; // ebx
  char *v19; // rax
  int v20; // ecx
  __int64 v21; // rdi
  __int64 v22; // rsi
  char *v23; // rdx
  char v24; // cl
  unsigned __int64 v25; // rdx

  v1 = *(_DWORD *)(a1 + 16);
  if ( v1 < 0 )
    return 0;
  v2 = *(char **)(a1 + 48);
  v4 = v2 + 4096;
  if ( v1 )
  {
    v19 = *(char **)(a1 + 8);
    v20 = 4096;
LABEL_18:
    if ( v1 <= v20 )
      v20 = v1;
    v21 = (unsigned int)(v20 - 1);
    *(_DWORD *)(a1 + 16) = v1 - v20;
    v22 = (__int64)&v2[v21 + 1];
    v23 = v2;
    do
    {
      while ( 1 )
      {
        v24 = *v19++;
        *v23++ = v24;
        if ( v4 == v19 )
          break;
        if ( v23 == (char *)v22 )
          goto LABEL_24;
      }
      v19 = *(char **)(a1 + 48);
    }
    while ( v23 != (char *)v22 );
LABEL_24:
    v5 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 8) = v19;
    v2 += v21 + 1;
    v6 = (unsigned int *)v5;
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 40);
    v6 = (unsigned int *)v5;
  }
  if ( v2 < v4 )
  {
    while ( 1 )
    {
      v10 = *(int **)a1;
      v11 = v6;
      v16 = sub_5D40(*(int **)a1, v6, v5, v5 + 1316) - 256;
      v17 = v16;
      if ( v16 >= 0 )
      {
        if ( v16 == 28 )
        {
          *(_DWORD *)(a1 + 16) = -1;
          return (unsigned int)((_DWORD)v2 - *(_DWORD *)(a1 + 48));
        }
        v7 = (unsigned __int8)v16;
        if ( (v16 & 0xF8) != 0 )
        {
          v8 = 0;
          v9 = (v7 >> 2) - 1;
          if ( v7 >> 2 != 1 )
          {
            v10 = *(int **)a1;
            v11 = (unsigned int *)v9;
            v8 = sub_5B30(*(_QWORD *)a1, v9);
          }
          v14 = v9;
          v7 = v8 | ((v7 - 4 * v9) << v9);
        }
        if ( v17 > 255 )
        {
          v25 = *(_QWORD *)(a1 + 48);
          v19 = &v2[~(__int64)v7];
          *(_QWORD *)(a1 + 8) = v19;
          if ( (unsigned __int64)v19 < v25 )
          {
            v19 += 4096;
            *(_QWORD *)(a1 + 8) = v19;
          }
          if ( v19 >= v4 || (unsigned __int64)v19 < v25 )
            sub_5960(v10, v11, v25, v14, v12, v13);
          v1 = *(_DWORD *)(a1 + 16);
          v20 = (_DWORD)v4 - (_DWORD)v2;
          goto LABEL_18;
        }
        v15 = *(_QWORD *)(a1 + 40);
        *(_DWORD *)(a1 + 16) = v7 + 3;
        v6 = (unsigned int *)(v15 + 1140);
        if ( v2 >= v4 )
          return (unsigned int)((_DWORD)v2 - *(_DWORD *)(a1 + 48));
      }
      else
      {
        *v2++ = v16;
        if ( v2 >= v4 )
          return (unsigned int)((_DWORD)v2 - *(_DWORD *)(a1 + 48));
      }
      v5 = *(_QWORD *)(a1 + 40);
    }
  }
  return (unsigned int)((_DWORD)v2 - *(_DWORD *)(a1 + 48));
}


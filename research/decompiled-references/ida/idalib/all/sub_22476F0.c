void __fastcall sub_22476F0(char **a1, __int64 a2, char a3, int a4, char a5)
{
  char *v5; // r14
  size_t v6; // r15
  int v8; // ebp
  _BYTE *v9; // rax
  signed __int64 v10; // rax
  size_t v11; // rbx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  size_t v14; // r11
  _QWORD *v15; // rax
  __int64 v16; // rax
  _QWORD *v17; // rax
  int c; // [rsp+8h] [rbp-50h]
  size_t v20; // [rsp+18h] [rbp-40h]

  v5 = *a1;
  v6 = (size_t)a1[1];
  if ( a4 )
  {
    if ( v6 )
    {
      v8 = a4 - 1;
      c = a3;
      while ( 1 )
      {
        v9 = memchr(v5, c, v6);
        if ( !v9 )
          break;
        v10 = v9 - v5;
        v11 = v10;
        if ( v10 == -1 )
          break;
        if ( v10 || a5 )
        {
          v13 = *(unsigned int *)(a2 + 8);
          v14 = v6;
          if ( v11 <= v6 )
            v14 = v11;
          if ( v13 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
          {
            v20 = v14;
            sub_2237220(a2, (const void *)(a2 + 16), v13 + 1, 16);
            v13 = *(unsigned int *)(a2 + 8);
            v14 = v20;
          }
          v12 = v11 + 1;
          v15 = (_QWORD *)(*(_QWORD *)a2 + 16 * v13);
          *v15 = v5;
          v15[1] = v14;
          ++*(_DWORD *)(a2 + 8);
          if ( v12 > v6 )
          {
            v5 += v6;
            if ( !a5 )
              return;
            goto LABEL_19;
          }
        }
        else
        {
          v12 = 1;
        }
        v6 -= v12;
        v5 += v12;
        if ( !v8 )
          goto LABEL_23;
        --v8;
        if ( !v6 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      if ( !a5 )
        return;
LABEL_19:
      v6 = 0;
    }
  }
  else
  {
LABEL_23:
    if ( !a5 && !v6 )
      return;
  }
  v16 = *(unsigned int *)(a2 + 8);
  if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a2 + 12) )
  {
    sub_2237220(a2, (const void *)(a2 + 16), v16 + 1, 16);
    v16 = *(unsigned int *)(a2 + 8);
  }
  v17 = (_QWORD *)(*(_QWORD *)a2 + 16 * v16);
  *v17 = v5;
  v17[1] = v6;
  ++*(_DWORD *)(a2 + 8);
}

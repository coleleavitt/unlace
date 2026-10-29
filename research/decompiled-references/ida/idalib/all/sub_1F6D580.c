void __fastcall sub_1F6D580(char *src, char *a2)
{
  char *v2; // r12
  __int64 v3; // r14
  unsigned int *v4; // r13
  unsigned int *v5; // rsi
  size_t v6; // rbx
  size_t v7; // rbp
  const void *v8; // r13
  size_t v9; // rdx
  int v10; // eax
  char *i; // rbp
  __int64 v12; // r10
  unsigned int *v13; // rsi
  size_t v14; // rcx
  size_t v15; // rdx
  int v16; // eax
  __int64 v17; // [rsp+0h] [rbp-50h]
  size_t v18; // [rsp+8h] [rbp-48h]
  char *v19; // [rsp+10h] [rbp-40h]

  if ( src != a2 )
  {
    v2 = src + 8;
    if ( a2 != src + 8 )
    {
      v19 = &src[8 * ((unsigned __int64)(a2 - 16 - src) >> 3) + 16];
      do
      {
        while ( 1 )
        {
          v3 = *(_QWORD *)v2;
          v4 = *(unsigned int **)(*(_QWORD *)v2 + 16LL);
          v5 = *(unsigned int **)(*(_QWORD *)src + 16LL);
          v6 = *v4;
          v7 = *v5;
          v8 = v4 + 4;
          v9 = v6;
          if ( v7 <= v6 )
            v9 = *v5;
          if ( !v9 )
            break;
          v10 = memcmp(v8, v5 + 4, v9);
          if ( !v10 )
            break;
          if ( v10 >= 0 )
            goto LABEL_11;
LABEL_22:
          if ( src != v2 )
            memmove(src + 8, src, v2 - src);
          *(_QWORD *)src = v3;
          v2 += 8;
          if ( v2 == v19 )
            return;
        }
        if ( v7 != v6 && v7 > v6 )
          goto LABEL_22;
LABEL_11:
        for ( i = v2; ; i -= 8 )
        {
          while ( 1 )
          {
            v12 = *((_QWORD *)i - 1);
            v13 = *(unsigned int **)(v12 + 16);
            v14 = *v13;
            v15 = v14;
            if ( v6 <= v14 )
              v15 = v6;
            if ( !v15 )
              break;
            v18 = *v13;
            v17 = *((_QWORD *)i - 1);
            v16 = memcmp(v8, v13 + 4, v15);
            v12 = v17;
            v14 = v18;
            if ( !v16 )
              break;
            if ( v16 >= 0 )
              goto LABEL_4;
            *(_QWORD *)i = v17;
            i -= 8;
          }
          if ( v6 == v14 || v6 >= v14 )
            break;
          *(_QWORD *)i = v12;
        }
LABEL_4:
        *(_QWORD *)i = v3;
        v2 += 8;
      }
      while ( v2 != v19 );
    }
  }
}

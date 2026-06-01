void __fastcall sub_1F6DA10(size_t **src, size_t **a2)
{
  size_t **v2; // rbx
  size_t *v4; // rbp
  size_t **i; // r15
  size_t *v6; // rsi
  size_t j; // rax
  unsigned __int64 v8; // rax
  size_t *v9; // rdi
  size_t v10; // r13
  size_t k; // rax
  unsigned __int64 v12; // rax
  size_t v13; // r14
  size_t v14; // rdx
  int v15; // eax
  size_t *v16; // rax
  size_t **v17; // [rsp+0h] [rbp-40h]

  if ( src != a2 )
  {
    v2 = src + 1;
    if ( a2 != src + 1 )
    {
      v17 = &src[((unsigned __int64)((char *)(a2 - 2) - (char *)src) >> 3) + 2];
      do
      {
        while ( 1 )
        {
          v4 = *v2;
          if ( !sub_1F6AA70(*v2, *src) )
            break;
          if ( src != v2 )
            memmove(src + 1, src, (char *)v2 - (char *)src);
          *src = v4;
          if ( ++v2 == v17 )
            return;
        }
        for ( i = v2; ; i[1] = v16 )
        {
          v6 = *(i - 1);
          for ( j = v6[1]; j; j = *(_QWORD *)(v8 + 8) )
          {
            if ( (j & 4) == 0 )
              break;
            v8 = j & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v8 )
              break;
            v6 = (size_t *)v8;
          }
          v9 = v4;
          v10 = *v6;
          for ( k = v4[1]; k; k = *(_QWORD *)(v12 + 8) )
          {
            if ( (k & 4) == 0 )
              break;
            v12 = k & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v12 )
              break;
            v9 = (size_t *)v12;
          }
          v13 = *v9;
          v14 = *v9;
          if ( v10 <= *v9 )
            v14 = *v6;
          if ( !v14 )
            break;
          v15 = memcmp(v9 + 4, v6 + 4, v14);
          if ( !v15 )
            break;
          if ( v15 >= 0 )
            goto LABEL_23;
LABEL_26:
          v16 = *--i;
        }
        if ( v10 != v13 && v10 > v13 )
          goto LABEL_26;
LABEL_23:
        *i = v4;
        ++v2;
      }
      while ( v2 != v17 );
    }
  }
}

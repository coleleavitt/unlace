void __fastcall sub_A86CA0(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r12
  __int64 *v4; // rcx
  __int64 *v5; // rax
  unsigned __int64 v6; // r8
  __int64 v7; // rax
  __m128i v8; // xmm0
  unsigned __int64 v9; // rcx
  __int64 *v10; // rdx
  _QWORD *v11; // rsi
  __int64 v12; // rax
  void **v13; // r12
  __int64 *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rbx
  char *v17; // rbp
  char *v18; // r15
  char *v19; // rdi
  __int64 v20; // rdx
  void **v21; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)a1;
  v3 = 8LL * *(unsigned int *)(a1 + 8);
  v4 = (__int64 *)(*(_QWORD *)a1 + v3);
  if ( *(__int64 **)a1 != v4 )
  {
    v5 = *(__int64 **)a1;
    if ( (v2 >= a2 + 16 || a2 >= v2 + 16) && (unsigned __int64)v4 - v2 - 8 > 0x10 )
    {
      v6 = (((unsigned __int64)v4 - v2 - 8) >> 3) + 1;
      v7 = 0;
      do
      {
        v8 = _mm_loadu_si128((const __m128i *)(v2 + v7));
        *(_OWORD *)(v2 + v7) = 0;
        *(__m128i *)(a2 + v7) = v8;
        v7 += 16;
      }
      while ( v7 != 16 * (v6 >> 1) );
      v9 = 8 * (v6 & 0xFFFFFFFFFFFFFFFELL);
      v10 = (__int64 *)(v9 + v2);
      v11 = (_QWORD *)(v9 + a2);
      if ( v6 != (v6 & 0xFFFFFFFFFFFFFFFELL) )
      {
        v12 = *v10;
        *v10 = 0;
        *v11 = v12;
      }
    }
    else
    {
      do
      {
        v20 = *v5;
        *v5++ = 0;
        a2 += 8LL;
        *(_QWORD *)(a2 - 8) = v20;
      }
      while ( v4 != v5 );
    }
    v13 = (void **)(*(_QWORD *)a1 + v3);
    v21 = *(void ***)a1;
    if ( *(void ***)a1 != v13 )
    {
      do
      {
        v14 = (__int64 *)*--v13;
        if ( *v13 )
        {
          v15 = *v14;
          v16 = *v14 + 136LL * *((unsigned int *)v14 + 2);
          if ( *v14 != v16 )
          {
            do
            {
              while ( 1 )
              {
                v16 -= 136;
                v17 = *(char **)(v16 + 8);
                v18 = &v17[56 * *(unsigned int *)(v16 + 16)];
                if ( v17 != v18 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v18 -= 56;
                      v19 = *((char **)v18 + 2);
                      if ( v19 == v18 + 32 )
                        break;
                      free(v19);
                      if ( v17 == v18 )
                        goto LABEL_14;
                    }
                  }
                  while ( v17 != v18 );
LABEL_14:
                  v17 = *(char **)(v16 + 8);
                }
                if ( v17 == (char *)(v16 + 24) )
                  break;
                free(v17);
                if ( v15 == v16 )
                  goto LABEL_17;
              }
            }
            while ( v15 != v16 );
LABEL_17:
            v16 = *v14;
          }
          if ( (__int64 *)v16 != v14 + 2 )
            free((void *)v16);
          operator delete(v14, 0x120u);
        }
      }
      while ( v13 != v21 );
    }
  }
}

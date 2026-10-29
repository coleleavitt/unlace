void __fastcall sub_AC7920(char *src, char *a2)
{
  char *v2; // r15
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int *v8; // rsi
  size_t v9; // r13
  const char *v10; // rsi
  int v11; // edx
  unsigned __int64 v12; // r8
  unsigned int *v13; // rdi
  size_t v14; // rdx
  size_t v15; // r12
  const void *v16; // rdi
  int v17; // eax
  unsigned __int64 v18; // r8
  char *v19; // rax
  __int64 v20; // rsi
  char *v21; // r13
  __int64 j; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rdx
  unsigned int *v27; // rax
  char *v28; // rbx
  size_t v29; // r12
  __int64 v30; // r9
  __int64 v31; // rax
  unsigned __int64 v32; // rax
  unsigned int *v33; // rsi
  size_t v34; // r11
  const void *v35; // rsi
  size_t v36; // rdx
  int v37; // eax
  char *i; // rax
  unsigned __int64 v39; // rdx
  __int64 v40; // rsi
  __int64 v41; // rdx
  unsigned __int64 v42; // [rsp+0h] [rbp-58h]
  __int64 v43; // [rsp+0h] [rbp-58h]
  size_t v44; // [rsp+8h] [rbp-50h]
  void *s1; // [rsp+10h] [rbp-48h]
  char *v46; // [rsp+18h] [rbp-40h]

  if ( src != a2 )
  {
    v2 = src + 8;
    if ( a2 != src + 8 )
    {
      v46 = &src[8 * ((unsigned __int64)(a2 - 16 - src) >> 3) + 16];
      do
      {
        v4 = *(_QWORD *)v2;
        v5 = *(_QWORD *)(*(_QWORD *)src + 40LL);
        if ( (v5 & 7) != 0 || (v6 = v5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          v7 = *(_QWORD *)(v4 + 40);
          v10 = &byte_22CD811;
          v9 = 0;
          v11 = v7 & 7;
          if ( (v7 & 7) != 0 )
            goto LABEL_14;
          v12 = v7 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          {
LABEL_8:
            v13 = *(unsigned int **)(v12 + 16);
            v14 = v9;
            v42 = v12;
            v15 = *v13;
            v16 = v13 + 4;
            if ( v15 <= v9 )
              v14 = v15;
            if ( v14 )
            {
              v17 = memcmp(v16, v10, v14);
              v11 = 0;
              v18 = v42;
              if ( v17 )
              {
                if ( v17 < 0 )
                  goto LABEL_28;
LABEL_35:
                v27 = *(unsigned int **)(v18 + 16);
                v28 = v2;
                v29 = *v27;
                s1 = v27 + 4;
                while ( 1 )
                {
                  v30 = *((_QWORD *)v28 - 1);
                  v21 = v28;
                  v31 = *(_QWORD *)(v30 + 40);
                  if ( (v31 & 7) != 0 )
                    goto LABEL_20;
                  v32 = v31 & 0xFFFFFFFFFFFFFFF8LL;
                  if ( !v32 )
                    goto LABEL_20;
                  v33 = *(unsigned int **)(v32 + 16);
                  v34 = *v33;
                  v35 = v33 + 4;
                  v36 = v34;
                  if ( v29 <= v34 )
                    v36 = v29;
                  if ( v36
                    && (v44 = v34, v43 = *((_QWORD *)v28 - 1), v37 = memcmp(s1, v35, v36), v30 = v43, v34 = v44, v37) )
                  {
                    if ( v37 >= 0 )
                      goto LABEL_20;
                  }
                  else if ( v29 == v34 || v29 >= v34 )
                  {
                    goto LABEL_20;
                  }
                  *(_QWORD *)v28 = v30;
                  v28 -= 8;
                }
              }
            }
            else
            {
              v11 = 0;
            }
            goto LABEL_12;
          }
        }
        else
        {
          v7 = *(_QWORD *)(v4 + 40);
          v8 = *(unsigned int **)(v6 + 16);
          v9 = *v8;
          v10 = (const char *)(v8 + 4);
          v11 = v7 & 7;
          if ( (v7 & 7) != 0 )
          {
            v15 = 0;
            goto LABEL_12;
          }
          v12 = v7 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
            goto LABEL_8;
        }
        v15 = 0;
        v11 = 0;
LABEL_12:
        if ( v15 != v9 && v15 < v9 )
        {
LABEL_28:
          if ( src != v2 )
            memmove(src + 8, src, v2 - src);
          *(_QWORD *)src = v4;
          goto LABEL_21;
        }
LABEL_14:
        v18 = v7 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v7 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          if ( !v11 )
            goto LABEL_35;
          for ( i = v2; ; i -= 8 )
          {
            v40 = *((_QWORD *)i - 1);
            v21 = i;
            v41 = *(_QWORD *)(v40 + 40);
            if ( (v41 & 7) != 0 )
              break;
            v39 = v41 & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v39 || !**(_DWORD **)(v39 + 16) )
              break;
            *(_QWORD *)i = v40;
          }
        }
        else
        {
          v19 = v2;
          if ( v11 )
          {
            while ( 1 )
            {
              v25 = *((_QWORD *)v19 - 1);
              v21 = v19;
              v26 = *(_QWORD *)(v25 + 40);
              if ( (v26 & 7) != 0 )
                break;
              v24 = v26 & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v24 || !**(_DWORD **)(v24 + 16) )
                break;
              *(_QWORD *)v19 = v25;
              v19 -= 8;
            }
          }
          else
          {
            v20 = *((_QWORD *)v2 - 1);
            v21 = v2;
            for ( j = *(_QWORD *)(v20 + 40); (j & 7) == 0; j = *(_QWORD *)(v20 + 40) )
            {
              v23 = j & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v23 )
                break;
              if ( !**(_DWORD **)(v23 + 16) )
                break;
              *(_QWORD *)v19 = v20;
              v19 -= 8;
              v20 = *((_QWORD *)v19 - 1);
              v21 = v19;
            }
          }
        }
LABEL_20:
        *(_QWORD *)v21 = v4;
LABEL_21:
        v2 += 8;
      }
      while ( v2 != v46 );
    }
  }
}


void __fastcall sub_C05860(__int64 a1, __int64 **a2, __int64 a3)
{
  __int64 *v3; // r14
  __int64 *v4; // r15
  __int64 v5; // rax
  __int64 *v6; // r12
  unsigned int v8; // ebp
  __int64 *v9; // rsi
  __int64 *v10; // rbx
  __int64 v11; // rdi
  int v12; // ecx
  __int64 v13; // rax
  __int64 *v14; // r8
  __int64 *i; // rax
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r10
  __int64 *v19; // rdx
  unsigned int v20; // r11d
  __int64 *v21; // r8
  __int64 v22; // r11
  __int64 *v23; // r9
  __int64 *v24; // rax
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 *j; // rax
  __int64 v28; // rdx
  unsigned int v29; // [rsp+0h] [rbp-3Ch]
  __int64 v30; // [rsp+4h] [rbp-38h]

  v3 = *a2;
  if ( *a2 )
  {
    v4 = &v3[*((unsigned int *)v3 - 1)];
    if ( v3 == v4 )
    {
      v8 = 0;
    }
    else
    {
      v5 = *(unsigned int *)(a1 + 128);
      v6 = *(__int64 **)(a1 + 120);
      v8 = 0;
      v30 = 8 * v5;
      v9 = &v6[v5];
      v29 = v5 - 1;
      v10 = v3;
      do
      {
        v11 = *v10;
        v12 = *(_DWORD *)(*v10 + 12);
        v13 = 8LL * (v12 & v29);
        v14 = &v6[(unsigned __int64)v13 / 8];
        if ( v13 != v30 )
        {
          for ( i = &v6[(unsigned __int64)v13 / 8]; v9 != i; ++i )
          {
            v16 = *i;
            if ( (unsigned __int64)*i > 1 )
            {
              if ( *(_DWORD *)(v16 + 12) == v12 && v11 == v16 )
              {
LABEL_15:
                v18 = *(unsigned int *)(a3 + 8);
                v19 = *(__int64 **)a3;
                v20 = v18 - 1;
                v18 *= 8;
                v21 = (__int64 *)(*(_QWORD *)a3 + v18);
                v22 = 8LL * (v12 & v20);
                v23 = (__int64 *)(*(_QWORD *)a3 + v22);
                v24 = v23;
                if ( v22 != v18 )
                {
                  do
                  {
                    while ( 1 )
                    {
                      v25 = *v24;
                      if ( (unsigned __int64)*v24 <= 1 )
                        break;
                      if ( *(_DWORD *)(v25 + 12) == v12 && v11 == v25 )
                        goto LABEL_11;
                      if ( v21 == ++v24 )
                        goto LABEL_23;
                    }
                    if ( !v25 )
                      goto LABEL_12;
                    ++v24;
                  }
                  while ( v21 != v24 );
                }
LABEL_23:
                if ( v19 != v23 )
                {
                  while ( 1 )
                  {
                    v26 = *v19;
                    if ( (unsigned __int64)*v19 > 1 )
                    {
                      if ( *(_DWORD *)(v26 + 12) == v12 && v11 == v26 )
                        goto LABEL_11;
                    }
                    else if ( !v26 )
                    {
                      goto LABEL_12;
                    }
                    if ( v23 == ++v19 )
                      goto LABEL_12;
                  }
                }
                goto LABEL_12;
              }
            }
            else if ( !v16 )
            {
              goto LABEL_11;
            }
          }
        }
        if ( v6 != v14 )
        {
          for ( j = v6; v14 != j; ++j )
          {
            v28 = *j;
            if ( (unsigned __int64)*j > 1 )
            {
              if ( *(_DWORD *)(v28 + 12) == v12 && v11 == v28 )
                goto LABEL_15;
            }
            else if ( !v28 )
            {
              break;
            }
          }
        }
LABEL_11:
        v17 = v8++;
        v3[v17] = v11;
LABEL_12:
        ++v10;
      }
      while ( v10 != v4 );
    }
    *((_DWORD *)v3 - 1) = v8;
  }
}


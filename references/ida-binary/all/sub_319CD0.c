double __fastcall sub_319CD0(__int64 a1)
{
  __int64 v1; // rax
  __int64 *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 *v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  const char *v9; // rdi
  const char *v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 *v13; // rdi
  __int64 v14; // r15
  __int64 v15; // rcx
  const char *v16; // rdi
  const char *v17; // r12
  __int64 v18; // r14
  double result; // xmm0_8
  __int64 *v20; // [rsp+8h] [rbp-60h]
  const char *v21; // [rsp+10h] [rbp-58h]
  __int64 v22; // [rsp+18h] [rbp-50h]
  __int64 *v23; // [rsp+20h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 4248);
  v2 = *(__int64 **)(a1 + 4240);
  v3 = 8 * v1;
  v23 = v2;
  if ( 8 * v1 )
  {
    do
    {
      v3 = *v23;
      v22 = *v23;
      if ( *v23 )
      {
        v4 = *(_QWORD *)(v3 + 4248);
        v5 = *(__int64 **)(v3 + 4240);
        v6 = v5;
        if ( 8 * v4 )
        {
          do
          {
            v7 = *v6;
            if ( *v6 )
            {
              v8 = *(_QWORD *)(v7 + 4248);
              v9 = *(const char **)(v7 + 4240);
              v21 = v9;
              if ( 8 * v8 )
              {
                do
                {
                  v10 = v21;
                  v11 = *(_QWORD *)v21;
                  if ( *(_QWORD *)v21 )
                  {
                    v12 = *(_QWORD *)(v11 + 4248);
                    v13 = *(__int64 **)(v11 + 4240);
                    v20 = v13;
                    if ( 8 * v12 )
                    {
                      do
                      {
                        v14 = *v20;
                        if ( *v20 )
                        {
                          v15 = *(_QWORD *)(v14 + 4248);
                          v16 = *(const char **)(v14 + 4240);
                          v17 = v16;
                          if ( 8 * v15 )
                          {
                            do
                            {
                              v18 = *(_QWORD *)v17;
                              if ( *(_QWORD *)v17 )
                              {
                                sub_319CD0(*(_QWORD *)v17);
                                qfree(v18, v10);
                                v16 = *(const char **)(v14 + 4240);
                                v15 = *(_QWORD *)(v14 + 4248);
                              }
                              v17 += 8;
                              v10 = &v16[8 * v15];
                            }
                            while ( v17 != v10 );
                          }
                          if ( v16 )
                          {
                            *(_QWORD *)(v14 + 4248) = 0;
                            qfree(v16, v10);
                          }
                          qfree(v14, v10);
                          v13 = *(__int64 **)(v11 + 4240);
                          v12 = *(_QWORD *)(v11 + 4248);
                        }
                        v10 = (const char *)++v20;
                      }
                      while ( v20 != &v13[v12] );
                    }
                    if ( v13 )
                    {
                      *(_QWORD *)(v11 + 4248) = 0;
                      qfree(v13, v10);
                    }
                    qfree(v11, v10);
                    v9 = *(const char **)(v7 + 4240);
                    v8 = *(_QWORD *)(v7 + 4248);
                  }
                  v21 += 8;
                  v3 = (__int64)v21;
                }
                while ( v21 != &v9[8 * v8] );
              }
              if ( v9 )
              {
                *(_QWORD *)(v7 + 4248) = 0;
                qfree(v9, (const char *)v3);
              }
              qfree(v7, (const char *)v3);
              v5 = *(__int64 **)(v22 + 4240);
              v4 = *(_QWORD *)(v22 + 4248);
            }
            ++v6;
          }
          while ( v6 != &v5[v4] );
        }
        if ( v5 )
        {
          *(_QWORD *)(v22 + 4248) = 0;
          qfree(v5, (const char *)v3);
        }
        result = qfree(v22, (const char *)v3);
        v2 = *(__int64 **)(a1 + 4240);
        v1 = *(_QWORD *)(a1 + 4248);
      }
      ++v23;
    }
    while ( v23 != &v2[v1] );
  }
  if ( v2 )
  {
    *(_QWORD *)(a1 + 4248) = 0;
    return qfree(v2, (const char *)v3);
  }
  return result;
}

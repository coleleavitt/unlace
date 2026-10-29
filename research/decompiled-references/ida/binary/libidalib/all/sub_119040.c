__int64 __fastcall sub_119040(_QWORD *a1)
{
  __int64 result; // rax
  __int64 *v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 *v9; // r14
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 *v12; // rdi
  __int64 *v13; // rbp
  __int64 v14; // rbx
  __int64 v15; // rdx
  _QWORD *v16; // rdi
  _QWORD *v17; // r12
  __int64 v18; // r15
  __int64 *v19; // [rsp+8h] [rbp-60h]
  __int64 v20; // [rsp+10h] [rbp-58h]
  __int64 v21; // [rsp+18h] [rbp-50h]
  __int64 *v22; // [rsp+20h] [rbp-48h]

  result = a1[531];
  v2 = (__int64 *)a1[530];
  v22 = v2;
  if ( 8 * result )
  {
    do
    {
      v3 = *v22;
      v21 = *v22;
      if ( *v22 )
      {
        v4 = *(_QWORD *)(v3 + 4248);
        v5 = *(__int64 **)(v3 + 4240);
        v19 = v5;
        if ( 8 * v4 )
        {
          do
          {
            v6 = *v19;
            v20 = *v19;
            if ( *v19 )
            {
              v7 = *(_QWORD *)(v6 + 4248);
              v8 = *(__int64 **)(v6 + 4240);
              v9 = v8;
              if ( 8 * v7 )
              {
                do
                {
                  v10 = *v9;
                  if ( *v9 )
                  {
                    v11 = *(_QWORD *)(v10 + 4248);
                    v12 = *(__int64 **)(v10 + 4240);
                    v13 = v12;
                    if ( 8 * v11 )
                    {
                      do
                      {
                        v14 = *v13;
                        if ( *v13 )
                        {
                          v15 = *(_QWORD *)(v14 + 4248);
                          v16 = *(_QWORD **)(v14 + 4240);
                          v17 = v16;
                          if ( 8 * v15 )
                          {
                            do
                            {
                              v18 = *v17;
                              if ( *v17 )
                              {
                                sub_119040(*v17);
                                if ( *(_QWORD *)(v18 + 4240) )
                                {
                                  *(_QWORD *)(v18 + 4248) = 0;
                                  qfree();
                                }
                                qfree();
                                v16 = *(_QWORD **)(v14 + 4240);
                                v15 = *(_QWORD *)(v14 + 4248);
                              }
                              ++v17;
                            }
                            while ( v17 != &v16[v15] );
                          }
                          if ( v16 )
                          {
                            *(_QWORD *)(v14 + 4248) = 0;
                            qfree();
                          }
                          qfree();
                          v12 = *(__int64 **)(v10 + 4240);
                          v11 = *(_QWORD *)(v10 + 4248);
                        }
                        ++v13;
                      }
                      while ( v13 != &v12[v11] );
                    }
                    if ( v12 )
                    {
                      *(_QWORD *)(v10 + 4248) = 0;
                      qfree();
                    }
                    qfree();
                    v8 = *(__int64 **)(v20 + 4240);
                    v7 = *(_QWORD *)(v20 + 4248);
                  }
                  ++v9;
                }
                while ( v9 != &v8[v7] );
              }
              if ( v8 )
              {
                *(_QWORD *)(v20 + 4248) = 0;
                qfree();
              }
              qfree();
              v5 = *(__int64 **)(v21 + 4240);
              v4 = *(_QWORD *)(v21 + 4248);
            }
            ++v19;
          }
          while ( v19 != &v5[v4] );
        }
        if ( v5 )
        {
          *(_QWORD *)(v21 + 4248) = 0;
          qfree();
        }
        qfree();
        v2 = (__int64 *)a1[530];
        result = a1[531];
      }
      ++v22;
    }
    while ( v22 != &v2[result] );
  }
  if ( v2 )
  {
    a1[531] = 0;
    result = qfree();
    a1[530] = 0;
    a1[532] = 0;
  }
  return result;
}


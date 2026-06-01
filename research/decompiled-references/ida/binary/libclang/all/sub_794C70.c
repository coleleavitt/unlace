__int64 *__fastcall sub_794C70(__int64 a1, int a2)
{
  __int64 *result; // rax
  __int64 v3; // rdx
  char v4; // al
  char v5; // al
  __int64 *v6; // r14
  __int64 v7; // rdx
  char v8; // al
  char v9; // al
  __int64 *v10; // r12
  __int64 v11; // rdx
  char v12; // al
  char v13; // al
  __int64 *v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rdx
  char v17; // al
  char v18; // al
  __int64 v19; // rbp
  __int64 *v20; // r15
  __int64 v21; // rdi
  __int64 v22; // [rsp+0h] [rbp-58h]
  __int64 *v23; // [rsp+8h] [rbp-50h]
  __int64 v24; // [rsp+10h] [rbp-48h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  result = (__int64 *)((a2 << 7) | *(_BYTE *)(a1 + 28) & 0x7Fu);
  *(_BYTE *)(a1 + 28) = ((_BYTE)a2 << 7) | *(_BYTE *)(a1 + 28) & 0x7F;
  if ( (_BYTE)a2 )
  {
    result = (__int64 *)((unsigned __int8)result & 0x7F);
    if ( (_BYTE)result != 41 )
    {
      *(_BYTE *)(a1 + 29) &= 0x9Fu;
      if ( (_BYTE)result == 44 )
      {
        result = (__int64 *)(a1 + 104);
        v25 = a1 + 104 + 8LL * *(unsigned int *)(a1 + 100);
        if ( a1 + 104 != v25 )
        {
          v23 = (__int64 *)(a1 + 104);
          do
          {
            v3 = *v23;
            v4 = *(_BYTE *)(*v23 + 28) | 0x80;
            *(_BYTE *)(*v23 + 28) = v4;
            v5 = v4 & 0x7F;
            if ( v5 != 41 )
            {
              *(_BYTE *)(v3 + 29) &= 0x9Fu;
              if ( v5 == 44 )
              {
                v6 = (__int64 *)(v3 + 104);
                v24 = v3 + 104 + 8LL * *(unsigned int *)(v3 + 100);
                if ( v3 + 104 != v24 )
                {
                  do
                  {
                    v7 = *v6;
                    v8 = *(_BYTE *)(*v6 + 28) | 0x80;
                    *(_BYTE *)(*v6 + 28) = v8;
                    v9 = v8 & 0x7F;
                    if ( v9 != 41 )
                    {
                      *(_BYTE *)(v7 + 29) &= 0x9Fu;
                      if ( v9 == 44 )
                      {
                        v10 = (__int64 *)(v7 + 104);
                        v22 = v7 + 104 + 8LL * *(unsigned int *)(v7 + 100);
                        if ( v7 + 104 != v22 )
                        {
                          do
                          {
                            v11 = *v10;
                            v12 = *(_BYTE *)(*v10 + 28) | 0x80;
                            *(_BYTE *)(*v10 + 28) = v12;
                            v13 = v12 & 0x7F;
                            if ( v13 != 41 )
                            {
                              *(_BYTE *)(v11 + 29) &= 0x9Fu;
                              if ( v13 == 44 )
                              {
                                v14 = (__int64 *)(v11 + 104);
                                v15 = v11 + 104 + 8LL * *(unsigned int *)(v11 + 100);
                                if ( v11 + 104 != v15 )
                                {
                                  do
                                  {
                                    v16 = *v14;
                                    v17 = *(_BYTE *)(*v14 + 28) | 0x80;
                                    *(_BYTE *)(*v14 + 28) = v17;
                                    v18 = v17 & 0x7F;
                                    if ( v18 != 41 )
                                    {
                                      *(_BYTE *)(v16 + 29) &= 0x9Fu;
                                      if ( v18 == 44 )
                                      {
                                        v19 = v16 + 104 + 8LL * *(unsigned int *)(v16 + 100);
                                        if ( v16 + 104 != v19 )
                                        {
                                          v20 = (__int64 *)(v16 + 104);
                                          do
                                          {
                                            v21 = *v20++;
                                            sub_794C70(v21, 1);
                                          }
                                          while ( (__int64 *)v19 != v20 );
                                        }
                                      }
                                    }
                                    ++v14;
                                  }
                                  while ( (__int64 *)v15 != v14 );
                                }
                              }
                            }
                            ++v10;
                          }
                          while ( (__int64 *)v22 != v10 );
                        }
                      }
                    }
                    ++v6;
                  }
                  while ( (__int64 *)v24 != v6 );
                }
              }
            }
            result = ++v23;
          }
          while ( (__int64 *)v25 != v23 );
        }
      }
    }
  }
  return result;
}


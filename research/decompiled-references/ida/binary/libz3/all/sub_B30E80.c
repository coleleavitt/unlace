__int64 __fastcall sub_B30E80(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 *v4; // r13
  _QWORD *v5; // rcx
  int v6; // r14d
  _QWORD *v7; // rbp
  __int64 v8; // r12
  _QWORD *v9; // r15
  unsigned __int8 v10; // al
  __int64 v12; // [rsp+8h] [rbp-60h]
  __int64 v13; // [rsp+10h] [rbp-58h]
  __int64 *v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h]
  unsigned int v16; // [rsp+2Ch] [rbp-3Ch]

  v16 = 0;
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 264) + 16LL) )
  {
    v1 = *(_QWORD *)(a1 + 32);
    if ( v1 )
    {
      v2 = *(unsigned int *)(v1 - 4);
      v16 = v2;
      if ( (_DWORD)v2 )
      {
        v16 = 0;
        v15 = 8 * v2;
        v12 = 0;
        do
        {
          v3 = *(_QWORD *)(*(_QWORD *)(a1 + 256) + v12);
          v13 = v3;
          if ( *(_BYTE *)(v3 + 24) )
          {
            v4 = *(__int64 **)(v3 + 16);
            if ( v4 )
            {
              v14 = &v4[*((unsigned int *)v4 - 1)];
              if ( v4 != v14 )
              {
                v5 = *(_QWORD **)(v3 + 8);
                v6 = 0;
                do
                {
                  if ( !v5 )
                    break;
                  while ( 1 )
                  {
                    v7 = &v5[*((unsigned int *)v5 - 1)];
                    if ( v5 == v7 )
                      break;
                    v8 = *v4;
                    v9 = v5;
                    do
                    {
                      v10 = sub_BE3B20(a1, v8, *v9);
                      if ( v10 )
                      {
                        ++*(_DWORD *)(a1 + 280);
                        v6 = v10;
                      }
                      ++v9;
                    }
                    while ( v7 != v9 );
                    if ( v14 != ++v4 )
                    {
                      v5 = *(_QWORD **)(v13 + 8);
                      if ( v5 )
                        continue;
                    }
                    goto LABEL_18;
                  }
                  ++v4;
                }
                while ( v4 != v14 );
LABEL_18:
                v16 |= v6;
              }
            }
          }
          v12 += 8;
        }
        while ( v12 != v15 );
      }
    }
  }
  return v16;
}


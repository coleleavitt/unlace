char *__fastcall sub_15D8A10(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // r12
  __int64 v5; // rax
  char *v6; // r13
  unsigned int v7; // r10d
  _QWORD *v10; // r8
  __int64 v11; // rcx
  _QWORD *v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rsi
  _QWORD *v18; // rdi
  _QWORD *v19; // rax
  char *v20; // rcx
  _QWORD *v22; // rax

  v3 = *(char **)(a2 + 8);
  v5 = *(unsigned int *)(a2 + 16);
  v6 = &v3[8 * v5];
  if ( v3 == v6 )
  {
    v20 = &v3[8 * v5];
    return sub_147F500((__int64 *)(a1 + 8), (char *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 16)), v6, v20);
  }
  v7 = *(_DWORD *)(a3 + 16);
  do
  {
    v10 = *(_QWORD **)(a3 + 8);
    while ( 1 )
    {
      v11 = *(_QWORD *)v3;
      v12 = v10;
      v13 = 8LL * v7;
      v14 = &v10[(unsigned __int64)v13 / 8];
      v15 = v13 >> 3;
      v16 = v13 >> 5;
      if ( v16 )
      {
        v17 = v10 + 1;
        if ( v11 == *v10 )
        {
          v18 = v10;
        }
        else
        {
          v18 = v10 + 1;
          v17 = v10 + 2;
          if ( v11 != v10[1] )
          {
            v18 = v10 + 2;
            v17 = v10 + 3;
            if ( v11 != v10[2] )
            {
              v18 = v10 + 3;
              v17 = v10 + 4;
              v19 = &v10[4 * v16];
              if ( v11 != v10[3] )
              {
                while ( 1 )
                {
                  v18 = v12 + 4;
                  if ( v19 == v12 + 4 )
                  {
                    v15 = v14 - v18;
                    goto LABEL_17;
                  }
                  if ( v11 == v12[4] )
                  {
                    v17 = v12 + 5;
                    goto LABEL_21;
                  }
                  if ( v11 == v12[5] )
                  {
                    v18 = v12 + 5;
                    v17 = v12 + 6;
                    goto LABEL_21;
                  }
                  if ( v11 == v12[6] )
                  {
                    v18 = v12 + 6;
                    v17 = v12 + 7;
                    goto LABEL_21;
                  }
                  if ( v11 == v12[7] )
                    break;
                  v12 += 4;
                }
                v18 = v12 + 7;
                v17 = v12 + 8;
              }
            }
          }
        }
      }
      else
      {
        v18 = v10;
LABEL_17:
        switch ( v15 )
        {
          case 2LL:
            v17 = v18++;
            if ( v11 == *v17 )
              goto LABEL_36;
            break;
          case 3LL:
            v17 = v18 + 1;
            if ( v11 == *v18 )
              goto LABEL_21;
            v18 += 2;
            if ( v11 == *v17 )
            {
LABEL_36:
              v22 = v18;
              v18 = v17;
              v17 = v22;
              goto LABEL_21;
            }
            break;
          case 1LL:
            break;
          default:
            goto LABEL_20;
        }
        if ( v11 != *v18 )
        {
LABEL_20:
          v17 = v14 + 1;
          v18 = v14;
          goto LABEL_21;
        }
        v17 = v18 + 1;
      }
LABEL_21:
      if ( v14 != v17 )
        break;
      --v7;
      v3 += 8;
      *(_DWORD *)(a3 + 16) = v7;
      if ( v6 == v3 )
        goto LABEL_23;
    }
    v3 += 8;
    memmove(v18, v17, (char *)v14 - (char *)v17);
    v7 = *(_DWORD *)(a3 + 16) - 1;
    *(_DWORD *)(a3 + 16) = v7;
  }
  while ( v6 != v3 );
LABEL_23:
  v6 = *(char **)(a2 + 8);
  v20 = &v6[8 * *(unsigned int *)(a2 + 16)];
  return sub_147F500((__int64 *)(a1 + 8), (char *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned int *)(a1 + 16)), v6, v20);
}

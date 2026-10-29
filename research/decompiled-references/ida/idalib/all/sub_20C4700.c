__int64 *__fastcall sub_20C4700(__int64 **a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rdx
  __int64 v8; // r12
  __int64 *v9; // rbp
  unsigned int v10; // eax
  __int64 *result; // rax
  __int64 v12; // rdx
  int v13; // r11d
  __int64 *v14; // r12
  __int64 *v15; // rcx
  __int64 *i; // rdx
  __int64 *v17; // rcx
  int v18; // r13d
  __int64 v19; // rsi
  int v20; // r8d
  char v21; // r9
  __int64 v22; // rdi
  int v23; // ebp
  __int64 *v24; // r14
  unsigned int j; // edx
  __int64 *v26; // rdi
  __int64 v27; // r10
  int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 *k; // rdx
  unsigned int v32; // edx
  __int64 v33; // [rsp+0h] [rbp-48h]
  __int64 *v34; // [rsp+8h] [rbp-40h]

  v6 = (unsigned int)(a2 - 1);
  v8 = *((unsigned int *)a1 + 4);
  v9 = *a1;
  v10 = (((((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
         | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
         | ((v6 | (v6 >> 1)) >> 2)
         | v6
         | (v6 >> 1)) >> 16)
       | ((((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4) | ((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 8)
       | ((((v6 | (v6 >> 1)) >> 2) | v6 | (v6 >> 1)) >> 4)
       | ((v6 | (v6 >> 1)) >> 2)
       | v6
       | (v6 >> 1))
      + 1;
  if ( v10 < 0x40 )
    v10 = 64;
  *((_DWORD *)a1 + 4) = v10;
  result = (__int64 *)sub_22300B0(24LL * v10, 8, 64, a4, a5, a6);
  *a1 = result;
  if ( v9 )
  {
    v12 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    v13 = v12;
    v33 = 24 * v8;
    v14 = &v9[3 * v8];
    v15 = &result[3 * v12];
    for ( i = result; v15 != i; *((_BYTE *)i - 12) = 1 )
    {
      *i = -4096;
      i += 3;
      *((_DWORD *)i - 4) = -1;
    }
    v17 = v9;
    v18 = v13 - 1;
    if ( v14 != v9 )
    {
      v34 = v9;
      while ( 1 )
      {
        v19 = *v17;
        if ( *v17 == -4096 )
        {
          v20 = *((_DWORD *)v17 + 2);
          if ( v20 != -1 )
            goto LABEL_10;
          v21 = *((_BYTE *)v17 + 12);
          if ( !v21 )
          {
            if ( !v13 )
              goto LABEL_45;
            v22 = 4294967259LL;
            goto LABEL_12;
          }
        }
        else
        {
          if ( v19 != -8192 || (v20 = *((_DWORD *)v17 + 2), v20 != -2) )
          {
LABEL_10:
            if ( !v13 )
              goto LABEL_45;
            v20 = *((_DWORD *)v17 + 2);
            v21 = *((_BYTE *)v17 + 12);
            v22 = (unsigned int)(37 * v20);
            if ( !v21 )
              goto LABEL_12;
            goto LABEL_36;
          }
          if ( *((_BYTE *)v17 + 12) )
          {
            if ( !v13 )
            {
LABEL_45:
              *(_QWORD *)&dword_0 = *v17;
              BUG();
            }
            LODWORD(v22) = -74;
LABEL_36:
            v22 = (unsigned int)(v22 - 1);
            v21 = 1;
LABEL_12:
            v23 = 1;
            v24 = nullptr;
            for ( j = v18
                    & (((0xBF58476D1CE4E5B9LL
                       * (v22 | ((unsigned __int64)(((unsigned int)v19 >> 9) ^ ((unsigned int)v19 >> 4)) << 32))) >> 31)
                     ^ (484763065 * v22)); ; j = v18 & v32 )
            {
              v26 = &result[3 * j];
              v27 = *v26;
              if ( v19 == *v26 && v20 == *((_DWORD *)v26 + 2) && v21 == *((_BYTE *)v26 + 12) )
                break;
              if ( v27 == -4096 )
              {
                if ( *((_DWORD *)v26 + 2) == -1 && *((_BYTE *)v26 + 12) )
                {
                  if ( v24 )
                    v26 = v24;
                  break;
                }
              }
              else if ( v27 == -8192 && *((_DWORD *)v26 + 2) == -2 && *((_BYTE *)v26 + 12) != 1 && !v24 )
              {
                v24 = &result[3 * j];
              }
              v32 = v23 + j;
              ++v23;
            }
            v28 = *((_DWORD *)v17 + 2);
            *v26 = v19;
            *((_DWORD *)v26 + 2) = v28;
            *((_BYTE *)v26 + 12) = *((_BYTE *)v17 + 12);
            v29 = v17[2];
            ++*((_DWORD *)a1 + 2);
            v26[2] = v29;
          }
        }
        v17 += 3;
        if ( v14 == v17 )
        {
          v9 = v34;
          return (__int64 *)operator delete(v9, v33, 8);
        }
      }
    }
    return (__int64 *)operator delete(v9, v33, 8);
  }
  else
  {
    v30 = *((unsigned int *)a1 + 4);
    a1[1] = nullptr;
    for ( k = &result[3 * v30]; k != result; *((_BYTE *)result - 12) = 1 )
    {
      *result = -4096;
      result += 3;
      *((_DWORD *)result - 4) = -1;
    }
  }
  return result;
}

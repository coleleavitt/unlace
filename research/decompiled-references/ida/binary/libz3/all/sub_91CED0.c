__int64 *__fastcall sub_91CED0(_QWORD *a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 *result; // rax
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdi
  __int64 *v13; // r14
  __int64 v14; // r15
  __int64 *v15; // rbp
  __int64 v16; // rdx
  __int64 *v17; // r13
  __int64 v18; // rdi
  __int64 v19; // [rsp+8h] [rbp-40h]

  v3 = a1[26];
  if ( v3 )
    *(_DWORD *)(v3 - 4) = a2;
  v4 = a1[35];
  if ( v4 )
    *(_DWORD *)(v4 - 4) = a2;
  result = (__int64 *)a1[25];
  if ( result )
  {
    v6 = 8LL * *((unsigned int *)result - 1);
    v19 = 8LL * a2;
    v7 = &result[(unsigned __int64)v19 / 8];
    v8 = &result[(unsigned __int64)v6 / 8];
    if ( v19 != v6 )
    {
      do
      {
        v9 = *v7;
        if ( *v7 )
        {
          v10 = *(unsigned int *)(v9 - 4);
          if ( (_DWORD)v10 )
          {
            v11 = v9 + 24 * v10;
            do
            {
              while ( 1 )
              {
                v12 = *(_QWORD *)(v9 + 16);
                if ( !v12 )
                  break;
                v9 += 24;
                sub_186B220((void *)(v12 - 8));
                if ( v11 == v9 )
                  goto LABEL_12;
              }
              v9 += 24;
            }
            while ( v11 != v9 );
LABEL_12:
            v9 = *v7;
          }
          sub_186B220((void *)(v9 - 8));
        }
        ++v7;
      }
      while ( v8 != v7 );
      result = (__int64 *)a1[25];
      v7 = &result[(unsigned __int64)v19 / 8];
    }
    *((_DWORD *)result - 1) = a2;
    if ( result != v7 )
    {
      v13 = result;
      v14 = 24LL * a2;
      do
      {
        result = (__int64 *)*v13;
        if ( *v13 )
        {
          v15 = &result[(unsigned __int64)v14 / 8];
          v16 = 24LL * *((unsigned int *)result - 1);
          v17 = &result[(unsigned __int64)v16 / 8];
          if ( v14 != v16 )
          {
            do
            {
              while ( 1 )
              {
                v18 = v15[2];
                if ( !v18 )
                  break;
                v15 += 3;
                sub_186B220((void *)(v18 - 8));
                if ( v17 == v15 )
                  goto LABEL_22;
              }
              v15 += 3;
            }
            while ( v17 != v15 );
LABEL_22:
            result = (__int64 *)*v13;
          }
          *((_DWORD *)result - 1) = a2;
        }
        ++v13;
      }
      while ( v7 != v13 );
    }
  }
  return result;
}


__int64 __fastcall sub_817F60(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned int v3; // eax
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r15
  __m128 v13; // xmm0
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r15
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 v19; // rcx
  __int64 v20; // r14
  __m128 v21; // xmm0
  __int64 v22; // [rsp+0h] [rbp-78h]
  __int64 v23; // [rsp+8h] [rbp-70h]
  __int64 v24; // [rsp+8h] [rbp-70h]
  __int64 v25; // [rsp+10h] [rbp-68h]
  __int64 *v26; // [rsp+18h] [rbp-60h]
  __int64 *v27; // [rsp+18h] [rbp-60h]
  __int64 v28; // [rsp+20h] [rbp-58h] BYREF
  __m128 v29; // [rsp+28h] [rbp-50h]

  do
  {
    v2 = a2;
    v3 = a2;
    a2 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * a2);
  }
  while ( v3 != a2 );
  result = *(_QWORD *)(sub_15D1F10(**(_QWORD **)(*(_QWORD *)(a1 + 88) + 8 * v2)) + 24);
  if ( result )
  {
    if ( *(_DWORD *)(a1 + 112) == *(_DWORD *)result )
    {
      result = *(unsigned int *)(result + 4);
      if ( !(_DWORD)result )
      {
        v7 = *(__int64 **)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v2) + 8LL);
        v25 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v2);
        if ( v7 )
        {
          v26 = &v7[*((unsigned int *)v7 - 1)];
          if ( v26 != v7 )
          {
            v8 = *(_QWORD *)(v25 + 24);
            do
            {
              if ( !v8 )
                break;
              while ( 1 )
              {
                v9 = *(unsigned int *)(v8 - 4);
                v10 = v8 + 8 * v9;
                if ( v8 == v10 )
                  break;
                v11 = *v7;
                v12 = v8;
                v23 = *v7;
                do
                {
                  v12 += 8;
                  v13 = _mm_loadh_ps((const double *)(v12 - 8));
                  v28 = 1;
                  v29 = v13;
                  sub_865240(a1, &v28, v9, v11, v5, v6, v22, v23, v25);
                }
                while ( v10 != v12 );
                if ( ++v7 != v26 )
                {
                  v8 = *(_QWORD *)(v25 + 24);
                  if ( v8 )
                    continue;
                }
                goto LABEL_15;
              }
              ++v7;
            }
            while ( v26 != v7 );
          }
        }
LABEL_15:
        result = sub_7E4EB0(a1);
        if ( !*(_BYTE *)(result + 412) )
        {
          if ( *(_BYTE *)v25 )
          {
            v16 = *(__int64 **)(v25 + 16);
            if ( v16 )
            {
              result = (__int64)&v16[*((unsigned int *)v16 - 1)];
              v27 = (__int64 *)result;
              if ( (__int64 *)result != v16 )
              {
                result = *(_QWORD *)(v25 + 24);
                while ( result )
                {
                  v17 = *(unsigned int *)(result - 4);
                  v18 = result + 8 * v17;
                  if ( result == v18 )
                  {
                    if ( v27 == ++v16 )
                      return result;
                  }
                  else
                  {
                    v19 = *v16;
                    v20 = result;
                    v24 = *v16;
                    do
                    {
                      v20 += 8;
                      v21 = _mm_loadh_ps((const double *)(v20 - 8));
                      v28 = 1;
                      v29 = v21;
                      sub_865240(a1, &v28, v17, v19, v14, v15, v22, v24, v25);
                    }
                    while ( v18 != v20 );
                    result = (__int64)v27;
                    if ( ++v16 == v27 )
                      return result;
                    result = *(_QWORD *)(v25 + 24);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


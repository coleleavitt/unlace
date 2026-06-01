_QWORD *__fastcall sub_F84760(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v8; // r14
  __int64 v9; // rbp
  unsigned int v10; // edi
  _QWORD *result; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rdx
  __int64 *j; // r15
  __int64 *v15; // rax
  __int64 v16; // rdx
  unsigned int *v17; // rbp
  unsigned int *v18; // r12
  unsigned int *v19; // r14
  _QWORD *v20; // r13
  _QWORD *v21; // rdi
  _QWORD *v22; // rdi
  _QWORD *v23; // rdi
  __int64 v24; // rdx
  _QWORD *k; // rdx
  __int64 *i; // [rsp+0h] [rbp-68h]
  __int64 *v27; // [rsp+8h] [rbp-60h]
  __int64 v28; // [rsp+18h] [rbp-50h]
  __int64 *v29; // [rsp+28h] [rbp-40h] BYREF

  v6 = (unsigned int)(a2 - 1);
  v8 = *(_QWORD *)a1;
  v9 = *(unsigned int *)(a1 + 16);
  v27 = *(__int64 **)a1;
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
  *(_DWORD *)(a1 + 16) = v10;
  result = (_QWORD *)sub_22300B0(16LL * v10, 8, a3, a4, a5, a6);
  *(_QWORD *)a1 = result;
  if ( v8 )
  {
    v12 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    v28 = 16 * v9;
    v13 = &result[2 * v12];
    for ( i = &v27[2 * v9]; v13 != result; result += 2 )
      *result = -4096;
    for ( j = v27; i != j; j += 2 )
    {
      if ( *j != -8192 && *j != -4096 )
      {
        sub_F7F050((__int64 *)a1, j, &v29);
        v15 = v29;
        *v29 = *j;
        v16 = j[1];
        j[1] = 0;
        v15[1] = v16;
        v17 = (unsigned int *)j[1];
        ++*(_DWORD *)(a1 + 8);
        if ( v17 )
        {
          v18 = *(unsigned int **)v17;
          v19 = (unsigned int *)(*(_QWORD *)v17 + 8LL * v17[2]);
          if ( *(unsigned int **)v17 != v19 )
          {
            do
            {
              v19 -= 2;
              v20 = *(_QWORD **)v19;
              if ( *(_QWORD *)v19 )
              {
                v21 = (_QWORD *)v20[10];
                if ( v21 != v20 + 12 )
                  free(v21);
                v22 = (_QWORD *)v20[7];
                if ( v22 != v20 + 9 )
                  free(v22);
                v23 = (_QWORD *)v20[3];
                if ( v23 != v20 + 5 )
                  free(v23);
                operator delete(v20, 0x70u);
              }
            }
            while ( v18 != v19 );
            v19 = *(unsigned int **)v17;
          }
          if ( v19 != v17 + 4 )
            free(v19);
          operator delete(v17, 0x20u);
        }
      }
    }
    return (_QWORD *)operator delete(v27, v28, 8);
  }
  else
  {
    v24 = *(unsigned int *)(a1 + 16);
    *(_QWORD *)(a1 + 8) = 0;
    for ( k = &result[2 * v24]; k != result; result += 2 )
      *result = -4096;
  }
  return result;
}

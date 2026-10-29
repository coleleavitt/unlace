__int64 __fastcall sub_BDA6A0(_QWORD *a1, unsigned int a2, __int64 *a3, __m128 a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // r14
  int ***v10; // rbx
  __int64 v11; // r15
  int ***v12; // r13
  int **v13; // rdx
  __int64 *v14; // rbx
  __int64 *v15; // r13
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 *v18; // rbx
  __int64 *v19; // r13
  __int64 v20; // rdx

  sub_B32840((__int64)a1, a2, (__int64)a3);
  do
  {
    v7 = a2;
    v8 = a2;
    a2 = *(_DWORD *)(a1[43] + 4LL * a2);
  }
  while ( v8 != a2 );
  v9 = *(_QWORD *)(a1[56] + 8 * v7);
  v10 = *(int ****)(v9 + 8);
  v11 = *(_QWORD *)(a1[32] + 8 * v7);
  if ( v10 )
  {
    v12 = &v10[*((unsigned int *)v10 - 1)];
    while ( v12 != v10 )
    {
      v13 = *v10++;
      sub_BD5830((__int64)a1, (__int64)a3, v13, a4, a5, a6);
    }
  }
  v14 = *(__int64 **)v9;
  if ( *(_QWORD *)v9 )
  {
    v15 = &v14[*((unsigned int *)v14 - 1)];
    while ( v15 != v14 )
    {
      v16 = *v14++;
      sub_BD5FC0((__int64)a1, a3, v16, a4, a5, a6);
    }
  }
  result = a1[33];
  if ( !*(_BYTE *)(result + 16) )
  {
    if ( *(_BYTE *)(v11 + 24) )
    {
      v18 = *(__int64 **)(v9 + 32);
      if ( v18 )
      {
        v19 = &v18[*((unsigned int *)v18 - 1)];
        if ( v19 != v18 )
        {
          while ( 1 )
          {
            v20 = *v18;
            if ( !*(_BYTE *)(result + 17) || v20 == *(_QWORD *)(v20 + 24) )
              result = sub_BD5FC0((__int64)a1, a3, v20, a4, a5, a6);
            if ( v19 == ++v18 )
              break;
            result = a1[33];
          }
        }
      }
    }
  }
  return result;
}


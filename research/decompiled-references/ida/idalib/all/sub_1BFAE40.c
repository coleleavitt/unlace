__int64 __fastcall sub_1BFAE40(__int64 a1, __m128 a2, __m128 a3)
{
  unsigned int v4; // ebp
  unsigned int v5; // eax
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 *v15; // r14
  __int64 result; // rax
  __int64 v17; // r12
  __int64 *v18; // rbp
  __int64 *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 *v24; // [rsp+8h] [rbp-50h]
  __int64 v25; // [rsp+10h] [rbp-48h] BYREF
  __int64 v26; // [rsp+18h] [rbp-40h]

  v4 = *(_DWORD *)(a1 + 304);
  v5 = *(_DWORD *)(a1 + 308);
  if ( v4 < v5 )
  {
    v6 = *(_DWORD *)(a1 + 304);
    while ( 1 )
    {
      for ( ; v5 > v4; v5 = *(_DWORD *)(a1 + 308) )
      {
        v7 = *(_QWORD *)(a1 + 64);
        v8 = *(_QWORD *)(a1 + 56);
        v9 = *(_QWORD *)(a1 + 16);
        v10 = *(_QWORD *)a1;
        v25 = *(_QWORD *)(v7 + 8LL * v6);
        v11 = v4++;
        v12 = *(_QWORD *)(v7 + 8 * v11);
        v13 = *(_QWORD *)(a1 + 8);
        v26 = v12;
        sub_1BFAC00(v10, (__int64)&v25, v13, v9, v8, 0, a2, a3);
      }
      if ( ++v6 >= v5 )
        break;
      v4 = *(_DWORD *)(a1 + 304);
    }
  }
  v14 = **(_QWORD **)(a1 + 48);
  v15 = *(__int64 **)(v14 + 336);
  result = (__int64)&v15[*(unsigned int *)(v14 + 344)];
  v24 = (__int64 *)result;
  if ( v15 != (__int64 *)result )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(v14 + 984);
      v17 = *v15;
      v18 = (__int64 *)(result + 8LL * *(unsigned int *)(v14 + 992));
      v19 = (__int64 *)result;
      if ( (__int64 *)result != v18 )
      {
        do
        {
          v20 = *v19;
          v21 = *(_QWORD *)(a1 + 56);
          v22 = *(_QWORD *)(a1 + 16);
          v23 = *(_QWORD *)a1;
          ++v19;
          v25 = v17;
          v26 = v20;
          result = sub_1BFAC00(v23, (__int64)&v25, *(_QWORD *)(a1 + 8), v22, v21, 0, a2, a3);
        }
        while ( v18 != v19 );
      }
      if ( v24 == ++v15 )
        break;
      v14 = **(_QWORD **)(a1 + 48);
    }
  }
  return result;
}

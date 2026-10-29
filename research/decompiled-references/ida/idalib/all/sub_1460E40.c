unsigned __int64 __fastcall sub_1460E40(__int64 a1, int a2, unsigned __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // r8d
  int *v9; // rdi
  unsigned __int64 v10; // r13
  int *v11; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v13; // rdx
  unsigned __int64 *v14; // rsi
  int v15; // edx
  __m128 v16[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = a1 + 832;
  v6 = *(unsigned int *)(a1 + 848);
  v7 = *(_QWORD *)(a1 + 832);
  if ( !(_DWORD)v6 )
    goto LABEL_16;
  v8 = (v6 - 1) & a2;
  v9 = (int *)(v7 + 72LL * v8);
  if ( a2 != *v9 )
  {
    if ( *v9 )
    {
      v15 = 1;
      do
      {
        v8 = (v6 - 1) & (v15 + v8);
        v9 = (int *)(v7 + 72LL * v8);
        if ( a2 == *v9 )
          goto LABEL_3;
        ++v15;
      }
      while ( *v9 );
    }
LABEL_16:
    sub_1460DE0(v16, (int *)(v7 + 72 * v6), (int *)(v7 + 72 * v6), v3, 1);
    v10 = v16[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_1460DE0(v16, v9, (int *)(v7 + 72 * v6), v3, 1);
  v10 = v16[0].m128_u64[0];
LABEL_4:
  v11 = (int *)(*(_QWORD *)(a1 + 832) + 72LL * *(unsigned int *)(a1 + 848));
  sub_1460DE0(v16, v11, v11, v3, 1);
  result = 0;
  if ( v10 != v16[0].m128_u64[0] )
  {
    v13 = *(unsigned __int64 **)(v10 + 8);
    v14 = &v13[*(unsigned int *)(v10 + 16)];
    if ( v13 != v14 )
    {
      result = *v13;
      if ( a3 >= *v13 )
      {
        while ( ++v13 != v14 && *v13 <= a3 )
          result = *v13;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}

__int64 __fastcall sub_21139E0(__int64 a1, unsigned int a2)
{
  __int64 v2; // r12
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // edx
  int *v8; // rsi
  unsigned __int64 v9; // r13
  int *v10; // rdx
  __int64 result; // rax
  int v12; // ecx
  __m128 v13[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 160;
  v5 = *(unsigned int *)(a1 + 176);
  v6 = *(_QWORD *)(a1 + 160);
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (37 * a2);
    v8 = (int *)(v6 + 8LL * v7);
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_2113980(v13, v8, (int *)(v6 + 8 * v5), v2, 1);
      v9 = v13[0].m128_u64[0];
      goto LABEL_4;
    }
    if ( *v8 != -1 )
    {
      v12 = 1;
      do
      {
        v7 = (v5 - 1) & (v12 + v7);
        v8 = (int *)(v6 + 8LL * v7);
        if ( a2 == *v8 )
          goto LABEL_3;
        ++v12;
      }
      while ( *v8 != -1 );
    }
  }
  sub_2113980(v13, (int *)(v6 + 8 * v5), (int *)(v6 + 8 * v5), v2, 1);
  v9 = v13[0].m128_u64[0];
LABEL_4:
  v10 = (int *)(*(_QWORD *)(a1 + 160) + 8LL * *(unsigned int *)(a1 + 176));
  sub_2113980(v13, v10, v10, v2, 1);
  result = a2;
  if ( v13[0].m128_u64[0] != v9 )
    return *(unsigned int *)(v9 + 4);
  return result;
}

unsigned __int64 __fastcall sub_11EF5B0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned int v7; // edx
  __int64 *v8; // rsi
  unsigned __int64 v9; // rbp
  __int64 *v10; // rdx
  unsigned __int64 result; // rax
  int v12; // ecx
  __m128 v13[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 40;
  v4 = *(unsigned int *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 40);
  if ( (_DWORD)v4 )
  {
    v7 = (v4 - 1) & (((0xBF58476D1CE4E5B9LL * a2) >> 31) ^ (484763065 * a2));
    v8 = (__int64 *)(v5 + 104LL * v7);
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_11EF550(v13, v8, (__int64 *)(v5 + 104 * v4), v2, 1);
      v9 = v13[0].m128_u64[0];
      goto LABEL_4;
    }
    if ( *v8 != -1 )
    {
      v12 = 1;
      do
      {
        v7 = (v4 - 1) & (v12 + v7);
        v8 = (__int64 *)(v5 + 104LL * v7);
        if ( a2 == *v8 )
          goto LABEL_3;
        ++v12;
      }
      while ( *v8 != -1 );
    }
  }
  sub_11EF550(v13, (__int64 *)(v5 + 104 * v4), (__int64 *)(v5 + 104 * v4), v2, 1);
  v9 = v13[0].m128_u64[0];
LABEL_4:
  v10 = (__int64 *)(*(_QWORD *)(a1 + 40) + 104LL * *(unsigned int *)(a1 + 56));
  sub_11EF550(v13, v10, v10, v2, 1);
  result = 0;
  if ( v13[0].m128_u64[0] != v9 )
  {
    if ( *(_BYTE *)(v9 + 96) )
      return v9 + 8;
  }
  return result;
}

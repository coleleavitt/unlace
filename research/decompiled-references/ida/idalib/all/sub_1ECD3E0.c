unsigned __int64 __fastcall sub_1ECD3E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned int v7; // edx
  _QWORD *v8; // rsi
  unsigned __int64 v9; // rbp
  _QWORD *v10; // rdx
  unsigned __int64 result; // rax
  int v12; // ecx
  __m128 v13[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 3792;
  v4 = *(unsigned int *)(a1 + 3808);
  v5 = *(_QWORD *)(a1 + 3792);
  if ( (_DWORD)v4 )
  {
    v7 = (v4 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (_QWORD *)(v5 + 24LL * v7);
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_1ECD370(v13, v8, (_QWORD *)(v5 + 24 * v4), v2, 1);
      v9 = v13[0].m128_u64[0];
      goto LABEL_4;
    }
    if ( *v8 != -4096 )
    {
      v12 = 1;
      do
      {
        v7 = (v4 - 1) & (v12 + v7);
        v8 = (_QWORD *)(v5 + 24LL * v7);
        if ( a2 == *v8 )
          goto LABEL_3;
        ++v12;
      }
      while ( *v8 != -4096 );
    }
  }
  sub_1ECD370(v13, (_QWORD *)(v5 + 24 * v4), (_QWORD *)(v5 + 24 * v4), v2, 1);
  v9 = v13[0].m128_u64[0];
LABEL_4:
  v10 = (_QWORD *)(*(_QWORD *)(a1 + 3792) + 24LL * *(unsigned int *)(a1 + 3808));
  sub_1ECD370(v13, v10, v10, v2, 1);
  result = v9 + 8;
  if ( v13[0].m128_u64[0] == v9 )
    return 0;
  return result;
}

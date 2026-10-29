bool __fastcall sub_1AFEF20(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v7; // rdi
  unsigned int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  int v13; // esi
  int v14; // r10d
  __int64 v15; // r8
  __m128 v16[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 16));
  sub_1AFEEC0(v16, v4, v4, a1, 1);
  v5 = *(unsigned int *)(a1 + 16);
  v6 = v16[0].m128_u64[0];
  v7 = *(_QWORD *)a1;
  if ( !(_DWORD)v5 )
    goto LABEL_8;
  v8 = (v5 - 1) & (*a2 ^ (*a2 >> 9));
  v9 = (__int64 *)(v7 + 8LL * v8);
  v10 = *v9;
  if ( *a2 != *v9 )
  {
    v13 = 1;
    if ( v10 )
    {
      do
      {
        v14 = v13 + 1;
        v8 = (v5 - 1) & (v13 + v8);
        v9 = (__int64 *)(v7 + 8LL * v8);
        v15 = *v9;
        if ( *a2 == *v9 )
          goto LABEL_3;
        v13 = v14;
      }
      while ( v15 );
    }
LABEL_8:
    sub_1AFEEC0(v16, (_QWORD *)(v7 + 8 * v5), (_QWORD *)(v7 + 8 * v5), a1, 1);
    v11 = v16[0].m128_u64[0];
    return v6 != v11;
  }
LABEL_3:
  sub_1AFEEC0(v16, v9, (_QWORD *)(v7 + 8 * v5), a1, 1);
  v11 = v16[0].m128_u64[0];
  return v6 != v11;
}

unsigned __int64 __fastcall sub_A62D00(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ecx
  __int64 *v8; // rsi
  __int64 v9; // r8
  unsigned __int64 v10; // r13
  _QWORD *v11; // rdx
  unsigned __int64 result; // rax
  int v13; // esi
  int v14; // r10d
  __int64 v15; // r8
  __m128 v16[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 22840;
  v4 = *(_QWORD *)(a1 + 22840);
  v5 = *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
     | ((unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a2) & 7;
  v6 = *(unsigned int *)(a1 + 22856);
  if ( (_DWORD)v6 )
  {
    v7 = (v6 - 1) & (v5 ^ (v5 >> 9));
    v8 = (__int64 *)(v4 + 56LL * v7);
    v9 = *v8;
    if ( v5 == *v8 )
    {
LABEL_3:
      sub_A62CA0(v16, v8, (_QWORD *)(v4 + 56 * v6), v2, 1);
      v10 = v16[0].m128_u64[0];
      goto LABEL_4;
    }
    v13 = 1;
    if ( v9 )
    {
      do
      {
        v14 = v13 + 1;
        v7 = (v6 - 1) & (v13 + v7);
        v8 = (__int64 *)(v4 + 56LL * v7);
        v15 = *v8;
        if ( v5 == *v8 )
          goto LABEL_3;
        v13 = v14;
      }
      while ( v15 );
    }
  }
  sub_A62CA0(v16, (_QWORD *)(v4 + 56 * v6), (_QWORD *)(v4 + 56 * v6), v2, 1);
  v10 = v16[0].m128_u64[0];
LABEL_4:
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 22840) + 56LL * *(unsigned int *)(a1 + 22856));
  sub_A62CA0(v16, v11, v11, v2, 1);
  result = v10 + 8;
  if ( v16[0].m128_u64[0] == v10 )
    return 0;
  return result;
}


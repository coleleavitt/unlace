bool __fastcall sub_A8BFD0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  _QWORD *v4; // rdx
  __int64 v5; // rdx
  unsigned __int64 v6; // rbp
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 *v9; // rsi
  __int64 v10; // rdi
  unsigned __int64 v11; // rax
  int v13; // esi
  int v14; // r9d
  __int64 v15; // rdi
  __m128 v16[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 1336) + 8LL * *(unsigned int *)(a1 + 1352));
  sub_A8BF60(v16, v4, v4, a1 + 1336, 1);
  v5 = *(unsigned int *)(a1 + 1352);
  v6 = v16[0].m128_u64[0];
  v7 = *(_QWORD *)(a1 + 1336);
  if ( !(_DWORD)v5 )
    goto LABEL_8;
  v8 = (v5 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
  v9 = (__int64 *)(v7 + 8LL * v8);
  v10 = *v9;
  if ( v3 != *v9 )
  {
    v13 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v14 = v13 + 1;
        v8 = (v5 - 1) & (v13 + v8);
        v9 = (__int64 *)(v7 + 8LL * v8);
        v15 = *v9;
        if ( v3 == *v9 )
          goto LABEL_3;
        v13 = v14;
      }
      while ( v15 != -4096 );
    }
LABEL_8:
    sub_A8BF60(v16, (_QWORD *)(v7 + 8 * v5), (_QWORD *)(v7 + 8 * v5), a1 + 1336, 1);
    v11 = v16[0].m128_u64[0];
    return v6 != v11;
  }
LABEL_3:
  sub_A8BF60(v16, v9, (_QWORD *)(v7 + 8 * v5), a1 + 1336, 1);
  v11 = v16[0].m128_u64[0];
  return v6 != v11;
}

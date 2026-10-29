unsigned __int64 __fastcall sub_1ECCC30(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdi
  unsigned int v8; // edx
  __int64 *v9; // rsi
  __int64 v10; // r8
  unsigned __int64 v11; // r12
  unsigned __int64 result; // rax
  int v13; // esi
  int v14; // r10d
  __int64 v15; // r8
  __m128 v16[2]; // [rsp+0h] [rbp-28h] BYREF

  v3 = a1 + 3864;
  v4 = a1 + 3840;
  if ( !a3 )
    v3 = v4;
  v5 = *(unsigned int *)(v3 + 16);
  v6 = *(_QWORD *)v3;
  if ( (_DWORD)v5 )
  {
    v8 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v9 = (__int64 *)(v6 + 24LL * v8);
    v10 = *v9;
    if ( a2 == *v9 )
    {
LABEL_5:
      sub_1ECCBC0(v16, v9, (_QWORD *)(v6 + 24 * v5), v3, 1);
      v11 = v16[0].m128_u64[0];
      goto LABEL_6;
    }
    v13 = 1;
    if ( v10 != -4096 )
    {
      do
      {
        v14 = v13 + 1;
        v8 = (v5 - 1) & (v13 + v8);
        v9 = (__int64 *)(v6 + 24LL * v8);
        v15 = *v9;
        if ( a2 == *v9 )
          goto LABEL_5;
        v13 = v14;
      }
      while ( v15 != -4096 );
    }
  }
  sub_1ECCBC0(v16, (_QWORD *)(v6 + 24 * v5), (_QWORD *)(v6 + 24 * v5), v3, 1);
  v11 = v16[0].m128_u64[0];
LABEL_6:
  sub_1ECCBC0(
    v16,
    (_QWORD *)(*(_QWORD *)v3 + 24LL * *(unsigned int *)(v3 + 16)),
    (_QWORD *)(*(_QWORD *)v3 + 24LL * *(unsigned int *)(v3 + 16)),
    v3,
    1);
  result = v11 + 8;
  if ( v16[0].m128_u64[0] == v11 )
    return 0;
  return result;
}

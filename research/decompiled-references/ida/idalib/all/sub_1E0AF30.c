__int64 __fastcall sub_1E0AF30(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v5; // rcx
  __int64 v6; // rdx
  unsigned int v7; // eax
  __int64 *v8; // rsi
  __int64 v9; // rdi
  unsigned __int64 v10; // r13
  _QWORD *v11; // rdx
  __int64 result; // rax
  int v13; // esi
  int v14; // r9d
  __int64 v15; // rdi
  __m128 v16[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 8;
  v5 = *(unsigned int *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v5 )
  {
    v7 = (v5 - 1) & (((unsigned int)a2 >> 9) ^ ((unsigned int)a2 >> 4));
    v8 = (__int64 *)(v6 + 16LL * v7);
    v9 = *v8;
    if ( a2 == *v8 )
    {
LABEL_3:
      sub_AEAAD0(v16, v8, (_QWORD *)(16 * v5 + v6), v2, 1);
      v10 = v16[0].m128_u64[0];
      goto LABEL_4;
    }
    v13 = 1;
    if ( v9 != -4096 )
    {
      do
      {
        v14 = v13 + 1;
        v7 = (v5 - 1) & (v13 + v7);
        v8 = (__int64 *)(v6 + 16LL * v7);
        v15 = *v8;
        if ( a2 == *v8 )
          goto LABEL_3;
        v13 = v14;
      }
      while ( v15 != -4096 );
    }
  }
  sub_AEAAD0(v16, (_QWORD *)(v6 + 16LL * (unsigned int)v5), (_QWORD *)(v6 + 16LL * (unsigned int)v5), v2, 1);
  v10 = v16[0].m128_u64[0];
LABEL_4:
  v11 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v16, v11, v11, v2, 1);
  result = a2;
  if ( v16[0].m128_u64[0] != v10 )
    return *(_QWORD *)(v10 + 8);
  return result;
}

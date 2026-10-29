__m128 *__fastcall sub_1887770(__int64 a1, __int64 a2, __m128 *a3)
{
  __int64 v4; // rbp
  __int64 (__fastcall *v6)(__int64); // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // r13
  _QWORD *v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 *result; // rax
  __int64 v18; // rcx
  int v19; // esi
  int v20; // r10d
  __int64 v21; // r8
  __m128 v22[3]; // [rsp+0h] [rbp-38h] BYREF

  v4 = a1 + 16;
  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL);
  if ( v6 == sub_A01140 )
    v7 = sub_B70A60(a2);
  else
    v7 = v6(a2);
  v8 = *(unsigned int *)(a1 + 32);
  v9 = *(_QWORD *)(a1 + 16);
  if ( (_DWORD)v8 )
  {
    v10 = (v8 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v11 = (__int64 *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( v7 == *v11 )
    {
LABEL_5:
      sub_1840FE0(v22, v11, (_QWORD *)(16 * v8 + v9), v4, 1);
      v13 = v22[0].m128_u64[0];
      goto LABEL_6;
    }
    v19 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v20 = v19 + 1;
        v10 = (v8 - 1) & (v19 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v21 = *v11;
        if ( v7 == *v11 )
          goto LABEL_5;
        v19 = v20;
      }
      while ( v21 != -4096 );
    }
  }
  sub_1840FE0(v22, (_QWORD *)(v9 + 16LL * (unsigned int)v8), (_QWORD *)(v9 + 16LL * (unsigned int)v8), v4, 1);
  v13 = v22[0].m128_u64[0];
LABEL_6:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * *(unsigned int *)(a1 + 32));
  sub_1840FE0(v22, v14, v14, v4, 1);
  result = nullptr;
  if ( v22[0].m128_u64[0] != v13 )
  {
    v18 = *(_QWORD *)(v13 + 8);
    if ( v18 )
      return sub_1886CC0(*(_QWORD *)a1, *(_DWORD *)(a1 + 8), a3, v18, v15, v16);
    else
      return a3;
  }
  return result;
}

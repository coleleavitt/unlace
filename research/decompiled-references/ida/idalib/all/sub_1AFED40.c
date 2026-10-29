bool __fastcall sub_1AFED40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r12
  __int64 v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  int v15; // esi
  int v16; // r9d
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __m128 v21[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = *(unsigned int *)(a1 + 344);
  if ( (_DWORD)v4 )
  {
    v5 = *(_QWORD *)(a1 + 336) + 6776 * v4 - 6776;
    if ( *(_QWORD *)(v5 + 6768) == *(_QWORD *)(a1 + 328) )
    {
      v18 = *(unsigned int *)(v5 + 8);
      v19 = *(unsigned int *)(a1 + 27504);
      if ( (unsigned int)v18 > (unsigned int)v19 )
      {
        v20 = v18 - v19;
        if ( v20 )
          v2 = *(_QWORD *)v5 + 1688 * (v20 - 1);
      }
    }
  }
  if ( a2 )
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
  v6 = (_QWORD *)(*(_QWORD *)(v2 + 1208) + 8LL * *(unsigned int *)(v2 + 1224));
  sub_1AFECD0(v21, v6, v6, v2 + 1208, 1);
  v7 = *(unsigned int *)(v2 + 1224);
  v8 = v21[0].m128_u64[0];
  v9 = *(_QWORD *)(v2 + 1208);
  if ( !(_DWORD)v7 )
    goto LABEL_12;
  v10 = (v7 - 1) & (((unsigned int)v3 >> 9) ^ ((unsigned int)v3 >> 4));
  v11 = (__int64 *)(v9 + 8LL * v10);
  v12 = *v11;
  if ( v3 != *v11 )
  {
    v15 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v16 = v15 + 1;
        v10 = (v7 - 1) & (v15 + v10);
        v11 = (__int64 *)(v9 + 8LL * v10);
        v17 = *v11;
        if ( v3 == *v11 )
          goto LABEL_7;
        v15 = v16;
      }
      while ( v17 != -4096 );
    }
LABEL_12:
    sub_1AFECD0(v21, (_QWORD *)(v9 + 8 * v7), (_QWORD *)(v9 + 8 * v7), v2 + 1208, 1);
    v13 = v21[0].m128_u64[0];
    return v8 != v13;
  }
LABEL_7:
  sub_1AFECD0(v21, v11, (_QWORD *)(v9 + 8 * v7), v2 + 1208, 1);
  v13 = v21[0].m128_u64[0];
  return v8 != v13;
}

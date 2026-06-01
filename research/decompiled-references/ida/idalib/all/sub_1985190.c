__int64 __fastcall sub_1985190(__int64 a1, __int64 a2, double a3, __m128 a4)
{
  __int64 v4; // r13
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 *v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // r15
  _QWORD *v14; // rdx
  __int64 v15; // r9
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // esi
  int v22; // r9d
  __int64 v23; // rdi
  __m128 v24[4]; // [rsp+0h] [rbp-48h] BYREF

  v4 = a1 + 8;
  v7 = *(unsigned int *)(a1 + 24);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a1 + 8);
  if ( !(_DWORD)v7 )
    goto LABEL_21;
  v10 = (v7 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
  v11 = (__int64 *)(v9 + 16LL * v10);
  v12 = *v11;
  if ( v8 != *v11 )
  {
    v21 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v22 = v21 + 1;
        v10 = (v7 - 1) & (v21 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v23 = *v11;
        if ( v8 == *v11 )
          goto LABEL_3;
        v21 = v22;
      }
      while ( v23 != -4096 );
    }
LABEL_21:
    sub_AEAAD0(v24, (_QWORD *)(v9 + 16LL * (unsigned int)v7), (_QWORD *)(v9 + 16LL * (unsigned int)v7), v4, 1);
    v13 = v24[0].m128_u64[0];
    goto LABEL_4;
  }
LABEL_3:
  sub_AEAAD0(v24, v11, (_QWORD *)(16 * v7 + v9), v4, 1);
  v13 = v24[0].m128_u64[0];
LABEL_4:
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v24, v14, v14, v4, 1);
  if ( v24[0].m128_u64[0] != v13 )
    v8 = *(_QWORD *)(v13 + 8);
  if ( !v8 )
    return 1;
  if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
  {
    v16 = 0;
    goto LABEL_9;
  }
  v19 = sub_190CCA0((__int64 *)a1, *(unsigned __int16 **)(a2 + 32), a3, a4);
  if ( v19 == 1 )
    return 1;
  v16 = v19 & 0xFFFFFFFFFFFFFFFELL;
LABEL_9:
  v17 = *(_QWORD *)(*(_QWORD *)a1 + 544LL);
  if ( *(_QWORD *)(a2 + 16) != v8 || *(_QWORD *)(a2 + 24) != v17 )
    return sub_C96990(*(_QWORD **)(*(_QWORD *)a1 + 248LL), *(_DWORD *)(a2 + 4), v8, v16, v17, v15);
  v20 = 0;
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
    v20 = *(_QWORD *)(a2 + 32);
  if ( v20 == v16 )
    return a2;
  else
    return sub_C96990(*(_QWORD **)(*(_QWORD *)a1 + 248LL), *(_DWORD *)(a2 + 4), v8, v16, v17, v15);
}

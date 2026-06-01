void __fastcall sub_145FCF0(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v6; // rdx
  __int16 v7; // ax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // edi
  __int64 *v12; // rsi
  __int64 v13; // r10
  unsigned __int64 v14; // r14
  __int16 v15; // ax
  __int64 v16; // rsi
  int v17; // esi
  int v18; // r10d
  __int64 v19; // r11
  __m128 v20[7]; // [rsp+0h] [rbp-78h] BYREF

  v6 = 0;
  v7 = *(_WORD *)(a2 + 16);
  if ( (unsigned __int16)(v7 - 7) > 0xCu && v7 != 1 )
    v6 = *(_QWORD *)(a2 + 8);
  v8 = *(unsigned int *)(a1 + 2256);
  v9 = a1 + 2240;
  v10 = *(_QWORD *)(a1 + 2240);
  if ( !(_DWORD)v8 )
    goto LABEL_14;
  v11 = (v8 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
  v12 = (__int64 *)(v10 + 112LL * v11);
  v13 = *v12;
  if ( v6 != *v12 )
  {
    v17 = 1;
    if ( v13 != -4096 )
    {
      do
      {
        v18 = v17 + 1;
        v11 = (v8 - 1) & (v17 + v11);
        v12 = (__int64 *)(v10 + 112LL * v11);
        v19 = *v12;
        if ( v6 == *v12 )
          goto LABEL_6;
        v17 = v18;
      }
      while ( v19 != -4096 );
    }
LABEL_14:
    sub_145FA20(v20, (_QWORD *)(v10 + 112 * v8), (_QWORD *)(v10 + 112 * v8), v9, 1);
    v14 = v20[0].m128_u64[0];
    goto LABEL_7;
  }
LABEL_6:
  sub_145FA20(v20, v12, (_QWORD *)(v10 + 112 * v8), v9, 1);
  v14 = v20[0].m128_u64[0];
LABEL_7:
  sub_FC70B0((__int64)v20, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 1402);
  v15 = *(_WORD *)(a2 + 16);
  v16 = 0;
  if ( (unsigned __int16)(v15 - 7) > 0xCu && v15 != 1 )
    v16 = *(_QWORD *)(a2 + 8);
  sub_AE9DF0((unsigned __int8 **)v20, v16, 5u);
  sub_AE9DF0((unsigned __int8 **)v20, a3 ^ 1u, 2u);
  sub_AEA040((__int64)v20);
  sub_FC70B0((__int64)v20, *(_QWORD *)(a1 + 48), *(_DWORD *)(v14 + 104), 1276);
  sub_AE9DF0((unsigned __int8 **)v20, 2, 2u);
  sub_AEA040((__int64)v20);
}

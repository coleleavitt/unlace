void __fastcall sub_145FEC0(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // bx
  char v5; // al
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 *v11; // rsi
  __int64 v12; // r9
  unsigned __int64 v13; // r13
  __int64 v14; // r14
  __int64 v15; // rsi
  int v16; // edx
  unsigned __int16 v17; // r14
  char v18; // al
  __int64 v19; // rsi
  unsigned __int16 v20; // r15
  char v21; // al
  int v22; // esi
  int v23; // r9d
  __int64 v24; // r11
  __m128 v25[8]; // [rsp+0h] [rbp-88h] BYREF

  v4 = *(_WORD *)(a2 + 16);
  v5 = sub_141A630(v4);
  if ( v4 == 1 || v5 )
    v6 = 0;
  else
    v6 = *(_QWORD *)(a2 + 8);
  v7 = *(unsigned int *)(a1 + 2256);
  v8 = a1 + 2240;
  v9 = *(_QWORD *)(a1 + 2240);
  if ( (_DWORD)v7 )
  {
    v10 = (v7 - 1) & (((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4));
    v11 = (__int64 *)(v9 + 112LL * v10);
    v12 = *v11;
    if ( v6 == *v11 )
    {
LABEL_6:
      sub_145FA20(v25, v11, (_QWORD *)(v9 + 112 * v7), v8, 1);
      v13 = v25[0].m128_u64[0];
      goto LABEL_7;
    }
    v22 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v23 = v22 + 1;
        v10 = (v7 - 1) & (v22 + v10);
        v11 = (__int64 *)(v9 + 112LL * v10);
        v24 = *v11;
        if ( v6 == *v11 )
          goto LABEL_6;
        v22 = v23;
      }
      while ( v24 != -4096 );
    }
  }
  sub_145FA20(v25, (_QWORD *)(v9 + 112 * v7), (_QWORD *)(v9 + 112 * v7), v8, 1);
  v13 = v25[0].m128_u64[0];
LABEL_7:
  v14 = *(_QWORD *)(v13 + 72);
  v15 = *(_QWORD *)(a1 + 48);
  v16 = *(_DWORD *)a2;
  if ( v14 )
  {
    sub_FC70B0((__int64)v25, v15, v16, 1410);
    v17 = *(_WORD *)(a2 + 16);
    v18 = sub_141A630(v17);
    if ( v17 == 1 || v18 )
      v19 = 0;
    else
      v19 = *(_QWORD *)(a2 + 8);
    sub_AE9DF0((unsigned __int8 **)v25, v19, 5u);
    sub_AE9DF0((unsigned __int8 **)v25, 1, 2u);
    sub_AEC220((unsigned __int8 **)v25, *(_BYTE **)(v13 + 64), *(_QWORD *)(v13 + 72));
    sub_AEA040((__int64)v25);
  }
  else
  {
    sub_FC70B0((__int64)v25, v15, v16, 1410);
    v20 = *(_WORD *)(a2 + 16);
    v21 = sub_141A630(v20);
    if ( v20 != 1 && !v21 )
      v14 = *(_QWORD *)(a2 + 8);
    sub_AE9DF0((unsigned __int8 **)v25, v14, 5u);
    sub_AE9DF0((unsigned __int8 **)v25, 0, 2u);
    sub_AEA040((__int64)v25);
  }
  sub_FC70B0((__int64)v25, *(_QWORD *)(a1 + 48), *(_DWORD *)(v13 + 56), 1276);
  sub_AE9DF0((unsigned __int8 **)v25, 1, 2u);
  sub_AEA040((__int64)v25);
}

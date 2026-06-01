void __fastcall sub_1460C00(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rdi
  __int16 v6; // ax
  __int64 v7; // rax
  __int64 v8; // rdx
  unsigned int v9; // ecx
  __int64 *v10; // rsi
  __int64 v11; // r8
  unsigned __int64 v12; // r14
  _QWORD *v13; // rdx
  unsigned __int16 v14; // bp
  char v15; // al
  __int64 v16; // rsi
  int v17; // esi
  int v18; // r10d
  __int64 v19; // r8
  __m128 v20[7]; // [rsp+0h] [rbp-78h] BYREF

  v2 = a1 + 3032;
  v4 = 0;
  v6 = *(_WORD *)(a2 + 16);
  if ( (unsigned __int16)(v6 - 7) > 0xCu && v6 != 1 )
    v4 = *(_QWORD *)(a2 + 8);
  v7 = *(unsigned int *)(a1 + 3048);
  v8 = *(_QWORD *)(a1 + 3032);
  if ( (_DWORD)v7 )
  {
    v9 = (v7 - 1) & (((unsigned int)v4 >> 9) ^ ((unsigned int)v4 >> 4));
    v10 = (__int64 *)(v8 + 16LL * v9);
    v11 = *v10;
    if ( v4 == *v10 )
    {
LABEL_6:
      sub_1460B90(v20, v10, (_QWORD *)(16 * v7 + v8), v2, 1);
      v12 = v20[0].m128_u64[0];
      goto LABEL_7;
    }
    v17 = 1;
    if ( v11 != -4096 )
    {
      do
      {
        v18 = v17 + 1;
        v9 = (v7 - 1) & (v17 + v9);
        v10 = (__int64 *)(v8 + 16LL * v9);
        v19 = *v10;
        if ( v4 == *v10 )
          goto LABEL_6;
        v17 = v18;
      }
      while ( v19 != -4096 );
    }
  }
  sub_1460B90(v20, (_QWORD *)(v8 + 16LL * (unsigned int)v7), (_QWORD *)(v8 + 16LL * (unsigned int)v7), v2, 1);
  v12 = v20[0].m128_u64[0];
LABEL_7:
  v13 = (_QWORD *)(*(_QWORD *)(a1 + 3032) + 16LL * *(unsigned int *)(a1 + 3048));
  sub_1460B90(v20, v13, v13, v2, 1);
  if ( v20[0].m128_u64[0] == v12 )
  {
    sub_FC70B0((__int64)v20, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, 1178);
    sub_AEA040((__int64)v20);
  }
  else
  {
    sub_FC70B0((__int64)v20, *(_QWORD *)(a1 + 48), *(_DWORD *)a2, *(_DWORD *)(v12 + 8));
    v14 = *(_WORD *)(a2 + 16);
    v15 = sub_141A630(v14);
    if ( v14 == 1 || v15 )
      v16 = 0;
    else
      v16 = *(_QWORD *)(a2 + 8);
    sub_AE9DF0((unsigned __int8 **)v20, v16, 5u);
    sub_AEA040((__int64)v20);
  }
}

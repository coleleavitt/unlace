__int64 __fastcall sub_1DA3F10(__int64 a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned int v10; // ecx
  __int64 *v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  char v20; // r13
  int v21; // r14d
  _QWORD *v22; // rsi
  __int64 v23; // r15
  __int64 v24; // r12
  __int16 v25; // ax
  unsigned __int8 v26; // al
  int v27; // esi
  int v28; // r8d
  __int64 v29; // r10
  unsigned __int64 v30; // [rsp+0h] [rbp-58h]
  unsigned __int64 v31; // [rsp+0h] [rbp-58h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  __m128 v33[4]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 40);
  if ( v5 )
  {
    v5 = sub_1D9F590(a1, *(_QWORD *)(a2 + 40), *(void **)(a2 + 48), 0, 0);
    v32 = v6;
    if ( !v5 )
      return 1;
  }
  else
  {
    v32 = 0;
  }
  v7 = *(unsigned int *)(a1 + 24);
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(_QWORD *)(a1 + 8);
  if ( (_DWORD)v7 )
  {
    v10 = (v7 - 1) & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
    v11 = (__int64 *)(v9 + 16LL * v10);
    v12 = *v11;
    if ( v8 == *v11 )
    {
LABEL_5:
      sub_AEAAD0(v33, v11, (_QWORD *)(16 * v7 + v9), a1 + 8, 1);
      v13 = v33[0].m128_u64[0];
      goto LABEL_6;
    }
    v27 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v28 = v27 + 1;
        v10 = (v7 - 1) & (v27 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v29 = *v11;
        if ( v8 == *v11 )
          goto LABEL_5;
        v27 = v28;
      }
      while ( v29 != -4096 );
    }
  }
  sub_AEAAD0(v33, (_QWORD *)(v9 + 16LL * (unsigned int)v7), (_QWORD *)(v9 + 16LL * (unsigned int)v7), a1 + 8, 1);
  v13 = v33[0].m128_u64[0];
LABEL_6:
  v30 = v13;
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v33, v14, v14, a1 + 8, 1);
  if ( v33[0].m128_u64[0] != v30 )
    v8 = *(_QWORD *)(v30 + 8);
  if ( !v8 )
    return 1;
  v18 = sub_1D8B300((__int64 *)a1, *(unsigned __int16 **)(a2 + 16), a3, a4, v15, v16, v17);
  if ( v18 == 1 )
    return 1;
  v20 = *(_BYTE *)(a2 + 36);
  v31 = v18 & 0xFFFFFFFFFFFFFFFELL;
  v21 = *(_DWORD *)(a2 + 32);
  v22 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  v23 = v22[2390];
  v24 = sub_EEE9A0(56, v22, 8u);
  *(_WORD *)v24 = *(_WORD *)v24 & 0xFE00 | 0x32;
  if ( unk_2CD7484 )
    sub_EE9B50(50);
  v25 = *(_WORD *)(v24 + 1);
  *(_QWORD *)(v24 + 8) = v23;
  *(_QWORD *)(v24 + 24) = v8;
  *(_DWORD *)(v24 + 32) = v21;
  *(_BYTE *)(v24 + 36) = v20;
  *(_WORD *)(v24 + 1) = v25 & 0xF801 | 2;
  *(_QWORD *)(v24 + 40) = v5;
  *(_QWORD *)(v24 + 16) = v31;
  *(_QWORD *)(v24 + 48) = v32;
  v26 = sub_B63470(v24);
  *(_BYTE *)(v24 + 1) = (v26 << 6) | *(_BYTE *)(v24 + 1) & 0x3F;
  *(_BYTE *)(v24 + 2) = *(_BYTE *)(v24 + 2) & 0xF8 | (v26 >> 2) & 7;
  return v24;
}

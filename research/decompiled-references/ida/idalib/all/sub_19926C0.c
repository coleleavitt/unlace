__int64 __fastcall sub_19926C0(__int64 a1, __int64 a2, double a3, __m128 a4)
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
  unsigned __int64 v15; // rax
  char v17; // r13
  int v18; // r14d
  _QWORD *v19; // rsi
  __int64 v20; // r15
  __int64 v21; // r12
  __int16 v22; // ax
  unsigned __int8 v23; // al
  int v24; // esi
  int v25; // r8d
  __int64 v26; // r10
  unsigned __int64 v27; // [rsp+0h] [rbp-58h]
  unsigned __int64 v28; // [rsp+0h] [rbp-58h]
  __int64 v29; // [rsp+8h] [rbp-50h]
  __m128 v30[4]; // [rsp+10h] [rbp-48h] BYREF

  v5 = *(_QWORD *)(a2 + 40);
  if ( v5 )
  {
    v5 = sub_198CB00(a1, *(_QWORD *)(a2 + 40), *(void **)(a2 + 48), 0, 0);
    v29 = v6;
    if ( !v5 )
      return 1;
  }
  else
  {
    v29 = 0;
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
      sub_AEAAD0(v30, v11, (_QWORD *)(16 * v7 + v9), a1 + 8, 1);
      v13 = v30[0].m128_u64[0];
      goto LABEL_6;
    }
    v24 = 1;
    if ( v12 != -4096 )
    {
      do
      {
        v25 = v24 + 1;
        v10 = (v7 - 1) & (v24 + v10);
        v11 = (__int64 *)(v9 + 16LL * v10);
        v26 = *v11;
        if ( v8 == *v11 )
          goto LABEL_5;
        v24 = v25;
      }
      while ( v26 != -4096 );
    }
  }
  sub_AEAAD0(v30, (_QWORD *)(v9 + 16LL * (unsigned int)v7), (_QWORD *)(v9 + 16LL * (unsigned int)v7), a1 + 8, 1);
  v13 = v30[0].m128_u64[0];
LABEL_6:
  v27 = v13;
  v14 = (_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL * *(unsigned int *)(a1 + 24));
  sub_AEAAD0(v30, v14, v14, a1 + 8, 1);
  if ( v30[0].m128_u64[0] != v27 )
    v8 = *(_QWORD *)(v27 + 8);
  if ( !v8 )
    return 1;
  v15 = sub_190CCA0((__int64 *)a1, *(unsigned __int16 **)(a2 + 16), a3, a4);
  if ( v15 == 1 )
    return 1;
  v17 = *(_BYTE *)(a2 + 36);
  v28 = v15 & 0xFFFFFFFFFFFFFFFELL;
  v18 = *(_DWORD *)(a2 + 32);
  v19 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
  v20 = v19[2390];
  v21 = sub_EEE9A0(56, v19, 8u);
  *(_WORD *)v21 = *(_WORD *)v21 & 0xFE00 | 0x32;
  if ( unk_2CD7484 )
    sub_EE9B50(50);
  v22 = *(_WORD *)(v21 + 1);
  *(_QWORD *)(v21 + 8) = v20;
  *(_QWORD *)(v21 + 24) = v8;
  *(_DWORD *)(v21 + 32) = v18;
  *(_BYTE *)(v21 + 36) = v17;
  *(_WORD *)(v21 + 1) = v22 & 0xF801 | 2;
  *(_QWORD *)(v21 + 40) = v5;
  *(_QWORD *)(v21 + 16) = v28;
  *(_QWORD *)(v21 + 48) = v29;
  v23 = sub_B63470(v21);
  *(_BYTE *)(v21 + 1) = (v23 << 6) | *(_BYTE *)(v21 + 1) & 0x3F;
  *(_BYTE *)(v21 + 2) = *(_BYTE *)(v21 + 2) & 0xF8 | (v23 >> 2) & 7;
  return v21;
}

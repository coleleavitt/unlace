__int64 __fastcall sub_1D02910(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r12
  __int64 v11; // rax
  int v13; // r14d
  _QWORD *v14; // rsi
  __int64 v15; // r15
  __int64 v16; // rbp
  __int16 v17; // ax
  unsigned __int8 v18; // al
  char v19; // [rsp+7h] [rbp-41h]
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 40);
  if ( v4 )
  {
    v4 = sub_1CFE3D0((__int64)a1, *(_QWORD *)(a2 + 40), *(void **)(a2 + 48), 0, 0);
    v6 = v5;
    if ( !v4 )
      return 1;
  }
  else
  {
    v6 = 0;
  }
  v10 = sub_1CB9120((__int64)a1, *(_QWORD *)(a2 + 24));
  if ( !v10 )
    return 1;
  v11 = sub_1CE88F0(a1, *(unsigned __int16 **)(a2 + 16), a3, a4, v7, v8, v9);
  if ( v11 == 1 )
    return 1;
  v20 = v11 & 0xFFFFFFFFFFFFFFFELL;
  v19 = *(_BYTE *)(a2 + 36);
  v13 = *(_DWORD *)(a2 + 32);
  v14 = *(_QWORD **)(*a1 + 248);
  v15 = v14[2390];
  v16 = sub_EEE9A0(56, v14, 8u);
  *(_WORD *)v16 = *(_WORD *)v16 & 0xFE00 | 0x32;
  if ( unk_2CD7484 )
    sub_EE9B50(50);
  v17 = *(_WORD *)(v16 + 1);
  *(_QWORD *)(v16 + 8) = v15;
  *(_QWORD *)(v16 + 24) = v10;
  *(_DWORD *)(v16 + 32) = v13;
  *(_QWORD *)(v16 + 40) = v4;
  *(_WORD *)(v16 + 1) = v17 & 0xF801 | 2;
  *(_QWORD *)(v16 + 48) = v6;
  *(_QWORD *)(v16 + 16) = v20;
  *(_BYTE *)(v16 + 36) = v19;
  v18 = sub_B63470(v16);
  *(_BYTE *)(v16 + 1) = (v18 << 6) | *(_BYTE *)(v16 + 1) & 0x3F;
  *(_BYTE *)(v16 + 2) = *(_BYTE *)(v16 + 2) & 0xF8 | (v18 >> 2) & 7;
  return v16;
}

__int64 __fastcall sub_1775470(__int64 *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // r12
  __int64 v6; // rax
  int v8; // r14d
  _QWORD *v9; // rsi
  __int64 v10; // r15
  __int64 v11; // rbp
  __int16 v12; // ax
  unsigned __int8 v13; // al
  char v14; // [rsp+7h] [rbp-41h]
  unsigned __int64 v15; // [rsp+8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 40);
  if ( v2 )
  {
    v2 = sub_176EE90(a1, *(_QWORD *)(a2 + 40), *(void **)(a2 + 48), 0, 0);
    v4 = v3;
    if ( !v2 )
      return 1;
  }
  else
  {
    v4 = 0;
  }
  v5 = sub_17473B0((__int64)a1, *(_QWORD *)(a2 + 24));
  if ( !v5 )
    return 1;
  v6 = sub_175B800(a1, *(unsigned __int16 **)(a2 + 16));
  if ( v6 == 1 )
    return 1;
  v15 = v6 & 0xFFFFFFFFFFFFFFFELL;
  v14 = *(_BYTE *)(a2 + 36);
  v8 = *(_DWORD *)(a2 + 32);
  v9 = *(_QWORD **)(*a1 + 248);
  v10 = v9[2390];
  v11 = sub_EEE9A0(56, v9, 8u);
  *(_WORD *)v11 = *(_WORD *)v11 & 0xFE00 | 0x32;
  if ( unk_2CD7484 )
    sub_EE9B50(50);
  v12 = *(_WORD *)(v11 + 1);
  *(_QWORD *)(v11 + 8) = v10;
  *(_QWORD *)(v11 + 24) = v5;
  *(_DWORD *)(v11 + 32) = v8;
  *(_QWORD *)(v11 + 40) = v2;
  *(_WORD *)(v11 + 1) = v12 & 0xF801 | 2;
  *(_QWORD *)(v11 + 48) = v4;
  *(_QWORD *)(v11 + 16) = v15;
  *(_BYTE *)(v11 + 36) = v14;
  v13 = sub_B63470(v11);
  *(_BYTE *)(v11 + 1) = (v13 << 6) | *(_BYTE *)(v11 + 1) & 0x3F;
  *(_BYTE *)(v11 + 2) = *(_BYTE *)(v11 + 2) & 0xF8 | (v13 >> 2) & 7;
  return v11;
}

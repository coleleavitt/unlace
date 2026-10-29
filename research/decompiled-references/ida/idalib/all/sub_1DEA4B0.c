__int64 __fastcall sub_1DEA4B0(
        __int64 *a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // r12
  unsigned __int16 *v16; // rax
  int v18; // r14d
  _QWORD *v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rbp
  __int16 v22; // ax
  unsigned __int8 v23; // al
  char v24; // [rsp+7h] [rbp-41h]
  unsigned __int64 v25; // [rsp+8h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    v8 = sub_1DD3CF0((__int64)a1, *(_QWORD *)(a2 + 40), *(void **)(a2 + 48), 0, 0);
    v10 = v9;
    if ( !v8 )
      return 1;
  }
  else
  {
    v10 = 0;
  }
  v15 = sub_1DD8310((__int64)a1, *(_DWORD *)(a2 + 32), *(_QWORD *)(a2 + 24), a6, a7, a8, a3, a4);
  if ( !v15 )
    return 1;
  v16 = sub_1DC71F0(a1, *(_QWORD *)(a2 + 16), v11, v12, v13, v14, a3, a4);
  if ( v16 == (unsigned __int16 *)((char *)&dword_0 + 1) )
    return 1;
  v25 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFFELL;
  v24 = *(_BYTE *)(a2 + 36);
  v18 = *(_DWORD *)(a2 + 32);
  v19 = *(_QWORD **)(*a1 + 248);
  v20 = v19[2390];
  v21 = sub_EEE9A0(56, v19, 8u);
  *(_WORD *)v21 = *(_WORD *)v21 & 0xFE00 | 0x32;
  if ( unk_2CD7484 )
    sub_EE9B50(50);
  v22 = *(_WORD *)(v21 + 1);
  *(_QWORD *)(v21 + 8) = v20;
  *(_QWORD *)(v21 + 24) = v15;
  *(_DWORD *)(v21 + 32) = v18;
  *(_QWORD *)(v21 + 40) = v8;
  *(_WORD *)(v21 + 1) = v22 & 0xF801 | 2;
  *(_QWORD *)(v21 + 48) = v10;
  *(_QWORD *)(v21 + 16) = v25;
  *(_BYTE *)(v21 + 36) = v24;
  v23 = sub_B63470(v21);
  *(_BYTE *)(v21 + 1) = (v23 << 6) | *(_BYTE *)(v21 + 1) & 0x3F;
  *(_BYTE *)(v21 + 2) = *(_BYTE *)(v21 + 2) & 0xF8 | (v23 >> 2) & 7;
  return v21;
}

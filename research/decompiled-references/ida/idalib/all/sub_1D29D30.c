__int64 __fastcall sub_1D29D30(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  __int64 v8; // r13
  __int64 v9; // rbx
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r12
  __int64 v14; // rax
  int v16; // r14d
  _QWORD *v17; // rsi
  __int64 v18; // r15
  __int64 v19; // rbp
  __int16 v20; // ax
  unsigned __int8 v21; // al
  char v22; // [rsp+7h] [rbp-41h]
  unsigned __int64 v23; // [rsp+8h] [rbp-40h]

  v8 = *(_QWORD *)(a2 + 40);
  if ( v8 )
  {
    v8 = sub_1D23E30(a1, *(_QWORD *)(a2 + 40), *(void **)(a2 + 48), 0, 0);
    v9 = a3;
    if ( !v8 )
      return 1;
  }
  else
  {
    v9 = 0;
  }
  v13 = sub_1D1B120((__int64)a1, *(_QWORD *)(a2 + 24), a7, a8, a3, a4, a5, a6);
  if ( !v13 )
    return 1;
  v14 = sub_1D11200((__int64 *)a1, *(unsigned __int16 **)(a2 + 16), a7, a8, v10, v11, v12);
  if ( v14 == 1 )
    return 1;
  v23 = v14 & 0xFFFFFFFFFFFFFFFELL;
  v22 = *(_BYTE *)(a2 + 36);
  v16 = *(_DWORD *)(a2 + 32);
  v17 = (_QWORD *)(*a1)[31];
  v18 = v17[2390];
  v19 = sub_EEE9A0(56, v17, 8u);
  *(_WORD *)v19 = *(_WORD *)v19 & 0xFE00 | 0x32;
  if ( unk_2CD7484 )
    sub_EE9B50(50);
  v20 = *(_WORD *)(v19 + 1);
  *(_QWORD *)(v19 + 8) = v18;
  *(_QWORD *)(v19 + 24) = v13;
  *(_DWORD *)(v19 + 32) = v16;
  *(_QWORD *)(v19 + 40) = v8;
  *(_WORD *)(v19 + 1) = v20 & 0xF801 | 2;
  *(_QWORD *)(v19 + 48) = v9;
  *(_QWORD *)(v19 + 16) = v23;
  *(_BYTE *)(v19 + 36) = v22;
  v21 = sub_B63470(v19);
  *(_BYTE *)(v19 + 1) = (v21 << 6) | *(_BYTE *)(v19 + 1) & 0x3F;
  *(_BYTE *)(v19 + 2) = *(_BYTE *)(v19 + 2) & 0xF8 | (v21 >> 2) & 7;
  return v19;
}

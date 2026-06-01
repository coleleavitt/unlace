__int64 __fastcall sub_1D3AFC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  char v6; // al
  __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  unsigned int v15; // ebp
  __int64 v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 *v20; // [rsp+8h] [rbp-60h] BYREF
  unsigned int v21; // [rsp+14h] [rbp-54h]
  __int64 v22; // [rsp+18h] [rbp-50h] BYREF
  __int64 v23; // [rsp+28h] [rbp-40h] BYREF
  __m128 v24; // [rsp+30h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h]

  v5 = a2;
  v22 = a2;
  v21 = a3;
  if ( !a2 )
    goto LABEL_24;
  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v6 == 37 )
  {
    v7 = *(_QWORD *)(sub_B8C1B0(a2 + 72) + 16);
    if ( (v7 & 4) != 0 )
      v8 = *(_QWORD *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    else
      v8 = v7 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v8 )
      sub_2EABD4();
    goto LABEL_6;
  }
  if ( v6 != 71 || (v18 = *(_QWORD *)(a2 + 48)) == 0 || (a3 = *(_BYTE *)(v18 + 28) & 0x7F, (_BYTE)a3 != 37) )
  {
LABEL_24:
    v15 = 0;
    if ( sub_B7D580(v5, 1, a3, a4) )
    {
      v20 = &v22;
      v25 = a1;
      v24 = _mm_loadh_ps((const double *)&v20);
      sub_15F0FC0(a1, v21, (__int64 (__fastcall *)(__int64))sub_1D36DF0, (__int64)&v24);
    }
    return v15;
  }
  v19 = *(_QWORD *)(sub_B8C1B0(v18 + 72) + 16);
  if ( (v19 & 4) != 0 )
    v8 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v8 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v8 )
    BUG();
LABEL_6:
  v9 = *(_QWORD *)(v8 + 64);
  v5 = v22;
  if ( !v9 || (*(_BYTE *)(v9 + 10) & 0x20) == 0 )
    goto LABEL_24;
  v10 = *(_QWORD *)(sub_B8C1B0(v22 + 72) + 16);
  if ( (v10 & 4) != 0 )
    v11 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v11 )
    v11 -= 64LL;
  v23 = sub_B96F60(v11);
  v12 = sub_B77B50(v22);
  if ( !v12 )
    return *(_BYTE *)(v23 + 28) >> 7;
  v13 = sub_B77A30(v23);
  v14 = v12;
  v15 = 1;
  v16 = sub_1E04120(a1, v13, v14, v21, 3);
  v23 = v16;
  if ( v16 && *(char *)(v16 + 28) >= 0 )
  {
    v20 = &v23;
    v25 = a1;
    v24 = _mm_loadh_ps((const double *)&v20);
    sub_15F0FC0(a1, v21, (__int64 (__fastcall *)(__int64))sub_1D36DD0, (__int64)&v24);
    return *(_BYTE *)(v23 + 28) >> 7;
  }
  return v15;
}

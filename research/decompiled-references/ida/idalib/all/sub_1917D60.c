__int64 __fastcall sub_1917D60(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r15
  int v17; // r14d
  int v18; // eax
  unsigned int v19; // r12d
  bool v20; // al
  unsigned __int64 v21; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v22; // [rsp+18h] [rbp-50h]
  char v23; // [rsp+20h] [rbp-48h]

  if ( !a4 )
  {
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    *(_BYTE *)(a1 + 16) = 0;
    *(_BYTE *)(a1 + 18) = 0;
    return a1;
  }
  if ( a5 != 1 )
  {
    if ( a5 != 2 )
    {
      if ( a5 )
      {
LABEL_5:
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = 1;
        *(_BYTE *)(a1 + 16) = 1;
        *(_BYTE *)(a1 + 18) = 0;
        return a1;
      }
      v12 = a3;
      v13 = sub_19179E0(a2, a3, a4, 0, a6, a7);
      if ( v13 != 1 )
        goto LABEL_9;
      goto LABEL_23;
    }
    v12 = a3;
    v13 = sub_1C36A00(a2, a3, a4);
    if ( v13 == 1 )
    {
      v16 = *(_QWORD *)(*(_QWORD *)(a2 + 248) + 18720LL);
      goto LABEL_15;
    }
LABEL_9:
    if ( !v13 )
      goto LABEL_5;
    if ( ((*(_WORD *)(v13 & 0xFFFFFFFFFFFFFFFELL) + 452) & 0x1FFu) > 1 )
    {
      v13 = sub_19B4A30(a2, v13 & 0xFFFFFFFFFFFFFFFELL, a3, 0, 0, 0);
      if ( v13 < 2 )
        goto LABEL_5;
    }
    goto LABEL_16;
  }
  v12 = a3;
  v13 = sub_19179E0(a2, a3, a4, 1u, a6, a7);
  if ( v13 != 1 )
    goto LABEL_9;
LABEL_23:
  v16 = *(_QWORD *)(*(_QWORD *)(a2 + 248) + 18640LL);
LABEL_15:
  v21 = a4;
  v17 = sub_EEC140(a4);
  v18 = sub_EEB7E0(a4, v12, *(double *)a6.m128_u64);
  v13 = sub_18C4330(a2, v18, v17, &v21, 1, v16);
  if ( (v13 & 0xFFFFFFFFFFFFFFFELL) == 0 )
    goto LABEL_5;
LABEL_16:
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = v13;
  *(_BYTE *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 18) = 0;
  if ( a5 == 1 )
  {
    sub_C3EB00((__int64)&v21, v13 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(a2 + 248), nullptr, v14, v15);
    if ( v23 )
    {
      v19 = v22;
      if ( v22 <= 0x40 )
        v20 = v21 == 0;
      else
        v20 = v19 == (unsigned int)sub_2206780(&v21);
      *(_BYTE *)(a1 + 18) = 1;
      *(_BYTE *)(a1 + 17) = !v20;
    }
    sub_98E4B0((__int64)&v21);
  }
  return a1;
}

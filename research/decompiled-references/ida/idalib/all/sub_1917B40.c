__int64 __fastcall sub_1917B40(
        __int64 a1,
        __int64 a2,
        __m128 a3,
        __m128 a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        int a8,
        char a9)
{
  __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  int v19; // r14d
  int v20; // eax
  unsigned int v21; // r12d
  bool v22; // al
  unsigned __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v24; // [rsp+18h] [rbp-50h]
  char v25; // [rsp+20h] [rbp-48h]

  if ( !a7 )
  {
    if ( a9 )
    {
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 8) = 0;
      *(_BYTE *)(a1 + 16) = 0;
      *(_BYTE *)(a1 + 18) = 0;
      return a1;
    }
    goto LABEL_5;
  }
  if ( a8 != 1 )
  {
    if ( a8 != 2 )
    {
      if ( a8 )
      {
LABEL_5:
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 8) = 1;
        *(_BYTE *)(a1 + 16) = 1;
        *(_BYTE *)(a1 + 18) = 0;
        return a1;
      }
      v14 = a6;
      v15 = sub_19179E0(a2, a6, a7, 0, a3, a4);
      if ( v15 != 1 )
        goto LABEL_10;
      goto LABEL_24;
    }
    v14 = a6;
    v15 = sub_1C36A00(a2, a6, a7);
    if ( v15 == 1 )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(a2 + 248) + 18720LL);
      goto LABEL_16;
    }
LABEL_10:
    if ( !v15 )
      goto LABEL_5;
    if ( ((*(_WORD *)(v15 & 0xFFFFFFFFFFFFFFFELL) + 452) & 0x1FFu) > 1 )
    {
      v15 = sub_19B4A30(a2, v15 & 0xFFFFFFFFFFFFFFFELL, a6, 0, 0, 0);
      if ( v15 < 2 )
        goto LABEL_5;
    }
    goto LABEL_17;
  }
  v14 = a6;
  v15 = sub_19179E0(a2, a6, a7, 1u, a3, a4);
  if ( v15 != 1 )
    goto LABEL_10;
LABEL_24:
  v18 = *(_QWORD *)(*(_QWORD *)(a2 + 248) + 18640LL);
LABEL_16:
  v23 = a7;
  v19 = sub_EEC140(a7);
  v20 = sub_EEB7E0(a7, v14, *(double *)a3.m128_u64);
  v15 = sub_18C4330(a2, v20, v19, &v23, 1, v18);
  if ( (v15 & 0xFFFFFFFFFFFFFFFELL) == 0 )
    goto LABEL_5;
LABEL_17:
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = v15;
  *(_BYTE *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 18) = 0;
  if ( a8 == 1 )
  {
    sub_C3EB00((__int64)&v23, v15 & 0xFFFFFFFFFFFFFFFELL, *(_QWORD *)(a2 + 248), nullptr, v16, v17);
    if ( v25 )
    {
      v21 = v24;
      if ( v24 <= 0x40 )
        v22 = v23 == 0;
      else
        v22 = v21 == (unsigned int)sub_2206780(&v23);
      *(_BYTE *)(a1 + 18) = 1;
      *(_BYTE *)(a1 + 17) = !v22;
    }
    sub_98E4B0((__int64)&v23);
  }
  return a1;
}

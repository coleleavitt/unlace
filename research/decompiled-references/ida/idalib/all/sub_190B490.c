unsigned __int64 __fastcall sub_190B490(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  unsigned __int8 v8; // r14
  unsigned __int8 v9; // r13
  __int64 v10; // rbx
  int v11; // eax
  _QWORD *v12; // rbp
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int64 result; // rax
  _BYTE *v17; // rbp
  unsigned __int8 v18; // dl
  int v19; // eax
  _BYTE *v20; // rdx
  bool v21; // al
  unsigned __int8 v22; // al
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // al
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE *v27; // [rsp+8h] [rbp-40h]

  v8 = a5;
  v9 = a4;
  v10 = a3;
  v11 = *(_DWORD *)a3;
  v12 = *(_QWORD **)(a3 + 8);
  if ( !(_BYTE)a4 )
  {
    if ( v11 != 2 )
    {
LABEL_3:
      *(_WORD *)(v10 + 163) = 0;
      v13 = (__int64)&v12[*(unsigned int *)(v10 + 16)];
      v14 = sub_15AB9E0((__int64)a2, *(_QWORD **)(a1 + 248), a3, a4, a5, a6);
      return sub_C98860(
               *(_QWORD **)(a1 + 248),
               *(_QWORD *)(v10 + 96),
               v14,
               v15,
               (const __m128i *)(v10 + 120),
               v9,
               v12,
               v13,
               0,
               0);
    }
    v17 = (_BYTE *)(*v12 & 0xFFFFFFFFFFFFFFF8LL);
    v18 = v17[28] & 0x7F;
    v19 = v18;
    if ( (unsigned int)v18 - 53 > 1 && ((v18 + 52) & 0x7Fu) > 1 )
    {
      if ( v18 == 71 )
        goto LABEL_16;
      v20 = v17;
    }
    else
    {
      v20 = (_BYTE *)sub_B72ED0((__int64)v17);
      LOBYTE(v19) = v20[28] & 0x7F;
      if ( (_BYTE)v19 == 71 )
        goto LABEL_19;
      v19 = (unsigned __int8)v19;
    }
    if ( (unsigned int)(v19 - 34) > 5 )
    {
LABEL_29:
      v26 = sub_16C47B0((__int64)v17);
      return sub_190AE60(a1, a2, v10 + 120, v26, (__int64)v17, 0, a7, a8, v8);
    }
    v27 = v20;
    v21 = sub_B753F0(v20);
    a3 = (__int64)v27;
    if ( !v21 && !sub_B754A0(v27) )
    {
      v17 = (_BYTE *)(**(_QWORD **)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL);
      goto LABEL_29;
    }
    v11 = *(_DWORD *)v10;
    v12 = *(_QWORD **)(v10 + 8);
  }
  if ( v11 != 2 )
    goto LABEL_3;
  v17 = (_BYTE *)(*v12 & 0xFFFFFFFFFFFFFFF8LL);
  v22 = v17[28] & 0x7F;
  if ( (unsigned int)v22 - 53 <= 1 || ((v22 + 52) & 0x7Fu) <= 1 )
  {
LABEL_19:
    v17 = (_BYTE *)sub_B72ED0((__int64)v17);
    if ( (v17[28] & 0x7Fu) - 34 > 5 )
      goto LABEL_16;
    goto LABEL_20;
  }
  if ( (unsigned int)v22 - 34 > 5 )
  {
LABEL_16:
    v23 = v8;
    goto LABEL_17;
  }
LABEL_20:
  if ( sub_B753F0(v17) || sub_B754A0(v17) )
    goto LABEL_18;
  v23 = v8;
  v17 = (_BYTE *)(**(_QWORD **)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL);
  v24 = v17[28] & 0x7F;
  if ( (unsigned int)v24 - 53 <= 1 || ((v24 + 52) & 0x7Fu) <= 1 )
  {
    v25 = sub_B72ED0(**(_QWORD **)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL);
    v23 = v8;
    v17 = (_BYTE *)v25;
  }
LABEL_17:
  a3 = (unsigned int)sub_18CDF10(a1, *(_DWORD *)(v10 + 128), (__int64)v17, v23);
  result = 1;
  if ( !(_BYTE)a3 )
  {
LABEL_18:
    v12 = *(_QWORD **)(v10 + 8);
    goto LABEL_3;
  }
  return result;
}

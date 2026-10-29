__int64 __fastcall sub_678E70(__int64 *a1, __int64 *a2, double a3, __m128i a4, double a5, __m128 a6)
{
  __int64 v6; // rax
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r13
  unsigned int v10; // r13d
  unsigned __int64 v12; // rax
  __int64 *v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *v16; // rdx
  __int64 *v17; // r12
  __int64 *v18; // rbx
  unsigned __int64 v19; // rax

  sub_66C060(a1, (__int64)a2, a3, *(double *)a4.m128i_i64, a5, a6);
  v6 = a2[14];
  if ( v6 )
  {
    v7 = (__int64 *)(v6 + 16);
    v8 = 8LL * *(unsigned int *)(v6 + 8);
    v9 = v6 + v8 + 16;
    if ( v8 )
    {
      while ( (unsigned __int8)sub_678D90(a1, *v7, a3, a4, a5, a6) )
      {
        if ( (__int64 *)v9 == ++v7 )
          goto LABEL_8;
      }
      return 0;
    }
  }
LABEL_8:
  v12 = a2[15];
  if ( v12 )
  {
    if ( v12 <= 7 )
      goto LABEL_17;
LABEL_10:
    if ( (*(_BYTE *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    {
      sub_7B7DB0(a2);
      v12 = a2[15];
      v13 = *(__int64 **)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( !v13 )
        goto LABEL_14;
    }
    else
    {
      v13 = *(__int64 **)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 8);
      if ( !v13 )
        goto LABEL_16;
    }
    if ( !(unsigned __int8)sub_673BB0(a1, *v13, (unsigned __int64)(v13 + 1), a3, a4, a5, a6) )
      return 0;
    v12 = a2[15];
LABEL_14:
    if ( v12 )
      goto LABEL_15;
    goto LABEL_25;
  }
  sub_63E750((__int64 *)(a2[12] + 88), a2[12]);
  v12 = a2[15];
  if ( v12 > 7 )
    goto LABEL_10;
  if ( v12 )
    goto LABEL_17;
LABEL_25:
  sub_63E750((__int64 *)(a2[12] + 88), a2[12]);
  v12 = a2[15];
LABEL_15:
  if ( v12 <= 7 )
    goto LABEL_17;
LABEL_16:
  v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2 != *(__int64 **)(v12 & 0xFFFFFFFFFFFFFFF8LL) )
    goto LABEL_17;
  if ( (*(_BYTE *)(v14 + 72) & 1) == 0 )
    goto LABEL_29;
  sub_7B7DB0(a2);
  v12 = a2[15];
  if ( v12 )
  {
    if ( v12 <= 7 )
      goto LABEL_17;
    v14 = v12 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_29:
    if ( (*(_BYTE *)(v14 + 72) & 1) == 0 )
      goto LABEL_30;
    goto LABEL_36;
  }
  sub_63E750((__int64 *)(a2[12] + 88), a2[12]);
  v19 = a2[15];
  if ( v19 <= 7 )
  {
    if ( v19 )
      goto LABEL_17;
LABEL_37:
    sub_63E750((__int64 *)(a2[12] + 88), a2[12]);
    v19 = a2[15];
    if ( v19 <= 7 )
    {
      if ( v19 )
        goto LABEL_17;
LABEL_40:
      sub_63E750((__int64 *)(a2[12] + 88), a2[12]);
      v12 = a2[15];
LABEL_41:
      if ( v12 <= 7 )
        goto LABEL_17;
      goto LABEL_31;
    }
    goto LABEL_38;
  }
  if ( (*(_BYTE *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
  {
LABEL_38:
    if ( (*(_BYTE *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) == 0 )
      goto LABEL_17;
LABEL_39:
    sub_7B7DB0(a2);
    v12 = a2[15];
    if ( v12 )
      goto LABEL_41;
    goto LABEL_40;
  }
LABEL_36:
  sub_7B7DB0(a2);
  v12 = a2[15];
  if ( !v12 )
    goto LABEL_37;
  if ( v12 <= 7 )
    goto LABEL_17;
LABEL_30:
  if ( (*(_BYTE *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    goto LABEL_39;
LABEL_31:
  if ( (*(_BYTE *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 72) & 1) != 0 )
    sub_7B7DB0(a2);
LABEL_17:
  v10 = sub_66F3A0(a1, (__int64)(a2 + 6), a3, a4, a5, a6);
  if ( (_BYTE)v10 )
  {
    v15 = sub_6434A0((__int64)a2);
    v17 = v16;
    v18 = (__int64 *)v15;
    if ( v16 == (__int64 *)v15 )
      return v10;
    while ( (unsigned __int8)sub_6777E0(a1, *v18, a3, a4, a5, a6) )
    {
      if ( v17 == ++v18 )
        return v10;
    }
  }
  return 0;
}


void __fastcall sub_E2FC00(__int64 a1, __int64 a2, __int64 *a3, char a4, __int64 a5)
{
  __m128 v8; // xmm0
  __int64 v9; // rdx
  __int64 v10; // rax
  _BYTE *v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 v17; // rsi
  __int64 v18; // rsi
  unsigned __int64 *v19; // rax
  __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  double v25[2]; // [rsp+8h] [rbp-160h] BYREF
  __int64 v26; // [rsp+18h] [rbp-150h]
  __m128 v27; // [rsp+20h] [rbp-148h] BYREF
  __int16 v28; // [rsp+30h] [rbp-138h]
  char v29; // [rsp+32h] [rbp-136h]
  __int64 v30; // [rsp+38h] [rbp-130h]
  __int128 v31; // [rsp+40h] [rbp-128h]
  _QWORD *v32; // [rsp+50h] [rbp-118h] BYREF
  _QWORD v33[2]; // [rsp+58h] [rbp-110h] BYREF
  _QWORD v34[10]; // [rsp+68h] [rbp-100h] BYREF
  _QWORD v35[12]; // [rsp+B8h] [rbp-B0h] BYREF
  int v36; // [rsp+118h] [rbp-50h]
  __int64 v37; // [rsp+120h] [rbp-48h]
  __int64 v38; // [rsp+128h] [rbp-40h]
  int v39; // [rsp+130h] [rbp-38h]

  *(_QWORD *)&v25[0] = a5;
  v33[0] = v34;
  v33[1] = 0x400000000LL;
  v34[9] = 0x400000000LL;
  v8 = _mm_loadh_ps(v25);
  v28 = 0;
  v35[8] = &v32;
  v34[8] = v35;
  v9 = *(_QWORD *)(a5 + 32);
  v32 = v33;
  v10 = *(_QWORD *)(a5 + 24);
  v27 = v8;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  memset(&v35[9], 0, 24);
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  if ( (unsigned __int64)(v10 - v9) > 2 )
  {
    *(_BYTE *)(v9 + 2) = 84;
    *(_WORD *)v9 = 23135;
    *(_QWORD *)(a5 + 32) += 3LL;
  }
  else
  {
    sub_22581D0(a5, "_ZT", 3);
  }
  if ( a3[3] || (v26 = 0, a3[4]) )
  {
    v11 = *(_BYTE **)(v27.m128_u64[1] + 32);
    if ( (unsigned __int64)v11 >= *(_QWORD *)(v27.m128_u64[1] + 24) )
    {
      sub_2257CD0(v27.m128_u64[1], 99);
    }
    else
    {
      *(_QWORD *)(v27.m128_u64[1] + 32) = v11 + 1;
      *v11 = 99;
    }
  }
  sub_E158E0((__int64)&v27, *a3, a3[1]);
  v12 = a3[3];
  if ( v12 || (v26 = 0, a3[4]) )
  {
    sub_E158E0((__int64)&v27, v12, a3[4]);
    v17 = a2;
    if ( !sub_B55E40(a2) )
      goto LABEL_8;
  }
  else
  {
    v17 = a2;
    if ( !sub_B55E40(a2) )
      goto LABEL_8;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_16;
  v19 = sub_B68690(a2, v17, v13, v14, v15, v16);
  v20 = (__int64 *)*v19;
  v21 = *v19 + 8LL * *((unsigned int *)v19 + 2);
  if ( *v19 < v21 )
  {
    v24 = *v19;
    while ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 64 )
    {
      v24 += 8LL;
      if ( v21 == v24 )
        goto LABEL_16;
    }
    if ( v24 == v21 )
      goto LABEL_16;
    goto LABEL_32;
  }
  if ( v20 != (__int64 *)v21 )
  {
    if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 64 )
    {
      v22 = (__int64 *)(v21 + 8);
      while ( v22 != v20 )
      {
        v23 = *v22++;
        if ( *(_WORD *)(v23 + 36) == 64 )
          goto LABEL_32;
      }
      goto LABEL_16;
    }
LABEL_32:
    v18 = 0;
    goto LABEL_17;
  }
LABEL_16:
  v18 = ((*(_BYTE *)(sub_B68890(a2) + 89) >> 2) ^ 1) & 1;
LABEL_17:
  v17 = a2 & 0xFFFFFFFFFFFFFFF8LL | v18;
LABEL_8:
  sub_E2ED50((__int64)&v27, v17, 0, (__m128)0LL);
  if ( !a4 )
    sub_E16840((__int64)&v27, *(_QWORD *)(a1 + 8), a3[6]);
  sub_E176D0((__int64)&v27);
}


__int64 __fastcall sub_E84D70(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbp
  __int64 v5; // rax
  char v6; // r13
  __int64 v7; // rdx
  char v8; // r13
  _QWORD *v9; // rbp
  __int64 v10; // rax
  char v11; // al
  unsigned __int64 *v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rbp
  __int64 v15; // rcx
  __int64 v16; // rbp
  unsigned int v17; // eax
  __int64 *v18; // rdx
  unsigned __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __m128i v23; // xmm0
  unsigned __int64 v25; // rdi
  int v26; // eax
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rax
  _QWORD *v29; // rbp
  __int64 v30; // rcx
  bool v31; // r13
  char v32; // [rsp+8h] [rbp-70h]
  unsigned __int64 v33; // [rsp+8h] [rbp-70h]
  __m128i v34; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v35; // [rsp+20h] [rbp-58h] BYREF
  __m128i v36; // [rsp+30h] [rbp-48h]
  _QWORD *v37; // [rsp+40h] [rbp-38h]

  v4 = *(_QWORD **)(a1 + 8);
  if ( (*(_BYTE *)(a2 + 96) & 7) == 2 || (*(_BYTE *)(a2 + 96) & 7) == 0 && ((*(_BYTE *)(a2 + 96) >> 3) & 3) == 2 )
  {
    if ( ((*(_BYTE *)(a2 + 28) + 85) & 0x7D) == 0 )
      goto LABEL_27;
    v25 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    {
      v26 = *(_BYTE *)(sub_B6AD60(*(_QWORD *)(v25 + 8)) + 8) & 0x7F;
      if ( !v26 )
        goto LABEL_3;
    }
    else
    {
      v26 = *(_BYTE *)(sub_B6AD60(v25) + 8) & 0x7F;
      if ( !v26 )
        goto LABEL_3;
    }
    if ( v26 != 24 )
    {
      if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x2B )
        goto LABEL_27;
      v27 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
        v27 = *(_QWORD *)v27;
      if ( ((*(_BYTE *)(v27 + 8) + 70) & 0x7Fu) > 3 )
      {
LABEL_27:
        v5 = v4[4];
        v6 = 1;
        v7 = v5 + 1;
        if ( (unsigned __int64)(v5 + 1) <= v4[5] )
          goto LABEL_4;
        goto LABEL_28;
      }
    }
  }
LABEL_3:
  v5 = v4[4];
  v6 = 0;
  v7 = v5 + 1;
  if ( (unsigned __int64)(v5 + 1) <= v4[5] )
    goto LABEL_4;
LABEL_28:
  sub_22130D0(v4 + 3, v4 + 6, v7, 1);
  v5 = v4[4];
LABEL_4:
  *(_BYTE *)(v4[3] + v5) = v6;
  v8 = 0;
  ++v4[4];
  v9 = *(_QWORD **)(a1 + 8);
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x2B )
    v8 = *(_BYTE *)(a2 + 97) >> 7;
  v10 = v9[4];
  if ( (unsigned __int64)(v10 + 1) > v9[5] )
  {
    sub_22130D0(v9 + 3, v9 + 6, v10 + 1, 1);
    v10 = v9[4];
  }
  *(_BYTE *)(v9[3] + v10) = v8;
  ++v9[4];
  v11 = sub_B4F880(a2);
  v14 = *(_QWORD **)(a1 + 8);
  v15 = v14[4];
  if ( (unsigned __int64)(v15 + 1) > v14[5] )
  {
    v32 = v11;
    sub_22130D0(v14 + 3, v14 + 6, v15 + 1, 1);
    v15 = v14[4];
    v11 = v32;
  }
  *(_BYTE *)(v14[3] + v15) = v11;
  ++v14[4];
  if ( v11 )
  {
    v28 = sub_B4F900(a2);
    v29 = *(_QWORD **)(a1 + 8);
    v30 = v29[4];
    v31 = v28 != 0;
    if ( (unsigned __int64)(v30 + 1) > v29[5] )
    {
      v33 = v28;
      sub_22130D0(v29 + 3, v29 + 6, v30 + 1, 1);
      v30 = v29[4];
      v28 = v33;
    }
    *(_BYTE *)(v29[3] + v30) = v31;
    ++v29[4];
    if ( v28 )
      sub_EF6790(v28, *(_QWORD *)(a1 + 8) + 176LL);
  }
  v16 = *(_QWORD *)(a1 + 8);
  v17 = (*(_BYTE *)(a2 + 28) & 0x7F) - 34;
  if ( v17 > 0x11 )
  {
    v20 = *(_QWORD *)(a2 + 40);
    goto LABEL_36;
  }
  v18 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  v19 = *(_QWORD *)(a2 + 56) & 4LL;
  if ( (*(_QWORD *)(a2 + 56) & 4) == 0 )
  {
    if ( !v18 )
      goto LABEL_15;
    goto LABEL_14;
  }
  v18 = (__int64 *)v18[4];
  if ( v18 )
  {
LABEL_14:
    sub_E847E0(*(_QWORD *)(a1 + 8), *v18, v18, v19, (__int64)v12, v13);
    v16 = *(_QWORD *)(a1 + 8);
    v17 = (*(_BYTE *)(a2 + 28) & 0x7F) - 34;
  }
LABEL_15:
  v20 = *(_QWORD *)(a2 + 40);
  if ( v17 > 5 )
  {
LABEL_36:
    v34.m128i_i64[0] = v20;
    v34.m128i_i32[2] = 0;
    sub_B61B50(&v35, v20);
    v22 = v35;
    v36 = _mm_load_si128(&v34);
    goto LABEL_17;
  }
  v21 = *(unsigned int *)(a2 + 24);
  v22 = *(_QWORD **)(a2 + 160);
  v34.m128i_i64[0] = *(_QWORD *)(a2 + 40);
  v34.m128i_i32[2] = v21;
  v23 = _mm_load_si128(&v34);
  v35 = v22;
  v36 = v23;
LABEL_17:
  v37 = v22;
  return sub_E80EA0(v16, v20, v21, v19, v12, v13, v36.m128i_u64[0], v36.m128i_i32[2], v22);
}


__int64 __fastcall sub_EA8E00(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rax
  char v5; // r13
  char v6; // al
  char v7; // r14
  __int64 v8; // r13
  _QWORD *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r12
  __int64 v13; // rax
  bool v14; // r13
  __int64 v15; // rax
  unsigned __int64 *v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // r12
  __int64 v19; // rcx
  bool v20; // r13
  __int64 v21; // r12
  unsigned int v22; // eax
  __int64 *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __m128i v28; // xmm0
  __int64 v30; // rax
  __int64 v31; // [rsp+8h] [rbp-70h]
  __m128i v32; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v33; // [rsp+20h] [rbp-58h] BYREF
  __m128i v34; // [rsp+30h] [rbp-48h]
  _QWORD *v35; // [rsp+40h] [rbp-38h]

  v3 = *(_QWORD **)(a1 + 8);
  v4 = v3[4];
  v5 = *(_BYTE *)(a2 + 68) & 1;
  if ( (unsigned __int64)(v4 + 1) > v3[5] )
  {
    sub_2236E10(v3 + 3, v3 + 6, v4 + 1, 1);
    v4 = v3[4];
  }
  *(_BYTE *)(v3[3] + v4) = v5;
  ++v3[4];
  if ( v5 )
  {
    v6 = *(_BYTE *)(a2 + 68);
    v7 = v6 & 1;
    if ( (v6 & 1) != 0 )
    {
      v8 = *(_QWORD *)(a2 + 72);
      if ( (v6 & 0xC) != 0xC && (v6 & 0xC) != 0 )
      {
        v8 = *(_QWORD *)(v8 + 8);
        v7 = v8 != 0;
      }
      else
      {
        v7 = v8 != 0;
      }
      v9 = *(_QWORD **)(a1 + 8);
      v10 = v9[4];
      v11 = v10 + 1;
      if ( (unsigned __int64)(v10 + 1) <= v9[5] )
      {
LABEL_9:
        *(_BYTE *)(v9[3] + v10) = v7;
        ++v9[4];
        if ( v8 )
          sub_F1A4D0(v8, *(_QWORD *)(a1 + 8) + 176LL);
        goto LABEL_11;
      }
    }
    else
    {
      v9 = *(_QWORD **)(a1 + 8);
      v8 = 0;
      v30 = v9[4];
      v11 = v30 + 1;
      if ( v9[5] >= (unsigned __int64)(v30 + 1) )
      {
        *(_BYTE *)(v9[3] + v30) = 0;
        ++v9[4];
        goto LABEL_11;
      }
    }
    sub_2236E10(v9 + 3, v9 + 6, v11, 1);
    v10 = v9[4];
    goto LABEL_9;
  }
LABEL_11:
  v12 = *(_QWORD **)(a1 + 8);
  v13 = v12[4];
  v14 = (*(_BYTE *)(a2 + 68) & 2) != 0;
  if ( (unsigned __int64)(v13 + 1) > v12[5] )
  {
    sub_2236E10(v12 + 3, v12 + 6, v13 + 1, 1);
    v13 = v12[4];
  }
  *(_BYTE *)(v12[3] + v13) = v14;
  ++v12[4];
  v15 = sub_B780B0(a2);
  v18 = *(_QWORD **)(a1 + 8);
  v19 = v18[4];
  v20 = v15 != 0;
  if ( (unsigned __int64)(v19 + 1) > v18[5] )
  {
    v31 = v15;
    sub_2236E10(v18 + 3, v18 + 6, v19 + 1, 1);
    v19 = v18[4];
    v15 = v31;
  }
  *(_BYTE *)(v18[3] + v19) = v20;
  ++v18[4];
  if ( v15 )
    sub_F1A4D0(v15, *(_QWORD *)(a1 + 8) + 176LL);
  v21 = *(_QWORD *)(a1 + 8);
  v22 = (*(_BYTE *)(a2 + 28) & 0x7F) - 34;
  if ( v22 > 0x11 )
  {
    v25 = *(_QWORD *)(a2 + 40);
    goto LABEL_27;
  }
  v23 = (__int64 *)(*(_QWORD *)(a2 + 56) & 0xFFFFFFFFFFFFFFF8LL);
  v24 = *(_QWORD *)(a2 + 56) & 4LL;
  if ( (*(_QWORD *)(a2 + 56) & 4) == 0 )
  {
    if ( !v23 )
      goto LABEL_21;
    goto LABEL_20;
  }
  v23 = (__int64 *)v23[4];
  if ( v23 )
  {
LABEL_20:
    sub_EA8520(*(_QWORD *)(a1 + 8), *v23, (__int64)v23, v24, (__int64)v16, v17);
    v21 = *(_QWORD *)(a1 + 8);
    v22 = (*(_BYTE *)(a2 + 28) & 0x7F) - 34;
  }
LABEL_21:
  v25 = *(_QWORD *)(a2 + 40);
  if ( v22 > 5 )
  {
LABEL_27:
    v32.m128i_i64[0] = v25;
    v32.m128i_i32[2] = 0;
    sub_B85890(&v33, v25);
    v27 = v33;
    v34 = _mm_load_si128(&v32);
    goto LABEL_23;
  }
  v26 = *(unsigned int *)(a2 + 24);
  v27 = *(_QWORD **)(a2 + 160);
  v32.m128i_i64[0] = *(_QWORD *)(a2 + 40);
  v32.m128i_i32[2] = v26;
  v28 = _mm_load_si128(&v32);
  v33 = v27;
  v34 = v28;
LABEL_23:
  v35 = v27;
  return sub_EA4BE0(v21, v25, v26, v24, v16, v17, v34.m128i_u64[0], v34.m128i_i32[2], v27);
}

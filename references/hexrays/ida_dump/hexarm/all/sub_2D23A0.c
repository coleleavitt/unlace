unsigned __int64 __fastcall sub_2D23A0(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool (__fastcall *v5)(__int64); // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  __int64 v10; // rax
  __m128i v11; // xmm0
  unsigned __int64 v13; // rbp
  __int64 *v14; // rdi
  __int64 *v15; // rdi
  __int64 v16; // rax
  __m128i v17; // xmm0
  __int64 v18; // rdi
  const __m128i *v19; // [rsp+18h] [rbp-80h] BYREF
  __m128i v20; // [rsp+20h] [rbp-78h] BYREF
  _QWORD v21[2]; // [rsp+30h] [rbp-68h] BYREF
  char v22; // [rsp+40h] [rbp-58h]
  __m128i *v23; // [rsp+48h] [rbp-50h]
  unsigned __int64 v24; // [rsp+58h] [rbp-40h]

  v24 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a1 + 8));
  v20 = 0u;
  v1 = *(_QWORD *)(a1 + 40);
  v2 = v1 + 80LL * *(_QWORD *)(a1 + 48);
  if ( v2 != v1 )
  {
    while ( 1 )
    {
      v5 = **(bool (__fastcall ***)(__int64))v1;
      if ( v5 != sub_2AD4C0 )
        break;
      if ( *(_QWORD *)(v1 + 8) == *(_QWORD *)(v1 + 56) && *(_DWORD *)(v1 + 16) == *(_DWORD *)(v1 + 64) )
      {
        v1 += 80;
        if ( v2 == v1 )
          goto LABEL_9;
      }
      else
      {
LABEL_3:
        v19 = (const __m128i *)(v1 + 8);
        v3 = sub_2D1F70(&v20, (unsigned __int64 *)(v1 + 8), &v19);
        v4 = v3 + 24;
        sub_2B0EF0(v3 + 40, v1 + 24);
        *(_BYTE *)(v4 + 40) = *(_BYTE *)(v1 + 48);
LABEL_4:
        v1 += 80;
        if ( v2 == v1 )
          goto LABEL_9;
      }
    }
    if ( !v5(v1) )
      goto LABEL_4;
    goto LABEL_3;
  }
LABEL_9:
  v6 = *(_QWORD *)(a1 + 80);
  v7 = *(_QWORD *)(a1 + 64);
  v22 = 99;
  v21[1] = v6;
  v21[0] = &off_4DB710;
  v23 = &v20;
  sub_2B65C0(v7, (__int64)v21, 0);
  v8 = v20.m128i_i64[0];
  if ( !v20.m128i_i64[0] )
    return v24 - __readfsqword(0x28u);
  v9 = *(_QWORD *)v20.m128i_i64[0];
  if ( !v20.m128i_i64[1] )
  {
    *(_QWORD *)v20.m128i_i64[0] = *(_QWORD *)v20.m128i_i64[0] & 3LL | v20.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
    v10 = v20.m128i_i64[0];
    v11 = (__m128i)v20.m128i_u64[0];
    *(_QWORD *)v20.m128i_i64[0] &= ~1uLL;
    *(__m128i *)(v10 + 8) = _mm_unpacklo_epi64(v11, v11);
    *(_QWORD *)v20.m128i_i64[0] |= 2uLL;
    goto LABEL_12;
  }
  v13 = v9 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v9 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v14 = *(__int64 **)(v13 + 8);
    if ( (*(_BYTE *)v14 & 2) != 0 )
    {
      v15 = *(__int64 **)(v13 + 16);
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_27;
    }
    else
    {
      sub_2B11F0(v14);
      v15 = *(__int64 **)(v13 + 16);
      if ( (*(_BYTE *)v15 & 2) != 0 )
        goto LABEL_21;
    }
    sub_2B11F0(v15);
LABEL_21:
    if ( (*(_BYTE *)v13 & 2) != 0 )
    {
LABEL_22:
      if ( v9 > 3 )
        qfree(v9 & 0xFFFFFFFFFFFFFFFCLL);
      v8 = v20.m128i_i64[0];
      v9 = *(_QWORD *)v20.m128i_i64[0];
      goto LABEL_25;
    }
LABEL_27:
    v18 = *(_QWORD *)(v13 + 40);
    if ( v18 )
    {
      *(_QWORD *)(v13 + 48) = 0;
      qfree(v18);
    }
    *(_QWORD *)v13 |= 2uLL;
    goto LABEL_22;
  }
LABEL_25:
  *(_QWORD *)v8 = v9 & 3 | v8 & 0xFFFFFFFFFFFFFFFCLL;
  v16 = v20.m128i_i64[0];
  v17 = (__m128i)v20.m128i_u64[0];
  *(_QWORD *)v20.m128i_i64[0] &= ~1uLL;
  *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v17, v17);
  *(_QWORD *)v20.m128i_i64[0] |= 2uLL;
  v20.m128i_i64[1] = 0;
LABEL_12:
  if ( v20.m128i_i64[0] )
    qfree(v20.m128i_i64[0]);
  return v24 - __readfsqword(0x28u);
}

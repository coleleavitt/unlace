unsigned __int64 __fastcall sub_30A130(__int64 a1, double a2, double a3)
{
  __m128i *v3; // r12
  __int64 v4; // r15
  __int64 i; // rbp
  bool (__fastcall *v6)(__int64); // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rbp
  __int64 v16; // rbx
  __int64 v17; // rax
  unsigned __int64 v19; // rbp
  _QWORD *v20; // rdi
  _QWORD *v21; // rdi
  __m128i *v22; // rax
  __int64 v23[2]; // [rsp+10h] [rbp-A8h] BYREF
  char v24; // [rsp+20h] [rbp-98h]
  __int64 *v25; // [rsp+28h] [rbp-90h]
  __int64 v26; // [rsp+30h] [rbp-88h] BYREF
  __int128 v27; // [rsp+38h] [rbp-80h]
  unsigned __int64 v28; // [rsp+48h] [rbp-70h]
  __int128 v29; // [rsp+50h] [rbp-68h]
  int v30; // [rsp+60h] [rbp-58h]
  __m128i *v31; // [rsp+68h] [rbp-50h]
  unsigned __int64 v32; // [rsp+78h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a1 + 8));
  v3 = (__m128i *)sub_2C7450(a1);
  if ( !v3 )
  {
    v22 = (__m128i *)qalloc(16);
    v3 = v22;
    if ( !v22 )
      sub_4F618(a2, a3);
    v22->m128i_i64[0] = 0;
    v22->m128i_i64[1] = 0;
  }
  v4 = *(_QWORD *)(a1 + 40);
  for ( i = v4 + 192LL * *(_QWORD *)(a1 + 48); i != v4; *(_DWORD *)(v8 + 128) = *(_DWORD *)(v4 - 56) )
  {
    while ( 1 )
    {
      v6 = **(bool (__fastcall ***)(__int64))v4;
      if ( v6 == sub_2AD0E0 )
        break;
      if ( v6(v4) )
        goto LABEL_7;
LABEL_4:
      v4 += 192;
      if ( i == v4 )
        goto LABEL_8;
    }
    if ( (unsigned int)(*(_DWORD *)(v4 + 40) - 3) > 1 )
      goto LABEL_4;
LABEL_7:
    v23[0] = v4 + 8;
    v7 = sub_309FA0(v3, v4 + 8, v23);
    v8 = v7 + 24;
    copy_argloc(v7 + 64, v4 + 48);
    *(_QWORD *)(v8 + 56) = *(_QWORD *)(v4 + 64);
    sub_2B0B30(v8 + 64, v4 + 72);
    copy_tinfo_t(v8 + 88, v4 + 96);
    sub_2B0B30(v8 + 96, v4 + 104);
    v9 = *(_QWORD *)(v4 + 128);
    v4 += 192;
    *(_QWORD *)(v8 + 120) = v9;
  }
LABEL_8:
  v10 = *(_QWORD *)(a1 + 80);
  v11 = *(_QWORD *)(a1 + 64);
  v24 = 118;
  v23[1] = v10;
  v25 = &v26;
  v23[0] = (__int64)off_4E1500;
  v26 = 0;
  v28 = 0;
  v30 = 1;
  v31 = v3;
  v27 = 0;
  v29 = 0;
  sub_2B6200(v11, (__int64)v23, 0);
  v12 = v28;
  v23[0] = (__int64)off_4E1500;
  if ( !v28 )
    goto LABEL_13;
  v13 = *(_QWORD *)v28;
  if ( !(_QWORD)v29 )
  {
    *(_QWORD *)v28 = *(_QWORD *)v28 & 3LL | v28 & 0xFFFFFFFFFFFFFFFCLL;
    *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
    *(_QWORD *)v28 &= ~1uLL;
    *(_QWORD *)v28 |= 2uLL;
    goto LABEL_11;
  }
  v19 = v13 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (*(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
  {
    v20 = *(_QWORD **)(v19 + 8);
    if ( (*(_BYTE *)v20 & 2) != 0 )
    {
      v21 = *(_QWORD **)(v19 + 16);
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_33;
    }
    else
    {
      sub_2B0820(v20);
      v21 = *(_QWORD **)(v19 + 16);
      if ( (*(_BYTE *)v21 & 2) != 0 )
        goto LABEL_25;
    }
    sub_2B0820(v21);
LABEL_25:
    if ( (*(_BYTE *)v19 & 2) != 0 )
    {
LABEL_26:
      if ( v13 > 3 )
        qfree(v13 & 0xFFFFFFFFFFFFFFFCLL);
      v12 = v28;
      v13 = *(_QWORD *)v28;
      goto LABEL_29;
    }
LABEL_33:
    cleanup_argloc(v19 + 48);
    cleanup_argloc(v19 + 24);
    *(_QWORD *)v19 |= 2uLL;
    goto LABEL_26;
  }
LABEL_29:
  *(_QWORD *)v12 = v13 & 3 | v12 & 0xFFFFFFFFFFFFFFFCLL;
  *(__m128i *)(v28 + 8) = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
  *(_QWORD *)v28 &= ~1uLL;
  *(_QWORD *)v28 |= 2uLL;
  *(_QWORD *)&v29 = 0;
LABEL_11:
  if ( v28 )
    qfree(v28);
LABEL_13:
  v14 = v26;
  if ( v26 )
  {
    v15 = v27;
    if ( (_QWORD)v27 )
    {
      v16 = 0;
      do
      {
        v17 = 3 * v16++;
        sub_2B9980((_QWORD *)(32 * v17 + v14));
        v14 = v26;
      }
      while ( v15 != v16 );
    }
    *(_QWORD *)&v27 = 0;
    qfree(v14);
  }
  sub_2C3F80(v3->m128i_i64);
  qfree(v3);
  return v32 - __readfsqword(0x28u);
}

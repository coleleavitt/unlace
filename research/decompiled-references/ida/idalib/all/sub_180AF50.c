void __fastcall sub_180AF50(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int8 v5; // al
  __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r13
  __int64 *v14; // r14
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 *v18; // rax
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  __m128i *v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  int v28; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v29; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v30[184]; // [rsp+10h] [rbp-B8h] BYREF

  v5 = a3[3].m128i_i8[10];
  if ( (v5 & 0x20) == 0 )
  {
    sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCAAu, 0);
    v27 = sub_15DD120((__int64)v30, (__int64)a3);
    LODWORD(v29) = 1;
    sub_1587D10(v27, (int *)&v29);
    sub_15F7200(v30);
    return;
  }
  v29 = 0;
  v7 = &v29;
  v8 = sub_1E5F010(a3[5].m128i_i64[13 * ((v5 & 4) != 0) + 2 * ((v5 & 8) != 0) + a3[3].m128i_u16[4]], &v29);
  v13 = v8;
  v14 = (__int64 *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = *(_QWORD *)(v8 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 58 && !sub_F58060(v15) )
  {
    if ( (v16 = *(_QWORD *)(*(_QWORD *)(*v14 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v16 + 16) == 13)
      && ((*(_WORD *)(v16 + 18) >> 3) & 0x1FF) == 0x1B4
      || (v7 = *(__int64 **)(a1 + 248), !sub_F60F80(*v14, (__int64)v7, v9, v10, v11, v12)) )
    {
      sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC70u, 0);
      v28 = 2;
      v17 = sub_1587D10((__int64)v30, &v28);
      sub_15DD120(v17, (__int64)a3);
      sub_15F7200(v30);
      return;
    }
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
    goto LABEL_13;
  v18 = sub_B8C3D0(a2, (__int64)v7, v9, v10, v11, v12);
  v19 = *v18;
  v20 = *v18 + 8LL * *((unsigned int *)v18 + 2);
  if ( v19 >= v20 )
  {
    if ( v19 == v20 )
    {
LABEL_13:
      v22 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
      sub_B1B3D0(v22, *(_QWORD *)(a1 + 248), a3, v29);
      sub_B8CC60(a2, (__int64)v22, v23, v24, v25, v26);
      return;
    }
    while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 395 )
    {
      v20 += 8LL;
      if ( v19 == v20 )
        goto LABEL_13;
    }
  }
  else
  {
    v21 = v19;
    while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 395 )
    {
      v21 += 8LL;
      if ( v20 == v21 )
        goto LABEL_13;
    }
    if ( v20 == v21 )
      goto LABEL_13;
  }
  while ( *(_WORD *)(*(_QWORD *)v19 + 36LL) != 395 )
    v19 += 8LL;
  if ( (*(_QWORD *)&byte_8[**(_QWORD **)(*(_QWORD *)v19 + 40LL) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[**(_QWORD **)(*(_QWORD *)v19 + 40LL) & 0xFFFFFFFFFFFFFFF0LL]
       | (unsigned __int8)**(_QWORD **)(*(_QWORD *)v19 + 40LL))
      & 7) == (v14[1] & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v14[1] | v13) & 7) )
    goto LABEL_13;
  sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1ACBu, 0);
  sub_15DD120((__int64)v30, (__int64)a3);
  sub_15F7200(v30);
}

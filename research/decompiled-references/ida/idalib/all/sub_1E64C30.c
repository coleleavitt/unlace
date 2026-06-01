__int64 __fastcall sub_1E64C30(__int64 *a1, const __m128i *a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v9; // rbp
  unsigned __int16 v10; // ax
  __int64 v11; // r14
  __m128i *v12; // r12
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdi
  char i; // al
  __int64 v17; // r14
  __int64 v18; // r14
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rdi
  __int64 *v23; // rsi
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rsi
  unsigned __int64 v31; // rax
  __int64 v32; // r14
  int v33; // r14d
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // r8
  _QWORD *v38; // rbx
  unsigned __int64 v39; // rax
  int v40; // [rsp+Ch] [rbp-10Ch] BYREF
  _OWORD v41[3]; // [rsp+10h] [rbp-108h] BYREF
  __int64 v42; // [rsp+40h] [rbp-D8h]
  _BYTE v43[32]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int8 *v44[11]; // [rsp+70h] [rbp-A8h] BYREF
  char v45; // [rsp+C8h] [rbp-50h]
  char v46; // [rsp+D4h] [rbp-44h]

  v9 = *a1;
  v10 = *(_WORD *)(a2[4].m128i_i64[1] + 8);
  if ( v10 == 317 )
  {
    v32 = *(_QWORD *)(v9 + 248);
    a2[3].m128i_i8[10] |= 2u;
    v12 = (__m128i *)sub_1E61010((__int64 *)(v32 + 2352), 40, 3u, a4, a5, a6);
    sub_B178A0(v12, v32, a2);
    goto LABEL_5;
  }
  if ( v10 <= 0x13Du )
  {
    if ( v10 == 316 )
    {
      v18 = *(_QWORD *)(v9 + 248);
      a2[3].m128i_i8[10] |= 2u;
      v12 = (__m128i *)sub_1E61010((__int64 *)(v18 + 2352), 40, 3u, a4, a5, a6);
      sub_B17870(v12, v18, a2);
      goto LABEL_5;
    }
    return sub_1E651B0();
  }
  if ( v10 != 338 )
  {
    if ( v10 == 388 )
    {
      v17 = *(_QWORD *)(v9 + 248);
      a2[3].m128i_i8[10] |= 2u;
      v12 = (__m128i *)sub_1E61010((__int64 *)(v17 + 2352), 40, 3u, a4, a5, a6);
      sub_B1A9B0(v12, v17, a2);
      goto LABEL_5;
    }
    return sub_1E651B0();
  }
  v11 = *(_QWORD *)(v9 + 248);
  a2[3].m128i_i8[10] |= 2u;
  v12 = (__m128i *)sub_1E61010((__int64 *)(v11 + 2352), 40, 3u, a4, a5, a6);
  sub_B18E40(v12, v11, a2);
LABEL_5:
  v14 = *a3;
  v42 = 0;
  memset(v41, 0, sizeof(v41));
  while ( 1 )
  {
    v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFF0LL);
    for ( i = *(_BYTE *)(v15 + 16); i == 53; i = *(_BYTE *)(v15 + 16) )
      v15 = *(_QWORD *)(sub_F5DAC0(v15) & 0xFFFFFFFFFFFFFFF0LL);
    if ( i != 24 )
      break;
LABEL_9:
    v14 = *(_QWORD *)(v15 + 40);
  }
  if ( i == 8 )
  {
    *((_QWORD *)v41 + ((unsigned __int64)(*(_WORD *)(v15 + 18) >> 3) >> 6)) |= 1LL << (*(_WORD *)(v15 + 18) >> 3);
    goto LABEL_9;
  }
  v19 = (unsigned __int64)v12[2].m128i_u16[2] >> 6;
  v20 = *((_QWORD *)v41 + v19);
  v21 = 1LL << v12[2].m128i_i16[2];
  if ( (v21 & v20) != 0 )
  {
    sub_168B9F0((__int64)v43, (__int64 *)(v9 + 8), a2[1].m128i_u32[2], 0x1ACCu, 0);
    sub_15DD120((__int64)v43, (__int64)a2);
    sub_15F7200(v43);
    return 1;
  }
  *((_QWORD *)v41 + v19) = v20 | v21;
  if ( (*(_QWORD *)&v41[0] & 0x1800000000LL) == 0x1800000000LL )
  {
    sub_168B9F0((__int64)v43, (__int64 *)(v9 + 8), a2[1].m128i_u32[2], 0xCADu, 0);
    if ( v45 )
    {
      sub_AE9DF0(v44, (__int64)"'__ptr32'", 1u);
    }
    else
    {
      if ( !v46 )
        goto LABEL_32;
      sub_1E63E10((__int64)v43, (__int64)"'__ptr32'");
    }
    if ( v45 )
    {
      sub_AE9DF0(v44, (__int64)"'__ptr64'", 1u);
    }
    else if ( v46 )
    {
      sub_1E63E10((__int64)v43, (__int64)"'__ptr64'");
    }
    goto LABEL_32;
  }
  if ( (*(_QWORD *)&v41[0] & 0x22000000000LL) == 0x22000000000LL )
  {
    sub_168B9F0((__int64)v43, (__int64 *)(v9 + 8), a2[1].m128i_u32[2], 0xCADu, 0);
    if ( v45 )
    {
      sub_AE9DF0(v44, (__int64)"'__sptr'", 1u);
    }
    else
    {
      if ( !v46 )
      {
LABEL_32:
        v40 = 0;
        sub_1587D10((__int64)v43, &v40);
        sub_15F7200(v43);
        return 1;
      }
      sub_1E63E10((__int64)v43, (__int64)"'__sptr'");
    }
    if ( v45 )
    {
      sub_AE9DF0(v44, (__int64)"'__uptr'", 1u);
    }
    else if ( v46 )
    {
      sub_1E63E10((__int64)v43, (__int64)"'__uptr'");
    }
    goto LABEL_32;
  }
  v22 = *(_QWORD *)(*a3 & 0xFFFFFFFFFFFFFFF0LL);
  if ( i == 42 )
  {
    v27 = *(_QWORD *)&v41[0] & 0x20000000000LL;
    v28 = *(_QWORD *)(*(_QWORD *)(v9 + 248) + 17448LL);
    v29 = *(unsigned __int8 *)(v28 + 8);
    if ( v29 == 32 )
    {
      if ( (*(_QWORD *)&v41[0] & 0x1000000000LL) != 0 )
      {
        v33 = 18;
        v36 = sub_F68450(v22, v28, *(__int64 *)&v41[0], 32, v13);
LABEL_42:
        v38 = *(_QWORD **)(v9 + 248);
        v39 = sub_A72780(v38, v36, v34, v35, v37);
        v30 = sub_A70E70((__int64)v38, v39, v33);
        goto LABEL_27;
      }
      if ( !v27 )
      {
LABEL_26:
        v30 = sub_F68450(v22, v28, *(__int64 *)&v41[0], v29, v13);
LABEL_27:
        v31 = sub_A70010(*(_QWORD *)(v9 + 248), v30);
        *a3 = sub_1E5D550((__int64)a1, (__int64)v12, *a3, v31);
        return 0;
      }
    }
    else
    {
      if ( (*(_QWORD *)&v41[0] & 0x800000000LL) == 0 || v29 != 64 )
        goto LABEL_26;
      if ( *(_DWORD *)(v28 + 260) != 16 && !v27 )
      {
        v33 = 16;
        v36 = sub_F68450(v22, v28, *(__int64 *)&v41[0], 64, v13);
        goto LABEL_42;
      }
    }
    v33 = 17;
    v36 = sub_F68450(v22, v28, *(__int64 *)&v41[0], v29, v13);
    goto LABEL_42;
  }
  v23 = (__int64 *)(v9 + 8);
  v24 = a2[1].m128i_u32[2];
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 33 )
  {
    sub_168B9F0((__int64)v43, v23, v24, 0xC83u, 0);
    sub_15DD120((__int64)v43, (__int64)a2);
    sub_15F7200(v43);
  }
  else
  {
    sub_168B9F0((__int64)v43, v23, v24, 0xC8Fu, 0);
    v25 = sub_15DD120((__int64)v43, (__int64)a2);
    v40 = 0;
    sub_1587D10(v25, &v40);
    sub_15F7200(v43);
  }
  return 1;
}

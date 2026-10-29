void __fastcall sub_18311E0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  char v10; // al
  bool v11; // bp
  __int64 v12; // rdx
  int v13; // eax
  const __m128i *v14; // r14
  unsigned int v15; // r15d
  __int16 v16; // ax
  __int16 v17; // ax
  __int64 v18; // r10
  __int32 v19; // edx
  __int64 v20; // rax
  __m128i v21; // xmm0
  bool v22; // zf
  char v23; // al
  __int64 v24; // rax
  __int64 *v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  __int32 v28; // r15d
  __m128i *v29; // rbp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __m128i *v35; // rbp
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rbx
  unsigned __int8 v41; // al
  unsigned __int64 v42; // rax
  unsigned int v43; // edx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  __int64 v48; // [rsp+8h] [rbp-110h]
  __int64 v49; // [rsp+8h] [rbp-110h]
  __int64 v50; // [rsp+8h] [rbp-110h]
  unsigned int v51; // [rsp+18h] [rbp-100h] BYREF
  int v52; // [rsp+1Ch] [rbp-FCh] BYREF
  __int64 v53; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+28h] [rbp-F0h] BYREF
  __m128i v55; // [rsp+30h] [rbp-E8h] BYREF
  __int64 v56; // [rsp+40h] [rbp-D8h]
  __m128i v57; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+60h] [rbp-B8h]

  v4 = 1;
  v6 = sub_B8DC30(a2, 1);
  if ( v6 )
    v9 = *(_QWORD *)(v6 + 24);
  else
    v9 = *(_QWORD *)(a2 + 80);
  v10 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  LOBYTE(v4) = v10 != 11;
  v11 = v10 != 11 && (v10 & 0xF7) != 34;
  if ( v11 )
  {
    sub_168B9F0((__int64)&v57, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19BAu, 0);
    v40 = sub_15DD120((__int64)&v57, (__int64)a3);
    v41 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)v41 - 34 > 5 )
    {
      if ( v41 == 18 )
      {
        v47 = sub_BA8620(a2);
        v43 = v47;
        v44 = HIDWORD(v47);
      }
      else
      {
        LODWORD(v44) = 0;
        v43 = 0;
      }
    }
    else
    {
      v42 = sub_B77620(a2);
      v43 = v42;
      v44 = HIDWORD(v42);
    }
    v55.m128i_i64[0] = __PAIR64__(v44, v43);
    sub_1587DB0(v40, v55.m128i_i64);
    sub_15F7200(&v57);
    return;
  }
  if ( !a3[3].m128i_i16[4] )
  {
    v35 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
    sub_B188F0(v35, *(_QWORD *)(a1 + 248), a3);
    sub_B8CC60(a2, (__int64)v35, v36, v37, v38, v39);
    return;
  }
  v12 = a3[2].m128i_i8[2] & 0xF0;
  if ( (a3[2].m128i_i8[2] & 0xF0) == 0xF0 )
    v13 = sub_FA77D0(a3);
  else
    v13 = (unsigned __int8)a3[2].m128i_i8[2] >> 4;
  if ( !v13 )
  {
    sub_168B9F0((__int64)&v57, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCAAu, 0);
    v26 = sub_15DD120((__int64)&v57, (__int64)a3);
    v55.m128i_i32[0] = 0;
    sub_1587D10(v26, v55.m128i_i32);
    sub_15F7200(&v57);
    return;
  }
  v14 = (const __m128i *)(a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL);
  v55.m128i_i32[2] = 0;
  v56 = 0;
  v15 = sub_C00A40((unsigned __int64)v14, v4, v12, v7, v8);
  v16 = v14->m128i_i16[0];
  v55.m128i_i64[0] = 0;
  v17 = v16 & 0x1FF;
  if ( v17 == 71 )
  {
    v18 = v14[1].m128i_i64[0];
    if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 34 > 5 )
    {
      v50 = *(_QWORD *)(v18 + 40);
      sub_168B9F0((__int64)&v57, (__int64 *)(a1 + 8), v15, 0xC7Au, 0);
      LODWORD(v53) = 1;
      v45 = sub_1587D10((__int64)&v57, (int *)&v53);
      v54 = v50;
LABEL_34:
      sub_15894B0(v45, &v54);
      sub_15F7200(&v57);
      return;
    }
    v19 = v14->m128i_i32[1];
    v20 = v14[1].m128i_i64[1];
    v57.m128i_i64[0] = *(_QWORD *)(v18 + 40);
    v57.m128i_i32[2] = v19;
    v21 = _mm_load_si128(&v57);
    v58 = v20;
    v56 = v20;
    v55 = v21;
  }
  else
  {
    if ( v17 != 24 )
    {
      sub_168B9F0((__int64)&v57, (__int64 *)(a1 + 8), v15, 0xC7Au, 0);
      LODWORD(v54) = 0;
      sub_1587D10((__int64)&v57, (int *)&v54);
      sub_15F7200(&v57);
      return;
    }
    v18 = sub_1BE70F0(a1, v14, 1, 0, 0, 0);
    v55 = _mm_loadu_si128(v14 + 1);
    v56 = v14[2].m128i_i64[0];
    if ( !v18 )
    {
      sub_168B9F0((__int64)&v57, (__int64 *)(a1 + 8), v15, 0xC7Au, 0);
      LODWORD(v53) = 2;
      v34 = sub_1587D10((__int64)&v57, (int *)&v53);
      v54 = v55.m128i_i64[0];
      sub_15894B0(v34, &v54);
      sub_15F7200(&v57);
      if ( *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19080LL) == v14->m128i_i64[1] )
        sub_1BE6FF0(a1, v14, 0, 0);
      return;
    }
  }
  v22 = a3[3].m128i_i16[4] == 1;
  v51 = 0;
  if ( v22 )
  {
    if ( (*(_BYTE *)(v18 + 28) & 0x7Fu) - 34 <= 5 )
    {
      v48 = v18;
      v23 = sub_B72F20(v18);
      v18 = v48;
      v11 = v23;
    }
    HIBYTE(v51) = (v11 << 6) | HIBYTE(v51) & 0xBF;
    v51 = v51 & 0x40000000 | 0x80000001;
    v24 = sub_18064C0(v18, -v11);
    v25 = (__int64 *)(a1 + 8);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v24 & 0xFFFFFFFFFFFFFFF0LL]
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) != 42 )
    {
      sub_168B9F0((__int64)&v57, v25, v15, 0xC7Bu, 0);
      v54 = v55.m128i_i64[0];
      sub_15894B0((__int64)&v57, &v54);
      sub_15F7200(&v57);
      return;
    }
    goto LABEL_22;
  }
  v49 = v18;
  if ( (unsigned __int8)sub_1830010(
                          a1,
                          v18,
                          (__int64)a3,
                          2u,
                          (_DWORD *)(a3[5].m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL),
                          (__int64)&v51,
                          0,
                          0) )
  {
    v27 = sub_18064C0(v49, (v51 & 0x3FFFFFFF) - 1 - ((v51 & 0x40000000) != 0));
    v25 = (__int64 *)(a1 + 8);
    v53 = v27;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&byte_8[v27 & 0xFFFFFFFFFFFFFFF0LL]
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 8LL)
                              & 0xFFFFFFFFFFFFFFF0LL)
                  + 16LL) == 42 )
    {
LABEL_22:
      sub_168B9F0((__int64)&v57, v25, a3[1].m128i_u32[2], 0x19A4u, 0);
      sub_15DD120((__int64)&v57, (__int64)a3);
      sub_15F7200(&v57);
      v28 = v51;
      v29 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
      sub_B188C0(v29, *(_QWORD *)(a1 + 248), a3, (__int64)v14, v28);
      sub_B8CC60(a2, (__int64)v29, v30, v31, v32, v33);
      return;
    }
    sub_168B9F0((__int64)&v57, (__int64 *)(a1 + 8), v15, 0xC7Cu, 0);
    v52 = v51 & 0x3FFFFFFF;
    v46 = sub_16CF160((__int64)&v57, (unsigned int *)&v52);
    v45 = sub_1605D30(v46, &v53);
    v54 = v55.m128i_i64[0];
    goto LABEL_34;
  }
}

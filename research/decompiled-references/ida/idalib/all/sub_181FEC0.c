void __fastcall sub_181FEC0(__int64 *a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v6; // rcx
  char v7; // al
  char v8; // dl
  char v9; // dl
  __int8 v10; // dl
  char v11; // dl
  char v12; // al
  const void *v13; // r14
  __int64 v14; // r13
  __m128i *v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rax
  __int64 v24; // rax
  bool v25; // [rsp+Bh] [rbp-DDh] BYREF
  int v26; // [rsp+Ch] [rbp-DCh] BYREF
  const void *v27; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+18h] [rbp-D0h]
  _BYTE v29[200]; // [rsp+20h] [rbp-C8h] BYREF

  if ( !sub_B8DC30(a2, 1) )
  {
    v7 = *(_BYTE *)(a2 + 28);
    v8 = v7;
    goto LABEL_18;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_B8DC30(a2, 1) + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(a2 + 28);
  v8 = v7;
  if ( *(_BYTE *)(v6 + 16) != 13 )
  {
LABEL_18:
    v9 = v8 & 0x7F;
    goto LABEL_19;
  }
  v9 = v7 & 0x7F;
  if ( ((*(_WORD *)(v6 + 18) >> 3) & 0x1FF) == 0x1B3 )
  {
    if ( v9 == 38 )
      goto LABEL_5;
    sub_168B9F0((__int64)v29, a1 + 1, a3[1].m128i_u32[2], 0x19C3u, 0);
    v21 = sub_15DD120((__int64)v29, (__int64)a3);
    LODWORD(v27) = 0;
LABEL_23:
    sub_1587D10(v21, (int *)&v27);
    sub_15F7200(v29);
    return;
  }
LABEL_19:
  if ( v9 == 18 )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1B3 )
    {
      sub_168B9F0((__int64)v29, a1 + 1, a3[1].m128i_u32[2], 0x19C3u, 0);
      v21 = sub_15DD120((__int64)v29, (__int64)a3);
      LODWORD(v27) = 1;
      goto LABEL_23;
    }
  }
LABEL_5:
  v27 = nullptr;
  v10 = a3[2].m128i_i8[2];
  v28 = 0;
  v11 = v10 & 0xF;
  if ( v11 != 2 && v11 != 3 && (a3[2].m128i_i8[3] & 1) == 0 )
  {
    if ( v11 == 1 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( !sub_F96350((__int64)a3) )
  {
    if ( a3->m128i_i64[1] )
      goto LABEL_10;
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 <= 6 )
    {
      sub_168B9F0((__int64)v29, a1 + 1, a3[1].m128i_u32[2], 0x19C6u, 0);
      v23 = sub_15DD120((__int64)v29, (__int64)a3);
      v25 = (a3[2].m128i_i8[3] & 2) != 0;
      v24 = sub_1588420(v23, (unsigned __int8 *)&v25);
      v26 = 17;
      sub_180E4C0(v24, &v26);
      sub_15F7200(v29);
    }
    v22 = *(_BYTE *)(a1[29] + 1);
    if ( a3[3].m128i_i16[4] != 1 )
    {
      if ( (v22 & 0x48) == 8 )
      {
        sub_168B9F0((__int64)v29, a1 + 1, a3[1].m128i_u32[2], 0x1592u, 0);
        sub_15DD120((__int64)v29, (__int64)a3);
        sub_15F7200(v29);
      }
      goto LABEL_10;
    }
    if ( (v22 & 0x88) == 8 )
    {
      sub_168B9F0((__int64)v29, a1 + 1, a3[1].m128i_u32[2], 0x1593u, 0);
      sub_15DD120((__int64)v29, (__int64)a3);
      sub_15F7200(v29);
    }
LABEL_25:
    if ( !(unsigned __int8)sub_181F2D0((__int64)a1, (__int64)a3, &v27, nullptr, a4, a5) )
      return;
    goto LABEL_10;
  }
  if ( a3[3].m128i_i16[4] == 1 )
    goto LABEL_25;
LABEL_10:
  v12 = a3[2].m128i_i8[2] & 0xF;
  if ( v12 == 1 || (v12 == 2 || v12 == 3 || (a3[2].m128i_i8[3] & 1) != 0) && sub_F96350((__int64)a3) )
    goto LABEL_16;
  v7 = *(_BYTE *)(a2 + 28);
LABEL_15:
  if ( (v7 & 0x7Fu) - 64 > 2 )
  {
LABEL_16:
    v13 = v27;
    v14 = v28;
    v15 = (__m128i *)sub_1806F50((__int64 *)(a1[31] + 2352), 56, 3u);
    sub_B305C0(v15, a1[31], a3, v13, v14);
    sub_B8CC60(a2, (__int64)v15, v16, v17, v18, v19);
    return;
  }
  sub_168B9F0((__int64)v29, a1 + 1, a3[1].m128i_u32[2], 0x1D6Fu, 0);
  LOBYTE(v26) = sub_F962F0((__int64)a3);
  sub_1588420((__int64)v29, (unsigned __int8 *)&v26);
  sub_15F7200(v29);
}

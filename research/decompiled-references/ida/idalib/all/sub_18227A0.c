void __fastcall sub_18227A0(__int64 *a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  char v6; // al
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rax
  void *v12; // r13
  __int64 v13; // r14
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  const void *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  const void *v24; // [rsp+8h] [rbp-F0h]
  __int64 v25; // [rsp+8h] [rbp-F0h]
  const void *v26; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-E0h]
  void *v28; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+28h] [rbp-D0h]
  _BYTE v30[200]; // [rsp+30h] [rbp-C8h] BYREF

  v6 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v6 == 24 )
  {
    v7 = *(_QWORD *)(a2 + 40);
    if ( (v7 & 7) != 0 || (v7 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      sub_168B9F0((__int64)v30, a1 + 1, a3[1].m128i_u32[2], 0x1AA7u, 0);
      sub_15F7200(v30);
      return;
    }
  }
  else
  {
    v22 = (v6 + 100) & 0x7F;
    if ( (unsigned __int8)v22 <= 0x35u )
    {
      v23 = 0x20000800000001LL;
      if ( _bittest64(&v23, v22) )
      {
        sub_168B9F0((__int64)v30, a1 + 1, a3[1].m128i_u32[2], 0x1AB0u, 0);
        sub_15DD120((__int64)v30, (__int64)a3);
        sub_15F7200(v30);
        return;
      }
    }
  }
  v26 = nullptr;
  v8 = a3[3].m128i_i16[4] == 0;
  v27 = 0;
  v28 = nullptr;
  v29 = 0;
  if ( v8
    || (v9 = a3[5].m128i_i64[0], (v9 & 2) != 0)
    || (v9 & 0xFFFFFFFFFFFFFFFCLL) == 0
    || (unsigned __int8)sub_181F2D0((__int64)a1, (__int64)a3, &v26, nullptr, a4, a5) )
  {
    v10 = a3[2].m128i_i8[2] & 0xF;
    if ( ((v10 - 2) & 0xFD) == 0 || v10 == 3 || (a3[2].m128i_i8[3] & 1) != 0 )
    {
      sub_15EB980((__int64)a3, (__int64)a1, 1u);
    }
    else
    {
      if ( a3[3].m128i_i16[4] <= 1u || (v11 = a3[5].m128i_i64[1], (v11 & 2) != 0) || (v11 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
LABEL_21:
        v12 = v28;
        v13 = v29;
        v24 = v26;
        v14 = v27;
        v15 = sub_1806F50((__int64 *)(a1[31] + 2352), 72, 3u);
        v16 = v24;
        v25 = v15;
        sub_B2E300(v15, a1[31], a3, v16, v14, v17, v12, v13);
        sub_B8CC60(a2, v25, v18, v19, v20, v21);
        return;
      }
      if ( !(unsigned __int8)sub_1821C20((__int64)a1, (__int64)a3, 1u, &v28, a4, a5) )
        return;
    }
    if ( (*(_BYTE *)(a1[29] + 1) & 0x20) == 0
      && ((a3[2].m128i_i8[2] & 0xF) == 2 || (a3[2].m128i_i8[3] & 1) != 0)
      && !sub_F962F0((__int64)a3) )
    {
      sub_168B9F0((__int64)v30, a1 + 1, a3[1].m128i_u32[2], 0x1591u, 0);
      sub_15DD120((__int64)v30, (__int64)a3);
      sub_15F7200(v30);
    }
    goto LABEL_21;
  }
}

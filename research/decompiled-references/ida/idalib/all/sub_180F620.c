void __fastcall sub_180F620(__int64 a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r13
  __int8 v8; // al
  __int8 v9; // r15
  __m128i *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // [rsp+8h] [rbp-D0h] BYREF
  int v18; // [rsp+Ch] [rbp-CCh] BYREF
  __int64 v19[25]; // [rsp+10h] [rbp-C8h] BYREF

  if ( a3[3].m128i_i16[4] && (a3[5].m128i_i8[0] & 2) != 0 )
  {
    if ( (unsigned __int8)sub_15EB880((__int64)a3, a1, 1u) )
    {
      if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6 )
      {
        sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCA8u, 0);
        v15 = sub_15DD120((__int64)v19, (__int64)a3);
        LOBYTE(v17) = (a3[2].m128i_i8[3] & 2) != 0;
        v16 = sub_1588420(v15, (unsigned __int8 *)&v17);
        v18 = 6;
        sub_180E4C0(v16, &v18);
        sub_15F7200(v19);
      }
      else
      {
        v6 = a3[3].m128i_u16[4];
        v7 = *(_QWORD *)((a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL) + 8);
        v8 = a3[3].m128i_i8[10];
        v19[0] = 0;
        sub_1E5F010(a3[5].m128i_i64[13 * ((v8 & 4) != 0) + v6], v19);
        v9 = a3[5].m128i_i8[104 * ((a3[3].m128i_i8[10] & 4) != 0) + 8 + 8 * a3[3].m128i_u16[4]];
        v10 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 64, 3u);
        sub_B1A5C0(v10, *(_QWORD *)(a1 + 248), a3, v7, v19[0], v9 & 1, (v9 & 2) != 0);
        sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
      }
    }
  }
  else
  {
    sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC53u, 0);
    v4 = sub_15DD120((__int64)v19, (__int64)a3);
    v17 = 1;
    v5 = sub_1587D10(v4, &v17);
    v18 = 3;
    sub_180A710(v5, &v18);
    sub_15F7200(v19);
  }
}

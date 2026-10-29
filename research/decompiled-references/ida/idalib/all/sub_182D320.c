void __fastcall sub_182D320(__int64 a1, __int64 a2, const __m128i *a3, double a4)
{
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // rax
  __m128i *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int32 v14; // [rsp+4h] [rbp-C4h] BYREF
  __int64 v15; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v16[184]; // [rsp+10h] [rbp-B8h] BYREF

  v5 = a3[5].m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
  if ( (unsigned __int8)sub_16211A0(a1, a3, v5, &v14, 0xFFFFFFFFLL, 0) )
  {
    if ( v14 == 19 )
    {
      v8 = *(_QWORD *)(a1 + 248);
      v14 = 1900;
      v9 = (__m128i *)sub_1806F50((__int64 *)(v8 + 2352), 48, 3u);
      sub_B13DD0(v9, *(_QWORD *)(a1 + 248), a3, v14);
      sub_B8CC60(a2, (__int64)v9, v10, v11, v12, v13);
    }
    else
    {
      sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC54u, 0);
      v6 = sub_15DD120((__int64)v16, (__int64)a3);
      v7 = sub_1588370(v6, (unsigned int *)&v14);
      v15 = sub_EEC8C0(v5, (__int64)&v14, a4);
      sub_1587DB0(v7, &v15);
      sub_15F7200(v16);
    }
  }
}

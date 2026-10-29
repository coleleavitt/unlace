void __fastcall sub_1832AB0(__int64 a1, __int64 *a2, const __m128i *a3, double a4)
{
  __int64 v5; // rax
  __m128i *v6; // r13
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v12[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( a3[3].m128i_i16[4] )
  {
    if ( sub_B8DC30((__int64)a2, 1) )
    {
      sub_1832610(a1, (__int64)a2, a3, a4);
    }
    else
    {
      sub_168B9F0((__int64)v12, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19B2u, 0);
      v11 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
      sub_1587DB0((__int64)v12, &v11);
      sub_15F7200(v12);
    }
  }
  else
  {
    v5 = (*(__int64 (__fastcall **)(__int64 *))(*a2 + 16))(a2);
    if ( (unsigned __int8)sub_180B6D0(a1, a2[6], (__int64)a3, 0, v5, 0) )
    {
      v6 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
      sub_B2F020(v6, *(_QWORD *)(a1 + 248), a3, 0, 0);
      sub_B8CC60((__int64)a2, (__int64)v6, v7, v8, v9, v10);
    }
  }
}

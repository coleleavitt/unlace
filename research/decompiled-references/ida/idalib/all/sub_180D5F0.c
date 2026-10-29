void __fastcall sub_180D5F0(__int64 a1, __int64 a2, const __m128i *a3)
{
  __m128i *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BYTE v9[32]; // [rsp+0h] [rbp-B8h] BYREF
  unsigned __int8 *v10; // [rsp+20h] [rbp-98h] BYREF
  char v11; // [rsp+78h] [rbp-40h]
  char v12; // [rsp+84h] [rbp-34h]

  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 273LL) )
  {
    if ( (*(_BYTE *)(a2 + 96) & 0x18) != 0 )
    {
      sub_168B9F0((__int64)v9, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xDFCu, 0);
      sub_15F7200(v9);
    }
    else if ( sub_9B48E0(a2) )
    {
      sub_168B9F0((__int64)v9, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1436u, 0);
      if ( v11 )
      {
        sub_AE9DF0(&v10, (__int64)"__declspec(thread)", 1u);
      }
      else if ( v12 )
      {
        sub_180D0B0((__int64)v9, (__int64)"__declspec(thread)");
      }
      sub_15F7200(v9);
    }
    else
    {
      v4 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u);
      sub_B19E20(v4, *(_QWORD *)(a1 + 248), a3);
      sub_B8CC60(a2, (__int64)v4, v5, v6, v7, v8);
    }
  }
  else
  {
    sub_168B9F0((__int64)v9, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x143Au, 0);
    sub_15F7200(v9);
  }
}

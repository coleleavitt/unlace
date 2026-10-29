void __fastcall sub_180EB70(__int64 a1, __int64 a2, const __m128i *a3)
{
  char v4; // al
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __m128i *v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  bool v14; // [rsp+Bh] [rbp-BDh] BYREF
  int v15; // [rsp+Ch] [rbp-BCh] BYREF
  _BYTE v16[184]; // [rsp+10h] [rbp-B8h] BYREF

  v4 = *(_BYTE *)(a2 + 28) & 0x7F;
  v5 = (v4 + 120) & 0x7F;
  if ( (unsigned __int8)v5 > 0x3Au )
  {
    if ( v4 == 75 )
      return;
LABEL_7:
    sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19C6u, 0);
    v12 = sub_15DD120((__int64)v16, (__int64)a3);
    v14 = (a3[2].m128i_i8[3] & 2) != 0;
    v13 = sub_1588420(v12, (unsigned __int8 *)&v14);
    v15 = 3;
    sub_180E4C0(v13, &v15);
    sub_15F7200(v16);
    return;
  }
  v6 = 0x7000FFFFC000001LL;
  if ( !_bittest64(&v6, v5) )
  {
    if ( v4 == 18 )
    {
      v7 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 40, 3u);
      sub_B14F50(v7, *(_QWORD *)(a1 + 248), a3);
      sub_B8CC60(a2, (__int64)v7, v8, v9, v10, v11);
      return;
    }
    goto LABEL_7;
  }
}

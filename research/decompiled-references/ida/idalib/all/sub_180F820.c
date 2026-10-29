void __fastcall sub_180F820(__int64 a1, __int64 a2, const __m128i *a3)
{
  char v4; // al
  __int64 v5; // r13
  _QWORD *v6; // rax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __m128i *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // rax
  bool v17; // [rsp+1h] [rbp-BDh] BYREF
  int v18; // [rsp+2h] [rbp-BCh] BYREF
  _BYTE v19[184]; // [rsp+6h] [rbp-B8h] BYREF

  if ( (a3[3].m128i_i8[10] & 2) == 0 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 59 > 2 || (v4 = *(_BYTE *)(a2 + 73) >> 5) != 0 && v4 != 3 )
    {
      sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCA8u, 0);
      v15 = sub_15DD120((__int64)v19, (__int64)a3);
      v17 = (a3[2].m128i_i8[3] & 2) != 0;
      v16 = sub_1588420(v15, (unsigned __int8 *)&v17);
      v18 = 18;
      sub_180E4C0(v16, &v18);
      sub_15F7200(v19);
    }
    else
    {
      v5 = sub_168B6C0(a1 + 8);
      v6 = (_QWORD *)sub_168B6C0(a1 + 8);
      v9 = v6[294];
      v6[304] += 40LL;
      v10 = (__m128i *)((v9 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v6[295] >= (unsigned __int64)&v10[2].m128i_u64[1] && v9 )
        v6[294] = (char *)v10 + 40;
      else
        v10 = (__m128i *)sub_986170((__int64)(v6 + 294), 40, 40, 3, v7, v8);
      sub_B1A560(v10, v5, a3);
      sub_B8CC60(a2, (__int64)v10, v11, v12, v13, v14);
    }
  }
}

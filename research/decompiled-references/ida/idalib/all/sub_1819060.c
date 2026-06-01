void __fastcall sub_1819060(__int64 a1, _QWORD *a2, const __m128i *a3)
{
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned int *v8; // r13
  unsigned int *v9; // rdi
  __int64 v10; // rsi
  __m128i *v11; // r13
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  int v17; // [rsp+Ch] [rbp-CCh] BYREF
  _QWORD v18[2]; // [rsp+10h] [rbp-C8h] BYREF
  _BYTE v19[184]; // [rsp+20h] [rbp-B8h] BYREF

  if ( (unsigned __int8)sub_1818E60(a1, a2, (__int64)a3) )
  {
    if ( a3[3].m128i_i16[4] && (v7 = a3[5].m128i_i64[0], (v7 & 2) != 0) )
    {
      v8 = (unsigned int *)(v7 & 0xFFFFFFFFFFFFFFFCLL);
      v9 = *(unsigned int **)(*(_QWORD *)((v7 & 0xFFFFFFFFFFFFFFFCLL) + 8) + 16LL);
      v10 = *v9;
      v18[0] = v9 + 4;
      v18[1] = v10;
      if ( (unsigned __int8)sub_B19000((__int64)(v9 + 4), v10, &v17) )
      {
        v11 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 48, 3u);
        sub_B18FD0(v11, *(_QWORD *)(a1 + 248), a3, v17);
        sub_B8CC60((__int64)a2, (__int64)v11, v12, v13, v14, v15);
      }
      else
      {
        sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), *v8, 0x19C0u, 0);
        v16 = sub_15DD120((__int64)v19, (__int64)a3);
        sub_1682BA0(v16, (__int64)v18);
        sub_15F7200(v19);
      }
    }
    else
    {
      sub_168B9F0((__int64)v19, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xC57u, 0);
      v6 = sub_15DD120((__int64)v19, (__int64)a3);
      LODWORD(v18[0]) = 3;
      sub_180A710(v6, (int *)v18);
      sub_15F7200(v19);
    }
  }
}

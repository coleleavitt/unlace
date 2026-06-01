void __fastcall sub_180BBF0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __m128i *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // [rsp+0h] [rbp-C4h] BYREF
  __int64 v19; // [rsp+4h] [rbp-C0h] BYREF
  _BYTE v20[184]; // [rsp+Ch] [rbp-B8h] BYREF

  if ( *(char *)(a2 + 28) >= 0 )
  {
    if ( (unsigned __int8)sub_1804940(*(_QWORD *)(a2 + 48), 1, (__int64)a3, a4, a5, a6) )
    {
      v9 = *(_QWORD **)(a1 + 248);
      v10 = v9[294];
      v9[304] += 40LL;
      v11 = (__m128i *)((v10 + 7) & 0xFFFFFFFFFFFFFFF8LL);
      if ( v9[295] >= (unsigned __int64)&v11[2].m128i_u64[1] && v10 )
        v9[294] = (char *)v11 + 40;
      else
        v11 = (__m128i *)sub_986170((__int64)(v9 + 294), 40, 40, 3, v7, v8);
      sub_B14D90(v11, *(_QWORD *)(a1 + 248), a3);
      sub_B8CC60(a2, (__int64)v11, v12, v13, v14, v15);
    }
    else
    {
      sub_168B9F0((__int64)v20, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x19B7u, 0);
      v16 = sub_15DD120((__int64)v20, (__int64)a3);
      v19 = a3[1].m128i_i64[1];
      v17 = sub_1587DB0(v16, &v19);
      v18 = 0;
      sub_1587D10(v17, &v18);
      sub_15F7200(v20);
    }
  }
}

void __fastcall sub_180B540(__int64 a1, __int64 a2, const __m128i *a3, __m128 a4)
{
  __int8 v6; // al
  __int64 v7; // rbx
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __m128i *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 *v20; // [rsp+8h] [rbp-C0h] BYREF
  __int64 v21[23]; // [rsp+10h] [rbp-B8h] BYREF

  v6 = a3[3].m128i_i8[10];
  if ( (v6 & 0x20) != 0 )
  {
    v20 = nullptr;
    v7 = sub_1E5F010(a3[5].m128i_i64[13 * ((v6 & 4) != 0) + 2 * ((v6 & 8) != 0) + a3[3].m128i_u16[4]], &v20);
    v8 = *v20;
    v21[1] = (__int64)(v20 + 1);
    v21[0] = v8;
    v9 = sub_F6CCB0(v21, a4);
    sub_1E63CF0(a1, v9, v7, 1, 3968);
    v12 = *(_QWORD **)(a1 + 248);
    v13 = v12[294];
    v12[304] += 48LL;
    v14 = (__m128i *)((v13 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v12[295] >= (unsigned __int64)&v14[3] && v13 )
      v12[294] = v14 + 3;
    else
      v14 = (__m128i *)sub_986170((__int64)(v12 + 294), 48, 48, 3, v10, v11);
    sub_B17680(v14, *(_QWORD *)(a1 + 248), a3, (__int64)v20);
    sub_B8CC60(a2, (__int64)v14, v15, v16, v17, v18);
  }
  else
  {
    sub_168B9F0((__int64)v21, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0xCAAu, 0);
    v19 = sub_15DD120((__int64)v21, (__int64)a3);
    LODWORD(v20) = 1;
    sub_1587D10(v19, (int *)&v20);
    sub_15F7200(v21);
  }
}

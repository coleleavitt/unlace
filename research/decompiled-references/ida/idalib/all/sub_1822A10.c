void __fastcall sub_1822A10(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v8; // rsi
  _DWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rdi
  const void *v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __m128i *v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _DWORD *v22; // [rsp+8h] [rbp-D0h] BYREF
  const void *v23; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+18h] [rbp-C0h]

  sub_168B9F0((__int64)&v23, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x59u, 0);
  sub_15F7200(&v23);
  v8 = a3[5].m128i_i64[0];
  v23 = nullptr;
  v24 = 0;
  v9 = (_DWORD *)(v8 & 0xFFFFFFFFFFFFFFFCLL);
  v22 = v9;
  if ( (*v9 & 0x10000) == 0 )
  {
    v10 = sub_1C02150(a1, v9);
    if ( v10 == 1 )
      return;
    v22 = (_DWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL);
  }
  if ( (unsigned __int8)sub_1821C20(a1, (__int64)a3, 1u, &v23, a4, a5)
    && (unsigned __int8)sub_180A7C0(a1, a2, (__int64)a3, (unsigned __int64 *)&v22, &v23) )
  {
    v13 = *(_QWORD **)(a1 + 248);
    v14 = v23;
    v15 = v24;
    v16 = v13[294];
    v13[304] += 64LL;
    v17 = (__m128i *)((v16 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v13[295] >= (unsigned __int64)&v17[4] && v16 )
      v13[294] = v17 + 4;
    else
      v17 = (__m128i *)sub_986170((__int64)(v13 + 294), 64, 64, 3, v11, v12);
    sub_B2E6C0(v17, *(_QWORD *)(a1 + 248), a3, (__int64)v22, v14, v15);
    sub_B8CC60(a2, (__int64)v17, v18, v19, v20, v21);
  }
}

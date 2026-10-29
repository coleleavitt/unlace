__int64 __fastcall sub_19ADC50(_QWORD *a1, unsigned int a2, __int64 a3, _DWORD a4, _DWORD a5, _DWORD a6, char a7)
{
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // r13
  __m128i v17; // [rsp+0h] [rbp-118h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+98h] [rbp-80h]
  __int64 v21; // [rsp+A8h] [rbp-70h]
  _QWORD *v22; // [rsp+B0h] [rbp-68h]
  __int64 v23; // [rsp+B8h] [rbp-60h]
  unsigned int v24; // [rsp+C0h] [rbp-58h]
  __int64 v25; // [rsp+C8h] [rbp-50h] BYREF
  __int128 v26; // [rsp+D0h] [rbp-48h]
  __int64 v27; // [rsp+E0h] [rbp-38h]

  sub_19A70B0((__int64)a1);
  v20 = 0;
  v18[1] = &v19;
  v18[2] = 0x800000000LL;
  v23 = a3;
  v18[0] = 0;
  v21 = 0;
  v22 = a1;
  v24 = a2;
  sub_B85890(&v25, a3);
  v26 = 0;
  v27 = 0x101010000LL;
  sub_1A395A0(v18);
  v9 = *(_QWORD *)(*(_QWORD *)(a1[31] + 2264LL) + 80LL);
  v14 = sub_704780((__int64 *)(v9 + 72), v9, v10, v11, v12, v13);
  if ( v14 )
    v14 += 5;
  sub_1A48440(a1, v18, v14, 0);
  sub_19A34B0(&v17, (__int64)a1, (__int64)v18, (__int64)&a7, a2, nullptr);
  v15 = v17.m128i_i64[1];
  if ( !v17.m128i_i64[1]
    || sub_19ADA00(
         a1,
         a2,
         ((unsigned __int64)a2 << 32) | a2,
         1,
         *((__int64 *)&v20 + 1),
         v17.m128i_i64[0],
         v17.m128i_i64[1]) )
  {
    v15 = 0;
  }
  sub_169D230((__int64)v18);
  return v15;
}

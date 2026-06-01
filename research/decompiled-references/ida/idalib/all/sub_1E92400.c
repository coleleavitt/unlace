__int64 __fastcall sub_1E92400(__int64 *a1, unsigned __int64 a2, double a3)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  __int64 v6; // rsi
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __m128i v12; // [rsp+0h] [rbp-A8h] BYREF
  int v13; // [rsp+10h] [rbp-98h]
  int v14; // [rsp+18h] [rbp-90h]
  __int64 v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+28h] [rbp-80h]
  __int64 v17; // [rsp+30h] [rbp-78h]
  __int64 v18; // [rsp+38h] [rbp-70h]
  __int64 v19; // [rsp+40h] [rbp-68h]
  __int64 v20; // [rsp+48h] [rbp-60h]
  int v21; // [rsp+50h] [rbp-58h]
  __int64 v22; // [rsp+58h] [rbp-50h]
  __int64 v23; // [rsp+60h] [rbp-48h]
  __int64 v24; // [rsp+68h] [rbp-40h]
  __int64 v25; // [rsp+70h] [rbp-38h]

  v4 = sub_168B6C0((__int64)a1);
  v5 = sub_16EC930(*a1, a2, 0, a3);
  if ( !(_BYTE)v5 )
  {
    v6 = *(_QWORD *)(v4 + 18632);
    v12.m128i_i32[0] &= 0xF0000000;
    v12.m128i_i64[1] = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = 0;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v7 = sub_A73610(v4, v6, nullptr, 0, &v12, 0);
    v8 = sub_A70010(v4, v7);
    v9 = sub_A70E70(v4, v7, 24);
    v10 = sub_A70010(v4, v9);
    *(_QWORD *)(a2 + 8) = sub_A71850(v4, 0x2Au, v8, v10, 0);
  }
  return v5;
}

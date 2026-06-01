_QWORD *__fastcall sub_225F190(_QWORD *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  void *v12[2]; // [rsp+0h] [rbp-138h] BYREF
  _BYTE v13[16]; // [rsp+10h] [rbp-128h] BYREF
  __m128i v14[2]; // [rsp+20h] [rbp-118h] BYREF
  __int16 v15; // [rsp+40h] [rbp-F8h]
  __m128i v16; // [rsp+50h] [rbp-E8h] BYREF
  __int16 v17; // [rsp+70h] [rbp-C8h]
  __m128i v18[3]; // [rsp+80h] [rbp-B8h] BYREF
  __m128i v19[2]; // [rsp+B0h] [rbp-88h] BYREF
  __int16 v20; // [rsp+D0h] [rbp-68h]
  __m128i v21[5]; // [rsp+E0h] [rbp-58h] BYREF

  v3 = *(_QWORD *)(a2 + 48);
  v19[0].m128i_i64[0] = (__int64)"\n";
  v20 = 259;
  v4 = *(_QWORD *)(a2 + 56);
  v16.m128i_i64[0] = v3;
  v17 = 261;
  v16.m128i_i64[1] = v4;
  v12[0] = v13;
  sub_2096AC0(v12, a3, 32);
  v14[0].m128i_i64[0] = (__int64)v12;
  v15 = 260;
  sub_A41580(v18, v14, &v16, v5, v6, v7);
  sub_A41580(v21, v18, v19, v8, v9, v10);
  sub_2253560(a1, v21);
  if ( v12[0] != v13 )
    operator delete(v12[0]);
  return a1;
}

void __fastcall __noreturn sub_1F1EBA0(_BYTE *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 v4; // r9
  bool v5; // zf
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+8h] [rbp-190h] BYREF
  _BYTE v13[32]; // [rsp+10h] [rbp-188h] BYREF
  __m128i v14[2]; // [rsp+30h] [rbp-168h] BYREF
  __int16 v15; // [rsp+50h] [rbp-148h]
  __m128i v16[2]; // [rsp+60h] [rbp-138h] BYREF
  __int16 v17; // [rsp+80h] [rbp-118h]
  __m128i v18[3]; // [rsp+90h] [rbp-108h] BYREF
  __m128i v19[2]; // [rsp+C0h] [rbp-D8h] BYREF
  __int16 v20; // [rsp+E0h] [rbp-B8h]
  __m128i v21[3]; // [rsp+F0h] [rbp-A8h] BYREF
  __m128i v22[2]; // [rsp+120h] [rbp-78h] BYREF
  __int16 v23; // [rsp+140h] [rbp-58h]
  __m128i v24[4]; // [rsp+150h] [rbp-48h] BYREF

  v2 = *a2;
  *a2 = 0;
  v12 = v2;
  sub_2221210(v13, &v12);
  v5 = *a1 == 0;
  v23 = 260;
  v22[0].m128i_i64[0] = (__int64)v13;
  v19[0].m128i_i64[0] = (__int64)": ";
  v20 = 259;
  v17 = 257;
  if ( !v5 )
  {
    v16[0].m128i_i64[0] = (__int64)a1;
    LOBYTE(v17) = 3;
  }
  v14[0].m128i_i64[0] = (__int64)"ASTReader::readDeclRecord failed ";
  v15 = 259;
  sub_A41580(v18, v14, v16, 259, v3, v4);
  sub_A41580(v21, v18, v19, v6, v7, v8);
  sub_A41580(v24, v21, v22, v9, v10, v11);
  sub_2221AD0(v24, 1);
}

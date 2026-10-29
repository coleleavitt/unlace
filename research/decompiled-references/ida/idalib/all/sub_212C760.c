__int64 __fastcall sub_212C760(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __m128i *v12; // rax
  unsigned __int8 v13; // al
  __int64 v14; // [rsp+8h] [rbp-190h] BYREF
  const char *v15; // [rsp+10h] [rbp-188h] BYREF
  __int16 v16; // [rsp+30h] [rbp-168h]
  __m128i v17; // [rsp+40h] [rbp-158h] BYREF
  __int64 v18; // [rsp+50h] [rbp-148h]
  __int64 v19; // [rsp+58h] [rbp-140h]
  __int16 v20; // [rsp+60h] [rbp-138h]
  __m128i v21[2]; // [rsp+70h] [rbp-128h] BYREF
  __int16 v22; // [rsp+90h] [rbp-108h]
  __m128i v23[3]; // [rsp+A0h] [rbp-F8h] BYREF
  __m128i v24; // [rsp+D0h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+E0h] [rbp-B8h]
  __int64 v26; // [rsp+E8h] [rbp-B0h]
  __int16 v27; // [rsp+F0h] [rbp-A8h]
  __m128i v28[2]; // [rsp+100h] [rbp-98h] BYREF
  __int16 v29; // [rsp+120h] [rbp-78h]
  __m128i v30[6]; // [rsp+130h] [rbp-68h] BYREF

  v14 = 0;
  if ( (unsigned __int8)sub_2153C10(a1, &v14) )
    return 1;
  v16 = 259;
  v15 = "expected file number";
  if ( (unsigned __int8)sub_2154400(a1, a2, &v15) )
    return 1;
  v18 = a3;
  v20 = 1283;
  v19 = a4;
  v22 = 259;
  v21[0].m128i_i64[0] = (__int64)"' directive";
  v17.m128i_i64[0] = (__int64)"file number less than one in '";
  sub_A41580(v23, &v17, v21, 259, v7, v8);
  if ( (unsigned __int8)sub_2154450(a1, *a2 <= 0LL, v14, v23) )
    return 1;
  v26 = a4;
  v29 = 259;
  v27 = 1283;
  v24.m128i_i64[0] = (__int64)"unassigned file number in '";
  v28[0].m128i_i64[0] = (__int64)"' directive";
  v25 = a3;
  sub_A41580(v30, &v24, v28, v9, v10, v11);
  v12 = sub_2102F60(*(_QWORD *)(a1 + 16));
  v13 = sub_20FF180((__int64)v12, *a2);
  return sub_2154450(a1, v13 ^ 1u, v14, v30);
}

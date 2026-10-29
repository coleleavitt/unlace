void __fastcall sub_22BA340(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128i v22; // [rsp+0h] [rbp-238h] BYREF
  char *v23; // [rsp+10h] [rbp-228h]
  __int16 v24; // [rsp+20h] [rbp-218h]
  __m128i v25; // [rsp+30h] [rbp-208h] BYREF
  __int16 v26; // [rsp+50h] [rbp-1E8h]
  __m128i v27[3]; // [rsp+60h] [rbp-1D8h] BYREF
  __m128i v28[2]; // [rsp+90h] [rbp-1A8h] BYREF
  __int16 v29; // [rsp+B0h] [rbp-188h]
  __m128i v30[3]; // [rsp+C0h] [rbp-178h] BYREF
  __m128i v31; // [rsp+F0h] [rbp-148h] BYREF
  __int16 v32; // [rsp+110h] [rbp-128h]
  __m128i v33[3]; // [rsp+120h] [rbp-118h] BYREF
  __m128i v34[2]; // [rsp+150h] [rbp-E8h] BYREF
  __int16 v35; // [rsp+170h] [rbp-C8h]
  __m128i v36[3]; // [rsp+180h] [rbp-B8h] BYREF
  __m128i v37; // [rsp+1B0h] [rbp-88h] BYREF
  __int16 v38; // [rsp+1D0h] [rbp-68h]
  __m128i v39[5]; // [rsp+1E0h] [rbp-58h] BYREF

  v37.m128i_i64[0] = a2;
  v38 = 261;
  v35 = 259;
  v37.m128i_i64[1] = a3;
  v34[0].m128i_i64[0] = (__int64)"-";
  v32 = 261;
  v29 = 259;
  v31.m128i_i64[0] = sub_22B75A0(a1->m128i_i64);
  v31.m128i_i64[1] = v3;
  v28[0].m128i_i64[0] = (__int64)"-";
  v26 = 261;
  v25.m128i_i64[0] = sub_22B74E0(a1->m128i_i64);
  v4 = a1->m128i_i64[0];
  v25.m128i_i64[1] = v5;
  v39[0].m128i_i64[0] = v4;
  v6 = a1->m128i_i64[1];
  v36[0].m128i_i8[0] = 45;
  v39[0].m128i_i64[1] = v6;
  v7 = sub_2246AB0(v39[0].m128i_i64, v36, 1u, 0);
  if ( v7 == -1 )
  {
    v7 = v39[0].m128i_u64[1];
  }
  else if ( v39[0].m128i_i64[1] <= v7 )
  {
    v7 = v39[0].m128i_u64[1];
  }
  v23 = "-";
  v22.m128i_i64[0] = v39[0].m128i_i64[0];
  v24 = 773;
  v22.m128i_i64[1] = v7;
  sub_A41580(v27, &v22, &v25, 773, v8, v9);
  sub_A41580(v30, v27, v28, v10, v11, v12);
  sub_A41580(v33, v30, &v31, v13, v14, v15);
  sub_A41580(v36, v33, v34, v16, v17, v18);
  sub_A41580(v39, v36, &v37, v19, v20, v21);
  sub_22BA1F0(a1, v39);
}

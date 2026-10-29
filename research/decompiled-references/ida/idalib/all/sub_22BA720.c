void __fastcall sub_22BA720(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __m128i v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __m128i v24; // rax
  __m128i v25; // [rsp+0h] [rbp-238h] BYREF
  char *v26; // [rsp+10h] [rbp-228h]
  __int16 v27; // [rsp+20h] [rbp-218h]
  __m128i v28; // [rsp+30h] [rbp-208h] BYREF
  __int16 v29; // [rsp+50h] [rbp-1E8h]
  __m128i v30[3]; // [rsp+60h] [rbp-1D8h] BYREF
  __m128i v31[2]; // [rsp+90h] [rbp-1A8h] BYREF
  __int16 v32; // [rsp+B0h] [rbp-188h]
  __m128i v33; // [rsp+C0h] [rbp-178h] BYREF
  char *v34; // [rsp+D0h] [rbp-168h]
  __int16 v35; // [rsp+E0h] [rbp-158h]
  __m128i v36; // [rsp+F0h] [rbp-148h] BYREF
  __int16 v37; // [rsp+110h] [rbp-128h]
  __m128i v38[3]; // [rsp+120h] [rbp-118h] BYREF
  __m128i v39[2]; // [rsp+150h] [rbp-E8h] BYREF
  __int16 v40; // [rsp+170h] [rbp-C8h]
  __m128i v41[3]; // [rsp+180h] [rbp-B8h] BYREF
  __m128i v42; // [rsp+1B0h] [rbp-88h] BYREF
  __int16 v43; // [rsp+1D0h] [rbp-68h]
  __m128i v44[5]; // [rsp+1E0h] [rbp-58h] BYREF

  sub_22B76B0(a1->m128i_i64);
  if ( v4 )
  {
    v43 = 261;
    v40 = 259;
    v37 = 261;
    v32 = 259;
    v36.m128i_i64[0] = a2;
    v36.m128i_i64[1] = a3;
    v42.m128i_i64[0] = sub_22B76B0(a1->m128i_i64);
    v42.m128i_i64[1] = v5;
    v39[0].m128i_i64[0] = (__int64)"-";
    v31[0].m128i_i64[0] = (__int64)"-";
    v29 = 261;
    v28.m128i_i64[0] = sub_22B74E0(a1->m128i_i64);
    v28.m128i_i64[1] = v6;
    v7.m128i_i64[0] = sub_22B7480(a1->m128i_i64);
    v27 = 773;
    v25 = v7;
    v26 = "-";
    sub_A41580(v30, &v25, &v28, v8, v9, v10);
    sub_A41580(&v33, v30, v31, v11, v12, v13);
  }
  else
  {
    v42.m128i_i64[1] = a3;
    v39[0].m128i_i64[0] = (__int64)"-";
    v43 = 261;
    v42.m128i_i64[0] = a2;
    v40 = 259;
    v37 = 261;
    v36.m128i_i64[0] = sub_22B74E0(a1->m128i_i64);
    v36.m128i_i64[1] = v23;
    v24.m128i_i64[0] = sub_22B7480(a1->m128i_i64);
    v34 = "-";
    v35 = 773;
    v33 = v24;
  }
  sub_A41580(v38, &v33, &v36, v14, v15, v16);
  sub_A41580(v41, v38, v39, v17, v18, v19);
  sub_A41580(v44, v41, &v42, v20, v21, v22);
  sub_22BA1F0(a1, v44);
}

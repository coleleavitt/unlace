int __fastcall sub_733AC0(__m128i *a1, const char *a2, unsigned int a3)
{
  __int64 v4; // r15
  __int64 v5; // r14
  int result; // eax
  __int64 v7; // [rsp+0h] [rbp-1D8h]
  __int64 v8; // [rsp+8h] [rbp-1D0h]
  __int64 v9; // [rsp+10h] [rbp-1C8h]
  __int64 v10; // [rsp+18h] [rbp-1C0h]
  __int64 v11; // [rsp+20h] [rbp-1B8h]
  __int64 v12; // [rsp+28h] [rbp-1B0h]
  __int64 v13; // [rsp+30h] [rbp-1A8h]
  __int64 v14; // [rsp+38h] [rbp-1A0h]
  __int64 v15; // [rsp+40h] [rbp-198h]
  __int64 v16; // [rsp+48h] [rbp-190h]
  __int64 v17; // [rsp+50h] [rbp-188h]
  __int64 v18; // [rsp+58h] [rbp-180h]
  __int64 v19; // [rsp+60h] [rbp-178h]
  __int64 v20; // [rsp+68h] [rbp-170h]
  __int64 v21; // [rsp+70h] [rbp-168h]
  __int64 v22; // [rsp+78h] [rbp-160h]
  __int64 v23; // [rsp+80h] [rbp-158h]
  __int64 v24; // [rsp+88h] [rbp-150h]
  char v25[264]; // [rsp+90h] [rbp-148h] BYREF
  unsigned __int64 v26; // [rsp+198h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( !a1 || strlen(a2) > 0xFF )
    return -102;
  if ( !a1[9].m128i_i64[0] )
    return -100;
  v4 = a1[8].m128i_i64[0];
  v5 = a1[8].m128i_i64[1];
  v9 = a1[11].m128i_i64[0];
  v14 = a1[11].m128i_i64[1];
  v12 = a1[12].m128i_i64[0];
  v13 = a1[12].m128i_i64[1];
  v10 = a1[13].m128i_i64[0];
  v8 = a1[13].m128i_i64[1];
  v7 = a1[14].m128i_i64[0];
  v11 = a1[14].m128i_i64[1];
  v15 = a1[15].m128i_i64[0];
  v16 = a1[15].m128i_i64[1];
  v17 = a1[16].m128i_i64[0];
  v18 = a1[16].m128i_i64[1];
  v19 = a1[17].m128i_i64[0];
  v20 = a1[17].m128i_i64[1];
  v21 = a1[19].m128i_i64[1];
  v22 = a1[18].m128i_i64[0];
  v23 = a1[18].m128i_i64[1];
  v24 = a1[19].m128i_i64[0];
  for ( result = sub_7330C0(a1); !result; result = sub_733A10(a1) )
  {
    result = sub_7327A0((__int64)a1, nullptr, nullptr, (__int64)v25, 0x100u, 0, 0, 0, 0);
    if ( result )
      break;
    result = sub_732FF0(v25, a2, a3);
    if ( !result )
      return result;
  }
  a1[8].m128i_i64[0] = v4;
  a1[8].m128i_i64[1] = v5;
  a1[11].m128i_i64[0] = v9;
  a1[13].m128i_i64[0] = v10;
  a1[11].m128i_i64[1] = v14;
  a1[13].m128i_i64[1] = v8;
  a1[12].m128i_i64[0] = v12;
  a1[14].m128i_i64[1] = v11;
  a1[12].m128i_i64[1] = v13;
  a1[15].m128i_i64[0] = v15;
  a1[14].m128i_i64[0] = v7;
  a1[16].m128i_i64[0] = v17;
  a1[15].m128i_i64[1] = v16;
  a1[16].m128i_i64[1] = v18;
  a1[17].m128i_i64[1] = v20;
  a1[18].m128i_i64[0] = v22;
  a1[17].m128i_i64[0] = v19;
  a1[18].m128i_i64[1] = v23;
  a1[19].m128i_i64[0] = v24;
  a1[19].m128i_i64[1] = v21;
  return result;
}


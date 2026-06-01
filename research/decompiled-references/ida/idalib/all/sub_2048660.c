__int64 __fastcall sub_2048660(__int64 a1, _BYTE *a2, __int64 *a3, _BYTE *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  bool v11; // zf
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // [rsp+0h] [rbp-248h] BYREF
  __int64 v20; // [rsp+8h] [rbp-240h] BYREF
  __m128i v21[2]; // [rsp+10h] [rbp-238h] BYREF
  __int16 v22; // [rsp+30h] [rbp-218h]
  __m128i v23[2]; // [rsp+40h] [rbp-208h] BYREF
  __int16 v24; // [rsp+60h] [rbp-1E8h]
  __m128i v25[2]; // [rsp+70h] [rbp-1D8h] BYREF
  __int16 v26; // [rsp+90h] [rbp-1B8h]
  __m128i v27[3]; // [rsp+A0h] [rbp-1A8h] BYREF
  __m128i v28[3]; // [rsp+D0h] [rbp-178h] BYREF
  __m128i v29[2]; // [rsp+100h] [rbp-148h] BYREF
  __int16 v30; // [rsp+120h] [rbp-128h]
  __m128i v31[2]; // [rsp+130h] [rbp-118h] BYREF
  __int16 v32; // [rsp+150h] [rbp-F8h]
  __m128i v33[2]; // [rsp+160h] [rbp-E8h] BYREF
  __int16 v34; // [rsp+180h] [rbp-C8h]
  __m128i v35[2]; // [rsp+190h] [rbp-B8h] BYREF
  __int16 v36; // [rsp+1B0h] [rbp-98h]
  __m128i v37[3]; // [rsp+1C0h] [rbp-88h] BYREF
  __m128i v38[5]; // [rsp+1F0h] [rbp-58h] BYREF

  v7 = *a3;
  if ( *a2 )
  {
    if ( v7 )
      v8 = *(_QWORD *)(v7 + 16);
    else
      v8 = 0;
    v20 = v8;
    v36 = 267;
    v35[0].m128i_i64[0] = (__int64)&v20;
    v33[0].m128i_i64[0] = (__int64)"=";
    v34 = 259;
    sub_A41580(v37, v33, v35, (__int64)a4, 259, a6);
    v11 = *a4 == 0;
    v32 = 257;
    if ( !v11 )
    {
      v31[0].m128i_i64[0] = (__int64)a4;
      LOBYTE(v32) = 3;
    }
    sub_A41580(v38, v31, v37, v9, v10, 257);
  }
  else
  {
    v29[0].m128i_i64[0] = (__int64)")";
    v30 = 259;
    if ( v7 )
      v13 = *(_QWORD *)(v7 + 16);
    else
      v13 = 0;
    v19 = v13;
    v26 = 267;
    v25[0].m128i_i64[0] = (__int64)&v19;
    v24 = 259;
    v23[0].m128i_i64[0] = (__int64)"(";
    sub_A41580(v27, v23, v25, (__int64)")", a5, a6);
    v11 = *a4 == 0;
    v22 = 257;
    if ( !v11 )
    {
      v21[0].m128i_i64[0] = (__int64)a4;
      LOBYTE(v22) = 3;
    }
    sub_A41580(v28, v21, v27, 257, v14, v15);
    sub_A41580(v38, v28, v29, v16, v17, v18);
  }
  sub_2253560(a1, v38);
  return a1;
}

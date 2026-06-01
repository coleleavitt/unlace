__int64 *__fastcall sub_2197A20(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        unsigned __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _BYTE *a8)
{
  __int32 v10; // r12d
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // r8
  bool v15; // zf
  const char *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rcx
  __m128i v30[2]; // [rsp+10h] [rbp-1D8h] BYREF
  __int16 v31; // [rsp+30h] [rbp-1B8h]
  __m128i v32[2]; // [rsp+40h] [rbp-1A8h] BYREF
  __int16 v33; // [rsp+60h] [rbp-188h]
  __m128i v34[3]; // [rsp+70h] [rbp-178h] BYREF
  __m128i v35[2]; // [rsp+A0h] [rbp-148h] BYREF
  __int16 v36; // [rsp+C0h] [rbp-128h]
  __m128i v37[3]; // [rsp+D0h] [rbp-118h] BYREF
  __m128i v38[2]; // [rsp+100h] [rbp-E8h] BYREF
  __int16 v39; // [rsp+120h] [rbp-C8h]
  __m128i v40[3]; // [rsp+130h] [rbp-B8h] BYREF
  __m128i v41[2]; // [rsp+160h] [rbp-88h] BYREF
  __int16 v42; // [rsp+180h] [rbp-68h]
  __m128i v43[2]; // [rsp+190h] [rbp-58h] BYREF
  __int16 v44; // [rsp+1B0h] [rbp-38h]

  if ( *a7 )
  {
    v43[0].m128i_i64[0] = (__int64)"more than one LC_ENCRYPTION_INFO and or LC_ENCRYPTION_INFO_64 command";
    v44 = 259;
    sub_21967F0(a1, v43[0].m128i_i64, (__int64)a3, a4);
  }
  else
  {
    v10 = a4;
    sub_215DEC0(a2);
    v13 = a6;
    if ( v11 >= a5 )
    {
      v14 = a6 + a5;
      if ( v11 >= a6 + a5 )
      {
        *a7 = *a3;
        *a1 = 0;
        return a1;
      }
      v12 = 265;
      v42 = 259;
      v41[0].m128i_i64[0] = (__int64)" extends past the end of the file";
      v35[0].m128i_i64[0] = (__int64)" command ";
      v39 = 265;
      v15 = *a8 == 0;
      v38[0].m128i_i32[0] = v10;
      v36 = 259;
      v33 = 257;
      if ( !v15 )
      {
        v32[0].m128i_i64[0] = (__int64)a8;
        LOBYTE(v33) = 3;
      }
      v16 = "cryptoff field plus cryptsize field of ";
    }
    else
    {
      v14 = 259;
      v13 = 265;
      v41[0].m128i_i64[0] = (__int64)" extends past the end of the file";
      v35[0].m128i_i64[0] = (__int64)" command ";
      v42 = 259;
      v15 = *a8 == 0;
      v33 = 257;
      v39 = 265;
      v38[0].m128i_i32[0] = v10;
      v36 = 259;
      if ( !v15 )
      {
        v32[0].m128i_i64[0] = (__int64)a8;
        LOBYTE(v33) = 3;
      }
      v16 = "cryptoff field of ";
    }
    v30[0].m128i_i64[0] = (__int64)v16;
    v31 = 259;
    sub_A41580(v34, v30, v32, v12, v14, v13);
    sub_A41580(v37, v34, v35, v17, v18, v19);
    sub_A41580(v40, v37, v38, v20, v21, v22);
    sub_A41580(v43, v40, v41, v23, v24, v25);
    sub_21967F0(a1, v43[0].m128i_i64, v26, v27);
  }
  return a1;
}

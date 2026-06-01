__int64 *__fastcall sub_219A9A0(__int64 *a1, __int64 a2, unsigned int **a3, __int64 a4, __int64 a5, _BYTE *a6)
{
  bool v6; // zf
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v20; // rax
  const char *v21; // rax
  unsigned int *v22; // rcx
  __int64 v23; // r10
  _BYTE *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int32 v36; // [rsp+4h] [rbp-204h]
  __int64 v38; // [rsp+10h] [rbp-1F8h] BYREF
  unsigned int v39; // [rsp+18h] [rbp-1F0h]
  char v40; // [rsp+28h] [rbp-1E0h]
  __m128i v41[2]; // [rsp+30h] [rbp-1D8h] BYREF
  __int16 v42; // [rsp+50h] [rbp-1B8h]
  __m128i v43[2]; // [rsp+60h] [rbp-1A8h] BYREF
  __int16 v44; // [rsp+80h] [rbp-188h]
  __m128i v45[3]; // [rsp+90h] [rbp-178h] BYREF
  __m128i v46[2]; // [rsp+C0h] [rbp-148h] BYREF
  __int16 v47; // [rsp+E0h] [rbp-128h]
  __m128i v48[3]; // [rsp+F0h] [rbp-118h] BYREF
  __m128i v49[2]; // [rsp+120h] [rbp-E8h] BYREF
  __int16 v50; // [rsp+140h] [rbp-C8h]
  __m128i v51[3]; // [rsp+150h] [rbp-B8h] BYREF
  __m128i v52[2]; // [rsp+180h] [rbp-88h] BYREF
  __int16 v53; // [rsp+1A0h] [rbp-68h]
  __m128i v54[5]; // [rsp+1B0h] [rbp-58h] BYREF

  if ( (unsigned int)a4 > 0x17 )
  {
    v36 = a5;
    sub_2196B60((__int64)&v38, a2, *a3);
    if ( (v40 & 1) != 0 )
    {
      v20 = v38;
      v38 = 0;
      *a1 = v20;
LABEL_8:
      sub_219A980(&v38);
      return a1;
    }
    v21 = " name.offset field too small, not past the end of the dylib_command struct";
    if ( v39 > 0x17 )
    {
      v21 = " name.offset field extends past the end of the load command";
      if ( HIDWORD(v38) > v39 )
      {
        v22 = *a3;
        if ( !*((_BYTE *)*a3 + v39) )
        {
LABEL_19:
          *a1 = 0;
          goto LABEL_8;
        }
        v23 = v39 + 1;
        v24 = (char *)v22 + v23;
        while ( v24 != (char *)v22 + HIDWORD(v38) - 1 - v39 + v23 )
        {
          if ( !*v24++ )
            goto LABEL_19;
        }
        v21 = " library name extends past the end of the load command";
      }
    }
    v52[0].m128i_i64[0] = (__int64)v21;
    v53 = 259;
    v50 = 257;
    if ( *a6 )
    {
      v49[0].m128i_i64[0] = (__int64)a6;
      LOBYTE(v50) = 3;
    }
    v43[0].m128i_i32[0] = v36;
    v44 = 265;
    v42 = 259;
    v46[0].m128i_i64[0] = (__int64)" ";
    v47 = 259;
    v41[0].m128i_i64[0] = (__int64)"load command ";
    sub_A41580(v45, v41, v43, 259, v36, (__int64)a6);
    sub_A41580(v48, v45, v46, v25, v26, v27);
    sub_A41580(v51, v48, v49, v28, v29, v30);
    sub_A41580(v54, v51, v52, v31, v32, v33);
    sub_21967F0(a1, v54[0].m128i_i64, v34, v35);
    goto LABEL_8;
  }
  v6 = *a6 == 0;
  v52[0].m128i_i64[0] = (__int64)" cmdsize too small";
  v53 = 259;
  v50 = 257;
  if ( !v6 )
  {
    v49[0].m128i_i64[0] = (__int64)a6;
    LOBYTE(v50) = 3;
  }
  v46[0].m128i_i64[0] = (__int64)" ";
  v47 = 259;
  v43[0].m128i_i32[0] = a5;
  v44 = 265;
  v41[0].m128i_i64[0] = (__int64)"load command ";
  v42 = 259;
  sub_A41580(v45, v41, v43, a4, a5, 259);
  sub_A41580(v48, v45, v46, v7, v8, v9);
  sub_A41580(v51, v48, v49, v10, v11, v12);
  sub_A41580(v54, v51, v52, v13, v14, v15);
  sub_21967F0(a1, v54[0].m128i_i64, v16, v17);
  return a1;
}

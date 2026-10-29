__int64 __fastcall sub_AA9170(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i v4; // xmm0
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __m128i v8; // rax
  __m128i v9; // xmm0
  __m128i v10; // xmm1
  __m128i v11; // rax
  __int64 v12; // rcx
  __m128i v13; // xmm3
  __m128i si128; // xmm5
  __m128i v15; // xmm4
  __m128i v16; // xmm6
  __m128i v17; // xmm7
  __int64 v18; // rax
  __m128i v19; // xmm2
  __m128i v21; // [rsp+0h] [rbp-1F8h] BYREF
  __int64 v22; // [rsp+10h] [rbp-1E8h]
  __m128i v23; // [rsp+20h] [rbp-1D8h] BYREF
  __int64 v24; // [rsp+30h] [rbp-1C8h]
  __m128i v25; // [rsp+40h] [rbp-1B8h]
  __int64 v26; // [rsp+50h] [rbp-1A8h]
  __m128i v27; // [rsp+60h] [rbp-198h] BYREF
  _BYTE v28[24]; // [rsp+70h] [rbp-188h] BYREF
  __int64 v29; // [rsp+88h] [rbp-170h]
  __int64 v30; // [rsp+90h] [rbp-168h]
  __m128i v31; // [rsp+A0h] [rbp-158h] BYREF
  _BYTE v32[24]; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-130h]
  __int64 v34; // [rsp+D0h] [rbp-128h]
  __m128i v35; // [rsp+E0h] [rbp-118h]
  __int64 v36; // [rsp+F0h] [rbp-108h]
  __m128i v37; // [rsp+120h] [rbp-D8h]
  __int64 v38; // [rsp+130h] [rbp-C8h]
  __m128i v39; // [rsp+160h] [rbp-98h]
  __int64 v40; // [rsp+170h] [rbp-88h]
  __m128i v41; // [rsp+1A0h] [rbp-58h]
  __int64 v42; // [rsp+1B0h] [rbp-48h]

  v4 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(_QWORD *)(a2 + 16);
  v34 = a3;
  v24 = v5;
  v7 = v4.m128i_i64[0];
  *(_QWORD *)v28 = v5;
  v36 = v5;
  v40 = v5;
  v38 = v5;
  v42 = v5;
  v31 = v4;
  *(_QWORD *)v32 = v5;
  v33 = v5;
  v22 = v6;
  v8 = v4;
  v21 = _mm_loadu_si128((const __m128i *)a2);
  v23 = v4;
  v27 = v4;
  v35 = v4;
  v39 = v4;
  v37 = v4;
  v41 = v4;
  *(__m128i *)&v32[8] = v4;
LABEL_2:
  if ( v8.m128i_i64[0] == v7 )
  {
LABEL_6:
    if ( *(_QWORD *)&v32[16] == v8.m128i_i64[1] )
      goto LABEL_7;
  }
  while ( (v8.m128i_i8[8] & 3) != 0 )
  {
    v8.m128i_i64[0] = sub_ECEDF0(&v31);
    if ( *(_DWORD *)(v34 + 4) == 1 )
      goto LABEL_15;
LABEL_16:
    v8.m128i_i64[1] = v31.m128i_i64[1];
    if ( (v31.m128i_i8[8] & 3) != 0 )
    {
      if ( (v31.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v31);
      else
        sub_ECEA10(&v31, 1);
      v8 = v31;
      v7 = *(_QWORD *)&v32[8];
      goto LABEL_2;
    }
    v8.m128i_i64[0] = v31.m128i_i64[0];
    v7 = *(_QWORD *)&v32[8];
LABEL_5:
    v8.m128i_i64[0] += 8;
    v31.m128i_i64[0] = v8.m128i_i64[0];
    if ( v8.m128i_i64[0] == v7 )
      goto LABEL_6;
  }
  if ( *(_DWORD *)(v34 + 4) != 1 )
    goto LABEL_5;
LABEL_15:
  if ( (**(_WORD **)v8.m128i_i64[0] & 0x1FF) == 0x70 )
    goto LABEL_16;
LABEL_7:
  v9 = _mm_load_si128(&v21);
  v30 = a3;
  v10 = _mm_load_si128(&v23);
  v36 = v24;
  v11 = v9;
  v38 = v24;
  v12 = v10.m128i_i64[0];
  v29 = v24;
  v26 = v22;
  v40 = v22;
  v42 = v22;
  v27 = v9;
  *(_QWORD *)v28 = v22;
  v25 = v9;
  v35 = v10;
  v39 = v9;
  v37 = v10;
  v41 = v9;
  *(__m128i *)&v28[8] = v10;
LABEL_8:
  if ( v11.m128i_i64[0] == v12 )
  {
LABEL_12:
    if ( *(_QWORD *)&v28[16] == v11.m128i_i64[1] )
      goto LABEL_13;
  }
  while ( (v11.m128i_i8[8] & 3) != 0 )
  {
    v11.m128i_i64[0] = sub_ECEDF0(&v27);
    if ( *(_DWORD *)(v30 + 4) == 1 )
      goto LABEL_23;
LABEL_24:
    v11.m128i_i64[1] = v27.m128i_i64[1];
    if ( (v27.m128i_i8[8] & 3) != 0 )
    {
      if ( (v27.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
        sub_ECEC20(&v27);
      else
        sub_ECEA10(&v27, 1);
      v11 = v27;
      v12 = *(_QWORD *)&v28[8];
      goto LABEL_8;
    }
    v11.m128i_i64[0] = v27.m128i_i64[0];
    v12 = *(_QWORD *)&v28[8];
LABEL_11:
    v11.m128i_i64[0] += 8;
    v27.m128i_i64[0] = v11.m128i_i64[0];
    if ( v11.m128i_i64[0] == v12 )
      goto LABEL_12;
  }
  if ( *(_DWORD *)(v30 + 4) != 1 )
    goto LABEL_11;
LABEL_23:
  if ( (**(_WORD **)v11.m128i_i64[0] & 0x1FF) == 0x70 )
    goto LABEL_24;
LABEL_13:
  v13 = _mm_load_si128(&v27);
  si128 = _mm_load_si128((const __m128i *)&v28[16]);
  v15 = _mm_load_si128((const __m128i *)v28);
  v16 = _mm_load_si128(&v31);
  *(_QWORD *)(a1 + 48) = v30;
  v17 = _mm_load_si128((const __m128i *)v32);
  v18 = v34;
  *(__m128i *)a1 = v13;
  v19 = _mm_load_si128((const __m128i *)&v32[16]);
  *(__m128i *)(a1 + 16) = v15;
  *(_QWORD *)(a1 + 104) = v18;
  *(__m128i *)(a1 + 32) = si128;
  *(__m128i *)(a1 + 56) = v16;
  *(__m128i *)(a1 + 72) = v17;
  *(__m128i *)(a1 + 88) = v19;
  return a1;
}


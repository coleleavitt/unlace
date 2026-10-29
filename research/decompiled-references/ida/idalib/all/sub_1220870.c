__m128i *__fastcall sub_1220870(__m128i *a1, _BYTE *a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rax
  size_t v8; // r12
  unsigned __int64 v9; // rdx
  size_t v10; // r15
  size_t v11; // rax
  _BYTE *v13; // [rsp+0h] [rbp-1E8h]
  size_t v14; // [rsp+8h] [rbp-1E0h]
  _BYTE *v15; // [rsp+10h] [rbp-1D8h]
  _BYTE *v16; // [rsp+20h] [rbp-1C8h]
  _BYTE *v17; // [rsp+30h] [rbp-1B8h] BYREF
  unsigned __int64 v18; // [rsp+38h] [rbp-1B0h]
  __m128i *v19; // [rsp+48h] [rbp-1A0h] BYREF
  _BYTE *v20; // [rsp+50h] [rbp-198h]
  size_t v21; // [rsp+58h] [rbp-190h]
  _BYTE *v22; // [rsp+60h] [rbp-188h] BYREF
  unsigned __int64 v23; // [rsp+68h] [rbp-180h]
  void *v24[2]; // [rsp+70h] [rbp-178h] BYREF
  _BYTE v25[16]; // [rsp+80h] [rbp-168h] BYREF
  _QWORD v26[18]; // [rsp+90h] [rbp-158h] BYREF
  __m128i v27[12]; // [rsp+120h] [rbp-C8h] BYREF

  v17 = a2;
  v18 = a3;
  memset(v26, 0, sizeof(v26));
  v26[4] = -1;
  LODWORD(v26[5]) = -1;
  v26[0] = &v26[2];
  if ( a2 )
    sub_1213C40(v26, a2, (__int64)&a2[a3]);
  sub_1213D50(&v26[6], (char *)&byte_22F0C30);
  sub_1213D50(&v26[10], (char *)&byte_22F0C30);
  sub_1213D50(&v26[14], (char *)&byte_22F0C30);
  v27[0].m128i_i8[0] = 46;
  v4 = sub_2246AB0(&v17, v27, 1, 0);
  if ( v4 == -1 )
  {
    v22 = nullptr;
    v23 = 0;
    v20 = v17;
    v21 = v18;
  }
  else
  {
    v5 = v4 + 1;
    if ( v4 + 1 > v18 )
    {
      v5 = v18;
      v6 = 0;
    }
    else
    {
      v6 = v18 - v5;
    }
    v23 = v6;
    if ( v4 > v18 )
      v4 = v18;
    v20 = v17;
    v21 = v4;
    v22 = &v17[v5];
  }
  v27[0].m128i_i8[0] = 46;
  v7 = sub_2246AB0(&v22, v27, 1, 0);
  if ( v7 == -1 )
  {
    v8 = v23;
    v14 = 0;
    v16 = nullptr;
    v15 = v22;
  }
  else
  {
    v8 = v23;
    v9 = v7 + 1;
    if ( v7 + 1 > v23 )
    {
      v14 = 0;
      v9 = v23;
    }
    else
    {
      v14 = v23 - v9;
    }
    v15 = v22;
    v16 = &v22[v9];
    if ( v7 <= v23 )
      v8 = v7;
  }
  v10 = v21;
  v13 = v20;
  memset(v27, 0, 0x90u);
  v27[2].m128i_i64[0] = -1;
  v27[2].m128i_i32[2] = -1;
  v27[0].m128i_i64[0] = (__int64)v27[1].m128i_i64;
  if ( v17 )
    sub_1213C40(v27, v17, (__int64)&v17[v18]);
  sub_1213D50((__m128i *)v27[3].m128i_i64, (char *)&byte_22F0C30);
  v27[5].m128i_i64[0] = (__int64)v27[6].m128i_i64;
  v11 = j__strlen(&byte_22F0C30);
  sub_1213C40((__m128i *)v27[5].m128i_i64, &byte_22F0C30, (__int64)(&byte_22F0C30 + v11));
  sub_1213D50((__m128i *)v27[7].m128i_i64, (char *)&byte_22F0C30);
  v19 = v27;
  if ( !v8 )
  {
    if ( (unsigned __int8)sub_1220780((__int64)&v19, v13, v10, (__m128i *)v27[2].m128i_i32, (__m128i *)v27[3].m128i_i64) )
    {
LABEL_18:
      sub_1214140(a1, v27);
      goto LABEL_19;
    }
LABEL_26:
    sub_12140A0((__int64)a1, (__int64)v26);
    goto LABEL_19;
  }
  if ( (unsigned __int8)sub_2247A50(v13, v10, 10, v24) )
    goto LABEL_26;
  if ( v24[0] != (void *)SLODWORD(v24[0]) )
    goto LABEL_26;
  v27[2].m128i_i32[0] = (__int32)v24[0];
  if ( SLODWORD(v24[0]) < 0 )
    goto LABEL_26;
  sub_99BDC0((__m128i *)v27[3].m128i_i64, 0, v27[3].m128i_u64[1], v13, v10);
  if ( !v14 )
  {
    if ( (unsigned __int8)sub_1220780((__int64)&v19, v15, v8, &v27[2].m128i_i32[1], (__m128i *)v27[5].m128i_i64) )
      goto LABEL_18;
    goto LABEL_26;
  }
  if ( (unsigned __int8)sub_2247A50(v15, v8, 10, v24) )
    goto LABEL_26;
  if ( v24[0] != (void *)SLODWORD(v24[0]) )
    goto LABEL_26;
  v27[2].m128i_i32[1] = (__int32)v24[0];
  if ( SLODWORD(v24[0]) < 0 )
    goto LABEL_26;
  sub_99BDC0((__m128i *)v27[5].m128i_i64, 0, v27[5].m128i_u64[1], v15, v8);
  v24[0] = v25;
  v24[1] = nullptr;
  v25[0] = 0;
  sub_1220780((__int64)&v19, v16, v14, &v27[2].m128i_i32[2], v24);
  sub_1214140(a1, v27);
  if ( v24[0] != v25 )
    operator delete(v24[0]);
LABEL_19:
  sub_1213F50((__int64)v27);
  sub_1213F50((__int64)v26);
  return a1;
}

__m128i *__fastcall sub_10E0BC0(__m128i *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rax
  bool v6; // zf
  void **v7; // r15
  signed __int64 v8; // r14
  __int64 v9; // r13
  __int64 v10; // rax
  void **v11; // r13
  void **v12; // r12
  __m128i *v13; // rbp
  __m128i *v14; // rax
  __int64 v15; // rax
  __m128i v16; // xmm2
  __int64 v17; // rax
  __m128i *v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // rax
  __int64 v22; // rax
  void **v23; // [rsp+0h] [rbp-F8h]
  void **v24; // [rsp+10h] [rbp-E8h] BYREF
  void **v25; // [rsp+18h] [rbp-E0h]
  __m128i v26; // [rsp+30h] [rbp-C8h] BYREF
  __m128i v27; // [rsp+40h] [rbp-B8h] BYREF
  int v28; // [rsp+50h] [rbp-A8h]
  __int32 v29; // [rsp+54h] [rbp-A4h]
  __int64 v30; // [rsp+58h] [rbp-A0h]
  __int64 v31; // [rsp+60h] [rbp-98h]
  char v32; // [rsp+68h] [rbp-90h]
  __m128i *v33; // [rsp+70h] [rbp-88h] BYREF
  __int64 v34; // [rsp+78h] [rbp-80h]
  __m128i v35; // [rsp+80h] [rbp-78h] BYREF
  __m128i v36; // [rsp+90h] [rbp-68h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-58h]

  if ( !sub_10DCD30(a3, 0xC12u) )
  {
    sub_21B7150(&v24, a3, 3079);
    v7 = v24;
    v23 = v25;
    v8 = (char *)v25 - (char *)v24;
    v9 = ((char *)v25 - (char *)v24) >> 7;
    v10 = ((char *)v25 - (char *)v24) >> 5;
    if ( v9 > 0 )
    {
      v11 = &v24[16 * v9];
      while ( sub_9B4AA0((__int64)v7, "amdgcnspirv") )
      {
        v12 = v7;
        v7 += 4;
        if ( !sub_9B4AA0((__int64)v7, "amdgcnspirv") )
          break;
        v7 = v12 + 8;
        if ( !sub_9B4AA0((__int64)(v12 + 8), "amdgcnspirv") )
          break;
        v7 = v12 + 12;
        if ( !sub_9B4AA0((__int64)(v12 + 12), "amdgcnspirv") )
          break;
        v7 = v12 + 16;
        if ( v11 == v12 + 16 )
        {
          v10 = ((char *)v23 - (char *)v7) >> 5;
          goto LABEL_27;
        }
      }
LABEL_21:
      v13 = a1 + 1;
      if ( v23 != v7 && v8 == 32 )
      {
        sub_10DA8A0((__int64)&v33, "spirv64-amd-amdhsa");
        v14 = v33;
        a1->m128i_i64[0] = (__int64)v13;
        if ( v14 == &v35 )
        {
          a1[1] = _mm_load_si128(&v35);
        }
        else
        {
          a1->m128i_i64[0] = (__int64)v14;
          a1[1].m128i_i64[0] = v35.m128i_i64[0];
        }
        v15 = v34;
        a1[3].m128i_i8[8] = 1;
        v16 = _mm_load_si128(&v36);
        a1->m128i_i64[1] = v15;
        v17 = v37;
        a1[2] = v16;
        a1[3].m128i_i64[0] = v17;
LABEL_36:
        sub_9B4A30(&v24);
        return a1;
      }
LABEL_31:
      v26.m128i_i64[0] = (__int64)&v27;
      sub_10D8DB0(&v26, "amdgcn-amd-amdhsa", (__int64)"");
      sub_22B9ED0(&v33, &v26);
      if ( (__m128i *)v26.m128i_i64[0] != &v27 )
        operator delete((void *)v26.m128i_i64[0]);
      v18 = v33;
      a1->m128i_i64[0] = (__int64)v13;
      if ( v18 == &v35 )
      {
        a1[1] = _mm_load_si128(&v35);
      }
      else
      {
        a1->m128i_i64[0] = (__int64)v18;
        a1[1].m128i_i64[0] = v35.m128i_i64[0];
      }
      v19 = v34;
      a1[3].m128i_i8[8] = 1;
      v20 = _mm_load_si128(&v36);
      a1->m128i_i64[1] = v19;
      v21 = v37;
      a1[2] = v20;
      a1[3].m128i_i64[0] = v21;
      goto LABEL_36;
    }
LABEL_27:
    if ( v10 != 2 )
    {
      if ( v10 != 3 )
      {
        if ( v10 != 1 )
          goto LABEL_30;
        goto LABEL_45;
      }
      if ( !sub_9B4AA0((__int64)v7, "amdgcnspirv") )
        goto LABEL_21;
      v7 += 4;
    }
    if ( !sub_9B4AA0((__int64)v7, "amdgcnspirv") )
      goto LABEL_21;
    v7 += 4;
LABEL_45:
    if ( !sub_9B4AA0((__int64)v7, "amdgcnspirv") )
      goto LABEL_21;
LABEL_30:
    v13 = a1 + 1;
    goto LABEL_31;
  }
  sub_10DA2A0(&v26, a2, a3);
  if ( !v32 )
  {
    a1[3].m128i_i8[8] = 0;
    return a1;
  }
  if ( v28 == 26 )
  {
    if ( v30 == 0x170000000ALL )
    {
      a1[3].m128i_i8[8] = 0;
      a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
      if ( (__m128i *)v26.m128i_i64[0] == &v27 )
      {
        a1[1] = _mm_load_si128(&v27);
      }
      else
      {
        a1->m128i_i64[0] = v26.m128i_i64[0];
        a1[1].m128i_i64[0] = v27.m128i_i64[0];
      }
      v22 = v26.m128i_i64[1];
      a1[2].m128i_i32[0] = 26;
      a1[3].m128i_i8[8] = 1;
      a1->m128i_i64[1] = v22;
      a1[2].m128i_i32[1] = v29;
      a1[2].m128i_i64[1] = 0x170000000ALL;
      a1[3].m128i_i64[0] = v31;
      return a1;
    }
  }
  else if ( v28 == 51 )
  {
    a1[3].m128i_i8[8] = 0;
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v26.m128i_i64[0] == &v27 )
    {
      a1[1] = _mm_load_si128(&v27);
    }
    else
    {
      a1->m128i_i64[0] = v26.m128i_i64[0];
      a1[1].m128i_i64[0] = v27.m128i_i64[0];
    }
    v5 = v26.m128i_i64[1];
    a1[2].m128i_i32[0] = 51;
    a1[3].m128i_i8[8] = 1;
    a1->m128i_i64[1] = v5;
    a1[2].m128i_i32[1] = v29;
    a1[2].m128i_i64[1] = v30;
    a1[3].m128i_i64[0] = v31;
    return a1;
  }
  sub_FC70B0((__int64)&v33, *a2, 0, 389);
  sub_AEC220((unsigned __int8 **)&v33, v26.m128i_i64[0], v26.m128i_i64[1]);
  sub_AEA040((__int64)&v33);
  v6 = v32 == 0;
  a1[3].m128i_i8[8] = 0;
  if ( !v6 && (__m128i *)v26.m128i_i64[0] != &v27 )
    operator delete((void *)v26.m128i_i64[0]);
  return a1;
}

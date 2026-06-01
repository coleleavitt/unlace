__m128i *__fastcall sub_B2F2D0(__m128i *a1, const __m128i *a2, double a3, __m128 a4)
{
  __m128i *v4; // rbp
  __int32 v5; // eax
  __int64 v6; // rdx
  void *v7; // r14
  __int32 v8; // eax
  __int32 v9; // eax
  void *v10; // r14
  __int32 v11; // eax
  __m128i v12; // xmm0
  __m128i *v13; // rax
  void *v14; // rbx
  void *v15; // rbx
  unsigned int *v17; // r12
  unsigned int *v18; // r13
  __int64 v19; // rax
  unsigned int *v20; // rax
  __m128i v21; // xmm0
  unsigned int *v22; // r12
  unsigned int *v23; // rbx
  __int64 v24; // rax
  __m128i v25; // xmm0
  int v26; // eax
  unsigned int *v27; // r14
  unsigned int *v28; // r13
  unsigned int *v29; // r12
  __int64 v30; // rax
  unsigned int *v31; // rax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i v34; // xmm0
  __m128i v35; // [rsp+0h] [rbp-98h] BYREF
  _QWORD v36[2]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v37[2]; // [rsp+20h] [rbp-78h] BYREF
  __int32 v38; // [rsp+30h] [rbp-68h]
  _QWORD v39[2]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v40[2]; // [rsp+48h] [rbp-50h] BYREF
  __int16 v41; // [rsp+58h] [rbp-40h]
  __m128i v42; // [rsp+60h] [rbp-38h]

  v4 = a1;
  v5 = a2->m128i_i32[2];
  if ( a1->m128i_i32[2] != 1 || a1[1].m128i_i32[0] || a1[3].m128i_i32[0] != 1 || a1[3].m128i_i32[2] )
  {
    v6 = a2->m128i_i64[0];
    v35.m128i_i32[2] = a2->m128i_i32[2];
    v36[0] = 0;
    v35.m128i_i64[0] = v6;
    v7 = qword_1C7F2C0;
    v36[1] = 0;
    v37[0] = 1;
    v37[1] = 0;
    if ( (a2[1].m128i_i8[4] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v36, &a2[1]);
    else
      LODWORD(v36[0]) = a2[1].m128i_i32[0];
    if ( (a2[2].m128i_i8[4] & 1) != 0 )
    {
      sub_182C690(v7, v37, &a2[2]);
    }
    else
    {
      v8 = a2[2].m128i_i32[0];
      BYTE4(v37[0]) &= ~1u;
      LODWORD(v37[0]) = v8;
    }
    v9 = a2[3].m128i_i32[0];
    v10 = qword_1C7F2C0;
    v39[0] = 0;
    v39[1] = 0;
    v38 = v9;
    v40[0] = 1;
    v40[1] = 0;
    if ( (a2[3].m128i_i8[12] & 1) != 0 )
      sub_182C690(qword_1C7F2C0, v39, &a2[3].m128i_u64[1]);
    else
      LODWORD(v39[0]) = a2[3].m128i_i32[2];
    if ( (a2[4].m128i_i8[12] & 1) != 0 )
    {
      sub_182C690(v10, v40, &a2[4].m128i_u64[1]);
    }
    else
    {
      v11 = a2[4].m128i_i32[2];
      BYTE4(v40[0]) &= ~1u;
      LODWORD(v40[0]) = v11;
    }
    v12 = _mm_loadu_si128(a2 + 6);
    v41 = a2[5].m128i_i16[4];
    v42 = v12;
    sub_B2EA10((__int64)&v35);
    v13 = sub_B2A400(a1, &v35, *(double *)v12.m128i_i64, a4);
    v14 = qword_1C7F2C0;
    v4 = v13;
    sub_182CBA0(qword_1C7F2C0, v39);
    sub_182CBA0(v14, v40);
    v15 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v36);
    sub_182CBA0(v15, v37);
  }
  else if ( v5 && (v5 != 1 || (v26 = a2[1].m128i_i32[0], v26 > 0) || !v26 && a2[5].m128i_i8[8]) )
  {
    v17 = (unsigned int *)a1[6].m128i_i64[0];
    v18 = (unsigned int *)a2[6].m128i_i64[0];
    v19 = a1->m128i_i64[0];
    if ( v17 )
    {
      if ( v18 != v17 && v18 )
      {
        v20 = (unsigned int *)sub_180C100(*(_QWORD *)(v19 + 56), 24);
        v21 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v17, (__m128i)(unsigned __int64)v18);
        *v17 = (*v17 + 1) & 0x3FFFFFFF | *v17 & 0xC0000000;
        v17 = v20;
        *v18 = (*v18 + 1) & 0x3FFFFFFF | *v18 & 0xC0000000;
        *(_QWORD *)v20 = 0;
        v19 = a1->m128i_i64[0];
        *(__m128i *)(v17 + 2) = v21;
      }
    }
    else
    {
      v17 = (unsigned int *)a2[6].m128i_i64[0];
    }
    a1[6].m128i_i64[0] = (__int64)v17;
    v22 = (unsigned int *)a2[6].m128i_i64[0];
    v23 = (unsigned int *)a1[6].m128i_i64[1];
    if ( v23 )
    {
      if ( v22 && v22 != v23 )
      {
        v24 = sub_180C100(*(_QWORD *)(v19 + 56), 24);
        v25 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v22);
        *v23 = (*v23 + 1) & 0x3FFFFFFF | *v23 & 0xC0000000;
        v23 = (unsigned int *)v24;
        *v22 = (*v22 + 1) & 0x3FFFFFFF | *v22 & 0xC0000000;
        *(_QWORD *)v24 = 0;
        *(__m128i *)(v24 + 8) = v25;
      }
    }
    else
    {
      v23 = (unsigned int *)a2[6].m128i_i64[0];
    }
    a1[6].m128i_i64[1] = (__int64)v23;
  }
  else
  {
    v27 = (unsigned int *)a1[6].m128i_i64[1];
    v28 = (unsigned int *)a1[6].m128i_i64[0];
    v29 = (unsigned int *)a2[6].m128i_i64[1];
    v30 = a1->m128i_i64[0];
    if ( v27 )
    {
      if ( v29 && v29 != v27 )
      {
        v31 = (unsigned int *)sub_180C100(*(_QWORD *)(v30 + 56), 24);
        v32 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v27, (__m128i)(unsigned __int64)v29);
        *v27 = (*v27 + 1) & 0x3FFFFFFF | *v27 & 0xC0000000;
        v27 = v31;
        *v29 = (*v29 + 1) & 0x3FFFFFFF | *v29 & 0xC0000000;
        *(_QWORD *)v31 = 0;
        v30 = a1->m128i_i64[0];
        *(__m128i *)(v27 + 2) = v32;
        v29 = (unsigned int *)a2[6].m128i_i64[1];
      }
    }
    else
    {
      v27 = (unsigned int *)a2[6].m128i_i64[1];
    }
    a1[6].m128i_i64[0] = (__int64)v27;
    if ( v28 )
    {
      if ( v29 && v28 != v29 )
      {
        v33 = sub_180C100(*(_QWORD *)(v30 + 56), 24);
        v34 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v28, (__m128i)(unsigned __int64)v29);
        *v28 = (*v28 + 1) & 0x3FFFFFFF | *v28 & 0xC0000000;
        v28 = (unsigned int *)v33;
        *v29 = (*v29 + 1) & 0x3FFFFFFF | *v29 & 0xC0000000;
        *(_QWORD *)v33 = 0;
        *(__m128i *)(v33 + 8) = v34;
      }
    }
    else
    {
      v28 = v29;
    }
    a1[6].m128i_i64[1] = (__int64)v28;
  }
  return v4;
}


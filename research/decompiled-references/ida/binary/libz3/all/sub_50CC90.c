__m128i *__fastcall sub_50CC90(__m128i *a1, int a2, const __m128i *a3, const __m128i *a4, _BYTE *a5)
{
  __int32 v9; // eax
  void *v10; // rbx
  __int32 v11; // eax
  __int32 v12; // eax
  void *v13; // rbx
  __int32 v14; // eax
  __m128i v15; // xmm0
  __int8 v17; // cl
  __int8 v18; // cl
  void *v19; // rdi
  __int32 v20; // eax
  int v21; // eax
  void *v22; // rdi
  __int32 v23; // eax
  __int32 v24; // eax
  void *v25; // rbx
  __int32 v26; // eax
  __int32 v27; // eax
  void *v28; // rbx
  __int32 v29; // eax
  __m128i v30; // xmm0
  void *v31; // rbx
  void *v32; // rbx
  void *v33; // rdi
  __int32 v34; // eax
  __int32 v35; // eax
  void *v36; // r14
  __int32 v37; // eax
  __int32 v38; // eax
  unsigned __int8 v39; // [rsp+16h] [rbp-BAh]
  unsigned __int8 v40; // [rsp+17h] [rbp-B9h]
  __int64 *v41; // [rsp+20h] [rbp-B0h]
  const __m128i *v42; // [rsp+28h] [rbp-A8h]
  void *v43; // [rsp+28h] [rbp-A8h]
  void *v44; // [rsp+30h] [rbp-A0h]
  void *v45; // [rsp+30h] [rbp-A0h]
  __int32 v46; // [rsp+40h] [rbp-90h] BYREF
  _QWORD v47[2]; // [rsp+48h] [rbp-88h] BYREF
  _QWORD v48[3]; // [rsp+58h] [rbp-78h] BYREF
  int v49; // [rsp+70h] [rbp-60h] BYREF
  _QWORD v50[2]; // [rsp+78h] [rbp-58h] BYREF
  _QWORD v51[9]; // [rsp+88h] [rbp-48h] BYREF

  *a5 = 0;
  if ( (unsigned __int8)sub_B286B0(&a3[3], &a3->m128i_u64[1]) || a4[3].m128i_i32[0] != 1 && a4->m128i_i32[2] != 1 )
  {
    a1->m128i_i64[0] = a3->m128i_i64[0];
    v9 = a3->m128i_i32[2];
    a1[1].m128i_i8[4] &= 0xFCu;
    a1->m128i_i32[2] = v9;
    a1[2].m128i_i8[4] &= 0xFCu;
    a1[1].m128i_i32[0] = 0;
    v10 = qword_1C7F2C0;
    a1[1].m128i_i64[1] = 0;
    a1[2].m128i_i32[0] = 1;
    a1[2].m128i_i64[1] = 0;
    if ( (a3[1].m128i_i8[4] & 1) != 0 )
    {
      sub_182C690(v10, &a1[1], &a3[1]);
      if ( (a3[2].m128i_i8[4] & 1) == 0 )
        goto LABEL_6;
    }
    else
    {
      a1[1].m128i_i32[0] = a3[1].m128i_i32[0];
      if ( (a3[2].m128i_i8[4] & 1) == 0 )
      {
LABEL_6:
        v11 = a3[2].m128i_i32[0];
        a1[2].m128i_i8[4] &= ~1u;
        a1[2].m128i_i32[0] = v11;
LABEL_7:
        v12 = a3[3].m128i_i32[0];
        a1[3].m128i_i8[12] &= 0xFCu;
        a1[4].m128i_i8[12] &= 0xFCu;
        a1[3].m128i_i32[0] = v12;
        a1[3].m128i_i32[2] = 0;
        a1[4].m128i_i64[0] = 0;
        v13 = qword_1C7F2C0;
        a1[4].m128i_i32[2] = 1;
        a1[5].m128i_i64[0] = 0;
        if ( (a3[3].m128i_i8[12] & 1) != 0 )
          sub_182C690(v13, &a1[3].m128i_u64[1], &a3[3].m128i_u64[1]);
        else
          a1[3].m128i_i32[2] = a3[3].m128i_i32[2];
        if ( (a3[4].m128i_i8[12] & 1) != 0 )
        {
          sub_182C690(v13, &a1[4].m128i_u64[1], &a3[4].m128i_u64[1]);
        }
        else
        {
          v14 = a3[4].m128i_i32[2];
          a1[4].m128i_i8[12] &= ~1u;
          a1[4].m128i_i32[2] = v14;
        }
        v15 = _mm_loadu_si128(a3 + 6);
        a1[5].m128i_i16[4] = a3[5].m128i_i16[4];
        a1[6] = v15;
        return a1;
      }
    }
    sub_182C690(v10, &a1[2], &a3[2]);
    goto LABEL_7;
  }
  v41 = &a4->m128i_i64[1];
  v42 = a4 + 3;
  if ( !(unsigned __int8)sub_B286B0(&a4[3], &a4->m128i_u64[1]) && (a3[3].m128i_i32[0] == 1 || a3->m128i_i32[2] == 1) )
  {
    v17 = a3[5].m128i_i8[8];
    v46 = a3->m128i_i32[2];
    v47[1] = 0;
    v40 = v17;
    v18 = a3[5].m128i_i8[9];
    v47[0] = 0;
    v19 = qword_1C7F2C0;
    v39 = v18;
    v48[0] = 1;
    v48[1] = 0;
    if ( (a3[1].m128i_i8[4] & 1) != 0 )
    {
      v45 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v47, &a3[1]);
      v19 = v45;
    }
    else
    {
      LODWORD(v47[0]) = a3[1].m128i_i32[0];
    }
    if ( (a3[2].m128i_i8[4] & 1) != 0 )
    {
      sub_182C690(v19, v48, &a3[2]);
    }
    else
    {
      v20 = a3[2].m128i_i32[0];
      BYTE4(v48[0]) &= ~1u;
      LODWORD(v48[0]) = v20;
    }
    v21 = a3[3].m128i_i32[0];
    v50[0] = 0;
    v50[1] = 0;
    v49 = v21;
    v51[0] = 1;
    v51[1] = 0;
    v22 = qword_1C7F2C0;
    if ( (a3[3].m128i_i8[12] & 1) != 0 )
    {
      v44 = qword_1C7F2C0;
      sub_182C690(qword_1C7F2C0, v50, &a3[3].m128i_u64[1]);
      v22 = v44;
    }
    else
    {
      LODWORD(v50[0]) = a3[3].m128i_i32[2];
    }
    if ( (a3[4].m128i_i8[12] & 1) != 0 )
    {
      sub_182C690(v22, v51, &a3[4].m128i_u64[1]);
    }
    else
    {
      v23 = a3[4].m128i_i32[2];
      BYTE4(v51[0]) &= ~1u;
      LODWORD(v51[0]) = v23;
    }
    if ( (unsigned __int8)sub_B286B0(&v46, v41) || (unsigned __int8)sub_B28610(v41, &v46) && !v40 )
    {
      v46 = a4->m128i_i32[2];
      v36 = qword_1C7F2C0;
      if ( (a4[1].m128i_i8[4] & 1) != 0 )
      {
        sub_182C690(qword_1C7F2C0, v47, &a4[1]);
      }
      else
      {
        v37 = a4[1].m128i_i32[0];
        BYTE4(v47[0]) &= ~1u;
        LODWORD(v47[0]) = v37;
      }
      if ( (a4[2].m128i_i8[4] & 1) != 0 )
      {
        sub_182C690(v36, v48, &a4[2]);
      }
      else
      {
        v38 = a4[2].m128i_i32[0];
        BYTE4(v48[0]) &= ~1u;
        LODWORD(v48[0]) = v38;
      }
      v40 = a4[5].m128i_u8[8];
    }
    if ( (unsigned __int8)sub_B286B0(v42, &v49) || (unsigned __int8)sub_B28610(v42, &v49) && !v39 )
    {
      v49 = a4[3].m128i_i32[0];
      v33 = qword_1C7F2C0;
      if ( (a4[3].m128i_i8[12] & 1) != 0 )
      {
        v43 = qword_1C7F2C0;
        sub_182C690(qword_1C7F2C0, v50, &a4[3].m128i_u64[1]);
        v33 = v43;
      }
      else
      {
        v34 = a4[3].m128i_i32[2];
        BYTE4(v50[0]) &= ~1u;
        LODWORD(v50[0]) = v34;
      }
      if ( (a4[4].m128i_i8[12] & 1) != 0 )
      {
        sub_182C690(v33, v51, &a4[4].m128i_u64[1]);
      }
      else
      {
        v35 = a4[4].m128i_i32[2];
        BYTE4(v51[0]) &= ~1u;
        LODWORD(v51[0]) = v35;
      }
      v39 = a4[5].m128i_u8[9];
    }
    if ( (unsigned __int8)sub_B286B0(&v49, &v46) || (unsigned __int8)sub_B28610(&v46, &v49) && (v40 || v39) )
    {
      *a5 = 1;
      sub_B28750(a1);
    }
    else
    {
      sub_B28930((int)a1, a2 + 40, (int)&v46, v40, 0, (int)&v49, (void *)v39, 0);
    }
    v31 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v50);
    sub_182CBA0(v31, v51);
    v32 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v47);
    sub_182CBA0(v32, v48);
  }
  else
  {
    a1->m128i_i64[0] = a4->m128i_i64[0];
    v24 = a4->m128i_i32[2];
    a1[1].m128i_i8[4] &= 0xFCu;
    a1->m128i_i32[2] = v24;
    a1[2].m128i_i8[4] &= 0xFCu;
    a1[1].m128i_i32[0] = 0;
    v25 = qword_1C7F2C0;
    a1[1].m128i_i64[1] = 0;
    a1[2].m128i_i32[0] = 1;
    a1[2].m128i_i64[1] = 0;
    if ( (a4[1].m128i_i8[4] & 1) != 0 )
      sub_182C690(v25, &a1[1], &a4[1]);
    else
      a1[1].m128i_i32[0] = a4[1].m128i_i32[0];
    if ( (a4[2].m128i_i8[4] & 1) != 0 )
    {
      sub_182C690(v25, &a1[2], &a4[2]);
    }
    else
    {
      v26 = a4[2].m128i_i32[0];
      a1[2].m128i_i8[4] &= ~1u;
      a1[2].m128i_i32[0] = v26;
    }
    v27 = a4[3].m128i_i32[0];
    a1[3].m128i_i8[12] &= 0xFCu;
    a1[4].m128i_i8[12] &= 0xFCu;
    a1[3].m128i_i32[0] = v27;
    a1[3].m128i_i32[2] = 0;
    a1[4].m128i_i64[0] = 0;
    v28 = qword_1C7F2C0;
    a1[4].m128i_i32[2] = 1;
    a1[5].m128i_i64[0] = 0;
    if ( (a4[3].m128i_i8[12] & 1) != 0 )
      sub_182C690(v28, &a1[3].m128i_u64[1], &a4[3].m128i_u64[1]);
    else
      a1[3].m128i_i32[2] = a4[3].m128i_i32[2];
    if ( (a4[4].m128i_i8[12] & 1) != 0 )
    {
      sub_182C690(v28, &a1[4].m128i_u64[1], &a4[4].m128i_u64[1]);
    }
    else
    {
      v29 = a4[4].m128i_i32[2];
      a1[4].m128i_i8[12] &= ~1u;
      a1[4].m128i_i32[2] = v29;
    }
    v30 = _mm_loadu_si128(a4 + 6);
    a1[5].m128i_i16[4] = a4[5].m128i_i16[4];
    a1[6] = v30;
  }
  return a1;
}


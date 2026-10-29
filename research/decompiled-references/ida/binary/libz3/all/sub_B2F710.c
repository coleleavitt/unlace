void __fastcall sub_B2F710(const __m128i *a1, unsigned int a2)
{
  __int32 v4; // eax
  __int32 v5; // edx
  unsigned int *v6; // r12
  void *v7; // rbp
  __int32 v8; // eax
  __int64 v9; // rax
  __int8 v10; // si
  __int8 v11; // dl
  __int8 v12; // si
  __int64 v13; // rax
  unsigned int v14; // esi
  unsigned int *v15; // rbp
  __int32 v16; // r11d
  __int8 v17; // di
  __int64 v18; // r12
  __int8 v19; // r14
  __int8 v20; // r10
  __int32 v21; // r8d
  __int64 v22; // rdx
  __int8 v23; // cl
  __int64 v24; // r9
  char v25; // al
  char v26; // si
  __int8 v27; // r13
  __int64 v28; // rdx
  char v29; // al
  void *v30; // r12
  __int8 v31; // al
  __m128d v32; // xmm0
  unsigned int *v33; // r12
  unsigned int *v34; // rax
  void *v35; // r12
  __int32 v36; // eax
  __int32 v37; // eax
  unsigned int *v38; // r13
  unsigned int *v39; // rax
  __int64 v40; // [rsp+8h] [rbp-60h] BYREF
  __int64 v41; // [rsp+10h] [rbp-58h]
  __int64 v42; // [rsp+18h] [rbp-50h] BYREF
  __int64 v43; // [rsp+20h] [rbp-48h]

  if ( a2 == 1 )
    return;
  if ( (a2 & 1) != 0 )
  {
    sub_B28030(&a1->m128i_u32[2], a2);
    sub_B28030((unsigned int *)&a1[3], a2);
    return;
  }
  v4 = a1->m128i_i32[2];
  if ( v4 && (v4 != 1 || a1[1].m128i_i32[0] > 0) )
    goto LABEL_11;
  v5 = a1[3].m128i_i32[0];
  if ( !v5 || v5 == 1 && a1[3].m128i_i32[2] < 0 )
  {
    v16 = a1[1].m128i_i32[0];
    v17 = a1[1].m128i_i8[4];
    a1->m128i_i32[2] = v5;
    v18 = a1[1].m128i_i64[1];
    v19 = v17;
    v20 = v17;
    v17 &= 2u;
    v21 = a1[2].m128i_i32[0];
    a1[1].m128i_i32[0] = a1[3].m128i_i32[2];
    v22 = a1[4].m128i_i64[0];
    v20 &= 1u;
    v23 = a1[2].m128i_i8[4];
    v24 = a1[2].m128i_i64[1];
    a1[3].m128i_i32[0] = v4;
    a1[1].m128i_i64[1] = v22;
    LOBYTE(v22) = a1[3].m128i_i8[12];
    v25 = BYTE4(v40);
    a1[3].m128i_i32[2] = v16;
    LODWORD(v40) = v16;
    v26 = v23 & 1;
    LODWORD(v42) = v21;
    a1[4].m128i_i64[0] = v18;
    a1[1].m128i_i8[4] = v22 & 2 | v19 & 0xFC | v22 & 1;
    v27 = v23;
    v23 &= 2u;
    BYTE4(v40) = v20 | v17 | v25 & 0xFC;
    v41 = 0;
    a1[3].m128i_i8[12] = v20 | v17 & 0xFE | v22 & 0xFC;
    LODWORD(v22) = a1[4].m128i_i32[2];
    v43 = 0;
    a1[2].m128i_i32[0] = v22;
    v28 = a1[5].m128i_i64[0];
    a1[4].m128i_i32[2] = v21;
    a1[2].m128i_i64[1] = v28;
    LOBYTE(v28) = a1[4].m128i_i8[12];
    a1[5].m128i_i64[0] = v24;
    a1[2].m128i_i8[4] = v28 & 3 | v27 & 0xFC;
    v29 = BYTE4(v42);
    a1[4].m128i_i8[12] = v26 | v23 | v28 & 0xFC;
    BYTE4(v42) = v26 | v23 | v29 & 0xFC;
    v30 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v40);
    sub_182CBA0(v30, &v42);
    v31 = a1[5].m128i_i8[8];
    v32 = (__m128d)_mm_loadu_si128(a1 + 6);
    a1[5].m128i_i8[8] = a1[5].m128i_i8[9];
    a1[5].m128i_i8[9] = v31;
    a1[6] = (const __m128i)_mm_shuffle_pd(v32, v32, 1);
LABEL_11:
    sub_B28030(&a1->m128i_u32[2], a2);
    v14 = a2;
    v15 = nullptr;
    sub_B28030((unsigned int *)&a1[3], v14);
    if ( a1[3].m128i_i32[0] == 1 )
    {
      v15 = (unsigned int *)a1[6].m128i_i64[0];
      v33 = (unsigned int *)a1[6].m128i_i64[1];
      if ( v15 )
      {
        if ( v33 != v15 && v33 )
        {
          v34 = (unsigned int *)sub_180C100(*(_QWORD *)(a1->m128i_i64[0] + 56), 24);
          *v15 = (*v15 + 1) & 0x3FFFFFFF | *v15 & 0xC0000000;
          *v33 = (*v33 + 1) & 0x3FFFFFFF | *v33 & 0xC0000000;
          *((_QWORD *)v34 + 1) = v15;
          v15 = v34;
          *(_QWORD *)v34 = 0;
          *((_QWORD *)v34 + 2) = v33;
        }
      }
      else
      {
        v15 = (unsigned int *)a1[6].m128i_i64[1];
      }
    }
    a1[6].m128i_i64[1] = (__int64)v15;
    return;
  }
  sub_B28030(&a1->m128i_u32[2], a2);
  sub_B28030((unsigned int *)&a1[3], a2);
  if ( sub_B286B0((__int64)a1[3].m128i_i64, (__int64)&a1->m128i_i64[1])
    || (unsigned __int8)sub_B28610((__int64)&a1->m128i_i64[1], (__int64)a1[3].m128i_i64)
    && !a1[5].m128i_i8[8]
    && a1[5].m128i_i8[9] )
  {
    a1[3].m128i_i32[0] = a1->m128i_i32[2];
    v35 = qword_1C7F2C0;
    if ( (a1[1].m128i_i8[4] & 1) != 0 )
    {
      sub_182C690(qword_1C7F2C0, &a1[3].m128i_u64[1], &a1[1]);
    }
    else
    {
      v36 = a1[1].m128i_i32[0];
      a1[3].m128i_i8[12] &= ~1u;
      a1[3].m128i_i32[2] = v36;
    }
    if ( (a1[2].m128i_i8[4] & 1) != 0 )
    {
      sub_182C690(v35, &a1[4].m128i_u64[1], &a1[2]);
    }
    else
    {
      v37 = a1[2].m128i_i32[0];
      a1[4].m128i_i8[12] &= ~1u;
      a1[4].m128i_i32[2] = v37;
    }
    a1[5].m128i_i8[9] = a1[5].m128i_i8[8];
  }
  v6 = nullptr;
  if ( a1[3].m128i_i32[0] == 1 )
  {
    v6 = (unsigned int *)a1[6].m128i_i64[0];
    v38 = (unsigned int *)a1[6].m128i_i64[1];
    if ( v6 )
    {
      if ( v38 )
      {
        if ( v38 != v6 )
        {
          v39 = (unsigned int *)sub_180C100(*(_QWORD *)(a1->m128i_i64[0] + 56), 24);
          *v6 = (*v6 + 1) & 0x3FFFFFFF | *v6 & 0xC0000000;
          *v38 = (*v38 + 1) & 0x3FFFFFFF | *v38 & 0xC0000000;
          *((_QWORD *)v39 + 1) = v6;
          v6 = v39;
          *(_QWORD *)v39 = 0;
          *((_QWORD *)v39 + 2) = v38;
        }
      }
    }
    else
    {
      v6 = (unsigned int *)a1[6].m128i_i64[1];
    }
  }
  a1[6].m128i_i64[1] = (__int64)v6;
  v40 = 0;
  v41 = 0;
  v42 = 1;
  v43 = 0;
  sub_182CBA0(qword_1C7F2C0, &v42);
  v7 = qword_1C7F2C0;
  a1->m128i_i32[2] = 1;
  v8 = a1[1].m128i_i32[0];
  a1[1].m128i_i32[0] = 0;
  LODWORD(v40) = v8;
  v9 = a1[1].m128i_i64[1];
  a1[1].m128i_i64[1] = v41;
  v41 = v9;
  v10 = a1[1].m128i_i8[4];
  LOBYTE(v9) = v10 & 2;
  v10 &= ~2u;
  LOBYTE(v9) = v10 & 1 | v9 & 0xFE;
  v11 = v10 & 0xFE;
  v12 = a1[2].m128i_i8[4];
  BYTE4(v40) = v9;
  LODWORD(v9) = a1[2].m128i_i32[0];
  a1[1].m128i_i8[4] = v11;
  LODWORD(v42) = v9;
  v13 = a1[2].m128i_i64[1];
  a1[2].m128i_i64[1] = v43;
  v43 = v13;
  LOBYTE(v13) = BYTE4(v42);
  a1[2].m128i_i32[0] = 1;
  a1[2].m128i_i8[4] = v12 & 0xFC | v13 & 2;
  BYTE4(v42) = v12 & 1 | v12 & 2 | v13 & 0xFC;
  sub_182CBA0(v7, &v40);
  sub_182CBA0(v7, &v42);
  a1[5].m128i_i8[8] = 0;
  a1[6].m128i_i64[0] = 0;
}


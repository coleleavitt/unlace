unsigned __int64 __fastcall sub_35DA90(const __m128i *a1, __m128i *a2)
{
  __int64 v2; // r12
  __m128i v4; // xmm1
  __int64 v5; // r14
  __m128i v6; // xmm0
  __m128i v7; // xmm2
  __int64 v8; // rax
  __int32 v9; // edx
  __int32 v10; // r13d
  __int32 v11; // ebp
  __int64 v12; // rcx
  bool v13; // zf
  __int64 v14; // rdi
  __m128i v15; // xmm0
  __m128i v16; // xmm3
  __m128i v17; // xmm4
  __int32 v18; // edx
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int64 v21; // rcx
  __int64 v22; // rbp
  __int64 k; // rbx
  __int64 *v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rbp
  __int64 m; // rbx
  __int64 *v30; // rdx
  __int64 v31; // rdi
  _QWORD *v33; // r15
  __int64 v34; // rsi
  __int64 v35; // r8
  __int64 i; // rdx
  __int64 *v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rdi
  __int64 v40; // rsi
  __int64 v41; // r8
  __int64 j; // rcx
  __int64 *v43; // rdx
  __int64 v44; // rdi
  __int64 v45; // [rsp+8h] [rbp-F0h]
  __m128i v46; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v47; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-C8h]
  __int64 v49; // [rsp+38h] [rbp-C0h]
  __int64 v50; // [rsp+40h] [rbp-B8h]
  __int64 v51; // [rsp+48h] [rbp-B0h]
  __m128i v52; // [rsp+50h] [rbp-A8h]
  __m128i v53; // [rsp+60h] [rbp-98h]
  __m128i v54; // [rsp+70h] [rbp-88h] BYREF
  __m128i v55; // [rsp+80h] [rbp-78h] BYREF
  __m128i v56; // [rsp+90h] [rbp-68h] BYREF
  __int32 v57; // [rsp+A0h] [rbp-58h]
  __int32 v58; // [rsp+A4h] [rbp-54h]
  __int64 v59; // [rsp+A8h] [rbp-50h]
  __int32 v60; // [rsp+B0h] [rbp-48h]
  unsigned __int64 v61; // [rsp+B8h] [rbp-40h]

  v2 = a1->m128i_i64[0];
  v61 = __readfsqword(0x28u);
  v50 = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v4 = _mm_loadu_si128(a1 + 1);
  v5 = a1->m128i_i64[1];
  a1[1] = 0;
  v6 = _mm_loadu_si128(a1 + 3);
  v7 = _mm_loadu_si128(a1 + 2);
  v8 = a1[6].m128i_i64[1];
  v9 = a1[6].m128i_i32[0];
  a1->m128i_i64[1] = 0;
  v54 = v6;
  v10 = a1[6].m128i_i32[1];
  v11 = a1[7].m128i_i32[0];
  v51 = v5;
  v55 = _mm_loadu_si128(a1 + 4);
  v57 = v9;
  v58 = v10;
  v45 = v8;
  v59 = v8;
  v60 = v11;
  v46 = v4;
  v47 = v7;
  v52 = v4;
  v53 = v7;
  v56 = _mm_loadu_si128(a1 + 5);
  sub_356CC0((__int64)a1, a2);
  v12 = a2->m128i_i64[0];
  if ( a2->m128i_i64[0] )
  {
    v13 = (*(_DWORD *)(v12 + 104))-- == 1;
    if ( v13 )
    {
      v33 = (_QWORD *)a2->m128i_i64[0];
      if ( a2->m128i_i64[0] )
      {
        sub_2515F0((__int64 *)a2->m128i_i64[0]);
        v34 = v33[23];
        if ( v34 )
        {
          v35 = v33[24];
          if ( v35 )
          {
            for ( i = 0; i != v35; ++i )
            {
              v37 = (__int64 *)(v34 + 24 * i);
              v38 = *v37;
              if ( *v37 )
              {
                v37[1] = 0;
                v49 = v35;
                v48 = i;
                qfree(v38);
                v35 = v49;
                i = v48;
                v34 = v33[23];
              }
            }
          }
          v33[24] = 0;
          qfree(v34);
        }
        v39 = v33[20];
        if ( v39 )
        {
          v33[21] = 0;
          qfree(v39);
        }
        v40 = v33[16];
        if ( v40 )
        {
          v41 = v33[17];
          if ( v41 )
          {
            for ( j = 0; j != v41; ++j )
            {
              v43 = (__int64 *)(v40 + 32 * j);
              v44 = *v43;
              if ( *v43 )
              {
                v43[1] = 0;
                v49 = j;
                v48 = v41;
                qfree(v44);
                j = v49;
                v41 = v48;
                v40 = v33[16];
              }
            }
          }
          v33[17] = 0;
          qfree(v40);
        }
        sub_24DCD0((__int64)(v33 + 2));
        j__qfree(v33);
      }
    }
  }
  a2->m128i_i64[0] = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v14 = a2->m128i_i64[1];
  v51 = 0;
  v52 = 0;
  if ( v14 )
  {
    a2[1].m128i_i64[0] = 0;
    qfree(v14);
  }
  v15 = _mm_load_si128(&v54);
  v16 = _mm_load_si128(&v46);
  a2->m128i_i64[1] = v5;
  v17 = _mm_load_si128(&v47);
  v18 = v57;
  a2[6].m128i_i32[1] = v10;
  a2[3] = v15;
  v19 = _mm_load_si128(&v55);
  a2[6].m128i_i32[0] = v18;
  a2[4] = v19;
  v20 = _mm_load_si128(&v56);
  a2[6].m128i_i64[1] = v45;
  a2[7].m128i_i32[0] = v11;
  a2[1] = v16;
  a2[2] = v17;
  a2[5] = v20;
  if ( v2 )
  {
    v13 = (*(_DWORD *)(v2 + 104))-- == 1;
    if ( v13 )
    {
      sub_2515F0((__int64 *)v2);
      v21 = *(_QWORD *)(v2 + 184);
      if ( v21 )
      {
        v22 = *(_QWORD *)(v2 + 192);
        if ( v22 )
        {
          for ( k = 0; k != v22; ++k )
          {
            v24 = (__int64 *)(v21 + 24 * k);
            v25 = *v24;
            if ( *v24 )
            {
              v24[1] = 0;
              qfree(v25);
              v21 = *(_QWORD *)(v2 + 184);
            }
          }
        }
        *(_QWORD *)(v2 + 192) = 0;
        qfree(v21);
      }
      v26 = *(_QWORD *)(v2 + 160);
      if ( v26 )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree(v26);
      }
      v27 = *(_QWORD *)(v2 + 128);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v2 + 136);
        if ( v28 )
        {
          for ( m = 0; m != v28; ++m )
          {
            v30 = (__int64 *)(v27 + 32 * m);
            v31 = *v30;
            if ( *v30 )
            {
              v30[1] = 0;
              qfree(v31);
              v27 = *(_QWORD *)(v2 + 128);
            }
          }
        }
        *(_QWORD *)(v2 + 136) = 0;
        qfree(v27);
      }
      sub_24DCD0(v2 + 16);
      j__qfree(v2);
    }
  }
  return v61 - __readfsqword(0x28u);
}

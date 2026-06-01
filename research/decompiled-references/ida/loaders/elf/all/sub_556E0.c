__int64 __fastcall sub_556E0(_QWORD *a1, int a2, unsigned __int64 a3, unsigned __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v7; // rcx
  __int64 v8; // rdi
  unsigned __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned int v13; // ebx
  unsigned int v14; // r12d
  __m128i *v15; // r13
  const __m128i *v16; // rax
  __int64 v17; // rcx
  __m128i v18; // xmm0
  __int64 v19; // rsi
  __int64 v20; // rcx
  __m128i v21; // xmm0
  __m128i v22; // xmm1
  __int64 v23; // rcx
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // r13
  __int64 v34; // rbp
  __int64 *v35; // rbx
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v39; // [rsp+0h] [rbp-C8h]
  __int64 *v40; // [rsp+8h] [rbp-C0h]
  __int64 v41; // [rsp+10h] [rbp-B8h]
  __int64 v42; // [rsp+18h] [rbp-B0h] BYREF
  _QWORD v43[5]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-80h]
  __int128 v45; // [rsp+50h] [rbp-78h]
  __int64 v46; // [rsp+60h] [rbp-68h]
  __int64 v47; // [rsp+68h] [rbp-60h]
  __m128i v48; // [rsp+70h] [rbp-58h]
  __int64 v49; // [rsp+80h] [rbp-48h]
  unsigned __int64 v50; // [rsp+88h] [rbp-40h]

  HIDWORD(v39) = a2;
  v50 = __readfsqword(0x28u);
  v7 = a1[61] - a1[60];
  if ( v7 < a3 + a4 && (a4 = v7 - a3, a3 >= v7) )
  {
    v14 = 0;
    sub_BFC0((__int64)"Wrong file offset %llu of symbol table, skipped it", a3);
  }
  else
  {
    v43[2] = a3;
    v8 = a1[75];
    v43[1] = a1;
    v43[0] = &off_87180;
    v43[4] = a5;
    v44 = 0;
    v46 = 0;
    v47 = 0;
    v45 = 0;
    v43[3] = a4 / a5;
    (*(void (__fastcall **)(__int64, _QWORD *, unsigned __int64))(*(_QWORD *)v8 + 16LL))(v8, a1, a4 % a5);
    v13 = 0;
    v14 = 0;
    v40 = a1 + 36;
    while ( (unsigned __int8)sub_552E0((__int64)v43, &v42, v9, v10, v11, v12) )
    {
      v15 = (__m128i *)sub_3F010(v40, SHIDWORD(v39));
      v16 = (const __m128i *)v42;
      v17 = *(_QWORD *)v42;
      v18 = _mm_loadu_si128((const __m128i *)(v42 + 8));
      *(_QWORD *)v42 = v15->m128i_i64[0];
      v16->m128i_i64[1] = v15->m128i_i64[1];
      v16[1].m128i_i64[0] = v15[1].m128i_i64[0];
      v19 = v15[1].m128i_i64[1];
      v15->m128i_i64[0] = v17;
      *(__m128i *)((char *)v15 + 8) = v18;
      v20 = v16[1].m128i_i64[1];
      v21 = _mm_loadu_si128(v16 + 2);
      v16[1].m128i_i64[1] = v19;
      v16[2].m128i_i64[0] = v15[2].m128i_i64[0];
      v16[2].m128i_i64[1] = v15[2].m128i_i64[1];
      v22 = _mm_loadu_si128(v15 + 3);
      v15[1].m128i_i64[1] = v20;
      v15[2] = v21;
      v23 = v16[4].m128i_i64[0];
      v24 = _mm_loadu_si128(v16 + 3);
      v16[3] = v22;
      v25 = v15[4].m128i_i64[0];
      v49 = v23;
      v16[4].m128i_i64[0] = v25;
      v48 = v24;
      v15[4].m128i_i64[0] = v23;
      v15[3] = v24;
      v26 = v16[4].m128i_i64[1];
      v16[4].m128i_i64[1] = v15[4].m128i_i64[1];
      v27 = v15[5].m128i_i64[0];
      v15[4].m128i_i64[1] = v26;
      v28 = v16[5].m128i_i64[0];
      v16[5].m128i_i64[0] = v27;
      LODWORD(v27) = v15[5].m128i_i32[2];
      v15[5].m128i_i64[0] = v28;
      LODWORD(v28) = v16[5].m128i_i32[2];
      v16[5].m128i_i32[2] = v27;
      LOBYTE(v27) = v15[5].m128i_i8[12];
      v15[5].m128i_i32[2] = v28;
      LOBYTE(v28) = v16[5].m128i_i8[12];
      v16[5].m128i_i8[12] = v27;
      LOBYTE(v27) = v15[5].m128i_i8[13];
      v15[5].m128i_i8[12] = v28;
      LOBYTE(v28) = v16[5].m128i_i8[13];
      v16[5].m128i_i8[13] = v27;
      LOBYTE(v27) = v15[5].m128i_i8[14];
      v15[5].m128i_i8[13] = v28;
      LOBYTE(v28) = v16[5].m128i_i8[14];
      v16[5].m128i_i8[14] = v27;
      v15[5].m128i_i8[14] = v28;
      sub_3B140((unsigned __int64)v15, (__int64)a1);
      (*(void (__fastcall **)(_QWORD, _QWORD *, __m128i *))(*(_QWORD *)a1[75] + 24LL))(a1[75], a1, v15);
      if ( v13 )
      {
        if ( (v13 & 0x3FF) == 0 )
        {
          show_auto(v13, 0);
          if ( (unsigned __int8)callui(27, 0, &callui, v29, v30, v31, v39, v40, v41, v42) )
            sub_EB70(0);
        }
        ++v14;
      }
      ++v13;
    }
    v32 = v44;
    v43[0] = &off_87180;
    if ( v44 )
    {
      v33 = v45;
      if ( (_QWORD)v45 )
      {
        v34 = 0;
        do
        {
          v35 = (__int64 *)(v32 + 96 * v34);
          v36 = v35[3];
          if ( v36 )
          {
            v35[4] = 0;
            qfree(v36);
          }
          v37 = *v35;
          if ( *v35 )
          {
            v35[1] = 0;
            qfree(v37);
          }
          ++v34;
          v32 = v44;
        }
        while ( v33 != v34 );
      }
      *(_QWORD *)&v45 = 0;
      qfree(v32);
    }
  }
  return v14;
}


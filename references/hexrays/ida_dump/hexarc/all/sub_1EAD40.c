unsigned __int64 __fastcall sub_1EAD40(_QWORD *a1, int a2, __int64 a3, __int64 a4, char a5)
{
  _QWORD *v7; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  unsigned __int64 v12; // rcx
  __m128i v13; // xmm0
  __int64 v14; // rax
  __m128i v15; // xmm0
  __m128i v16; // xmm1
  __int64 v17; // rsi
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdi
  __m128i v22; // xmm0
  __m128i v23; // xmm0
  __m128i v24; // xmm0
  char v25; // al
  __int64 v26; // rdi
  __int64 v27; // r12
  __int64 v28; // rbx
  _QWORD *v29; // rbp
  __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i v34; // xmm0
  __m128i v35; // xmm0
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rax
  __m128i v40; // [rsp+0h] [rbp-118h] BYREF
  __int64 v41; // [rsp+10h] [rbp-108h]
  _QWORD v42[2]; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v43; // [rsp+30h] [rbp-E8h]
  __m128i v44; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+48h] [rbp-D0h]
  __m128i v46; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v47; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v48; // [rsp+70h] [rbp-A8h]
  char v49; // [rsp+78h] [rbp-A0h]
  __int64 v50[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v51; // [rsp+90h] [rbp-88h]
  __m128i v52; // [rsp+98h] [rbp-80h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-70h]
  __m128i v54; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v55; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v56; // [rsp+D0h] [rbp-48h]
  char v57; // [rsp+D8h] [rbp-40h]
  unsigned __int64 v58; // [rsp+E8h] [rbp-30h]

  v7 = (_QWORD *)a1[7];
  v58 = __readfsqword(0x28u);
  v9 = a1[8];
  LODWORD(v41) = a2;
  BYTE4(v41) = a5;
  v10 = (__int64)&v7[12 * v9];
  if ( (_QWORD *)v10 != v7 )
  {
    v11 = v7;
    do
    {
      if ( a3 == v11[8] && a4 == v11[9] && ((v41 ^ v11[10]) & 0xFFFFFFFFFFLL) == 0 )
      {
        if ( !under_debugger )
          sub_37B760(52933);
        BUG();
      }
      v11 += 12;
    }
    while ( v11 != (_QWORD *)v10 );
  }
  v40.m128i_i64[1] = a4;
  v40.m128i_i64[0] = a3;
  v12 = a1[9];
  v44 = 0;
  v46 = 0;
  v13 = _mm_load_si128(&v40);
  v42[0] = 0;
  v42[1] = 0;
  v43 = 0;
  v45 = 0;
  v48 = v41;
  v49 = 0;
  v47 = v13;
  if ( v42 < v7 || v42 >= &v7[12 * v12] )
  {
    v31 = v9 + 1;
    if ( v12 < v31 )
    {
      v37 = qvector_reserve(a1 + 7, v7, v31, 96);
      v38 = a1[8];
      a1[7] = v37;
      v10 = v37 + 96 * v38;
    }
    sub_5DA80((__int64 *)v10, (__int64)v42);
    v32 = _mm_loadu_si128(&v44);
    v33 = v43;
    v43 = 0;
    *(__m128i *)(v10 + 24) = v32;
    *(_QWORD *)(v10 + 16) = v33;
    v44 = 0;
    v34 = _mm_load_si128(&v46);
    *(_QWORD *)(v10 + 40) = v45;
    *(__m128i *)(v10 + 48) = v34;
    v35 = _mm_load_si128(&v47);
    *(_QWORD *)(v10 + 80) = v48;
    LOBYTE(v33) = v49;
    *(__m128i *)(v10 + 64) = v35;
    *(_BYTE *)(v10 + 88) = v33;
    ++a1[8];
  }
  else
  {
    sub_5DA80(v50, (__int64)v42);
    v14 = v43;
    v15 = _mm_loadu_si128(&v44);
    v43 = 0;
    v16 = _mm_load_si128(&v46);
    v17 = a1[7];
    v51 = v14;
    v52 = v15;
    v53 = v45;
    v44 = 0;
    v56 = v48;
    v46 = 0;
    v18 = _mm_load_si128(&v47);
    v57 = v49;
    v19 = a1[8];
    v45 = 0;
    v54 = v16;
    v55 = v18;
    if ( a1[9] < (unsigned __int64)(v19 + 1) )
    {
      v39 = qvector_reserve(a1 + 7, v17, v19 + 1, 96);
      a1[7] = v39;
      v17 = v39;
      v19 = a1[8];
    }
    v20 = v17 + 96 * v19;
    sub_5DA80((__int64 *)v20, (__int64)v50);
    v21 = v50[0];
    v22 = _mm_loadu_si128(&v52);
    *(_QWORD *)(v20 + 16) = v51;
    *(__m128i *)(v20 + 24) = v22;
    v23 = _mm_load_si128(&v54);
    *(_QWORD *)(v20 + 40) = v53;
    *(__m128i *)(v20 + 48) = v23;
    v24 = _mm_load_si128(&v55);
    *(_QWORD *)(v20 + 80) = v56;
    v25 = v57;
    *(__m128i *)(v20 + 64) = v24;
    *(_BYTE *)(v20 + 88) = v25;
    qfree(v21);
    v26 = v45;
    ++a1[8];
    if ( v26 )
    {
      v27 = v46.m128i_i64[0];
      if ( v46.m128i_i64[0] )
      {
        v28 = 0;
        do
        {
          v29 = (_QWORD *)(v26 + 40 * v28);
          v30 = v29[2];
          if ( v30 )
          {
            v29[3] = 0;
            qfree(v30);
          }
          ++v28;
          qfree(*v29);
          v26 = v45;
        }
        while ( v27 != v28 );
      }
      v46.m128i_i64[0] = 0;
      qfree(v26);
    }
  }
  if ( v43 )
  {
    v44.m128i_i64[0] = 0;
    qfree(v43);
  }
  qfree(v42[0]);
  return v58 - __readfsqword(0x28u);
}

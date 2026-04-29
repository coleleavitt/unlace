unsigned __int64 __fastcall sub_35F8F0(const __m128i *a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  __m128i *v5; // r13
  __m128i v6; // xmm2
  __m128i v7; // xmm3
  __m128i v8; // xmm0
  __int64 v9; // rcx
  bool v10; // zf
  _QWORD *v11; // rbx
  __int64 v12; // rsi
  __int64 v13; // r15
  __int64 i; // r14
  _QWORD *v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r15
  __int64 j; // r14
  _QWORD *v19; // rdx
  __int64 *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rbx
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // rdi
  __int64 v30; // rax
  __m128i v31; // xmm4
  __m128i v32; // xmm0
  __m128i v33; // xmm5
  __int32 v34; // edx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __int64 v37; // rdx
  __int64 v38; // r12
  __int64 n; // rbx
  _QWORD *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r12
  __int64 ii; // rbx
  _QWORD *v44; // rax
  __int64 *v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 k; // rdx
  _QWORD *v50; // rcx
  __int64 v51; // rsi
  __int64 v52; // r8
  __int64 m; // rcx
  _QWORD *v54; // rdx
  __m128i v55; // [rsp+0h] [rbp-108h] BYREF
  __int64 v56; // [rsp+18h] [rbp-F0h]
  __m128i v57; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v58; // [rsp+30h] [rbp-D8h] BYREF
  int v59; // [rsp+40h] [rbp-C8h]
  int v60; // [rsp+44h] [rbp-C4h]
  __int64 v61; // [rsp+48h] [rbp-C0h]
  __int64 v62; // [rsp+50h] [rbp-B8h]
  __int64 v63; // [rsp+58h] [rbp-B0h]
  __m128i v64; // [rsp+60h] [rbp-A8h]
  __m128i v65; // [rsp+70h] [rbp-98h]
  __m128i v66; // [rsp+80h] [rbp-88h] BYREF
  __m128i v67; // [rsp+90h] [rbp-78h] BYREF
  __m128i v68; // [rsp+A0h] [rbp-68h] BYREF
  __int32 v69; // [rsp+B0h] [rbp-58h]
  int v70; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v71; // [rsp+B8h] [rbp-50h]
  int v72; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v73; // [rsp+C8h] [rbp-40h]

  v1 = nullptr;
  v73 = __readfsqword(0x28u);
  v2 = a1->m128i_i64[0];
  v62 = v2;
  if ( v2 )
  {
    ++*(_DWORD *)(v2 + 104);
    v1 = (__int64 *)a1->m128i_i64[0];
  }
  v3 = a1->m128i_i64[1];
  v4 = a1[6].m128i_u64[1];
  v5 = (__m128i *)&a1[-8].m128i_u64[1];
  v6 = _mm_loadu_si128(a1 + 1);
  a1[1] = 0;
  v56 = v3;
  v7 = _mm_loadu_si128(a1 + 2);
  v63 = v3;
  LODWORD(v3) = a1[6].m128i_i32[0];
  v66 = _mm_loadu_si128(a1 + 3);
  v69 = v3;
  LODWORD(v3) = a1[6].m128i_i32[1];
  v67 = _mm_loadu_si128(a1 + 4);
  v8 = _mm_loadu_si128(a1 + 5);
  v59 = v3;
  v70 = v3;
  LODWORD(v3) = a1[7].m128i_i32[0];
  a1->m128i_i64[1] = 0;
  v71 = v4;
  v60 = v3;
  v72 = v3;
  v57 = v6;
  v58 = v7;
  v64 = v6;
  v65 = v7;
  v68 = v8;
  if ( a1[-1].m128i_i64[0] >= v4 )
  {
    v5 = (__m128i *)a1;
  }
  else
  {
    while ( 1 )
    {
      v9 = v5[7].m128i_i64[1];
      if ( v9 )
      {
        v10 = (*(_DWORD *)(v9 + 104))-- == 1;
        if ( v10 )
        {
          v11 = (_QWORD *)v5[7].m128i_i64[1];
          if ( v11 )
          {
            sub_258970((__int64 *)v5[7].m128i_i64[1]);
            v12 = v11[23];
            if ( v12 )
            {
              v13 = v11[24];
              if ( v13 )
              {
                for ( i = 0; i != v13; ++i )
                {
                  v15 = (_QWORD *)(v12 + 24 * i);
                  if ( *v15 )
                  {
                    v15[1] = 0;
                    qfree();
                    v12 = v11[23];
                  }
                }
              }
              v11[24] = 0;
              qfree();
            }
            if ( v11[20] )
            {
              v11[21] = 0;
              qfree();
            }
            v16 = v11[16];
            if ( v16 )
            {
              v17 = v11[17];
              if ( v17 )
              {
                for ( j = 0; j != v17; ++j )
                {
                  v19 = (_QWORD *)(v16 + 32 * j);
                  if ( *v19 )
                  {
                    v19[1] = 0;
                    qfree();
                    v16 = v11[16];
                  }
                }
              }
              v11[17] = 0;
              qfree();
            }
            sub_255050((__int64)(v11 + 2));
            j__qfree();
          }
        }
      }
      v20 = (__int64 *)v5->m128i_i64[0];
      v5[7].m128i_i64[1] = v5->m128i_i64[0];
      if ( v20 )
        ++*((_DWORD *)v20 + 26);
      v21 = v5[8].m128i_i64[0];
      v22 = v5->m128i_i64[1];
      v5->m128i_i64[1] = 0;
      v23 = _mm_loadu_si128(v5 + 1);
      v5[1] = 0;
      if ( v21 )
      {
        v5[8].m128i_i64[1] = 0;
        v55 = v23;
        qfree();
        v23 = _mm_load_si128(&v55);
      }
      v24 = v5[2].m128i_i64[0];
      *(__m128i *)((char *)v5 + 136) = v23;
      v25 = _mm_loadu_si128(v5 + 3);
      v5[8].m128i_i64[0] = v22;
      v5[9].m128i_i64[1] = v24;
      v26 = v5[2].m128i_i64[1];
      *(__m128i *)((char *)v5 + 168) = v25;
      v27 = _mm_loadu_si128(v5 + 4);
      v5[10].m128i_i64[0] = v26;
      LODWORD(v26) = v5[6].m128i_i32[0];
      *(__m128i *)((char *)v5 + 184) = v27;
      v28 = _mm_loadu_si128(v5 + 5);
      v5[13].m128i_i32[2] = v26;
      LODWORD(v26) = v5[6].m128i_i32[1];
      *(__m128i *)((char *)v5 + 200) = v28;
      v5[13].m128i_i32[3] = v26;
      v5[14].m128i_i64[0] = v5[6].m128i_i64[1];
      v5[14].m128i_i32[2] = v5[7].m128i_i32[0];
      if ( v5[-1].m128i_i64[0] >= v4 )
        break;
      v5 = (__m128i *)((char *)v5 - 120);
    }
    v1 = (__int64 *)v5->m128i_i64[0];
  }
  if ( v1 )
  {
    v10 = (*((_DWORD *)v1 + 26))-- == 1;
    if ( v10 )
    {
      v46 = (__int64 *)v5->m128i_i64[0];
      if ( v5->m128i_i64[0] )
      {
        sub_258970((__int64 *)v5->m128i_i64[0]);
        v47 = v46[23];
        if ( v47 )
        {
          v48 = v46[24];
          if ( v48 )
          {
            for ( k = 0; k != v48; ++k )
            {
              v50 = (_QWORD *)(v47 + 24 * k);
              if ( *v50 )
              {
                v50[1] = 0;
                v61 = v48;
                v55.m128i_i64[0] = k;
                qfree();
                v47 = v46[23];
                v48 = v61;
                k = v55.m128i_i64[0];
              }
            }
          }
          v46[24] = 0;
          qfree();
        }
        if ( v46[20] )
        {
          v46[21] = 0;
          qfree();
        }
        v51 = v46[16];
        if ( v51 )
        {
          v52 = v46[17];
          if ( v52 )
          {
            for ( m = 0; m != v52; ++m )
            {
              v54 = (_QWORD *)(v51 + 32 * m);
              if ( *v54 )
              {
                v54[1] = 0;
                v61 = v52;
                v55.m128i_i64[0] = m;
                qfree();
                v51 = v46[16];
                v52 = v61;
                m = v55.m128i_i64[0];
              }
            }
          }
          v46[17] = 0;
          qfree();
        }
        sub_255050((__int64)(v46 + 2));
        j__qfree();
      }
    }
  }
  v5->m128i_i64[0] = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v29 = v5->m128i_i64[1];
  v63 = 0;
  v64 = 0;
  if ( v29 )
  {
    v5[1].m128i_i64[0] = 0;
    qfree();
  }
  v30 = v56;
  v31 = _mm_load_si128(&v57);
  v5[6].m128i_i64[1] = v4;
  v32 = _mm_load_si128(&v66);
  v33 = _mm_load_si128(&v58);
  v5->m128i_i64[1] = v30;
  LODWORD(v30) = v59;
  v5[3] = v32;
  v34 = v69;
  v35 = _mm_load_si128(&v67);
  v5[6].m128i_i32[1] = v30;
  LODWORD(v30) = v60;
  v5[4] = v35;
  v36 = _mm_load_si128(&v68);
  v5[6].m128i_i32[0] = v34;
  v5[7].m128i_i32[0] = v30;
  v5[1] = v31;
  v5[2] = v33;
  v5[5] = v36;
  if ( v2 )
  {
    v10 = (*(_DWORD *)(v2 + 104))-- == 1;
    if ( v10 )
    {
      sub_258970((__int64 *)v2);
      v37 = *(_QWORD *)(v2 + 184);
      if ( v37 )
      {
        v38 = *(_QWORD *)(v2 + 192);
        if ( v38 )
        {
          for ( n = 0; n != v38; ++n )
          {
            v40 = (_QWORD *)(v37 + 24 * n);
            if ( *v40 )
            {
              v40[1] = 0;
              qfree();
              v37 = *(_QWORD *)(v2 + 184);
            }
          }
        }
        *(_QWORD *)(v2 + 192) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v2 + 160) )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree();
      }
      v41 = *(_QWORD *)(v2 + 128);
      if ( v41 )
      {
        v42 = *(_QWORD *)(v2 + 136);
        if ( v42 )
        {
          for ( ii = 0; ii != v42; ++ii )
          {
            v44 = (_QWORD *)(v41 + 32 * ii);
            if ( *v44 )
            {
              v44[1] = 0;
              qfree();
              v41 = *(_QWORD *)(v2 + 128);
            }
          }
        }
        *(_QWORD *)(v2 + 136) = 0;
        qfree();
      }
      sub_255050(v2 + 16);
      j__qfree();
    }
  }
  return v73 - __readfsqword(0x28u);
}

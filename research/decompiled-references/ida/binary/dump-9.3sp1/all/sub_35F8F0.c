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
  __int64 *v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r15
  __int64 j; // r14
  __int64 *v21; // rdx
  __int64 v22; // rdi
  __int64 *v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rbx
  __m128i v26; // xmm0
  __int64 v27; // rdx
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __m128i v30; // xmm0
  __m128i v31; // xmm0
  __int64 v32; // rdi
  __int64 v33; // rax
  __m128i v34; // xmm4
  __m128i v35; // xmm0
  __m128i v36; // xmm5
  __int32 v37; // edx
  __m128i v38; // xmm0
  __m128i v39; // xmm0
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 n; // rbx
  __int64 *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r12
  __int64 ii; // rbx
  __int64 *v49; // rax
  __int64 v50; // rdi
  __int64 *v52; // rbx
  __int64 v53; // rsi
  __int64 v54; // r8
  __int64 k; // rdx
  __int64 *v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // r8
  __int64 m; // rcx
  __int64 *v62; // rdx
  __int64 v63; // rdi
  __m128i v64; // [rsp+0h] [rbp-108h] BYREF
  __int64 v65; // [rsp+18h] [rbp-F0h]
  __m128i v66; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v67; // [rsp+30h] [rbp-D8h] BYREF
  int v68; // [rsp+40h] [rbp-C8h]
  int v69; // [rsp+44h] [rbp-C4h]
  __int64 v70; // [rsp+48h] [rbp-C0h]
  __int64 v71; // [rsp+50h] [rbp-B8h]
  __int64 v72; // [rsp+58h] [rbp-B0h]
  __m128i v73; // [rsp+60h] [rbp-A8h]
  __m128i v74; // [rsp+70h] [rbp-98h]
  __m128i v75; // [rsp+80h] [rbp-88h] BYREF
  __m128i v76; // [rsp+90h] [rbp-78h] BYREF
  __m128i v77; // [rsp+A0h] [rbp-68h] BYREF
  __int32 v78; // [rsp+B0h] [rbp-58h]
  int v79; // [rsp+B4h] [rbp-54h]
  unsigned __int64 v80; // [rsp+B8h] [rbp-50h]
  int v81; // [rsp+C0h] [rbp-48h]
  unsigned __int64 v82; // [rsp+C8h] [rbp-40h]

  v1 = nullptr;
  v82 = __readfsqword(0x28u);
  v2 = a1->m128i_i64[0];
  v71 = v2;
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
  v65 = v3;
  v7 = _mm_loadu_si128(a1 + 2);
  v72 = v3;
  LODWORD(v3) = a1[6].m128i_i32[0];
  v75 = _mm_loadu_si128(a1 + 3);
  v78 = v3;
  LODWORD(v3) = a1[6].m128i_i32[1];
  v76 = _mm_loadu_si128(a1 + 4);
  v8 = _mm_loadu_si128(a1 + 5);
  v68 = v3;
  v79 = v3;
  LODWORD(v3) = a1[7].m128i_i32[0];
  a1->m128i_i64[1] = 0;
  v80 = v4;
  v69 = v3;
  v81 = v3;
  v66 = v6;
  v67 = v7;
  v73 = v6;
  v74 = v7;
  v77 = v8;
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
                  v15 = (__int64 *)(v12 + 24 * i);
                  v16 = *v15;
                  if ( *v15 )
                  {
                    v15[1] = 0;
                    qfree(v16);
                    v12 = v11[23];
                  }
                }
              }
              v11[24] = 0;
              qfree(v12);
            }
            v17 = v11[20];
            if ( v17 )
            {
              v11[21] = 0;
              qfree(v17);
            }
            v18 = v11[16];
            if ( v18 )
            {
              v19 = v11[17];
              if ( v19 )
              {
                for ( j = 0; j != v19; ++j )
                {
                  v21 = (__int64 *)(v18 + 32 * j);
                  v22 = *v21;
                  if ( *v21 )
                  {
                    v21[1] = 0;
                    qfree(v22);
                    v18 = v11[16];
                  }
                }
              }
              v11[17] = 0;
              qfree(v18);
            }
            sub_255050((__int64)(v11 + 2));
            j__qfree((__int64)v11);
          }
        }
      }
      v23 = (__int64 *)v5->m128i_i64[0];
      v5[7].m128i_i64[1] = v5->m128i_i64[0];
      if ( v23 )
        ++*((_DWORD *)v23 + 26);
      v24 = v5[8].m128i_i64[0];
      v25 = v5->m128i_i64[1];
      v5->m128i_i64[1] = 0;
      v26 = _mm_loadu_si128(v5 + 1);
      v5[1] = 0;
      if ( v24 )
      {
        v5[8].m128i_i64[1] = 0;
        v64 = v26;
        qfree(v24);
        v26 = _mm_load_si128(&v64);
      }
      v27 = v5[2].m128i_i64[0];
      *(__m128i *)((char *)v5 + 136) = v26;
      v28 = _mm_loadu_si128(v5 + 3);
      v5[8].m128i_i64[0] = v25;
      v5[9].m128i_i64[1] = v27;
      v29 = v5[2].m128i_i64[1];
      *(__m128i *)((char *)v5 + 168) = v28;
      v30 = _mm_loadu_si128(v5 + 4);
      v5[10].m128i_i64[0] = v29;
      LODWORD(v29) = v5[6].m128i_i32[0];
      *(__m128i *)((char *)v5 + 184) = v30;
      v31 = _mm_loadu_si128(v5 + 5);
      v5[13].m128i_i32[2] = v29;
      LODWORD(v29) = v5[6].m128i_i32[1];
      *(__m128i *)((char *)v5 + 200) = v31;
      v5[13].m128i_i32[3] = v29;
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
      v52 = (__int64 *)v5->m128i_i64[0];
      if ( v5->m128i_i64[0] )
      {
        sub_258970((__int64 *)v5->m128i_i64[0]);
        v53 = v52[23];
        if ( v53 )
        {
          v54 = v52[24];
          if ( v54 )
          {
            for ( k = 0; k != v54; ++k )
            {
              v56 = (__int64 *)(v53 + 24 * k);
              v57 = *v56;
              if ( *v56 )
              {
                v56[1] = 0;
                v70 = v54;
                v64.m128i_i64[0] = k;
                qfree(v57);
                v53 = v52[23];
                v54 = v70;
                k = v64.m128i_i64[0];
              }
            }
          }
          v52[24] = 0;
          qfree(v53);
        }
        v58 = v52[20];
        if ( v58 )
        {
          v52[21] = 0;
          qfree(v58);
        }
        v59 = v52[16];
        if ( v59 )
        {
          v60 = v52[17];
          if ( v60 )
          {
            for ( m = 0; m != v60; ++m )
            {
              v62 = (__int64 *)(v59 + 32 * m);
              v63 = *v62;
              if ( *v62 )
              {
                v62[1] = 0;
                v70 = v60;
                v64.m128i_i64[0] = m;
                qfree(v63);
                v59 = v52[16];
                v60 = v70;
                m = v64.m128i_i64[0];
              }
            }
          }
          v52[17] = 0;
          qfree(v59);
        }
        sub_255050((__int64)(v52 + 2));
        j__qfree((__int64)v52);
      }
    }
  }
  v5->m128i_i64[0] = v2;
  if ( v2 )
    ++*(_DWORD *)(v2 + 104);
  v32 = v5->m128i_i64[1];
  v72 = 0;
  v73 = 0;
  if ( v32 )
  {
    v5[1].m128i_i64[0] = 0;
    qfree(v32);
  }
  v33 = v65;
  v34 = _mm_load_si128(&v66);
  v5[6].m128i_i64[1] = v4;
  v35 = _mm_load_si128(&v75);
  v36 = _mm_load_si128(&v67);
  v5->m128i_i64[1] = v33;
  LODWORD(v33) = v68;
  v5[3] = v35;
  v37 = v78;
  v38 = _mm_load_si128(&v76);
  v5[6].m128i_i32[1] = v33;
  LODWORD(v33) = v69;
  v5[4] = v38;
  v39 = _mm_load_si128(&v77);
  v5[6].m128i_i32[0] = v37;
  v5[7].m128i_i32[0] = v33;
  v5[1] = v34;
  v5[2] = v36;
  v5[5] = v39;
  if ( v2 )
  {
    v10 = (*(_DWORD *)(v2 + 104))-- == 1;
    if ( v10 )
    {
      sub_258970((__int64 *)v2);
      v40 = *(_QWORD *)(v2 + 184);
      if ( v40 )
      {
        v41 = *(_QWORD *)(v2 + 192);
        if ( v41 )
        {
          for ( n = 0; n != v41; ++n )
          {
            v43 = (__int64 *)(v40 + 24 * n);
            v44 = *v43;
            if ( *v43 )
            {
              v43[1] = 0;
              qfree(v44);
              v40 = *(_QWORD *)(v2 + 184);
            }
          }
        }
        *(_QWORD *)(v2 + 192) = 0;
        qfree(v40);
      }
      v45 = *(_QWORD *)(v2 + 160);
      if ( v45 )
      {
        *(_QWORD *)(v2 + 168) = 0;
        qfree(v45);
      }
      v46 = *(_QWORD *)(v2 + 128);
      if ( v46 )
      {
        v47 = *(_QWORD *)(v2 + 136);
        if ( v47 )
        {
          for ( ii = 0; ii != v47; ++ii )
          {
            v49 = (__int64 *)(v46 + 32 * ii);
            v50 = *v49;
            if ( *v49 )
            {
              v49[1] = 0;
              qfree(v50);
              v46 = *(_QWORD *)(v2 + 128);
            }
          }
        }
        *(_QWORD *)(v2 + 136) = 0;
        qfree(v46);
      }
      sub_255050(v2 + 16);
      j__qfree(v2);
    }
  }
  return v82 - __readfsqword(0x28u);
}

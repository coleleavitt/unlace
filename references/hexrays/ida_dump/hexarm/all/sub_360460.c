unsigned __int64 __fastcall sub_360460(__m128i *a1, __m128i *a2)
{
  const __m128i *v2; // rbp
  unsigned __int64 v4; // rax
  const __m128i *v5; // rdi
  __int64 v6; // r13
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __int64 v11; // r15
  __int32 v12; // eax
  __m128i v13; // xmm0
  __int32 v14; // eax
  __m128i v15; // xmm0
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rcx
  bool v19; // zf
  __int64 *v20; // r14
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 i; // rbx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  __int64 j; // rbx
  __int64 *v32; // rax
  __int64 v33; // rdi
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // r14
  __m128i v37; // xmm0
  __int64 v38; // rdx
  __m128i v39; // xmm0
  __int64 v40; // rdx
  __m128i v41; // xmm0
  __m128i v42; // xmm0
  __int64 v43; // rdx
  _QWORD *v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rsi
  __int64 v47; // rbx
  __int64 v48; // r15
  __int64 *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rcx
  __int64 v53; // rsi
  __int64 v54; // rbx
  _QWORD *v55; // r15
  __int64 *v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rdi
  __m128i v59; // xmm6
  __m128i v60; // xmm0
  __m128i v61; // xmm7
  __int32 v62; // eax
  __m128i v63; // xmm0
  __int32 v64; // eax
  __m128i v65; // xmm0
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // r14
  __int64 k; // rbx
  __int64 *v70; // rax
  __int64 v71; // rdi
  __int64 v72; // rdi
  __int64 v73; // rdx
  __int64 v74; // r14
  __int64 m; // rbx
  __int64 *v76; // rax
  __int64 v77; // rdi
  __m128i v79; // [rsp+0h] [rbp-118h] BYREF
  __int64 v80; // [rsp+18h] [rbp-100h]
  const __m128i *v81; // [rsp+20h] [rbp-F8h]
  __int64 v82; // [rsp+28h] [rbp-F0h]
  __m128i v83; // [rsp+30h] [rbp-E8h] BYREF
  __m128i v84; // [rsp+40h] [rbp-D8h] BYREF
  __int32 v85; // [rsp+50h] [rbp-C8h]
  int v86; // [rsp+54h] [rbp-C4h]
  unsigned __int64 v87; // [rsp+58h] [rbp-C0h]
  __int64 v88; // [rsp+60h] [rbp-B8h]
  __int64 v89; // [rsp+68h] [rbp-B0h]
  __m128i v90; // [rsp+70h] [rbp-A8h]
  __m128i v91; // [rsp+80h] [rbp-98h]
  __m128i v92; // [rsp+90h] [rbp-88h] BYREF
  __m128i v93; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v94; // [rsp+B0h] [rbp-68h] BYREF
  __int32 v95; // [rsp+C0h] [rbp-58h]
  __int32 v96; // [rsp+C4h] [rbp-54h]
  __int64 v97; // [rsp+C8h] [rbp-50h]
  int v98; // [rsp+D0h] [rbp-48h]
  unsigned __int64 v99; // [rsp+D8h] [rbp-40h]

  v81 = a2;
  v99 = __readfsqword(0x28u);
  if ( a1 != a2 )
  {
    v2 = (__m128i *)((char *)a1 + 120);
    if ( a2 != (__m128i *)&a1[7].m128i_u64[1] )
    {
      do
      {
        v4 = v2[6].m128i_u64[1];
        v5 = v2;
        v2 = (const __m128i *)((char *)v2 + 120);
        v80 = v4;
        if ( a1[6].m128i_i64[1] >= v4 )
        {
          sub_35FE30(v5);
        }
        else
        {
          v6 = v2[-8].m128i_i64[1];
          v88 = v6;
          if ( v6 )
          {
            ++*(_DWORD *)(v6 + 104);
            v80 = v2[-1].m128i_i64[0];
          }
          v7 = _mm_loadu_si128((const __m128i *)((char *)v2 - 72));
          v8 = (char *)v5 - (char *)a1;
          v9 = _mm_loadu_si128((const __m128i *)((char *)v2 - 104));
          v10 = _mm_loadu_si128((const __m128i *)((char *)v2 - 88));
          v11 = (__int64)v2;
          v82 = v2[-7].m128i_i64[0];
          v89 = v82;
          v12 = v2[-2].m128i_i32[2];
          v92 = v7;
          v13 = _mm_loadu_si128((const __m128i *)((char *)v2 - 56));
          v95 = v12;
          v14 = v2[-2].m128i_i32[3];
          v93 = v13;
          v15 = _mm_loadu_si128((const __m128i *)((char *)v2 - 40));
          v85 = v14;
          v96 = v14;
          v16 = v80;
          v2[-7].m128i_i64[0] = 0;
          v97 = v16;
          LODWORD(v16) = v2[-1].m128i_i32[2];
          v84 = v9;
          v86 = v16;
          v98 = v16;
          v17 = 0xEEEEEEEEEEEEEEEFLL * (v8 >> 3);
          v83 = v10;
          *(const __m128i *)((char *)&v2[-7] + 8) = 0;
          v90 = v9;
          v91 = v10;
          v94 = v15;
          if ( v8 > 0 )
          {
            do
            {
              v18 = *(_QWORD *)(v11 - 120);
              v11 -= 120;
              if ( v18 )
              {
                v19 = (*(_DWORD *)(v18 + 104))-- == 1;
                if ( v19 )
                {
                  v20 = *(__int64 **)v11;
                  if ( *(_QWORD *)v11 )
                  {
                    sub_258D30(*(__int64 **)v11);
                    v21 = v20[23];
                    if ( v21 )
                    {
                      v22 = v20[24];
                      if ( v22 )
                      {
                        v79.m128i_i64[0] = v11;
                        v23 = v22;
                        v87 = v17;
                        for ( i = 0; i != v23; ++i )
                        {
                          v25 = (__int64 *)(v21 + 24 * i);
                          v26 = *v25;
                          if ( *v25 )
                          {
                            v25[1] = 0;
                            qfree(v26);
                            v21 = v20[23];
                          }
                        }
                        v11 = v79.m128i_i64[0];
                        v17 = v87;
                      }
                      v20[24] = 0;
                      qfree(v21);
                    }
                    v27 = v20[20];
                    if ( v27 )
                    {
                      v20[21] = 0;
                      qfree(v27);
                    }
                    v28 = v20[16];
                    if ( v28 )
                    {
                      v29 = v20[17];
                      if ( v29 )
                      {
                        v79.m128i_i64[0] = v11;
                        v30 = v29;
                        v87 = v17;
                        for ( j = 0; j != v30; ++j )
                        {
                          v32 = (__int64 *)(v28 + 32 * j);
                          v33 = *v32;
                          if ( *v32 )
                          {
                            v32[1] = 0;
                            qfree(v33);
                            v28 = v20[16];
                          }
                        }
                        v11 = v79.m128i_i64[0];
                        v17 = v87;
                      }
                      v20[17] = 0;
                      qfree(v28);
                    }
                    sub_255410((__int64)(v20 + 2));
                    j__qfree(v20);
                  }
                }
              }
              v34 = *(_QWORD *)(v11 - 120);
              *(_QWORD *)v11 = v34;
              if ( v34 )
                ++*(_DWORD *)(v34 + 104);
              v35 = *(_QWORD *)(v11 + 8);
              v36 = *(_QWORD *)(v11 - 112);
              *(_QWORD *)(v11 - 112) = 0;
              v37 = _mm_loadu_si128((const __m128i *)(v11 - 104));
              *(_OWORD *)(v11 - 104) = 0;
              if ( v35 )
              {
                *(_QWORD *)(v11 + 16) = 0;
                v79 = v37;
                qfree(v35);
                v37 = _mm_load_si128(&v79);
              }
              v38 = *(_QWORD *)(v11 - 88);
              *(__m128i *)(v11 + 16) = v37;
              v39 = _mm_loadu_si128((const __m128i *)(v11 - 72));
              *(_QWORD *)(v11 + 8) = v36;
              *(_QWORD *)(v11 + 32) = v38;
              v40 = *(_QWORD *)(v11 - 80);
              *(__m128i *)(v11 + 48) = v39;
              v41 = _mm_loadu_si128((const __m128i *)(v11 - 56));
              *(_QWORD *)(v11 + 40) = v40;
              LODWORD(v40) = *(_DWORD *)(v11 - 24);
              *(__m128i *)(v11 + 64) = v41;
              v42 = _mm_loadu_si128((const __m128i *)(v11 - 40));
              *(_DWORD *)(v11 + 96) = v40;
              LODWORD(v40) = *(_DWORD *)(v11 - 20);
              *(__m128i *)(v11 + 80) = v42;
              *(_DWORD *)(v11 + 100) = v40;
              *(_QWORD *)(v11 + 104) = *(_QWORD *)(v11 - 16);
              *(_DWORD *)(v11 + 112) = *(_DWORD *)(v11 - 8);
              --v17;
            }
            while ( v17 );
          }
          v43 = a1->m128i_i64[0];
          if ( a1->m128i_i64[0] )
          {
            v19 = (*(_DWORD *)(v43 + 104))-- == 1;
            if ( v19 )
            {
              if ( a1->m128i_i64[0] )
              {
                v79.m128i_i64[0] = a1->m128i_i64[0];
                sub_258D30((__int64 *)v79.m128i_i64[0]);
                v44 = (_QWORD *)v79.m128i_i64[0];
                v45 = *(_QWORD *)(v79.m128i_i64[0] + 184);
                if ( v45 )
                {
                  v46 = *(_QWORD *)(v79.m128i_i64[0] + 192);
                  if ( v46 )
                  {
                    v47 = 0;
                    v48 = v79.m128i_i64[0];
                    do
                    {
                      v49 = (__int64 *)(v45 + 24 * v47);
                      v50 = *v49;
                      if ( *v49 )
                      {
                        v49[1] = 0;
                        qfree(v50);
                        v45 = *(_QWORD *)(v48 + 184);
                      }
                      ++v47;
                    }
                    while ( v46 != v47 );
                    v44 = (_QWORD *)v48;
                  }
                  v44[24] = 0;
                  v79.m128i_i64[0] = (__int64)v44;
                  qfree(v45);
                  v44 = (_QWORD *)v79.m128i_i64[0];
                }
                v51 = v44[20];
                if ( v51 )
                {
                  v44[21] = 0;
                  v79.m128i_i64[0] = (__int64)v44;
                  qfree(v51);
                  v44 = (_QWORD *)v79.m128i_i64[0];
                }
                v52 = v44[16];
                if ( v52 )
                {
                  v53 = v44[17];
                  if ( v53 )
                  {
                    v54 = 0;
                    v55 = v44;
                    do
                    {
                      v56 = (__int64 *)(v52 + 32 * v54);
                      v57 = *v56;
                      if ( *v56 )
                      {
                        v56[1] = 0;
                        qfree(v57);
                        v52 = v55[16];
                      }
                      ++v54;
                    }
                    while ( v53 != v54 );
                    v44 = v55;
                  }
                  v44[17] = 0;
                  v79.m128i_i64[0] = (__int64)v44;
                  qfree(v52);
                  v44 = (_QWORD *)v79.m128i_i64[0];
                }
                v79.m128i_i64[0] = (__int64)v44;
                sub_255410((__int64)(v44 + 2));
                j__qfree(v79.m128i_i64[0]);
              }
            }
          }
          a1->m128i_i64[0] = v6;
          if ( v6 )
            ++*(_DWORD *)(v6 + 104);
          v58 = a1->m128i_i64[1];
          v89 = 0;
          v90 = 0;
          if ( v58 )
          {
            a1[1].m128i_i64[0] = 0;
            qfree(v58);
          }
          v59 = _mm_load_si128(&v84);
          v60 = _mm_load_si128(&v92);
          v61 = _mm_load_si128(&v83);
          a1->m128i_i64[1] = v82;
          v62 = v95;
          a1[3] = v60;
          v63 = _mm_load_si128(&v93);
          a1[6].m128i_i32[0] = v62;
          v64 = v85;
          a1[4] = v63;
          v65 = _mm_load_si128(&v94);
          a1[6].m128i_i32[1] = v64;
          v66 = v80;
          a1[1] = v59;
          a1[6].m128i_i64[1] = v66;
          LODWORD(v66) = v86;
          a1[2] = v61;
          a1[7].m128i_i32[0] = v66;
          a1[5] = v65;
          if ( v6 )
          {
            v19 = (*(_DWORD *)(v6 + 104))-- == 1;
            if ( v19 )
            {
              sub_258D30((__int64 *)v6);
              v67 = *(_QWORD *)(v6 + 184);
              if ( v67 )
              {
                v68 = *(_QWORD *)(v6 + 192);
                if ( v68 )
                {
                  for ( k = 0; k != v68; ++k )
                  {
                    v70 = (__int64 *)(v67 + 24 * k);
                    v71 = *v70;
                    if ( *v70 )
                    {
                      v70[1] = 0;
                      qfree(v71);
                      v67 = *(_QWORD *)(v6 + 184);
                    }
                  }
                }
                *(_QWORD *)(v6 + 192) = 0;
                qfree(v67);
              }
              v72 = *(_QWORD *)(v6 + 160);
              if ( v72 )
              {
                *(_QWORD *)(v6 + 168) = 0;
                qfree(v72);
              }
              v73 = *(_QWORD *)(v6 + 128);
              if ( v73 )
              {
                v74 = *(_QWORD *)(v6 + 136);
                if ( v74 )
                {
                  for ( m = 0; m != v74; ++m )
                  {
                    v76 = (__int64 *)(v73 + 32 * m);
                    v77 = *v76;
                    if ( *v76 )
                    {
                      v76[1] = 0;
                      qfree(v77);
                      v73 = *(_QWORD *)(v6 + 128);
                    }
                  }
                }
                *(_QWORD *)(v6 + 136) = 0;
                qfree(v73);
              }
              sub_255410(v6 + 16);
              j__qfree(v6);
            }
          }
        }
      }
      while ( v81 != v2 );
    }
  }
  return v99 - __readfsqword(0x28u);
}

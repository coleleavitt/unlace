unsigned __int64 __fastcall sub_3AE550(__int64 a1, __int64 *a2, unsigned __int8 (__fastcall *a3)(__int64 *, __int64))
{
  __int64 *v3; // r12
  unsigned __int8 v5; // al
  __int64 *v6; // rdi
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 *v10; // r15
  __m128i v11; // xmm0
  unsigned __int64 v12; // rbx
  __int64 v13; // rcx
  bool v14; // zf
  __int64 *v15; // rbp
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 i; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // r8
  __int64 j; // rcx
  __int64 *v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdx
  char v28; // dl
  __m128i v29; // xmm0
  __int64 *v30; // rdx
  __int64 *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 k; // rbp
  __int64 *v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 m; // rbp
  __int64 *v41; // rax
  __int64 v42; // rdi
  __m128i v43; // xmm0
  char v44; // al
  __m128i v45; // xmm0
  __int64 v46; // rdx
  __int64 v47; // rbp
  __int64 n; // rbx
  __int64 *v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdi
  __int64 v52; // rdx
  __int64 v53; // rbp
  __int64 ii; // rbx
  __int64 *v55; // rax
  __int64 v56; // rdi
  char v58; // al
  __m128i v59; // xmm0
  __int64 v60; // [rsp+0h] [rbp-98h]
  __int64 v61; // [rsp+0h] [rbp-98h]
  __int64 v62; // [rsp+0h] [rbp-98h]
  __int64 v63; // [rsp+0h] [rbp-98h]
  __int64 v64; // [rsp+8h] [rbp-90h]
  __int64 v65; // [rsp+8h] [rbp-90h]
  __m128i v68; // [rsp+28h] [rbp-70h] BYREF
  __m128i v69; // [rsp+38h] [rbp-60h] BYREF
  __int64 v70; // [rsp+48h] [rbp-50h]
  unsigned __int64 v71; // [rsp+58h] [rbp-40h]

  v71 = __readfsqword(0x28u);
  if ( (__int64 *)a1 != a2 )
  {
    v3 = (__int64 *)(a1 + 48);
    while ( a2 != v3 )
    {
      v5 = a3(v3, a1);
      v6 = v3;
      v3 += 6;
      if ( v5 )
      {
        v7 = *(v3 - 6);
        if ( v7 )
          ++*(_DWORD *)(v7 + 104);
        v8 = *(v3 - 1);
        v9 = (__int64)v6 - a1;
        v10 = v3;
        v68 = _mm_loadu_si128((const __m128i *)(v3 - 5));
        v11 = _mm_loadu_si128((const __m128i *)(v3 - 3));
        v70 = v8;
        v12 = 0xAAAAAAAAAAAAAAABLL * (v9 >> 4);
        v69 = v11;
        if ( v9 > 0 )
        {
          do
          {
            v13 = *(v10 - 6);
            v10 -= 6;
            if ( v13 )
            {
              v14 = (*(_DWORD *)(v13 + 104))-- == 1;
              if ( v14 )
              {
                v15 = (__int64 *)*v10;
                if ( *v10 )
                {
                  sub_2540F0((__int64 *)*v10);
                  v16 = v15[23];
                  if ( v16 )
                  {
                    v17 = v15[24];
                    if ( v17 )
                    {
                      for ( i = 0; i != v17; ++i )
                      {
                        v19 = (__int64 *)(v16 + 24 * i);
                        v20 = *v19;
                        if ( *v19 )
                        {
                          v19[1] = 0;
                          v64 = v17;
                          v60 = i;
                          qfree(v20);
                          v16 = v15[23];
                          v17 = v64;
                          i = v60;
                        }
                      }
                    }
                    v15[24] = 0;
                    qfree(v16);
                  }
                  v21 = v15[20];
                  if ( v21 )
                  {
                    v15[21] = 0;
                    qfree(v21);
                  }
                  v22 = v15[16];
                  if ( v22 )
                  {
                    v23 = v15[17];
                    if ( v23 )
                    {
                      for ( j = 0; j != v23; ++j )
                      {
                        v25 = (__int64 *)(v22 + 32 * j);
                        v26 = *v25;
                        if ( *v25 )
                        {
                          v25[1] = 0;
                          v65 = j;
                          v61 = v23;
                          qfree(v26);
                          v22 = v15[16];
                          j = v65;
                          v23 = v61;
                        }
                      }
                    }
                    v15[17] = 0;
                    qfree(v22);
                  }
                  sub_2507D0((__int64)(v15 + 2));
                  j__qfree(v15);
                }
              }
            }
            v27 = *(v10 - 6);
            *v10 = v27;
            if ( v27 )
              ++*(_DWORD *)(v27 + 104);
            v28 = *((_BYTE *)v10 - 8);
            *(__m128i *)(v10 + 1) = _mm_loadu_si128((const __m128i *)(v10 - 5));
            v29 = _mm_loadu_si128((const __m128i *)(v10 - 3));
            *((_BYTE *)v10 + 40) = v28;
            *(__m128i *)(v10 + 3) = v29;
            --v12;
          }
          while ( v12 );
        }
        v30 = *(__int64 **)a1;
        if ( *(_QWORD *)a1 )
        {
          v14 = (*((_DWORD *)v30 + 26))-- == 1;
          if ( v14 )
          {
            v31 = *(__int64 **)a1;
            if ( *(_QWORD *)a1 )
            {
              sub_2540F0(*(__int64 **)a1);
              v32 = v31[23];
              if ( v32 )
              {
                v33 = v31[24];
                if ( v33 )
                {
                  for ( k = 0; k != v33; ++k )
                  {
                    v35 = (__int64 *)(v32 + 24 * k);
                    v36 = *v35;
                    if ( *v35 )
                    {
                      v35[1] = 0;
                      v62 = v33;
                      qfree(v36);
                      v32 = v31[23];
                      v33 = v62;
                    }
                  }
                }
                v31[24] = 0;
                qfree(v32);
              }
              v37 = v31[20];
              if ( v37 )
              {
                v31[21] = 0;
                qfree(v37);
              }
              v38 = v31[16];
              if ( v38 )
              {
                v39 = v31[17];
                if ( v39 )
                {
                  for ( m = 0; m != v39; ++m )
                  {
                    v41 = (__int64 *)(v38 + 32 * m);
                    v42 = *v41;
                    if ( *v41 )
                    {
                      v41[1] = 0;
                      v63 = v39;
                      qfree(v42);
                      v38 = v31[16];
                      v39 = v63;
                    }
                  }
                }
                v31[17] = 0;
                qfree(v38);
              }
              sub_2507D0((__int64)(v31 + 2));
              j__qfree(v31);
            }
          }
        }
        *(_QWORD *)a1 = v7;
        if ( v7 )
        {
          v43 = _mm_loadu_si128(&v68);
          ++*(_DWORD *)(v7 + 104);
          v44 = v70;
          *(__m128i *)(a1 + 8) = v43;
          v45 = _mm_loadu_si128(&v69);
          *(_BYTE *)(a1 + 40) = v44;
          *(__m128i *)(a1 + 24) = v45;
          v14 = (*(_DWORD *)(v7 + 104))-- == 1;
          if ( v14 )
          {
            sub_2540F0((__int64 *)v7);
            v46 = *(_QWORD *)(v7 + 184);
            if ( v46 )
            {
              v47 = *(_QWORD *)(v7 + 192);
              if ( v47 )
              {
                for ( n = 0; n != v47; ++n )
                {
                  v49 = (__int64 *)(v46 + 24 * n);
                  v50 = *v49;
                  if ( *v49 )
                  {
                    v49[1] = 0;
                    qfree(v50);
                    v46 = *(_QWORD *)(v7 + 184);
                  }
                }
              }
              *(_QWORD *)(v7 + 192) = 0;
              qfree(v46);
            }
            v51 = *(_QWORD *)(v7 + 160);
            if ( v51 )
            {
              *(_QWORD *)(v7 + 168) = 0;
              qfree(v51);
            }
            v52 = *(_QWORD *)(v7 + 128);
            if ( v52 )
            {
              v53 = *(_QWORD *)(v7 + 136);
              if ( v53 )
              {
                for ( ii = 0; ii != v53; ++ii )
                {
                  v55 = (__int64 *)(v52 + 32 * ii);
                  v56 = *v55;
                  if ( *v55 )
                  {
                    v55[1] = 0;
                    qfree(v56);
                    v52 = *(_QWORD *)(v7 + 128);
                  }
                }
              }
              *(_QWORD *)(v7 + 136) = 0;
              qfree(v52);
            }
            sub_2507D0(v7 + 16);
            j__qfree(v7);
          }
        }
        else
        {
          v58 = v70;
          *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v68);
          v59 = _mm_loadu_si128(&v69);
          *(_BYTE *)(a1 + 40) = v58;
          *(__m128i *)(a1 + 24) = v59;
        }
      }
      else
      {
        sub_3AE2E0(v6, a3);
      }
    }
  }
  return v71 - __readfsqword(0x28u);
}

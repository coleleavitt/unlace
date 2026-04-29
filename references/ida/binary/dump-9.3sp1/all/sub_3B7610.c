unsigned __int64 __fastcall sub_3B7610(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64, __int64))
{
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v7; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 *v14; // rdx
  __m128i v15; // xmm0
  __int64 *v17; // rbx
  __int64 v18; // rcx
  __int64 i; // rax
  __int64 *v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rdi
  __int64 v23; // rcx
  __int64 j; // rdx
  __int64 *v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm0
  int v30; // eax
  __int64 v31; // rdi
  __int64 k; // rax
  __int64 *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 m; // rdx
  __int64 *v38; // rax
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // rdi
  __int64 n; // rax
  __int64 *v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 ii; // rdx
  __int64 *v48; // rax
  __int64 v49; // rcx
  __int64 v51; // [rsp+0h] [rbp-B8h]
  __int64 v52; // [rsp+0h] [rbp-B8h]
  __int64 v53; // [rsp+0h] [rbp-B8h]
  __int64 v54; // [rsp+0h] [rbp-B8h]
  __int64 v55; // [rsp+0h] [rbp-B8h]
  __int64 v56; // [rsp+0h] [rbp-B8h]
  __int64 v57; // [rsp+8h] [rbp-B0h]
  __int64 v58; // [rsp+8h] [rbp-B0h]
  __int64 v59; // [rsp+8h] [rbp-B0h]
  __int64 v60; // [rsp+8h] [rbp-B0h]
  __int64 v61; // [rsp+8h] [rbp-B0h]
  __int64 v62; // [rsp+8h] [rbp-B0h]
  __m128i v63; // [rsp+18h] [rbp-A0h] BYREF
  __m128i v64; // [rsp+28h] [rbp-90h] BYREF
  __int64 v65; // [rsp+38h] [rbp-80h]
  __int64 (__fastcall *v66)(__int64, __int64); // [rsp+40h] [rbp-78h] BYREF
  __m128i v67; // [rsp+48h] [rbp-70h]
  __m128i v68; // [rsp+58h] [rbp-60h]
  __int64 v69; // [rsp+68h] [rbp-50h]
  unsigned __int64 v70; // [rsp+78h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  v4 = a2 - a1;
  if ( a2 - a1 > 768 )
  {
    v5 = a3;
    v7 = a2;
    if ( a3 )
    {
      while ( 1 )
      {
        v9 = a1 + 48;
        --v5;
        v10 = v7;
        sub_3B7570(
          a1,
          a1 + 48,
          a1
        + 16
        * (((0xAAAAAAAAAAAAAAABLL * (v4 >> 4)) & 0xFFFFFFFFFFFFFFFELL)
         + ((__int64)(0xAAAAAAAAAAAAAAABLL * (v4 >> 4)) >> 1)),
          v7 - 48,
          a4);
        while ( 1 )
        {
          while ( a4(v9, a1) )
            v9 += 48LL;
          do
            v10 -= 48LL;
          while ( a4(a1, v10) );
          if ( v9 >= v10 )
            break;
          v11 = v9;
          v9 += 48LL;
          sub_3B7340(v11, v10);
        }
        sub_3B7610(v9, v7, v5, a4);
        v4 = v9 - a1;
        if ( (__int64)(v9 - a1) <= 768 )
          break;
        v7 = v9;
        if ( !v5 )
          goto LABEL_11;
      }
    }
    else
    {
LABEL_11:
      v66 = (__int64 (__fastcall *)(__int64, __int64))a4;
      sub_3B6EF0(a1, v7, &v66);
      while ( v7 - a1 > 48 )
      {
        v12 = *(_QWORD *)(v7 - 48);
        v7 -= 48;
        if ( v12 )
          ++*(_DWORD *)(v12 + 104);
        v13 = *(_QWORD *)(v7 + 40);
        v14 = *(__int64 **)v7;
        v63 = _mm_loadu_si128((const __m128i *)(v7 + 8));
        v15 = _mm_loadu_si128((const __m128i *)(v7 + 24));
        v65 = v13;
        v64 = v15;
        if ( v14 )
        {
          if ( (*((_DWORD *)v14 + 26))-- == 1 )
          {
            v17 = *(__int64 **)v7;
            if ( *(_QWORD *)v7 )
            {
              sub_258970(*(__int64 **)v7);
              v18 = v17[23];
              if ( v18 )
              {
                v51 = v17[24];
                if ( v51 )
                {
                  for ( i = 0; i != v51; ++i )
                  {
                    v20 = (__int64 *)(v18 + 24 * i);
                    v21 = *v20;
                    if ( *v20 )
                    {
                      v20[1] = 0;
                      v57 = i;
                      qfree(v21);
                      v18 = v17[23];
                      i = v57;
                    }
                  }
                }
                v17[24] = 0;
                qfree(v18);
              }
              v22 = v17[20];
              if ( v22 )
              {
                v17[21] = 0;
                qfree(v22);
              }
              v23 = v17[16];
              if ( v23 )
              {
                v52 = v17[17];
                if ( v52 )
                {
                  for ( j = 0; j != v52; ++j )
                  {
                    v25 = (__int64 *)(v23 + 32 * j);
                    v26 = *v25;
                    if ( *v25 )
                    {
                      v25[1] = 0;
                      v58 = j;
                      qfree(v26);
                      v23 = v17[16];
                      j = v58;
                    }
                  }
                }
                v17[17] = 0;
                qfree(v23);
              }
              sub_255050((__int64)(v17 + 2));
              j__qfree((__int64)v17);
            }
          }
        }
        v27 = *(_QWORD *)a1;
        *(_QWORD *)v7 = *(_QWORD *)a1;
        if ( v27 )
          ++*(_DWORD *)(v27 + 104);
        v28 = _mm_loadu_si128((const __m128i *)(a1 + 8));
        v66 = (__int64 (__fastcall *)(__int64, __int64))v12;
        *(__m128i *)(v7 + 8) = v28;
        *(__m128i *)(v7 + 24) = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_BYTE *)(v7 + 40) = *(_BYTE *)(a1 + 40);
        if ( v12 )
          ++*(_DWORD *)(v12 + 104);
        v29 = _mm_loadu_si128(&v63);
        v69 = v65;
        v67 = v29;
        v68 = _mm_loadu_si128(&v64);
        sub_3B6810(
          a1,
          0,
          0xAAAAAAAAAAAAAAABLL * ((v7 - a1) >> 4),
          (__int64 *)&v66,
          (__int64 (__fastcall *)(__int64, __int64))a4);
        if ( v12 )
        {
          v30 = *(_DWORD *)(v12 + 104) - 1;
          *(_DWORD *)(v12 + 104) = v30;
          if ( !v30 )
          {
            sub_258970((__int64 *)v12);
            v31 = *(_QWORD *)(v12 + 184);
            if ( v31 )
            {
              v53 = *(_QWORD *)(v12 + 192);
              if ( v53 )
              {
                for ( k = 0; k != v53; ++k )
                {
                  v33 = (__int64 *)(v31 + 24 * k);
                  v34 = *v33;
                  if ( *v33 )
                  {
                    v33[1] = 0;
                    v59 = k;
                    qfree(v34);
                    v31 = *(_QWORD *)(v12 + 184);
                    k = v59;
                  }
                }
              }
              *(_QWORD *)(v12 + 192) = 0;
              qfree(v31);
            }
            v35 = *(_QWORD *)(v12 + 160);
            if ( v35 )
            {
              *(_QWORD *)(v12 + 168) = 0;
              qfree(v35);
            }
            v36 = *(_QWORD *)(v12 + 128);
            if ( v36 )
            {
              v54 = *(_QWORD *)(v12 + 136);
              if ( v54 )
              {
                for ( m = 0; m != v54; ++m )
                {
                  v38 = (__int64 *)(v36 + 32 * m);
                  v39 = *v38;
                  if ( *v38 )
                  {
                    v38[1] = 0;
                    v60 = m;
                    qfree(v39);
                    v36 = *(_QWORD *)(v12 + 128);
                    m = v60;
                  }
                }
              }
              *(_QWORD *)(v12 + 136) = 0;
              qfree(v36);
            }
            sub_255050(v12 + 16);
            j__qfree(v12);
            v30 = *(_DWORD *)(v12 + 104);
          }
          v40 = v30 - 1;
          *(_DWORD *)(v12 + 104) = v40;
          if ( !v40 )
          {
            sub_258970((__int64 *)v12);
            v41 = *(_QWORD *)(v12 + 184);
            if ( v41 )
            {
              v55 = *(_QWORD *)(v12 + 192);
              if ( v55 )
              {
                for ( n = 0; n != v55; ++n )
                {
                  v43 = (__int64 *)(v41 + 24 * n);
                  v44 = *v43;
                  if ( *v43 )
                  {
                    v43[1] = 0;
                    v61 = n;
                    qfree(v44);
                    v41 = *(_QWORD *)(v12 + 184);
                    n = v61;
                  }
                }
              }
              *(_QWORD *)(v12 + 192) = 0;
              qfree(v41);
            }
            v45 = *(_QWORD *)(v12 + 160);
            if ( v45 )
            {
              *(_QWORD *)(v12 + 168) = 0;
              qfree(v45);
            }
            v46 = *(_QWORD *)(v12 + 128);
            if ( v46 )
            {
              v56 = *(_QWORD *)(v12 + 136);
              if ( v56 )
              {
                for ( ii = 0; ii != v56; ++ii )
                {
                  v48 = (__int64 *)(v46 + 32 * ii);
                  v49 = *v48;
                  if ( *v48 )
                  {
                    v48[1] = 0;
                    v62 = ii;
                    qfree(v49);
                    v46 = *(_QWORD *)(v12 + 128);
                    ii = v62;
                  }
                }
              }
              *(_QWORD *)(v12 + 136) = 0;
              qfree(v46);
            }
            sub_255050(v12 + 16);
            j__qfree(v12);
          }
        }
      }
    }
  }
  return v70 - __readfsqword(0x28u);
}

unsigned __int64 __fastcall sub_3B6D50(
        __int64 a1,
        __int64 ii,
        __int64 a3,
        __int64 *a4,
        __int64 (__fastcall *a5)(__int64, __int64))
{
  __int64 v7; // r15
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 *v11; // rdi
  __int64 *v12; // r14
  bool v13; // zf
  __int64 *v14; // rbp
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 i; // rdx
  __int64 *v18; // r8
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // r10
  __int64 v22; // r9
  __int64 j; // r8
  __int64 *v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 *v29; // r13
  unsigned int v30; // eax
  __int64 v31; // r15
  _QWORD *v32; // r14
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 n; // rcx
  __int64 v36; // rdi
  __int64 v37; // rdi
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 *v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rcx
  __int64 v43; // rdx
  char v44; // dl
  __m128i v45; // xmm0
  __int64 v47; // r13
  __int64 v48; // rbp
  __int64 v49; // r15
  __int64 *v50; // rcx
  __int64 *v51; // r14
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 k; // rdx
  __int64 *v55; // rcx
  __int64 v56; // rdi
  __int64 v57; // rdi
  __int64 v58; // r8
  __int64 v59; // r9
  __int64 m; // rcx
  __int64 *v61; // rdx
  __int64 v62; // rdi
  __int64 v63; // rdx
  __int64 v64; // [rsp+0h] [rbp-A8h]
  __int64 v65; // [rsp+0h] [rbp-A8h]
  __int64 v66; // [rsp+0h] [rbp-A8h]
  __int64 v67; // [rsp+8h] [rbp-A0h]
  __int64 v68; // [rsp+10h] [rbp-98h]
  __int64 v69; // [rsp+10h] [rbp-98h]
  __int64 v70; // [rsp+10h] [rbp-98h]
  __int64 v71; // [rsp+10h] [rbp-98h]
  __int64 v72; // [rsp+10h] [rbp-98h]
  __int64 v73; // [rsp+18h] [rbp-90h]
  __int64 v74; // [rsp+18h] [rbp-90h]
  __int64 v75; // [rsp+18h] [rbp-90h]
  __int64 v76; // [rsp+18h] [rbp-90h]
  __int64 v79; // [rsp+30h] [rbp-78h] BYREF
  __m128i v80; // [rsp+38h] [rbp-70h] BYREF
  __m128i v81; // [rsp+48h] [rbp-60h] BYREF
  __int64 v82; // [rsp+58h] [rbp-50h]
  unsigned __int64 v83; // [rsp+68h] [rbp-40h]

  v67 = ii;
  v83 = __readfsqword(0x28u);
  v64 = (a3 - 1) / 2;
  if ( ii >= v64 )
  {
    v7 = ii;
  }
  else
  {
    v7 = ii;
    do
    {
      v8 = a5(a1 + 96 * (v7 + 1), a1 + 96 * (v7 + 1) - 48);
      v9 = v7;
      v7 = 2 * (v7 + 1) - v8;
      v10 = a1 + 48 * v9;
      ii = 48 * v7;
      v11 = *(__int64 **)v10;
      v12 = (__int64 *)(a1 + 48 * v7);
      if ( *(_QWORD *)v10 )
      {
        v13 = (*((_DWORD *)v11 + 26))-- == 1;
        if ( v13 )
        {
          v14 = *(__int64 **)v10;
          if ( *(_QWORD *)v10 )
          {
            sub_258D30(*(__int64 **)v10);
            v15 = v14[23];
            if ( v15 )
            {
              v16 = v14[24];
              if ( v16 )
              {
                for ( i = 0; i != v16; ++i )
                {
                  v18 = (__int64 *)(v15 + 24 * i);
                  v19 = *v18;
                  if ( *v18 )
                  {
                    v18[1] = 0;
                    v73 = i;
                    v68 = v16;
                    qfree(v19);
                    i = v73;
                    v16 = v68;
                    v15 = v14[23];
                  }
                }
              }
              v14[24] = 0;
              qfree(v15);
            }
            v20 = v14[20];
            if ( v20 )
            {
              v14[21] = 0;
              qfree(v20);
            }
            v21 = v14[16];
            if ( v21 )
            {
              v22 = v14[17];
              if ( v22 )
              {
                for ( j = 0; j != v22; ++j )
                {
                  v24 = (__int64 *)(v21 + 32 * j);
                  v25 = *v24;
                  if ( *v24 )
                  {
                    v24[1] = 0;
                    v74 = v22;
                    v69 = j;
                    qfree(v25);
                    v22 = v74;
                    j = v69;
                    v21 = v14[16];
                  }
                }
              }
              v14[17] = 0;
              qfree(v21);
            }
            sub_255410((__int64)(v14 + 2));
            j__qfree(v14);
          }
        }
      }
      v26 = *v12;
      *(_QWORD *)v10 = *v12;
      if ( v26 )
        ++*(_DWORD *)(v26 + 104);
      *(__m128i *)(v10 + 8) = _mm_loadu_si128((const __m128i *)(v12 + 1));
      *(__m128i *)(v10 + 24) = _mm_loadu_si128((const __m128i *)(v12 + 3));
      *(_BYTE *)(v10 + 40) = *((_BYTE *)v12 + 40);
    }
    while ( v7 < v64 );
  }
  if ( (a3 & 1) == 0 && (a3 - 2) / 2 == v7 )
  {
    v47 = 2 * (v7 + 1);
    v48 = a1 + 96 * (v7 + 1) - 48;
    v49 = a1 + 48 * v7;
    v50 = *(__int64 **)v49;
    if ( *(_QWORD *)v49 )
    {
      v13 = (*((_DWORD *)v50 + 26))-- == 1;
      if ( v13 )
      {
        v51 = *(__int64 **)v49;
        if ( *(_QWORD *)v49 )
        {
          sub_258D30(*(__int64 **)v49);
          v52 = v51[23];
          if ( v52 )
          {
            v53 = v51[24];
            if ( v53 )
            {
              for ( k = 0; k != v53; ++k )
              {
                v55 = (__int64 *)(v52 + 24 * k);
                v56 = *v55;
                if ( *v55 )
                {
                  v55[1] = 0;
                  v71 = v53;
                  v65 = k;
                  qfree(v56);
                  v52 = v51[23];
                  v53 = v71;
                  k = v65;
                }
              }
            }
            v51[24] = 0;
            qfree(v52);
          }
          v57 = v51[20];
          if ( v57 )
          {
            v51[21] = 0;
            qfree(v57);
          }
          v58 = v51[16];
          if ( v58 )
          {
            v59 = v51[17];
            if ( v59 )
            {
              for ( m = 0; m != v59; ++m )
              {
                v61 = (__int64 *)(v58 + 32 * m);
                v62 = *v61;
                if ( *v61 )
                {
                  v61[1] = 0;
                  v72 = m;
                  v66 = v59;
                  qfree(v62);
                  v58 = v51[16];
                  m = v72;
                  v59 = v66;
                }
              }
            }
            v51[17] = 0;
            qfree(v58);
          }
          sub_255410((__int64)(v51 + 2));
          j__qfree(v51);
        }
      }
    }
    v63 = *(_QWORD *)v48;
    *(_QWORD *)v49 = *(_QWORD *)v48;
    if ( v63 )
      ++*(_DWORD *)(v63 + 104);
    *(__m128i *)(v49 + 8) = _mm_loadu_si128((const __m128i *)(v48 + 8));
    *(__m128i *)(v49 + 24) = _mm_loadu_si128((const __m128i *)(v48 + 24));
    *(_BYTE *)(v49 + 40) = *(_BYTE *)(v48 + 40);
    v7 = v47 - 1;
  }
  v27 = *a4;
  v79 = v27;
  if ( v27 )
    ++*(_DWORD *)(v27 + 104);
  v80 = _mm_loadu_si128((const __m128i *)(a4 + 1));
  v82 = a4[5];
  v81 = _mm_loadu_si128((const __m128i *)(a4 + 3));
  v28 = (v7 - 1) / 2;
  if ( v7 <= v67 )
  {
    v31 = a1 + 48 * v7;
  }
  else
  {
    while ( 1 )
    {
      v29 = (__int64 *)(a1 + 48 * v28);
      v30 = a5((__int64)v29, (__int64)&v79);
      ii = v30;
      v31 = a1 + 48 * v7;
      if ( !(_BYTE)v30 )
        break;
      ii = *(_QWORD *)v31;
      if ( *(_QWORD *)v31 )
      {
        v13 = (*(_DWORD *)(ii + 104))-- == 1;
        if ( v13 )
        {
          v32 = *(_QWORD **)v31;
          if ( *(_QWORD *)v31 )
          {
            sub_258D30(*(__int64 **)v31);
            v33 = v32[23];
            if ( v33 )
            {
              v34 = v32[24];
              if ( v34 )
              {
                for ( n = 0; n != v34; ++n )
                {
                  ii = v33 + 24 * n;
                  v36 = *(_QWORD *)ii;
                  if ( *(_QWORD *)ii )
                  {
                    *(_QWORD *)(ii + 8) = 0;
                    v75 = v34;
                    v70 = n;
                    qfree(v36);
                    v34 = v75;
                    n = v70;
                    v33 = v32[23];
                  }
                }
              }
              v32[24] = 0;
              qfree(v33);
            }
            v37 = v32[20];
            if ( v37 )
            {
              v32[21] = 0;
              qfree(v37);
            }
            v38 = v32[16];
            if ( v38 )
            {
              v39 = v32[17];
              if ( v39 )
              {
                for ( ii = 0; ii != v39; ++ii )
                {
                  v40 = (__int64 *)(v38 + 32 * ii);
                  v41 = *v40;
                  if ( *v40 )
                  {
                    v40[1] = 0;
                    v76 = v39;
                    qfree(v41);
                    v39 = v76;
                    v38 = v32[16];
                  }
                }
              }
              v32[17] = 0;
              qfree(v38);
            }
            sub_255410((__int64)(v32 + 2));
            j__qfree(v32);
          }
        }
      }
      v42 = *v29;
      *(_QWORD *)v31 = *v29;
      if ( v42 )
        ++*(_DWORD *)(v42 + 104);
      *(__m128i *)(v31 + 8) = _mm_loadu_si128((const __m128i *)(v29 + 1));
      *(__m128i *)(v31 + 24) = _mm_loadu_si128((const __m128i *)(v29 + 3));
      *(_BYTE *)(v31 + 40) = *((_BYTE *)v29 + 40);
      v7 = v28;
      if ( v67 >= v28 )
      {
        v31 = a1 + 48 * v28;
        break;
      }
      v28 = (v28 - 1) / 2;
    }
  }
  sub_13FB80((_QWORD *)v31, ii);
  v43 = v79;
  *(_QWORD *)v31 = v79;
  if ( v43 )
    ++*(_DWORD *)(v43 + 104);
  v44 = v82;
  *(__m128i *)(v31 + 8) = _mm_loadu_si128(&v80);
  v45 = _mm_loadu_si128(&v81);
  *(_BYTE *)(v31 + 40) = v44;
  *(__m128i *)(v31 + 24) = v45;
  sub_13FB80(&v79, ii);
  return v83 - __readfsqword(0x28u);
}

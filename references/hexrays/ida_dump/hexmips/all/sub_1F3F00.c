unsigned __int64 __fastcall sub_1F3F00(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // rdx
  __int64 v5; // rax
  __m128i v6; // xmm0
  __int64 v7; // rsi
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdi
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rdi
  __int64 v18; // rbp
  __int64 j; // r14
  _QWORD *v20; // r15
  __int64 v21; // rdi
  __int64 v22; // rdi
  _QWORD *v23; // rax
  _QWORD *v24; // rbp
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rdx
  __int64 v29; // rbx
  __int64 v30; // rbp
  int v31; // ebx
  __int64 k; // rax
  _QWORD *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rax
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // [rsp+0h] [rbp-110h]
  __int64 i; // [rsp+8h] [rbp-108h]
  __m128 v50; // [rsp+28h] [rbp-E8h] BYREF
  _QWORD v51[2]; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+48h] [rbp-C8h]
  __m128i v53; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v54; // [rsp+60h] [rbp-B0h]
  __m128i v55; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+78h] [rbp-98h]
  unsigned __int64 v57; // [rsp+80h] [rbp-90h]
  __int64 v58[2]; // [rsp+88h] [rbp-88h] BYREF
  __int64 v59; // [rsp+98h] [rbp-78h]
  __m128i v60; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v61; // [rsp+B0h] [rbp-60h]
  __m128i v62; // [rsp+B8h] [rbp-58h] BYREF
  unsigned __int64 v63; // [rsp+D0h] [rbp-40h]

  v63 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( *(_DWORD *)(a2 + 64) )
    *(_QWORD *)a1 = qvector_reserve(a1, 0, *(int *)(a2 + 64), 80);
  for ( i = *(_QWORD *)(a2 + 520); i; i = *(_QWORD *)(i + 8) )
  {
    v3 = *(_QWORD *)a1;
    v51[0] = 0;
    v53 = 0;
    v4 = *(_QWORD *)(a1 + 16);
    v51[1] = 0;
    v52 = 0;
    v50 = _mm_loadh_ps((const double *)(i + 48));
    v54 = 0;
    v55 = 0;
    if ( (unsigned __int64)&v50 < v3 || (unsigned __int64)&v50 >= v3 + 80 * v4 )
    {
      v37 = *(_QWORD *)(a1 + 8);
      if ( v4 < v37 + 1 )
      {
        v42 = qvector_reserve(a1, v3, v37 + 1, 80);
        *(_QWORD *)a1 = v42;
        v3 = v42;
        v37 = *(_QWORD *)(a1 + 8);
      }
      v38 = v3 + 80 * v37;
      *(__m128 *)v38 = v50;
      sub_5FE00((__int64 *)(v38 + 16), (__int64)v51);
      v39 = v52;
      v40 = _mm_loadu_si128(&v53);
      v52 = 0;
      v53 = 0;
      *(_QWORD *)(v38 + 32) = v39;
      *(__m128i *)(v38 + 40) = v40;
      v41 = _mm_load_si128(&v55);
      *(_QWORD *)(v38 + 56) = v54;
      *(__m128i *)(v38 + 64) = v41;
      ++*(_QWORD *)(a1 + 8);
    }
    else
    {
      v56 = i;
      v57 = v50.m128_u64[1];
      sub_5FE00(v58, (__int64)v51);
      v5 = v52;
      v6 = _mm_loadu_si128(&v53);
      v52 = 0;
      v7 = *(_QWORD *)a1;
      v53 = 0;
      v59 = v5;
      v60 = v6;
      v8 = _mm_load_si128(&v55);
      v61 = v54;
      v9 = *(_QWORD *)(a1 + 8);
      v54 = 0;
      v62 = v8;
      v55 = 0;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v9 + 1) )
      {
        v46 = qvector_reserve(a1, v7, v9 + 1, 80);
        *(_QWORD *)a1 = v46;
        v7 = v46;
        v9 = *(_QWORD *)(a1 + 8);
      }
      v10 = v7 + 80 * v9;
      *(_QWORD *)v10 = v56;
      *(_QWORD *)(v10 + 8) = v57;
      sub_5FE00((__int64 *)(v10 + 16), (__int64)v58);
      v11 = v58[0];
      v12 = _mm_loadu_si128(&v60);
      *(_QWORD *)(v10 + 32) = v59;
      *(__m128i *)(v10 + 40) = v12;
      v13 = _mm_load_si128(&v62);
      *(_QWORD *)(v10 + 56) = v61;
      *(__m128i *)(v10 + 64) = v13;
      qfree(v11);
      v14 = v54;
      ++*(_QWORD *)(a1 + 8);
      if ( v14 )
      {
        v47 = v55.m128i_i64[0];
        if ( v55.m128i_i64[0] )
        {
          v15 = 0;
          do
          {
            v16 = (_QWORD *)(v14 + 96 * v15);
            v17 = v16[5];
            if ( v17 )
            {
              v18 = v16[6];
              if ( v18 )
              {
                for ( j = 0; j != v18; ++j )
                {
                  v20 = (_QWORD *)(v17 + 40 * j);
                  v21 = v20[2];
                  if ( v21 )
                  {
                    v20[3] = 0;
                    qfree(v21);
                  }
                  qfree(*v20);
                  v17 = v16[5];
                }
              }
              v16[6] = 0;
              qfree(v17);
            }
            v22 = v16[2];
            if ( v22 )
            {
              v16[3] = 0;
              qfree(v22);
            }
            ++v15;
            qfree(*v16);
            v14 = v54;
          }
          while ( v47 != v15 );
        }
        v55.m128i_i64[0] = 0;
        qfree(v14);
      }
    }
    if ( v52 )
    {
      v53.m128i_i64[0] = 0;
      qfree(v52);
    }
    qfree(v51[0]);
  }
  v23 = *(_QWORD **)(a2 + 800);
  v24 = (_QWORD *)*v23;
  if ( *v23 && v23[1] )
  {
    v25 = (_QWORD *)v24[1];
LABEL_28:
    while ( v24 != v25 )
    {
      while ( 1 )
      {
        v26 = *(_QWORD *)(a2 + 432) + 104LL * *((int *)v25 + 12);
        if ( (*(_BYTE *)(v26 + 27) & 2) != 0 )
        {
          v27 = v25[3];
          if ( *(_BYTE *)v27 == 15 && *(_DWORD *)(v27 + 4) <= *(_DWORD *)(v26 + 88) )
            sub_1ED840(
              (_QWORD *)(*(_QWORD *)a1 + 80LL * *((int *)v25 + 18)),
              *((_DWORD *)v25 + 12),
              v25[7],
              v27,
              *((_BYTE *)v25 + 76));
        }
        if ( (*v25 & 2) != 0 )
          break;
        v28 = (_QWORD *)v25[2];
        if ( (*(_BYTE *)v28 & 2) != 0 )
        {
          v43 = (_QWORD *)(*v25 & 0xFFFFFFFFFFFFFFFCLL);
          v44 = *v43;
          if ( (*v43 & 2) == 0 )
          {
            while ( (_QWORD *)v43[2] == v25 )
            {
              v25 = v43;
              v45 = v44 & 0xFFFFFFFFFFFFFFFCLL;
              v44 = *(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (v44 & 2) != 0 )
              {
                v25 = (_QWORD *)v45;
                goto LABEL_28;
              }
              v43 = (_QWORD *)v45;
            }
          }
          v25 = v43;
          goto LABEL_28;
        }
        do
        {
          v25 = v28;
          v28 = (_QWORD *)v28[1];
        }
        while ( (*(_BYTE *)v28 & 2) == 0 );
        if ( v24 == v25 )
          goto LABEL_35;
      }
    }
  }
LABEL_35:
  v29 = *(_QWORD *)a1;
  v30 = *(_QWORD *)a1 + 80LL * *(_QWORD *)(a1 + 8);
  if ( v30 != *(_QWORD *)a1 )
  {
    do
    {
      sub_1F3E40(v29);
      v29 += 80;
    }
    while ( v30 != v29 );
  }
  v31 = 0;
  for ( k = 0; (unsigned __int64)v31 < *(_QWORD *)(a2 + 440); k = v31 )
  {
    v33 = (_QWORD *)(*(_QWORD *)a1 + 80LL * *(int *)(*(_QWORD *)(a2 + 432) + 104 * k + 92));
    if ( *(_QWORD *)(*v33 + 48LL) && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v33 + 64LL) + 432LL) + 104 * k + 27) & 2) != 0 )
    {
      v34 = v33[7];
      v35 = v34 + 96LL * v33[8];
      if ( v34 == v35 )
      {
LABEL_58:
        sub_1ED840(v33, v31, 0, 0, 0);
      }
      else
      {
        while ( v31 != *(_DWORD *)(v34 + 80) || !*(_BYTE *)(v34 + 84) )
        {
          v34 += 96;
          if ( v35 == v34 )
            goto LABEL_58;
        }
      }
    }
    ++v31;
  }
  return v63 - __readfsqword(0x28u);
}

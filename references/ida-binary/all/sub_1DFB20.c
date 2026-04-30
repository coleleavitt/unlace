void __fastcall sub_1DFB20(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // ecx
  signed int *v4; // rbp
  __int64 v5; // r14
  __int64 v6; // rdx
  int v7; // eax
  unsigned int i; // ebx
  int v9; // r11d
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // rdi
  signed int *v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rdx
  unsigned int v20; // esi
  signed int v21; // r11d
  int v22; // r10d
  unsigned int v23; // r13d
  __m128i v24; // xmm1
  __int64 v25; // rsi
  int v26; // r15d
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  bool v31; // cf
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // r15
  signed int *v34; // rdx
  unsigned int *v35; // rax
  signed int *v36; // rax
  signed int *v37; // rsi
  __int64 v38; // rdi
  unsigned __int64 v39; // rbp
  signed int *v40; // rbx
  __int64 v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  char *v45; // rax
  __m128i si128; // xmm2
  char *v47; // rdx
  char *v48; // r9
  __int64 v49; // r15
  char *v50; // r13
  char *v51; // r12
  char *v52; // rbp
  __m128i v53; // xmm0
  __int64 v54; // rcx
  __m128i v55; // xmm0
  __int64 v56; // rdi
  char *v57; // r15
  signed int *v58; // [rsp+0h] [rbp-88h]
  signed int *v59; // [rsp+8h] [rbp-80h]
  int v60; // [rsp+10h] [rbp-78h]
  unsigned __int64 v61; // [rsp+10h] [rbp-78h]
  __int64 v62; // [rsp+10h] [rbp-78h]
  int v63; // [rsp+18h] [rbp-70h]
  signed int *v64; // [rsp+18h] [rbp-70h]
  char *v65; // [rsp+18h] [rbp-70h]
  int v66; // [rsp+20h] [rbp-68h]
  char *v67; // [rsp+20h] [rbp-68h]
  char *v68; // [rsp+20h] [rbp-68h]
  signed int v69; // [rsp+28h] [rbp-60h]
  __int64 v70; // [rsp+38h] [rbp-50h]

  v2 = (__int64)a1;
  v3 = xmmword_8CC398 - 1;
  if ( (int)xmmword_8CC398 - 1 < 0 )
  {
    v12 = *a1;
    v13 = a1[1];
    if ( v13 != *a1 )
    {
      v59 = nullptr;
      v4 = nullptr;
      v58 = nullptr;
      goto LABEL_17;
    }
    sub_1DF9A0(a1);
    sub_1DFA40((__int64)a1);
    return;
  }
  v4 = nullptr;
  v59 = nullptr;
  v58 = nullptr;
  v5 = 56LL * v3;
  do
  {
    v6 = v5 + qword_8CC390;
    a2 = *(int *)(v5 + qword_8CC390 + 44);
    if ( (*(_BYTE *)(v2 + 24) & *(_BYTE *)(*(_QWORD *)(dbg + 56LL) + 32 * a2 + 12)) == 0 )
      goto LABEL_10;
    for ( i = 0; i != 32; ++i )
    {
      v7 = *(unsigned __int8 *)(*(_QWORD *)(dbg + 56LL) + 32 * a2 + 12);
      if ( _bittest(&v7, i) )
      {
        v9 = v3;
        if ( *(_BYTE *)(v6 + 32) == 0xFF )
          goto LABEL_33;
LABEL_8:
        v9 = -v9;
        if ( v4 == v59 )
          goto LABEL_34;
LABEL_9:
        *v4 = i;
        v4 += 3;
        *(v4 - 2) = a2;
        *(v4 - 1) = v9;
        goto LABEL_10;
      }
    }
    i = -1;
    v9 = v3;
    if ( *(_BYTE *)(v6 + 32) != 0xFF )
      goto LABEL_8;
LABEL_33:
    a2 = 0xFFFFFFFFLL;
    if ( v4 != v59 )
      goto LABEL_9;
LABEL_34:
    v29 = 0xAAAAAAAAAAAAAAABLL * (v4 - v58);
    if ( v29 == 0xAAAAAAAAAAAAAAALL )
      std::__throw_length_error("vector::_M_realloc_append");
    v30 = 1;
    if ( v29 )
      v30 = 0xAAAAAAAAAAAAAAABLL * (v4 - v58);
    v31 = __CFADD__(v30, v29);
    v32 = v30 - 0x5555555555555555LL * (v4 - v58);
    if ( v31 )
    {
      v33 = 0x1FFFFFFFFFFFFFFELL;
    }
    else
    {
      if ( v32 > 0xAAAAAAAAAAAAAAALL )
        v32 = 0xAAAAAAAAAAAAAAALL;
      v33 = 3 * v32;
    }
    v66 = v3;
    v60 = v9;
    a2 = (unsigned int)a2;
    v34 = (signed int *)operator new(v33 * 4);
    v3 = v66;
    v35 = (unsigned int *)((char *)v34 + (char *)v4 - (char *)v58);
    *v35 = i;
    v35[1] = a2;
    v35[2] = v60;
    v36 = v58;
    if ( v58 == v4 )
    {
      v39 = (unsigned __int64)v34;
    }
    else
    {
      v37 = v34;
      do
      {
        v38 = *(_QWORD *)v36;
        v36 += 3;
        v37 += 3;
        *(_QWORD *)(v37 - 3) = v38;
        *(v37 - 1) = *(v36 - 1);
      }
      while ( v36 != v4 );
      a2 = (__int64)v58;
      v39 = (unsigned __int64)&v34[((unsigned __int64)((char *)(v36 - 3) - (char *)v58) >> 2) + 3];
    }
    v4 = (signed int *)(v39 + 12);
    if ( v58 )
    {
      v61 = (unsigned __int64)v34;
      a2 = (char *)v59 - (char *)v58;
      operator delete(v58, (char *)v59 - (char *)v58);
      v34 = (signed int *)v61;
      v3 = v66;
    }
    v58 = v34;
    v59 = &v34[v33];
LABEL_10:
    --v3;
    v5 -= 56;
  }
  while ( v3 != -1 );
  if ( v58 == v4 )
  {
    v12 = *(_QWORD *)v2;
    v13 = *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)v2 != v13 )
      goto LABEL_17;
    goto LABEL_71;
  }
  v10 = 0xAAAAAAAAAAAAAAABLL * (v4 - v58);
  v11 = -2;
  if ( v10 )
  {
    _BitScanReverse64(&v10, v10);
    v11 = 2LL * (int)v10;
  }
  sub_1DF590((unsigned int *)v58, v4, v11);
  if ( (char *)v4 - (char *)v58 > 192 )
  {
    v40 = v58 + 48;
    a2 = (__int64)(v58 + 48);
    sub_1DF260(v58, v58 + 48);
    if ( v58 + 48 != v4 )
    {
      do
      {
        v41 = (__int64)v40;
        v40 += 3;
        sub_1DF050(v41);
      }
      while ( v4 != v40 );
    }
  }
  else
  {
    a2 = (__int64)v4;
    sub_1DF260(v58, v4);
  }
  v12 = *(_QWORD *)v2;
  v13 = *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)v2 == v13 )
  {
LABEL_22:
    v17 = v58;
    while ( 1 )
    {
      v18 = *(_QWORD *)(v2 + 8);
      v19 = *(_QWORD *)v2;
      v20 = *v17;
      if ( v18 == *(_QWORD *)v2 )
      {
        v21 = v17[1];
        v22 = 0;
        v23 = (unsigned int)v17[2] >> 31;
        if ( v18 == *(_QWORD *)(v2 + 16) )
        {
LABEL_54:
          v42 = 0x6DB6DB6DB6DB6DB7LL * ((v18 - v19) >> 3);
          if ( v42 == 0x249249249249249LL )
            std::__throw_length_error("vector::_M_realloc_append");
          v43 = 1;
          if ( v42 )
            v43 = 0x6DB6DB6DB6DB6DB7LL * ((v18 - v19) >> 3);
          v31 = __CFADD__(v43, v42);
          v44 = v43 + v42;
          if ( v31 )
          {
            v62 = 0x7FFFFFFFFFFFFFF8LL;
          }
          else
          {
            if ( v44 > 0x249249249249249LL )
              v44 = 0x249249249249249LL;
            v62 = 56 * v44;
          }
          v70 = v18 - v19;
          v69 = v21;
          v67 = *(char **)v2;
          v63 = v22;
          v45 = (char *)operator new(v62);
          si128 = _mm_load_si128((const __m128i *)&xmmword_5DC610);
          v47 = v67;
          v48 = &v45[v70];
          *(_DWORD *)v48 = v20;
          *((_DWORD *)v48 + 1) = v69;
          *((_DWORD *)v48 + 2) = v63;
          v48[12] = v23;
          *((_QWORD *)v48 + 2) = 0;
          *(_OWORD *)(v48 + 24) = 0;
          *(__m128i *)(v48 + 40) = si128;
          if ( (char *)v18 == v67 )
          {
            v57 = v45;
          }
          else
          {
            v68 = v45;
            v49 = v2;
            v50 = v47;
            v51 = v47;
            v64 = v4;
            v52 = v45;
            do
            {
              *(_QWORD *)v52 = *(_QWORD *)v51;
              *((_DWORD *)v52 + 2) = *((_DWORD *)v51 + 2);
              v52[12] = v51[12];
              v53 = _mm_loadu_si128((const __m128i *)(v51 + 24));
              *((_QWORD *)v51 + 4) = 0;
              v54 = *((_QWORD *)v51 + 2);
              *(__m128i *)(v52 + 24) = v53;
              *((_QWORD *)v52 + 2) = v54;
              v55 = _mm_loadu_si128((const __m128i *)(v51 + 40));
              *((_QWORD *)v51 + 2) = 0;
              *(__m128i *)(v52 + 40) = v55;
              v56 = *((_QWORD *)v51 + 2);
              if ( v56 )
              {
                *((_QWORD *)v51 + 3) = 0;
                qfree(v56, (const char *)v20);
              }
              v51 += 56;
              v52 += 56;
            }
            while ( (char *)v18 != v51 );
            v2 = v49;
            v45 = v68;
            v57 = v52;
            v4 = v64;
            v47 = v50;
          }
          v18 = (__int64)(v57 + 56);
          if ( v47 )
          {
            v65 = v45;
            operator delete(v47, *(_QWORD *)(v2 + 16) - (_QWORD)v47);
            v45 = v65;
          }
          *(_QWORD *)v2 = v45;
          *(_QWORD *)(v2 + 8) = v18;
          *(_QWORD *)(v2 + 16) = &v45[v62];
          goto LABEL_28;
        }
      }
      else
      {
        if ( *(_DWORD *)(v18 - 56) == v20 && *(_DWORD *)(v18 - 52) == v17[1] )
          goto LABEL_28;
        v21 = v17[1];
        v22 = 1;
        v23 = (unsigned int)v17[2] >> 31;
        if ( v18 == *(_QWORD *)(v2 + 16) )
          goto LABEL_54;
      }
      v24 = _mm_load_si128((const __m128i *)&xmmword_5DC610);
      *(_DWORD *)v18 = v20;
      *(_DWORD *)(v18 + 4) = v21;
      *(_DWORD *)(v18 + 8) = v22;
      *(_BYTE *)(v18 + 12) = v23;
      *(_QWORD *)(v18 + 16) = 0;
      *(_OWORD *)(v18 + 24) = 0;
      *(__m128i *)(v18 + 40) = v24;
      v18 = *(_QWORD *)(v2 + 8) + 56LL;
      *(_QWORD *)(v2 + 8) = v18;
LABEL_28:
      v25 = *(_QWORD *)(v18 - 40);
      v26 = -v17[2];
      if ( v17[2] > 0 )
        v26 = v17[2];
      v27 = *(_QWORD *)(v18 - 32);
      if ( *(_QWORD *)(v18 - 24) < (unsigned __int64)(v27 + 1) )
      {
        v28 = qvector_reserve(v18 - 40, v25, v27 + 1, 4);
        *(_QWORD *)(v18 - 40) = v28;
        v25 = v28;
        v27 = *(_QWORD *)(v18 - 32);
      }
      v17 += 3;
      *(_DWORD *)(v25 + 4 * v27) = v26;
      ++*(_QWORD *)(v18 - 32);
      if ( v4 == v17 )
        goto LABEL_79;
    }
  }
LABEL_17:
  v14 = v12;
  v15 = v12;
  do
  {
    v16 = *(_QWORD *)(v14 + 16);
    if ( v16 )
    {
      *(_QWORD *)(v14 + 24) = 0;
      qfree(v16, (const char *)a2);
    }
    v14 += 56;
  }
  while ( v13 != v14 );
  *(_QWORD *)(v2 + 8) = v15;
  if ( v58 != v4 )
    goto LABEL_22;
LABEL_79:
  v4 = v58;
LABEL_71:
  sub_1DF9A0((__int64 *)v2);
  sub_1DFA40(v2);
  if ( v4 )
    operator delete(v4, (char *)v59 - (char *)v4);
}

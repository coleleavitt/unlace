__int64 __fastcall sub_13AE030(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, unsigned int a5)
{
  __int64 v8; // r12
  __int64 v9; // rsi
  _BYTE *v10; // rax
  __int64 v11; // rdi
  int v13; // eax
  _BYTE *v14; // r13
  __int64 v15; // rax
  __m128i v16; // xmm0
  unsigned __int8 v17; // dl
  unsigned __int8 v18; // cl
  char v19; // dl
  char v20; // cl
  _DWORD *v21; // rdi
  unsigned __int64 v23; // rbp
  __int64 v24; // rdi
  __m128i v25; // xmm0
  unsigned int v26; // eax
  _DWORD *v27; // r13
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rcx
  bool v30; // zf
  char *v31; // rsi
  unsigned __int64 v32; // rdx
  char v33; // bp
  char *v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rcx
  unsigned int v37; // eax
  __m128i si128; // xmm0
  size_t v39; // rbp
  __m128i v40; // xmm0
  char v41; // al
  __m128i v42; // xmm0
  char *v43; // rsi
  __int64 v44; // r13
  __int64 v45; // rdx
  __int64 v46; // rdx
  unsigned __int64 v47; // rax
  char *v48; // rbp
  char *v49; // rsi
  _BYTE *v50; // r13
  unsigned __int64 v51; // rdx
  char *v52; // rsi
  _BYTE *v53; // rax
  __int64 v54; // rdi
  __int64 i; // rdx
  __m128i v56; // [rsp+0h] [rbp-A8h] BYREF
  _DWORD *v57; // [rsp+18h] [rbp-90h]
  unsigned int v58; // [rsp+2Ch] [rbp-7Ch] BYREF
  _BYTE *v59; // [rsp+30h] [rbp-78h] BYREF
  unsigned int *v60; // [rsp+38h] [rbp-70h] BYREF
  void *ptr; // [rsp+40h] [rbp-68h] BYREF
  __m128i v62; // [rsp+48h] [rbp-60h]
  _DWORD v63[20]; // [rsp+58h] [rbp-50h] BYREF

  v8 = a1 + 24;
  v9 = *a4;
  v10 = (_BYTE *)(a2 + *a4);
  v11 = (unsigned int)(char)*v10;
  if ( *v10 == 9 )
  {
    if ( v9 )
    {
      v36 = v9 - 1;
      if ( *(_BYTE *)(v9 + a2 - 1) != 9 )
      {
        do
        {
          v37 = v9 - v36;
          if ( !v36 )
            break;
          --v36;
        }
        while ( *(_BYTE *)(a2 + v36) != 9 );
        a5 -= v37 % a5;
      }
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
    v39 = a5;
    *a4 = v9 + 1;
    v62 = si128;
    ptr = v63;
    if ( a5 > 0x10 )
    {
      v56 = si128;
      sub_2236E10(&ptr, v63, a5, 1);
      memset(ptr, 32, v39);
      v62.m128i_i64[0] = v39;
      si128 = _mm_load_si128(&v56);
    }
    else
    {
      if ( a5 )
      {
        v56 = si128;
        memset(v63, 32, a5);
        si128 = _mm_load_si128(&v56);
      }
      v62.m128i_i64[0] = v39;
    }
    *(_QWORD *)a1 = v8;
    *(__m128i *)(a1 + 8) = si128;
    if ( v39 )
      sub_9C3DB0((void **)a1, (const void **)&ptr);
    goto LABEL_33;
  }
  v59 = (_BYTE *)(a2 + *a4);
  if ( (v11 & 0x80u) == 0LL )
  {
    if ( (unsigned __int8)sub_222E910(v11) )
    {
      v40 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
      ++*a4;
      v62 = v40;
      ptr = v63;
      v41 = *v59;
      *(_QWORD *)a1 = v8;
      *(__m128i *)(a1 + 8) = v40;
      LOBYTE(v63[0]) = v41;
      v62.m128i_i64[0] = 1;
      sub_9C3C90((char **)a1, (char **)&ptr);
      v21 = ptr;
      *(_BYTE *)(a1 + 40) = 1;
      if ( v21 == v63 )
        return a1;
      goto LABEL_7;
    }
    v10 = v59;
  }
  v13 = sub_2218990((unsigned __int8)*v10);
  v14 = &v59[v13];
  if ( (unsigned __int64)v14 <= a2 + a3 && (unsigned __int8)sub_22187D0(v59, &v59[v13]) )
  {
    v60 = &v58;
    v23 = (unsigned __int64)v59;
    sub_2218E30(&v59, v14, &v60, &v59, 0);
    v24 = v58;
    *a4 += (__int64)&v59[-v23];
    if ( !(unsigned __int8)sub_222E910(v24) )
    {
      v25 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
      LOBYTE(v26) = v58;
      v27 = v63;
      v63[0] = 1043027260;
      ptr = v63;
      v62.m128i_i64[1] = v25.m128i_i64[1];
      v62.m128i_i64[0] = 4;
      if ( v58 )
      {
        v28 = 16;
        v29 = 4;
        v57 = v63;
        while ( 1 )
        {
          v31 = (char *)v27 + 3;
          v32 = v29 + 1;
          v33 = a0123456789abcd_3[v26 & 0xF];
          v34 = (char *)v27 + v29;
          if ( (char *)v27 + 3 == (char *)v27 + v29 )
          {
            if ( v32 > v28 )
            {
              v56 = v25;
              sub_2236E10(&ptr, v57, v32, 1);
              v25 = _mm_load_si128(&v56);
              v34 = (char *)ptr + v62.m128i_i64[0];
            }
            *v34 = v33;
            v29 = ++v62.m128i_i64[0];
          }
          else
          {
            if ( v32 > v28 )
            {
              v56 = v25;
              sub_2236E10(&ptr, v57, v32, 1);
              v27 = ptr;
              v29 = v62.m128i_i64[0];
              v25 = _mm_load_si128(&v56);
              v31 = (char *)ptr + 3;
              v34 = (char *)ptr + v62.m128i_i64[0];
            }
            *v34 = *((_BYTE *)v27 + v29 - 1);
            v35 = v62.m128i_i64[0];
            if ( (char *)ptr + v62.m128i_i64[0] - 1 != v31 )
            {
              v56 = v25;
              memmove(v31 + 1, v31, (char *)ptr + v62.m128i_i64[0] - 1 - v31);
              v35 = v62.m128i_i64[0];
              v25 = _mm_load_si128(&v56);
            }
            v62.m128i_i64[0] = v35 + 1;
            *((_BYTE *)v27 + 3) = v33;
            v29 = v62.m128i_i64[0];
          }
          v30 = v58 >> 4 == 0;
          v26 = v58 >> 4;
          v58 >>= 4;
          if ( v30 )
            break;
          v27 = ptr;
          v28 = v62.m128i_u64[1];
        }
        if ( v29 > 7 )
        {
LABEL_79:
          *(_QWORD *)a1 = v8;
          *(__m128i *)(a1 + 8) = v25;
          sub_9C3DB0((void **)a1, (const void **)&ptr);
          v21 = ptr;
          *(_BYTE *)(a1 + 40) = 0;
          if ( v21 == v63 )
            return a1;
          goto LABEL_7;
        }
      }
      else
      {
        v29 = 4;
      }
      do
      {
        v50 = ptr;
        v51 = v29 + 1;
        v52 = (char *)ptr + 3;
        v53 = (char *)ptr + v29;
        if ( (char *)ptr + 3 == (char *)ptr + v29 )
        {
          if ( v62.m128i_i64[1] < v51 )
          {
            v56 = v25;
            sub_2236E10(&ptr, v63, v51, 1);
            v25 = _mm_load_si128(&v56);
            v53 = (char *)ptr + v62.m128i_i64[0];
          }
          *v53 = 48;
          v29 = ++v62.m128i_i64[0];
        }
        else
        {
          if ( v62.m128i_i64[1] < v51 )
          {
            v56 = v25;
            sub_2236E10(&ptr, v63, v51, 1);
            v50 = ptr;
            v29 = v62.m128i_i64[0];
            v25 = _mm_load_si128(&v56);
            v52 = (char *)ptr + 3;
            v53 = (char *)ptr + v62.m128i_i64[0];
          }
          *v53 = v50[v29 - 1];
          v54 = v62.m128i_i64[0];
          if ( (char *)ptr + v62.m128i_i64[0] - 1 != v52 )
          {
            v56 = v25;
            memmove(v52 + 1, v52, (char *)ptr + v62.m128i_i64[0] - 1 - v52);
            v54 = v62.m128i_i64[0];
            v25 = _mm_load_si128(&v56);
          }
          v62.m128i_i64[0] = v54 + 1;
          v50[3] = 48;
          v29 = v62.m128i_i64[0];
        }
      }
      while ( v29 <= 7 );
      goto LABEL_79;
    }
    v42 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
    v43 = (char *)v63;
    v44 = (__int64)&v14[-v23];
    v45 = 0;
    ptr = v63;
    v62 = v42;
    if ( (unsigned __int64)v44 > 0x10 )
    {
      v56 = v42;
      sub_2236E10(&ptr, v63, v44, 1);
      v45 = v62.m128i_i64[0];
      v42 = _mm_load_si128(&v56);
      v43 = (char *)ptr + v62.m128i_i64[0];
    }
    if ( v44 > 0 )
    {
      if ( ((unsigned __int64)v43 >= v23 + 16 || v23 >= (unsigned __int64)(v43 + 16))
        && (unsigned __int64)(v44 - 1) > 0xE )
      {
        v46 = 0;
        do
        {
          *(__m128i *)&v43[v46] = _mm_loadu_si128((const __m128i *)(v23 + v46));
          v46 += 16;
        }
        while ( (v44 & 0xFFFFFFFFFFFFFFF0LL) != v46 );
        v47 = v44 - (v44 & 0xFFFFFFFFFFFFFFF0LL);
        v48 = (char *)((v44 & 0xFFFFFFFFFFFFFFF0LL) + v23);
        v49 = &v43[v44 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v44 & 0xFFFFFFFFFFFFFFF0LL) != v44 )
        {
          *v49 = *v48;
          if ( v47 != 1 )
          {
            v49[1] = v48[1];
            if ( v47 != 2 )
            {
              v49[2] = v48[2];
              if ( v47 != 3 )
              {
                v49[3] = v48[3];
                if ( v47 != 4 )
                {
                  v49[4] = v48[4];
                  if ( v47 != 5 )
                  {
                    v49[5] = v48[5];
                    if ( v47 != 6 )
                    {
                      v49[6] = v48[6];
                      if ( v47 != 7 )
                      {
                        v49[7] = v48[7];
                        if ( v47 != 8 )
                        {
                          v49[8] = v48[8];
                          if ( v47 != 9 )
                          {
                            v49[9] = v48[9];
                            if ( v47 != 10 )
                            {
                              v49[10] = v48[10];
                              if ( v47 != 11 )
                              {
                                v49[11] = v48[11];
                                if ( v47 != 12 )
                                {
                                  v49[12] = v48[12];
                                  if ( v47 != 13 )
                                  {
                                    v49[13] = v48[13];
                                    if ( v47 != 14 )
                                      v49[14] = v48[14];
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        for ( i = 0; i != v44; ++i )
          v43[i] = *(_BYTE *)(v23 + i);
      }
      v45 = v62.m128i_i64[0];
    }
    *(_QWORD *)a1 = v8;
    v62.m128i_i64[0] = v44 + v45;
    *(__m128i *)(a1 + 8) = v42;
    if ( v44 + v45 )
      sub_9C3C90((char **)a1, (char **)&ptr);
LABEL_33:
    v21 = ptr;
    *(_BYTE *)(a1 + 40) = 1;
    if ( v21 == v63 )
      return a1;
    goto LABEL_7;
  }
  v15 = *a4;
  v16 = _mm_load_si128((const __m128i *)&xmmword_23A8E00);
  v63[0] = 1045977148;
  v62.m128i_i64[1] = v16.m128i_i64[1];
  ptr = v63;
  v62.m128i_i64[0] = 4;
  v17 = *(_BYTE *)(a2 + v15);
  *a4 = v15 + 1;
  v18 = v17;
  *(_QWORD *)a1 = v8;
  v19 = a0123456789abcd_3[v17 & 0xF];
  *(__m128i *)(a1 + 8) = v16;
  v20 = a0123456789abcd_3[v18 >> 4];
  BYTE2(v63[0]) = v19;
  BYTE1(v63[0]) = v20;
  sub_9C3DB0((void **)a1, (const void **)&ptr);
  v21 = ptr;
  *(_BYTE *)(a1 + 40) = 0;
  if ( v21 != v63 )
LABEL_7:
    free(v21);
  return a1;
}

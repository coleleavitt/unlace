__int64 __fastcall sub_224BAE0(_BYTE *a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  size_t v9; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  __m128i *v12; // rdi
  size_t v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdx
  _QWORD *v17; // r11
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 *v21; // r14
  __int64 *v22; // rax
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  __m128i v25; // xmm0
  unsigned __int64 v26; // rcx
  __int64 *v27; // rdx
  _QWORD *v28; // rcx
  __int64 v29; // rax
  _QWORD *v30; // r13
  _QWORD *v31; // r15
  _QWORD *v32; // rdi
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  int v38; // r13d
  _QWORD *v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // [rsp+0h] [rbp-D8h]
  size_t v42; // [rsp+0h] [rbp-D8h]
  _QWORD *v43; // [rsp+0h] [rbp-D8h]
  __int64 *v44; // [rsp+8h] [rbp-D0h]
  _QWORD *v45; // [rsp+10h] [rbp-C8h]
  void *v46; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v47; // [rsp+28h] [rbp-B0h]
  __m128i v48; // [rsp+30h] [rbp-A8h] BYREF
  void *v49; // [rsp+40h] [rbp-98h] BYREF
  size_t v50; // [rsp+48h] [rbp-90h]
  __m128i v51; // [rsp+50h] [rbp-88h] BYREF
  void *src; // [rsp+60h] [rbp-78h]
  size_t n; // [rsp+68h] [rbp-70h]
  __m128i v54; // [rsp+70h] [rbp-68h] BYREF
  void *v55; // [rsp+80h] [rbp-58h] BYREF
  __int64 v56; // [rsp+88h] [rbp-50h]
  __m128i v57[4]; // [rsp+90h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(__tls_get_addr(&stru_2C77838) + 304);
  if ( v6 )
  {
    v46 = &v48;
    sub_224A880(&v46, a1, (__int64)&a1[a2]);
    v49 = &v51;
    sub_224A880(&v49, a3, (__int64)&a3[a4]);
    v7 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&v49);
    v55 = v57;
    if ( v46 == &v48 )
    {
      v57[0] = _mm_load_si128(&v48);
    }
    else
    {
      v55 = v46;
      v57[0].m128i_i64[0] = v48.m128i_i64[0];
    }
    v8 = v47;
    v47 = 0;
    v48.m128i_i8[0] = 0;
    v56 = v8;
    v46 = &v48;
    src = &v54;
    if ( v49 == &v51 )
    {
      v54 = _mm_load_si128(&v51);
    }
    else
    {
      src = v49;
      v54.m128i_i64[0] = v51.m128i_i64[0];
    }
    v9 = v50;
    v41 = v7;
    v50 = 0;
    n = v9;
    v49 = &v51;
    v51.m128i_i8[0] = 0;
    v10 = operator new(0x98u);
    *(_QWORD *)(v10 + 8) = 0;
    v11 = v10;
    v10 += 32;
    *(_QWORD *)(v10 - 32) = v41;
    *(_QWORD *)(v11 + 16) = v10;
    if ( v55 == v57 )
    {
      *(__m128i *)(v11 + 32) = _mm_load_si128(v57);
    }
    else
    {
      *(_QWORD *)(v11 + 16) = v55;
      *(_QWORD *)(v11 + 32) = v57[0].m128i_i64[0];
    }
    v12 = (__m128i *)src;
    v57[0].m128i_i8[0] = 0;
    v13 = n;
    *(_QWORD *)(v11 + 24) = v56;
    v55 = v57;
    *(_QWORD *)(v11 + 80) = v11 + 96;
    v56 = 0;
    *(_OWORD *)(v11 + 64) = 0;
    *(_OWORD *)(v11 + 96) = 0;
    *(_QWORD *)(v11 + 112) = 0;
    *(_QWORD *)(v11 + 48) = v11 + 64;
    *(_QWORD *)(v11 + 56) = 0;
    *(_QWORD *)(v11 + 88) = 0;
    *(_DWORD *)(v11 + 120) = 2;
    if ( v12 == &v54 )
    {
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          *(_BYTE *)(v11 + 64) = v54.m128i_i8[0];
        }
        else
        {
          v42 = v13;
          memcpy((void *)(v11 + 64), v12, v13);
          v12 = (__m128i *)src;
          v13 = v42;
        }
      }
      *(_QWORD *)(v11 + 56) = v13;
      *(_BYTE *)(v11 + v13 + 64) = 0;
    }
    else
    {
      v14 = v54.m128i_i64[0];
      *(_QWORD *)(v11 + 56) = v13;
      src = &v54;
      *(_QWORD *)(v11 + 64) = v14;
      *(_QWORD *)(v11 + 48) = v12;
      v12 = &v54;
    }
    v54.m128i_i8[0] = 0;
    n = 0;
    *(_OWORD *)(v11 + 128) = 0;
    *(_QWORD *)(v11 + 144) = 0;
    if ( v12 != &v54 )
      operator delete(v12);
    if ( v55 != v57 )
      operator delete(v55);
    v15 = *(unsigned int *)(v6 + 8);
    if ( *(_DWORD *)(v6 + 12) <= (unsigned int)v15 )
    {
      v17 = sub_2237400(v6, (void *)(v6 + 16), 0, 8, (unsigned __int64 *)&v55);
      v45 = v17;
      v18 = *(unsigned int *)(v6 + 8);
      v17[v18] = v11;
      v19 = *(_QWORD *)v6;
      v20 = 8 * v18;
      v21 = (__int64 *)(*(_QWORD *)v6 + 8 * v18);
      if ( *(__int64 **)v6 != v21 )
      {
        v22 = *(__int64 **)v6;
        if ( (v19 >= (unsigned __int64)(v17 + 2) || (unsigned __int64)v17 >= v19 + 16)
          && (unsigned __int64)v21 - v19 - 8 > 0x10 )
        {
          v23 = (((unsigned __int64)v21 - v19 - 8) >> 3) + 1;
          v24 = 0;
          do
          {
            v25 = _mm_loadu_si128((const __m128i *)(v19 + v24 * 8));
            *(_OWORD *)(v19 + v24 * 8) = 0;
            *(__m128i *)&v17[v24] = v25;
            v24 += 2;
          }
          while ( 2 * (v23 >> 1) != v24 );
          v26 = v23 & 0xFFFFFFFFFFFFFFFELL;
          v27 = (__int64 *)(v26 * 8 + v19);
          v28 = &v17[v26];
          if ( v23 != (v23 & 0xFFFFFFFFFFFFFFFELL) )
          {
            v29 = *v27;
            *v27 = 0;
            *v28 = v29;
          }
        }
        else
        {
          v39 = v17;
          do
          {
            v40 = *v22;
            *v22++ = 0;
            *v39++ = v40;
          }
          while ( v21 != v22 );
        }
        v21 = (__int64 *)(*(_QWORD *)v6 + v20);
        v44 = *(__int64 **)v6;
        if ( *(__int64 **)v6 != v21 )
        {
          do
          {
            v30 = (_QWORD *)*--v21;
            if ( *v21 )
            {
              v31 = (_QWORD *)v30[16];
              v43 = (_QWORD *)v30[17];
              if ( v43 != v31 )
              {
                do
                {
                  while ( 1 )
                  {
                    v32 = (_QWORD *)v31[10];
                    if ( v32 != v31 + 12 )
                      operator delete(v32);
                    v33 = (_QWORD *)v31[6];
                    if ( v33 != v31 + 8 )
                      operator delete(v33);
                    v34 = (_QWORD *)v31[2];
                    if ( v34 == v31 + 4 )
                      break;
                    operator delete(v34);
                    v31 += 16;
                    if ( v43 == v31 )
                      goto LABEL_44;
                  }
                  v31 += 16;
                }
                while ( v43 != v31 );
LABEL_44:
                v31 = (_QWORD *)v30[16];
              }
              if ( v31 )
                operator delete(v31);
              v35 = (_QWORD *)v30[10];
              if ( v35 != v30 + 12 )
                operator delete(v35);
              v36 = (_QWORD *)v30[6];
              if ( v36 != v30 + 8 )
                operator delete(v36);
              v37 = (_QWORD *)v30[2];
              if ( v37 != v30 + 4 )
                operator delete(v37);
              operator delete(v30, 0x98u);
            }
          }
          while ( v44 != v21 );
          v21 = *(__int64 **)v6;
        }
      }
      v38 = (int)v55;
      if ( (__int64 *)(v6 + 16) != v21 )
        free(v21);
      *(_DWORD *)(v6 + 12) = v38;
      ++*(_DWORD *)(v6 + 8);
      *(_QWORD *)v6 = v45;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v15) = v11;
      *(_DWORD *)(v6 + 8) = v15 + 1;
    }
    if ( v49 != &v51 )
      operator delete(v49);
    v6 = *(_QWORD *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8) - 8);
    if ( v46 != &v48 )
      operator delete(v46);
  }
  return v6;
}

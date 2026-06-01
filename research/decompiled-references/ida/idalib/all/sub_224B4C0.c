__int64 __fastcall sub_224B4C0(_BYTE *a1, __int64 a2, void (__fastcall *a3)(void **, __int64), __int64 a4)
{
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v18; // r11
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 *v22; // r14
  __int64 *v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __m128i v26; // xmm0
  unsigned __int64 v27; // rcx
  __int64 *v28; // rdx
  _QWORD *v29; // rcx
  __int64 v30; // rax
  _QWORD *v31; // r13
  _QWORD *v32; // r15
  _QWORD *v33; // rdi
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD *v36; // rdi
  _QWORD *v37; // rdi
  _QWORD *v38; // rdi
  int v39; // r13d
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // [rsp+0h] [rbp-138h]
  _QWORD *v43; // [rsp+0h] [rbp-138h]
  __int64 *v44; // [rsp+8h] [rbp-130h]
  _QWORD *v45; // [rsp+10h] [rbp-128h]
  void *v46; // [rsp+20h] [rbp-118h] BYREF
  __int64 v47; // [rsp+28h] [rbp-110h]
  __m128i v48; // [rsp+30h] [rbp-108h] BYREF
  __m128i *v49; // [rsp+40h] [rbp-F8h]
  __int64 v50; // [rsp+48h] [rbp-F0h]
  __m128i v51; // [rsp+50h] [rbp-E8h] BYREF
  void *v52; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+68h] [rbp-D0h]
  __m128i v54; // [rsp+70h] [rbp-C8h] BYREF
  void *v55; // [rsp+80h] [rbp-B8h]
  __int64 v56; // [rsp+88h] [rbp-B0h]
  __m128i v57; // [rsp+90h] [rbp-A8h] BYREF
  int v58; // [rsp+A0h] [rbp-98h]
  __m128i *v59; // [rsp+B0h] [rbp-88h] BYREF
  __int64 v60; // [rsp+B8h] [rbp-80h]
  __m128i v61; // [rsp+C0h] [rbp-78h] BYREF
  __m128i *v62; // [rsp+D0h] [rbp-68h]
  __int64 v63; // [rsp+D8h] [rbp-60h]
  __m128i v64; // [rsp+E0h] [rbp-58h] BYREF
  int v65; // [rsp+F0h] [rbp-48h]

  v6 = *(_QWORD *)(__tls_get_addr(&stru_2C77838) + 304);
  if ( v6 )
  {
    v46 = &v48;
    sub_224A880(&v46, a1, (__int64)&a1[a2]);
    a3(&v52, a4);
    v7 = std::chrono::_V2::steady_clock::now((std::chrono::_V2::steady_clock *)&v52);
    v49 = &v51;
    if ( v46 == &v48 )
    {
      v51 = _mm_load_si128(&v48);
    }
    else
    {
      v49 = (__m128i *)v46;
      v51.m128i_i64[0] = v48.m128i_i64[0];
    }
    v8 = v47;
    v48.m128i_i8[0] = 0;
    v47 = 0;
    v50 = v8;
    v46 = &v48;
    v59 = &v61;
    if ( v52 == &v54 )
    {
      v61 = _mm_load_si128(&v54);
    }
    else
    {
      v59 = (__m128i *)v52;
      v61.m128i_i64[0] = v54.m128i_i64[0];
    }
    v9 = v53;
    v54.m128i_i8[0] = 0;
    v53 = 0;
    v60 = v9;
    v52 = &v54;
    v62 = &v64;
    if ( v55 == &v57 )
    {
      v64 = _mm_load_si128(&v57);
    }
    else
    {
      v62 = (__m128i *)v55;
      v64.m128i_i64[0] = v57.m128i_i64[0];
    }
    v10 = v56;
    v42 = v7;
    v56 = 0;
    v63 = v10;
    v55 = &v57;
    v57.m128i_i8[0] = 0;
    v65 = v58;
    v11 = operator new(0x98u);
    *(_QWORD *)(v11 + 8) = 0;
    v12 = v11;
    v11 += 32;
    *(_QWORD *)(v11 - 32) = v42;
    *(_QWORD *)(v12 + 16) = v11;
    if ( v49 == &v51 )
    {
      *(__m128i *)(v12 + 32) = _mm_load_si128(&v51);
    }
    else
    {
      *(_QWORD *)(v12 + 16) = v49;
      *(_QWORD *)(v12 + 32) = v51.m128i_i64[0];
    }
    v13 = v50;
    v50 = 0;
    v49 = &v51;
    *(_QWORD *)(v12 + 24) = v13;
    *(_QWORD *)(v12 + 48) = v12 + 64;
    v51.m128i_i8[0] = 0;
    if ( v59 == &v61 )
    {
      *(__m128i *)(v12 + 64) = _mm_load_si128(&v61);
    }
    else
    {
      *(_QWORD *)(v12 + 48) = v59;
      *(_QWORD *)(v12 + 64) = v61.m128i_i64[0];
    }
    v14 = v60;
    v60 = 0;
    v61.m128i_i8[0] = 0;
    *(_QWORD *)(v12 + 56) = v14;
    v59 = &v61;
    *(_QWORD *)(v12 + 80) = v12 + 96;
    if ( v62 == &v64 )
    {
      *(__m128i *)(v12 + 96) = _mm_load_si128(&v64);
    }
    else
    {
      *(_QWORD *)(v12 + 80) = v62;
      *(_QWORD *)(v12 + 96) = v64.m128i_i64[0];
    }
    v15 = v63;
    *(_DWORD *)(v12 + 120) = 0;
    *(_OWORD *)(v12 + 128) = 0;
    *(_QWORD *)(v12 + 88) = v15;
    LODWORD(v15) = v65;
    *(_QWORD *)(v12 + 144) = 0;
    *(_DWORD *)(v12 + 112) = v15;
    v16 = *(unsigned int *)(v6 + 8);
    if ( *(_DWORD *)(v6 + 12) <= (unsigned int)v16 )
    {
      v18 = sub_2237400(v6, (void *)(v6 + 16), 0, 8, (unsigned __int64 *)&v59);
      v45 = v18;
      v19 = *(unsigned int *)(v6 + 8);
      v18[v19] = v12;
      v20 = *(_QWORD *)v6;
      v21 = 8 * v19;
      v22 = (__int64 *)(*(_QWORD *)v6 + 8 * v19);
      if ( *(__int64 **)v6 != v22 )
      {
        v23 = *(__int64 **)v6;
        if ( (v20 >= (unsigned __int64)(v18 + 2) || (unsigned __int64)v18 >= v20 + 16)
          && (unsigned __int64)v22 - v20 - 8 > 0x10 )
        {
          v24 = (((unsigned __int64)v22 - v20 - 8) >> 3) + 1;
          v25 = 0;
          do
          {
            v26 = _mm_loadu_si128((const __m128i *)(v20 + v25 * 8));
            *(_OWORD *)(v20 + v25 * 8) = 0;
            *(__m128i *)&v18[v25] = v26;
            v25 += 2;
          }
          while ( 2 * (v24 >> 1) != v25 );
          v27 = v24 & 0xFFFFFFFFFFFFFFFELL;
          v28 = (__int64 *)(v27 * 8 + v20);
          v29 = &v18[v27];
          if ( v24 != (v24 & 0xFFFFFFFFFFFFFFFELL) )
          {
            v30 = *v28;
            *v28 = 0;
            *v29 = v30;
          }
        }
        else
        {
          v40 = v18;
          do
          {
            v41 = *v23;
            *v23++ = 0;
            *v40++ = v41;
          }
          while ( v22 != v23 );
        }
        v22 = (__int64 *)(*(_QWORD *)v6 + v21);
        v44 = *(__int64 **)v6;
        if ( *(__int64 **)v6 != v22 )
        {
          do
          {
            v31 = (_QWORD *)*--v22;
            if ( *v22 )
            {
              v32 = (_QWORD *)v31[16];
              v43 = (_QWORD *)v31[17];
              if ( v43 != v32 )
              {
                do
                {
                  while ( 1 )
                  {
                    v33 = (_QWORD *)v32[10];
                    if ( v33 != v32 + 12 )
                      operator delete(v33);
                    v34 = (_QWORD *)v32[6];
                    if ( v34 != v32 + 8 )
                      operator delete(v34);
                    v35 = (_QWORD *)v32[2];
                    if ( v35 == v32 + 4 )
                      break;
                    operator delete(v35);
                    v32 += 16;
                    if ( v43 == v32 )
                      goto LABEL_45;
                  }
                  v32 += 16;
                }
                while ( v43 != v32 );
LABEL_45:
                v32 = (_QWORD *)v31[16];
              }
              if ( v32 )
                operator delete(v32);
              v36 = (_QWORD *)v31[10];
              if ( v36 != v31 + 12 )
                operator delete(v36);
              v37 = (_QWORD *)v31[6];
              if ( v37 != v31 + 8 )
                operator delete(v37);
              v38 = (_QWORD *)v31[2];
              if ( v38 != v31 + 4 )
                operator delete(v38);
              operator delete(v31, 0x98u);
            }
          }
          while ( v44 != v22 );
          v22 = *(__int64 **)v6;
        }
      }
      v39 = (int)v59;
      if ( (__int64 *)(v6 + 16) != v22 )
        free(v22);
      *(_DWORD *)(v6 + 12) = v39;
      ++*(_DWORD *)(v6 + 8);
      *(_QWORD *)v6 = v45;
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v6 + 8 * v16) = v12;
      *(_DWORD *)(v6 + 8) = v16 + 1;
    }
    if ( v55 != &v57 )
      operator delete(v55);
    if ( v52 != &v54 )
      operator delete(v52);
    v6 = *(_QWORD *)(*(_QWORD *)v6 + 8LL * *(unsigned int *)(v6 + 8) - 8);
    if ( v46 != &v48 )
      operator delete(v46);
  }
  return v6;
}

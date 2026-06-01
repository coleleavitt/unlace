void __fastcall sub_1012390(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  size_t v4; // r12
  size_t v5; // rbp
  size_t v6; // rdx
  int v7; // eax
  __int64 v8; // rax
  __m128i v9; // xmm3
  __m128i v10; // xmm4
  void *v11; // rdx
  __int64 v12; // rax
  size_t v13; // rdx
  void *v14; // rdx
  size_t v15; // rdx
  int v16; // eax
  __int64 v17; // r12
  __int64 v18; // rbp
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rax
  _BYTE *v22; // rax
  const void *v23; // rsi
  _BYTE *v24; // rdi
  __int64 v25; // rdx
  _BYTE *v26; // rax
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rax
  __m128i v30; // xmm2
  __int64 v31; // r8
  _BYTE *v32; // rdi
  size_t v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  size_t v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __m128i v39; // xmm5
  __m128i v40; // xmm6
  __m128i *v41; // rdi
  __m128i *v42; // rax
  size_t v43; // rdx
  __int64 v44; // rcx
  __m128i *v45; // rdi
  __int64 v46; // rdx
  void **v47; // r14
  void **v48; // rbp
  size_t v49; // rdx
  size_t v50; // rdx
  __int64 v51; // rdi
  size_t v52; // rdx
  __int64 v53; // rdi
  __int64 v55; // [rsp+10h] [rbp-140h] BYREF
  __m128i v56; // [rsp+18h] [rbp-138h] BYREF
  __int64 v57; // [rsp+28h] [rbp-128h]
  __m128i v58; // [rsp+30h] [rbp-120h] BYREF
  void *v59; // [rsp+40h] [rbp-110h]
  size_t n; // [rsp+48h] [rbp-108h]
  __m128i v61; // [rsp+50h] [rbp-100h] BYREF
  __int64 v62; // [rsp+60h] [rbp-F0h]
  void *v63; // [rsp+68h] [rbp-E8h]
  size_t v64; // [rsp+70h] [rbp-E0h]
  __m128i v65; // [rsp+78h] [rbp-D8h] BYREF
  void **v66; // [rsp+88h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+90h] [rbp-C0h]
  _BYTE v68[184]; // [rsp+98h] [rbp-B8h] BYREF

  if ( a1 != a2 && a2 != a1 + 256 )
  {
    v2 = a1 + 256;
    do
    {
      v4 = *(_QWORD *)(v2 + 8);
      v5 = *(_QWORD *)(a1 + 8);
      v6 = v5;
      if ( v4 <= v5 )
        v6 = *(_QWORD *)(v2 + 8);
      if ( v6 && (v7 = memcmp(*(const void **)v2, *(const void **)a1, v6)) != 0 )
      {
        if ( v7 < 0 )
          goto LABEL_10;
      }
      else if ( v4 != v5 && v4 < v5 )
      {
LABEL_10:
        v8 = *(_QWORD *)(v2 + 16);
        v9 = _mm_loadu_si128((const __m128i *)v2);
        v59 = &v61;
        v10 = _mm_loadu_si128((const __m128i *)(v2 + 24));
        v11 = *(void **)(v2 + 40);
        v57 = v8;
        v56 = v9;
        v58 = v10;
        if ( v11 == (void *)(v2 + 56) )
        {
          v61 = _mm_loadu_si128((const __m128i *)(v2 + 56));
        }
        else
        {
          v59 = v11;
          v61.m128i_i64[0] = *(_QWORD *)(v2 + 56);
        }
        *(_QWORD *)(v2 + 40) = v2 + 56;
        v12 = *(_QWORD *)(v2 + 72);
        v13 = *(_QWORD *)(v2 + 48);
        *(_BYTE *)(v2 + 56) = 0;
        v62 = v12;
        n = v13;
        v14 = *(void **)(v2 + 80);
        v63 = &v65;
        *(_QWORD *)(v2 + 48) = 0;
        if ( (void *)(v2 + 96) == v14 )
        {
          v65 = _mm_loadu_si128((const __m128i *)(v2 + 96));
        }
        else
        {
          v63 = v14;
          v65.m128i_i64[0] = *(_QWORD *)(v2 + 96);
        }
        *(_QWORD *)(v2 + 80) = v2 + 96;
        v15 = *(_QWORD *)(v2 + 88);
        v66 = (void **)v68;
        v67 = 0x400000000LL;
        v16 = *(_DWORD *)(v2 + 120);
        v64 = v15;
        *(_QWORD *)(v2 + 88) = 0;
        *(_BYTE *)(v2 + 96) = 0;
        if ( v16 )
          sub_CEFDD0((__int64)&v66, v2 + 112);
        v17 = v2 + 256;
        v18 = (v2 - a1) >> 8;
        if ( v2 - a1 > 0 )
        {
          v19 = v2 - 200;
          do
          {
            v29 = *(_QWORD *)(v19 - 40);
            v30 = _mm_loadu_si128((const __m128i *)(v19 - 32));
            v31 = *(_QWORD *)(v19 - 16);
            *(__m128i *)(v19 + 200) = _mm_loadu_si128((const __m128i *)(v19 - 56));
            v32 = *(_BYTE **)(v19 + 240);
            *(_QWORD *)(v19 + 216) = v29;
            *(__m128i *)(v19 + 224) = v30;
            if ( v19 == v31 )
            {
              v33 = *(_QWORD *)(v19 - 8);
              if ( v33 )
              {
                if ( v33 == 1 )
                {
                  *v32 = *(_BYTE *)v19;
                }
                else
                {
                  v55 = v31;
                  memcpy(v32, (const void *)v19, v33);
                  v31 = v55;
                }
              }
              v34 = *(_QWORD *)(v31 - 8);
              v35 = *(_QWORD *)(v31 + 240);
              *(_QWORD *)(v31 + 248) = v34;
              *(_BYTE *)(v35 + v34) = 0;
            }
            else
            {
              if ( v32 == (_BYTE *)(v19 + 256) )
              {
                v37 = *(_QWORD *)(v19 - 8);
                *(_QWORD *)(v19 + 240) = v31;
                *(_QWORD *)(v19 + 248) = v37;
                *(_QWORD *)(v19 + 256) = *(_QWORD *)v19;
              }
              else
              {
                v20 = *(_QWORD *)(v19 - 8);
                v21 = *(_QWORD *)(v19 + 256);
                *(_QWORD *)(v19 + 240) = v31;
                *(_QWORD *)(v19 + 248) = v20;
                *(_QWORD *)(v19 + 256) = *(_QWORD *)v19;
                if ( v32 )
                {
                  *(_QWORD *)(v19 - 16) = v32;
                  *(_QWORD *)v19 = v21;
                  goto LABEL_21;
                }
              }
              *(_QWORD *)(v19 - 16) = v19;
            }
LABEL_21:
            v22 = *(_BYTE **)(v19 - 16);
            *(_QWORD *)(v19 - 8) = 0;
            *v22 = 0;
            v23 = *(const void **)(v19 + 24);
            v24 = *(_BYTE **)(v19 + 280);
            *(_QWORD *)(v19 + 272) = *(_QWORD *)(v19 + 16);
            if ( v23 == (const void *)(v19 + 40) )
            {
              v36 = *(_QWORD *)(v19 + 32);
              if ( v36 )
              {
                if ( v36 == 1 )
                  *v24 = *(_BYTE *)(v19 + 40);
                else
                  memcpy(v24, v23, v36);
                v24 = *(_BYTE **)(v19 + 280);
                v36 = *(_QWORD *)(v19 + 32);
              }
              *(_QWORD *)(v19 + 288) = v36;
              v24[v36] = 0;
              goto LABEL_25;
            }
            if ( v24 == (_BYTE *)(v19 + 296) )
            {
              v38 = *(_QWORD *)(v19 + 32);
              *(_QWORD *)(v19 + 280) = v23;
              *(_QWORD *)(v19 + 288) = v38;
              *(_QWORD *)(v19 + 296) = *(_QWORD *)(v19 + 40);
LABEL_39:
              *(_QWORD *)(v19 + 24) = v19 + 40;
              goto LABEL_25;
            }
            *(_QWORD *)(v19 + 280) = v23;
            v25 = *(_QWORD *)(v19 + 296);
            *(_QWORD *)(v19 + 288) = *(_QWORD *)(v19 + 32);
            *(_QWORD *)(v19 + 296) = *(_QWORD *)(v19 + 40);
            if ( !v24 )
              goto LABEL_39;
            *(_QWORD *)(v19 + 24) = v24;
            *(_QWORD *)(v19 + 40) = v25;
LABEL_25:
            v26 = *(_BYTE **)(v19 + 24);
            *(_QWORD *)(v19 + 32) = 0;
            v27 = v19 + 56;
            v28 = v19 + 312;
            v19 -= 256;
            *v26 = 0;
            sub_CEFDD0(v28, v27);
            --v18;
          }
          while ( v18 );
        }
        v39 = _mm_load_si128(&v56);
        v40 = _mm_loadu_si128(&v58);
        v41 = *(__m128i **)(a1 + 40);
        *(_QWORD *)(a1 + 16) = v57;
        v42 = (__m128i *)v59;
        *(__m128i *)a1 = v39;
        v43 = n;
        *(__m128i *)(a1 + 24) = v40;
        if ( v42 == &v61 )
        {
          if ( v43 )
          {
            if ( v43 == 1 )
            {
              v41->m128i_i8[0] = v61.m128i_i8[0];
              v52 = n;
              v53 = *(_QWORD *)(a1 + 40);
              *(_QWORD *)(a1 + 48) = n;
              *(_BYTE *)(v53 + v52) = 0;
              v41 = (__m128i *)v59;
              goto LABEL_48;
            }
            memcpy(v41, &v61, v43);
            v43 = n;
            v41 = *(__m128i **)(a1 + 40);
          }
          *(_QWORD *)(a1 + 48) = v43;
          v41->m128i_i8[v43] = 0;
          v41 = (__m128i *)v59;
          goto LABEL_48;
        }
        if ( v41 == (__m128i *)(a1 + 56) )
        {
          v55 = v61.m128i_i64[0];
          *(_QWORD *)(a1 + 40) = v42;
          *(__m128 *)(a1 + 48) = _mm_loadh_ps((const double *)&v55);
        }
        else
        {
          v55 = v61.m128i_i64[0];
          v44 = *(_QWORD *)(a1 + 56);
          *(_QWORD *)(a1 + 40) = v42;
          *(__m128 *)(a1 + 48) = _mm_loadh_ps((const double *)&v55);
          if ( v41 )
          {
            v59 = v41;
            v61.m128i_i64[0] = v44;
            goto LABEL_48;
          }
        }
        v59 = &v61;
        v41 = &v61;
LABEL_48:
        n = 0;
        v41->m128i_i8[0] = 0;
        v45 = *(__m128i **)(a1 + 80);
        *(_QWORD *)(a1 + 72) = v62;
        if ( v63 != &v65 )
        {
          if ( v45 == (__m128i *)(a1 + 96) )
          {
            v55 = v65.m128i_i64[0];
            *(_QWORD *)(a1 + 80) = v63;
            *(__m128 *)(a1 + 88) = _mm_loadh_ps((const double *)&v55);
          }
          else
          {
            v55 = v65.m128i_i64[0];
            v46 = *(_QWORD *)(a1 + 96);
            *(_QWORD *)(a1 + 80) = v63;
            *(__m128 *)(a1 + 88) = _mm_loadh_ps((const double *)&v55);
            if ( v45 )
            {
              v63 = v45;
              v65.m128i_i64[0] = v46;
              goto LABEL_52;
            }
          }
          v63 = &v65;
          v45 = &v65;
          goto LABEL_52;
        }
        v49 = v64;
        if ( v64 )
        {
          if ( v64 == 1 )
          {
            v45->m128i_i8[0] = v65.m128i_i8[0];
            v50 = v64;
            v51 = *(_QWORD *)(a1 + 80);
            *(_QWORD *)(a1 + 88) = v64;
            *(_BYTE *)(v51 + v50) = 0;
            v45 = (__m128i *)v63;
            goto LABEL_52;
          }
          memcpy(v45, &v65, v64);
          v49 = v64;
          v45 = *(__m128i **)(a1 + 80);
        }
        *(_QWORD *)(a1 + 88) = v49;
        v45->m128i_i8[v49] = 0;
        v45 = (__m128i *)v63;
LABEL_52:
        v64 = 0;
        v45->m128i_i8[0] = 0;
        sub_CEFDD0(a1 + 112, (__int64)&v66);
        v47 = v66;
        v48 = &v66[4 * (unsigned int)v67];
        if ( v66 != v48 )
        {
          do
          {
            while ( 1 )
            {
              v48 -= 4;
              if ( *v48 == v48 + 2 )
                break;
              operator delete(*v48);
              if ( v47 == v48 )
                goto LABEL_55;
            }
          }
          while ( v47 != v48 );
LABEL_55:
          v48 = v66;
        }
        if ( v48 != (void **)v68 )
          free(v48);
        if ( v63 != &v65 )
          operator delete(v63);
        if ( v59 != &v61 )
          operator delete(v59);
        goto LABEL_42;
      }
      v17 = v2 + 256;
      sub_1011D50(v2);
LABEL_42:
      v2 = v17;
    }
    while ( a2 != v17 );
  }
}

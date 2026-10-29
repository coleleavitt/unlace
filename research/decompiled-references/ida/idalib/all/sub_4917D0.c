unsigned __int64 __fastcall sub_4917D0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // rdx
  unsigned __int64 *v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r12
  unsigned __int64 v14; // rsi
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i *v17; // rax
  __int64 v18; // r14
  __int64 v19; // r13
  __m128i v20; // xmm2
  __m128i v21; // xmm0
  __int64 v22; // rcx
  __m128i v23; // xmm0
  void *v24; // rdi
  __int64 v25; // rcx
  __m128i v26; // xmm0
  void *v27; // rdi
  __m128i v28; // xmm6
  void *v29; // rdi
  __m128i v30; // xmm7
  void *v31; // rdi
  __m128i *v32; // rax
  __m128i v33; // xmm2
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  void *v36; // r12
  void *v37; // rbp
  __m128i v38; // xmm5
  __m128i v39; // xmm6
  __m128i v40; // xmm4
  __int64 v41; // r14
  __int16 v42; // r13
  __m128i v43; // xmm0
  __int64 v44; // rax
  __m128i v45; // xmm0
  void *v46; // rdi
  __int64 v47; // rax
  __m128i v48; // xmm0
  void *v49; // rdi
  __m128i v50; // xmm4
  __int64 v51; // rax
  __int64 v52; // rcx
  __m128i v53; // xmm5
  __m128i v54; // xmm6
  void *v55; // rbp
  unsigned __int64 v57; // rdi
  __m128i v58; // [rsp+0h] [rbp-108h] BYREF
  __m128i v59; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v60; // [rsp+20h] [rbp-E8h] BYREF
  __m128i v61; // [rsp+30h] [rbp-D8h] BYREF
  __m128i v62; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v63; // [rsp+50h] [rbp-B8h] BYREF
  __m128i *v64; // [rsp+60h] [rbp-A8h]
  __int64 v65; // [rsp+68h] [rbp-A0h]
  __m128i v66; // [rsp+70h] [rbp-98h] BYREF
  void *v67; // [rsp+80h] [rbp-88h]
  __m128i v68; // [rsp+88h] [rbp-80h]
  void *ptr; // [rsp+98h] [rbp-70h]
  __m128i v70; // [rsp+A0h] [rbp-68h]
  __int64 v71; // [rsp+B0h] [rbp-58h]
  __int16 v72; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v73; // [rsp+C8h] [rbp-40h]

  v65 = a3;
  v73 = __readfsqword(0x28u);
  v3 = a2 - a1;
  if ( (__int64)(a2 - a1) > 1280 )
  {
    v5 = a2;
    while ( v65 )
    {
      --v65;
      v6 = a1 + 80;
      v7 = 5 * ((__int64)(0xCCCCCCCCCCCCCCCDLL * (v3 >> 4)) >> 1);
      v8 = *(_QWORD *)(a1 + 80);
      v9 = (unsigned __int64 *)(a1 + 16 * v7);
      v10 = *v9;
      if ( *v9 >= v8 )
      {
        if ( v8 != v10 )
        {
          v57 = *(_QWORD *)(v5 - 80);
          if ( v57 >= v10 )
            goto LABEL_52;
          if ( v57 < v8 )
            goto LABEL_6;
          if ( v57 != v8 )
            goto LABEL_50;
LABEL_49:
          if ( *(_QWORD *)(a1 + 88) < *(_QWORD *)(v5 - 72) )
            goto LABEL_50;
          goto LABEL_6;
        }
        if ( *(_QWORD *)(a1 + 88) < v9[1] )
        {
          v57 = *(_QWORD *)(v5 - 80);
          if ( v57 < v8 )
            goto LABEL_6;
LABEL_52:
          if ( v57 != v10 || v9[1] < *(_QWORD *)(v5 - 72) )
          {
LABEL_60:
            sub_491650(a1, (__int64)v9);
            goto LABEL_7;
          }
          if ( v57 != v8 )
            goto LABEL_50;
          goto LABEL_49;
        }
        v11 = *(_QWORD *)(v5 - 80);
        if ( v11 < v8 )
          goto LABEL_60;
      }
      else
      {
        v11 = *(_QWORD *)(v5 - 80);
        if ( v11 < v8 )
          goto LABEL_57;
      }
      if ( v8 == v11 && *(_QWORD *)(a1 + 88) >= *(_QWORD *)(v5 - 72) )
      {
LABEL_57:
        if ( v11 < v10 || v10 == v11 && v9[1] >= *(_QWORD *)(v5 - 72) )
          goto LABEL_60;
LABEL_50:
        sub_491650(a1, v5 - 80);
        goto LABEL_7;
      }
LABEL_6:
      sub_491650(a1, a1 + 80);
LABEL_7:
      v12 = v5;
      while ( 1 )
      {
        v34 = *(_QWORD *)v6;
        v35 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 >= *(_QWORD *)v6 )
        {
          while ( v34 < v35 || *(_QWORD *)(v6 + 8) < *(_QWORD *)(a1 + 8) )
          {
            v34 = *(_QWORD *)(v6 + 80);
            v6 += 80LL;
            if ( v35 < v34 )
            {
              v13 = v12 - 80;
              v14 = *(_QWORD *)(v12 - 80);
              if ( v14 >= v35 )
                goto LABEL_24;
              goto LABEL_9;
            }
          }
        }
        v13 = v12 - 80;
        v14 = *(_QWORD *)(v12 - 80);
        if ( v14 >= v35 )
        {
LABEL_24:
          while ( v35 < v14 || *(_QWORD *)(a1 + 8) < *(_QWORD *)(v13 + 8) )
          {
            v14 = *(_QWORD *)(v13 - 80);
            v13 -= 80LL;
            if ( v14 < v35 )
            {
              if ( v6 < v13 )
                goto LABEL_10;
              goto LABEL_28;
            }
          }
        }
LABEL_9:
        if ( v6 >= v13 )
          break;
LABEL_10:
        v15 = _mm_loadu_si128((const __m128i *)(v6 + 24));
        v16 = _mm_loadu_si128((const __m128i *)(v6 + 48));
        *(_OWORD *)(v6 + 24) = 0;
        v17 = *(__m128i **)(v6 + 64);
        v18 = *(_QWORD *)(v6 + 16);
        *(_OWORD *)(v6 + 48) = 0;
        v19 = *(_QWORD *)(v6 + 40);
        v20 = _mm_loadu_si128((const __m128i *)v6);
        *(_QWORD *)(v6 + 16) = 0;
        *(_QWORD *)(v6 + 40) = 0;
        v21 = _mm_loadu_si128((const __m128i *)v13);
        v64 = v17;
        LOWORD(v17) = *(_WORD *)(v6 + 72);
        *(__m128i *)v6 = v21;
        v22 = *(_QWORD *)(v13 + 16);
        v23 = _mm_loadu_si128((const __m128i *)(v13 + 24));
        *(_QWORD *)(v13 + 16) = 0;
        *(_OWORD *)(v13 + 24) = 0;
        v24 = *(void **)(v6 + 16);
        v59.m128i_i16[0] = (__int16)v17;
        v58 = v20;
        v61 = v15;
        v60 = v16;
        if ( v24 )
        {
          *(_QWORD *)(v6 + 24) = 0;
          v62.m128i_i64[0] = v22;
          v63 = v23;
          qfree(v24);
          v23 = _mm_load_si128(&v63);
          v22 = v62.m128i_i64[0];
        }
        *(_QWORD *)(v6 + 16) = v22;
        *(__m128i *)(v6 + 24) = v23;
        v25 = *(_QWORD *)(v13 + 40);
        v26 = _mm_loadu_si128((const __m128i *)(v13 + 48));
        *(_QWORD *)(v13 + 40) = 0;
        *(_OWORD *)(v13 + 48) = 0;
        v27 = *(void **)(v6 + 40);
        if ( v27 )
        {
          *(_QWORD *)(v6 + 48) = 0;
          v62.m128i_i64[0] = v25;
          v63 = v26;
          qfree(v27);
          v26 = _mm_load_si128(&v63);
          v25 = v62.m128i_i64[0];
        }
        *(_QWORD *)(v6 + 40) = v25;
        v28 = _mm_load_si128(&v58);
        *(__m128i *)(v6 + 48) = v26;
        *(_QWORD *)(v6 + 64) = *(_QWORD *)(v13 + 64);
        *(_BYTE *)(v6 + 72) = *(_BYTE *)(v13 + 72);
        *(_BYTE *)(v6 + 73) = *(_BYTE *)(v13 + 73);
        v29 = *(void **)(v13 + 16);
        *(__m128i *)v13 = v28;
        if ( v29 )
        {
          *(_QWORD *)(v13 + 24) = 0;
          qfree(v29);
        }
        v30 = _mm_load_si128(&v61);
        v31 = *(void **)(v13 + 40);
        *(_QWORD *)(v13 + 16) = v18;
        *(__m128i *)(v13 + 24) = v30;
        if ( v31 )
        {
          *(_QWORD *)(v13 + 48) = 0;
          qfree(v31);
        }
        v32 = v64;
        *(_QWORD *)(v13 + 40) = v19;
        v6 += 80LL;
        v12 = v13;
        v33 = _mm_load_si128(&v60);
        *(_QWORD *)(v13 + 64) = v32;
        LOWORD(v32) = v59.m128i_i16[0];
        *(__m128i *)(v13 + 48) = v33;
        *(_WORD *)(v13 + 72) = (_WORD)v32;
      }
LABEL_28:
      sub_4917D0(v6, v5, v65);
      v3 = v6 - a1;
      if ( (__int64)(v6 - a1) <= 1280 )
        return v73 - __readfsqword(0x28u);
      v5 = v6;
    }
    sub_4912E0(a1, v5, v5);
    if ( (__int64)(v5 - a1) > 80 )
    {
      v64 = &v66;
      do
      {
        v36 = *(void **)(v5 - 64);
        v37 = *(void **)(v5 - 40);
        v5 -= 80LL;
        *(_QWORD *)(v5 + 16) = 0;
        v38 = _mm_loadu_si128((const __m128i *)(v5 + 24));
        v39 = _mm_loadu_si128((const __m128i *)(v5 + 48));
        *(_OWORD *)(v5 + 24) = 0;
        v40 = _mm_loadu_si128((const __m128i *)v5);
        *(_OWORD *)(v5 + 48) = 0;
        v41 = *(_QWORD *)(v5 + 64);
        v42 = *(_WORD *)(v5 + 72);
        *(_QWORD *)(v5 + 40) = 0;
        v43 = _mm_loadu_si128((const __m128i *)a1);
        v58 = v40;
        *(__m128i *)v5 = v43;
        v44 = *(_QWORD *)(a1 + 16);
        v45 = _mm_loadu_si128((const __m128i *)(a1 + 24));
        *(_QWORD *)(a1 + 16) = 0;
        *(_OWORD *)(a1 + 24) = 0;
        v46 = *(void **)(v5 + 16);
        v59 = v38;
        v60 = v39;
        if ( v46 )
        {
          *(_QWORD *)(v5 + 24) = 0;
          v61.m128i_i64[0] = v44;
          v62 = v45;
          qfree(v46);
          v45 = _mm_load_si128(&v62);
          v44 = v61.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 16) = v44;
        *(__m128i *)(v5 + 24) = v45;
        v47 = *(_QWORD *)(a1 + 40);
        v48 = _mm_loadu_si128((const __m128i *)(a1 + 48));
        *(_QWORD *)(a1 + 40) = 0;
        *(_OWORD *)(a1 + 48) = 0;
        v49 = *(void **)(v5 + 40);
        if ( v49 )
        {
          *(_QWORD *)(v5 + 48) = 0;
          v61.m128i_i64[0] = v47;
          v62 = v48;
          qfree(v49);
          v48 = _mm_load_si128(&v62);
          v47 = v61.m128i_i64[0];
        }
        *(_QWORD *)(v5 + 40) = v47;
        v50 = _mm_load_si128(&v58);
        *(__m128i *)(v5 + 48) = v48;
        v51 = *(_QWORD *)(a1 + 64);
        v52 = (__int64)v64;
        v72 = v42;
        v53 = _mm_load_si128(&v59);
        *(_QWORD *)(v5 + 64) = v51;
        LOBYTE(v51) = *(_BYTE *)(a1 + 72);
        v54 = _mm_load_si128(&v60);
        ptr = v37;
        *(_BYTE *)(v5 + 72) = v51;
        LOBYTE(v51) = *(_BYTE *)(a1 + 73);
        v71 = v41;
        *(_BYTE *)(v5 + 73) = v51;
        v67 = v36;
        v66 = v50;
        v68 = v53;
        v70 = v54;
        sub_483B70(a1, 0, 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v5 - a1) >> 4), v52);
        v55 = v67;
        if ( ptr )
          qfree(ptr);
        if ( v55 )
          qfree(v55);
      }
      while ( (__int64)(v5 - a1) > 80 );
    }
  }
  return v73 - __readfsqword(0x28u);
}

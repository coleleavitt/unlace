__int64 __fastcall sub_2710F0(
        double a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9,
        __int64 a10,
        __int64 a11)
{
  __int64 *v11; // rbx
  unsigned int v12; // eax
  unsigned int v13; // r12d
  __int64 v16; // rax
  __int64 v17; // rax
  char *v18; // rbp
  _QWORD *v19; // r12
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r14
  __int64 v22; // r15
  __int64 v23; // r14
  __int64 i; // r15
  __m128i *v25; // rdx
  __m128i *v26; // rax
  __m128i v27; // xmm0
  __m128i v28; // xmm1
  __int64 v29; // r9
  __int32 v30; // r8d
  unsigned __int64 v31; // rax
  char *v32; // r15
  char *v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // rbx
  void *v39; // rbp
  __m128i v40; // xmm0
  __int64 v41; // rdi
  _QWORD *v42; // rax
  char *v44; // rax
  __int64 v45; // r15
  char *v46; // r13
  char *v47; // r12
  __int64 v48; // rdx
  __int64 v49; // rsi
  __int64 v50; // rax
  void *v51; // rax
  const void *v52; // rsi
  void *v53; // rax
  char *v54; // rsi
  __m128i v55; // [rsp+0h] [rbp-C8h] BYREF
  _QWORD *v56; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v57; // [rsp+18h] [rbp-B0h]
  _QWORD *v58; // [rsp+20h] [rbp-A8h]
  __int64 v59; // [rsp+28h] [rbp-A0h]
  __int64 v60; // [rsp+30h] [rbp-98h]
  __m128i v61; // [rsp+38h] [rbp-90h] BYREF
  __int64 v62; // [rsp+48h] [rbp-80h]
  __int32 v63; // [rsp+54h] [rbp-74h]
  void **p_src; // [rsp+58h] [rbp-70h]
  _BYTE v65[4]; // [rsp+6Ch] [rbp-5Ch] BYREF
  void *src; // [rsp+70h] [rbp-58h] BYREF
  __int128 v67; // [rsp+78h] [rbp-50h]
  unsigned __int64 v68; // [rsp+88h] [rbp-40h]

  v11 = a4;
  v56 = a3;
  v58 = a9;
  v59 = a10;
  v60 = a11;
  v68 = __readfsqword(0x28u);
  LOBYTE(a4) = a6 == 0;
  v12 = (unsigned int)a4 | (a8 == 0);
  LOBYTE(v12) = (a7 == 0) | v12;
  if ( (_BYTE)v12 )
  {
    if ( !under_debugger )
    {
      LOBYTE(a4) = a7 == 0;
      interr(41025, a3, a4, a5, a1);
    }
    BUG();
  }
  v13 = v12;
  *v56 = -1;
  v16 = sub_277DF0();
  v17 = sub_2781A0(v16);
  v18 = *(char **)(a8 + 40);
  v55.m128i_i64[0] = v17;
  if ( v18 )
  {
    v19 = *(_QWORD **)(a7 + 40);
    v20 = *((_QWORD *)v18 + 4);
    src = nullptr;
    v67 = 0;
    v21 = v19[4];
    v57 = v20 + v21;
    if ( v21 )
    {
      v51 = (void *)qalloc_or_throw(32 * v21);
      v52 = (const void *)v19[3];
      *((_QWORD *)&v67 + 1) = v21;
      src = v51;
      memcpy(v51, v52, 32 * v21);
      *(_QWORD *)&v67 = v21;
      v20 = v57;
      if ( v21 >= v57 )
      {
LABEL_5:
        v22 = *((_QWORD *)v18 + 4);
        v23 = *((_QWORD *)v18 + 3);
        p_src = &src;
        for ( i = v23 + 32 * v22; i != v23; v23 += 32 )
        {
          v25 = (__m128i *)((char *)src + 32 * v67);
          if ( src != v25 )
          {
            v26 = (__m128i *)src;
            while ( *(_QWORD *)v23 != v26->m128i_i64[0] )
            {
              v26 += 2;
              if ( v25 == v26 )
                goto LABEL_10;
            }
            if ( v26 != v25 )
              continue;
          }
LABEL_10:
          v27 = _mm_loadl_epi64((const __m128i *)v23);
          v28 = _mm_loadl_epi64((const __m128i *)(v23 + 8));
          v29 = *(_QWORD *)(v23 + 16);
          v30 = *(_DWORD *)(v23 + 24);
          if ( *((_QWORD *)&v67 + 1) < (unsigned __int64)(v67 + 1) )
          {
            v63 = *(_DWORD *)(v23 + 24);
            v62 = v29;
            v61.m128i_i64[1] = v28.m128i_i64[0];
            v61.m128i_i64[0] = v27.m128i_i64[0];
            v44 = (char *)qvector_reserve(p_src, src, v67 + 1, 32);
            v30 = v63;
            src = v44;
            v29 = v62;
            v28 = _mm_loadl_epi64((const __m128i *)&v61.m128i_u64[1]);
            v27 = _mm_loadl_epi64(&v61);
            v25 = (__m128i *)&v44[32 * v67];
          }
          v25[1].m128i_i64[0] = v29;
          *v25 = _mm_unpacklo_epi64(v27, v28);
          *(_QWORD *)&v67 = v67 + 1;
          v25[1].m128i_i32[2] = v30;
        }
        v61.m128i_i64[0] = (__int64)v65;
        sub_277780(v65, v19);
        if ( v60 )
          (*(void (__fastcall **)(_QWORD *, __int64))(*v19 + 32LL))(v19, v60);
        if ( a5[2] < v57 )
        {
          *a5 = qvector_reserve(a5, *a5, v57, 40);
          v31 = v57;
          if ( v11[2] >= v57 )
            goto LABEL_18;
        }
        else
        {
          v31 = v57;
          if ( v11[2] >= v57 )
          {
LABEL_18:
            v32 = (char *)src;
            v33 = (char *)src + 32 * v67;
            if ( v33 != src )
            {
              do
              {
                if ( v55.m128i_i64[0] && *(_QWORD *)v55.m128i_i64[0] == *(_QWORD *)v32 )
                  *v56 = a5[1];
                v35 = a5[1];
                v36 = *a5;
                if ( a5[2] < (unsigned __int64)(v35 + 1) )
                {
                  v37 = qvector_reserve(a5, v36, v35 + 1, 40);
                  *a5 = v37;
                  v35 = a5[1];
                  v36 = v37;
                }
                v34 = v36 + 40 * v35;
                *(_DWORD *)(v34 + 16) = 0;
                *(_DWORD *)(v34 + 36) = 0;
                *(_OWORD *)v34 = 0;
                *(_OWORD *)(v34 + 20) = 0;
                ++a5[1];
                (*(void (__fastcall **)(_QWORD *, __int64, char *, _QWORD))(*v19 + 64LL))(v19, v34, v32, 0);
                v32 += 32;
              }
              while ( v33 != v32 );
            }
            v45 = v61.m128i_i64[0];
            sub_277860(v61.m128i_i64[0]);
            v54 = v18;
            sub_277780(v45, v18);
            if ( v59 )
            {
              v54 = (char *)v59;
              (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v18 + 32LL))(v18, v59);
            }
            v46 = (char *)src;
            v47 = (char *)src + 32 * v67;
            if ( v47 != src )
            {
              do
              {
                v48 = v11[1];
                v49 = *v11;
                if ( v11[2] < (unsigned __int64)(v48 + 1) )
                {
                  v50 = qvector_reserve(v11, v49, v48 + 1, 40);
                  *v11 = v50;
                  v48 = v11[1];
                  v49 = v50;
                }
                v54 = (char *)(v49 + 40 * v48);
                *((_DWORD *)v54 + 4) = 0;
                *((_DWORD *)v54 + 9) = 0;
                *(_OWORD *)v54 = 0;
                *(_OWORD *)(v54 + 20) = 0;
                ++v11[1];
                (*(void (__fastcall **)(char *, char *, char *, _QWORD))(*(_QWORD *)v18 + 64LL))(v18, v54, v46, 0);
                v46 += 32;
              }
              while ( v47 != v46 );
            }
            sub_277860(v61.m128i_i64[0]);
            if ( v58 )
            {
              v38 = v67;
              v39 = nullptr;
              if ( (_QWORD)v67 )
              {
                v53 = (void *)qalloc_or_throw(32 * v67);
                v54 = (char *)src;
                v39 = v53;
                memcpy(v53, src, 32 * v38);
              }
              v40 = _mm_unpacklo_epi64((__m128i)v38, (__m128i)v38);
              v41 = *v58;
              if ( *v58 )
              {
                v58[1] = 0;
                v55 = v40;
                qfree(v41, v54);
                v40 = _mm_load_si128(&v55);
              }
              v42 = v58;
              *v58 = v39;
              *(__m128i *)(v42 + 1) = v40;
            }
            if ( src )
            {
              *(_QWORD *)&v67 = 0;
              qfree(src, v54);
            }
            return 1;
          }
        }
        *v11 = qvector_reserve(v11, *v11, v31, 40);
        goto LABEL_18;
      }
    }
    else if ( !v20 )
    {
      goto LABEL_5;
    }
    src = (void *)qvector_reserve(&src, src, v20, 32);
    goto LABEL_5;
  }
  return v13;
}

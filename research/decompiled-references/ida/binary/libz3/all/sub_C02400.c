__int64 __fastcall sub_C02400(__int64 a1, unsigned int a2, __m128 a3, __int64 a4, __int64 a5, __int64 a6, _DWORD *a7)
{
  char **exception; // r12
  char **v8; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rsi
  char v15; // bp
  unsigned int v16; // edi
  unsigned int v17; // eax
  _DWORD *v18; // rbp
  __int64 v19; // r10
  __int64 v20; // rdx
  unsigned int v21; // r15d
  __int64 v22; // r14
  unsigned int v23; // eax
  __int64 v24; // rsi
  int v25; // eax
  _QWORD *v26; // rsi
  __int64 v27; // rdi
  _DWORD *v28; // r12
  unsigned int v29; // r14d
  __int64 v30; // r15
  unsigned int v31; // eax
  __int64 v32; // rsi
  int v33; // eax
  _QWORD *v34; // rsi
  __m128i v35; // xmm0
  __int64 v36; // rax
  __m128i v37; // xmm0
  unsigned __int64 v38; // rbp
  __int64 *v39; // r12
  __int64 *v40; // r14
  unsigned __int64 v41; // r15
  __int64 v42; // rsi
  bool v43; // zf
  __int64 *v44; // rbp
  unsigned __int64 v45; // r14
  __int64 v46; // rax
  __int64 v47; // rdx
  unsigned int v48; // edi
  __int64 v49; // rsi
  unsigned int v50; // r11d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rsi
  unsigned int v54; // edx
  size_t v55; // rsi
  unsigned int v56; // r12d
  unsigned int *v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 *v60; // rbp
  _QWORD *v61; // rax
  _QWORD *v62; // rax
  char v63; // [rsp+0h] [rbp-B8h]
  __int64 v64; // [rsp+10h] [rbp-A8h]
  unsigned __int64 v65; // [rsp+18h] [rbp-A0h]
  __int64 v66; // [rsp+18h] [rbp-A0h]
  __int64 v67; // [rsp+18h] [rbp-A0h]
  __int64 v68; // [rsp+18h] [rbp-A0h]
  __int64 v69; // [rsp+18h] [rbp-A0h]
  unsigned int v70; // [rsp+20h] [rbp-98h]
  __m128i v71; // [rsp+30h] [rbp-88h] BYREF
  __m128i v72; // [rsp+50h] [rbp-68h] BYREF
  __m128 v73; // [rsp+60h] [rbp-58h]
  int v74; // [rsp+70h] [rbp-48h]
  __int64 v75; // [rsp+78h] [rbp-40h]

  v10 = *(_QWORD *)(a1 + 16);
  v11 = qword_1C7EDB0;
  v12 = *(_QWORD *)(v10 + 8984);
  if ( v12 != qword_1C7EDB0 )
    return 1;
  v15 = 0;
  while ( !*(_BYTE *)(v10 + 2416) && a2 < *(_DWORD *)(a1 + 240) )
  {
    v16 = a2 + 1;
    v63 = sub_C01A00(a1, a2, a3, v11, a5, a6, (int)a7);
    if ( v63 )
    {
      v17 = *(_DWORD *)(a1 + 240);
      if ( v16 < v17 )
      {
        v18 = nullptr;
        v19 = *(_QWORD *)(a1 + 256) + 48LL * *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4LL * (v17 - 1));
        v20 = *(_QWORD *)(v19 + 8);
        v71.m128i_i64[0] = *(_QWORD *)v19;
        if ( v20 )
        {
          v21 = 0;
          do
          {
            if ( v21 >= *(_DWORD *)(v20 - 4) )
              break;
            v22 = *(_QWORD *)(v20 + 8LL * v21);
            if ( v22 )
              ++*(_DWORD *)(v22 + 8);
            if ( v18 )
            {
              v23 = *(v18 - 1);
              if ( v23 == *(v18 - 2) )
              {
                v54 = (3 * v23 + 1) >> 1;
                v55 = 8 * v54 + 8;
                v56 = v54;
                if ( 8 * v23 + 8 >= (unsigned int)v55 || v23 >= v54 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v72.m128i_i64, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v72);
                  sub_233E40((__int64)&v72);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v67 = v19;
                v57 = (unsigned int *)sub_186B300(v18 - 2, v55);
                v58 = v57[1];
                v19 = v67;
                v18 = v57 + 2;
                *v57 = v56;
                LODWORD(v57) = v58;
                v26 = &v18[2 * v58];
                v20 = *(_QWORD *)(v67 + 8);
                v25 = (_DWORD)v57 + 1;
              }
              else
              {
                v24 = v23;
                v25 = v23 + 1;
                v26 = &v18[2 * v24];
              }
            }
            else
            {
              v68 = v19;
              v61 = (_QWORD *)sub_186B270(0x18u);
              v19 = v68;
              v26 = v61 + 1;
              *v61 = 2;
              v25 = 1;
              v18 = v26;
              v20 = *(_QWORD *)(v68 + 8);
            }
            *v26 = v22;
            ++v21;
            *(v18 - 1) = v25;
          }
          while ( v20 );
        }
        v27 = *(_QWORD *)(v19 + 24);
        v28 = nullptr;
        v71.m128i_i64[1] = *(_QWORD *)(v19 + 16);
        if ( v27 )
        {
          v29 = 0;
          do
          {
            if ( v29 >= *(_DWORD *)(v27 - 4) )
              break;
            v30 = *(_QWORD *)(v27 + 8LL * v29);
            if ( v30 )
              ++*(_DWORD *)(v30 + 8);
            if ( v28 )
            {
              v31 = *(v28 - 1);
              if ( v31 == *(v28 - 2) )
              {
                v50 = (3 * v31 + 1) >> 1;
                v51 = 8 * v50 + 8;
                if ( 8 * v31 + 8 >= (unsigned int)v51 || v31 >= v50 )
                {
                  v8 = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v72.m128i_i64, "Overflow encountered when expanding vector");
                  *v8 = (char *)off_1C63128;
                  sub_2333C0(v8 + 1, &v72);
                  sub_233E40((__int64)&v72);
                  __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v70 = (3 * v31 + 1) >> 1;
                v66 = v19;
                v52 = (unsigned int *)sub_186B300(v28 - 2, v51);
                v53 = v52[1];
                v28 = v52 + 2;
                v19 = v66;
                *v52 = v70;
                LODWORD(v52) = v53;
                v34 = &v28[2 * v53];
                v27 = *(_QWORD *)(v66 + 24);
                v33 = (_DWORD)v52 + 1;
              }
              else
              {
                v32 = v31;
                v33 = v31 + 1;
                v34 = &v28[2 * v32];
              }
            }
            else
            {
              v69 = v19;
              v62 = (_QWORD *)sub_186B270(0x18u);
              v19 = v69;
              v34 = v62 + 1;
              *v62 = 2;
              v33 = 1;
              v28 = v34;
              v27 = *(_QWORD *)(v69 + 24);
            }
            *v34 = v30;
            ++v29;
            *(v28 - 1) = v33;
          }
          while ( v27 );
        }
        v35 = _mm_loadl_epi64(&v71);
        v74 = *(_DWORD *)(v19 + 32);
        v36 = *(_QWORD *)(v19 + 40);
        v72 = _mm_unpacklo_epi64(v35, (__m128i)(unsigned __int64)v18);
        v37 = _mm_loadl_epi64((const __m128i *)&v71.m128i_u64[1]);
        v75 = v36;
        a3 = (__m128)_mm_unpacklo_epi64(v37, (__m128i)(unsigned __int64)v28);
        v73 = a3;
        sub_C04220(a1 + 240, a2, &v72);
        v38 = v73.m128_u64[1];
        v39 = (__int64 *)v72.m128i_i64[1];
        v64 = v72.m128i_i64[0];
        if ( v73.m128_u64[1] )
        {
          v40 = (__int64 *)v73.m128_u64[1];
          v41 = v73.m128_u64[1] + 8LL * *(unsigned int *)(v73.m128_u64[1] - 4);
          v65 = v73.m128_u64[0];
          if ( v73.m128_u64[1] < v41 )
          {
            do
            {
              v42 = *v40;
              if ( *v40 )
              {
                v43 = (*(_DWORD *)(v42 + 8))-- == 1;
                if ( v43 )
                  sub_15D7BC0(v65, v42);
              }
              ++v40;
            }
            while ( (unsigned __int64)v40 < v41 );
          }
          sub_186B220((void *)(v38 - 8));
        }
        if ( v39 )
        {
          v44 = v39;
          v45 = (unsigned __int64)&v39[*((unsigned int *)v39 - 1)];
          if ( (unsigned __int64)v39 < v45 )
          {
            do
            {
              v59 = *v44;
              if ( *v44 )
              {
                v43 = (*(_DWORD *)(v59 + 8))-- == 1;
                if ( v43 )
                  sub_15D7BC0(v64, v59);
              }
              ++v44;
            }
            while ( (unsigned __int64)v44 < v45 );
          }
          sub_186B220(v39 - 1);
        }
        v17 = *(_DWORD *)(a1 + 240);
      }
      v46 = v17 - 1;
      a7 = (_DWORD *)(*(_QWORD *)(a1 + 272) + 4 * v46);
      v47 = *(_QWORD *)(a1 + 256);
      if ( v47 )
      {
        v48 = *(_DWORD *)(v47 - 4);
        v49 = v48 - 1;
        if ( *a7 == (_DWORD)v49 && *(_DWORD *)(a1 + 244) < v48 )
        {
          v60 = (__int64 *)(v47 + 48 * v49);
          sub_2334C0(v60 + 2);
          sub_2334C0(v60);
          --*(_DWORD *)(*(_QWORD *)(a1 + 256) - 4LL);
          LODWORD(v46) = *(_DWORD *)(a1 + 240) - 1;
        }
      }
      ++*(_DWORD *)(a1 + 4004);
      v15 = v63;
      v16 = a2;
      *(_DWORD *)(a1 + 240) = v46;
    }
    v10 = *(_QWORD *)(a1 + 16);
    v11 = qword_1C7EDB0;
    v12 = *(_QWORD *)(v10 + 8984);
    if ( qword_1C7EDB0 != v12 )
      return 1;
    a2 = v16;
  }
  if ( v15 || *(_BYTE *)(a1 + 4170) || v12 != v11 )
    return 1;
  else
    return *(unsigned __int8 *)(v10 + 2416);
}


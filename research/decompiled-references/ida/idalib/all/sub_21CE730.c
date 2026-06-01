_QWORD *__fastcall sub_21CE730(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // r13
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  char *v11; // rsi
  char *v12; // rdi
  size_t v13; // r14
  _BYTE *v14; // rax
  size_t v15; // rdx
  _QWORD *v16; // r14
  char *v17; // r15
  _QWORD *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  _QWORD *v21; // rdi
  void (*v22)(void); // rax
  __int64 v23; // rdx
  unsigned __int16 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  char *v28; // rax
  char *v29; // r15
  void *v30; // rdi
  signed __int64 v31; // r8
  char *v32; // rsi
  size_t v33; // rcx
  __int64 *v34; // r15
  __int64 v35; // r14
  signed __int64 v36; // r12
  __int64 v37; // rbx
  unsigned __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // r12
  __int64 v41; // rbp
  char *v42; // rcx
  __m128i v43; // xmm0
  __int64 v44; // r13
  signed __int64 v45; // r13
  char *v46; // rdi
  __m128i src; // [rsp+8h] [rbp-90h] BYREF
  __int64 v48; // [rsp+18h] [rbp-80h]
  __int64 v49; // [rsp+20h] [rbp-78h]
  _QWORD *v50; // [rsp+28h] [rbp-70h]
  __int64 v51; // [rsp+30h] [rbp-68h]
  __int64 v52; // [rsp+38h] [rbp-60h]
  _QWORD *v53; // [rsp+48h] [rbp-50h] BYREF
  __int64 v54; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v55; // [rsp+58h] [rbp-40h]

  v3 = a1;
  v5 = a2;
  v6 = *(_QWORD *)(a2 + 128);
  v54 = 0;
  v55 = 0;
  (*(void (__fastcall **)(_QWORD **, __int64, __int64 *))(*(_QWORD *)v6 + 16LL))(&v53, v6, &v54);
  if ( v53 )
  {
    sub_21CD040(a1, v5, &v53);
  }
  else
  {
    v8 = *(unsigned int *)(v5 + 504);
    *(_DWORD *)(v5 + 504) = v8 + 1;
    v9 = v54 + 80 * v8;
    sub_2017680((char **)a3, (char **)v9);
    if ( a3 != v9 )
    {
      v10 = *(_QWORD *)(v9 + 32);
      v11 = *(char **)(v9 + 24);
      v12 = *(char **)(a3 + 24);
      v13 = v10 - (_QWORD)v11;
      if ( (unsigned __int64)(v10 - (_QWORD)v11) > *(_QWORD *)(a3 + 40) - (_QWORD)v12 )
      {
        v27 = *(_QWORD *)(v9 + 32) - (_QWORD)v11;
        src.m128i_i64[0] = *(_QWORD *)(v9 + 24);
        v28 = (char *)operator new(v27);
        v29 = v28;
        if ( v13 )
          memcpy(v28, (const void *)src.m128i_i64[0], v13);
        v30 = *(void **)(a3 + 24);
        if ( v30 )
          operator delete(v30);
        v12 = &v29[v13];
        *(_QWORD *)(a3 + 24) = v29;
        *(_QWORD *)(a3 + 40) = &v29[v13];
      }
      else
      {
        v14 = *(_BYTE **)(a3 + 32);
        v15 = v14 - v12;
        if ( v13 > v14 - v12 )
        {
          v31 = 0;
          if ( v15 )
          {
            memmove(v12, v11, v15);
            v14 = *(_BYTE **)(a3 + 32);
            v12 = *(char **)(a3 + 24);
            v10 = *(_QWORD *)(v9 + 32);
            v11 = *(char **)(v9 + 24);
            v31 = v14 - v12;
          }
          v32 = &v11[v31];
          v33 = v10 - (_QWORD)v32;
          if ( v33 )
          {
            memmove(v14, v32, v33);
            v12 = (char *)(v13 + *(_QWORD *)(a3 + 24));
          }
          else
          {
            v12 += v13;
          }
        }
        else if ( v13 )
        {
          memmove(v12, v11, *(_QWORD *)(v9 + 32) - (_QWORD)v11);
          v12 = (char *)(v13 + *(_QWORD *)(a3 + 24));
        }
      }
      *(_QWORD *)(a3 + 32) = v12;
    }
    v16 = *(_QWORD **)(v9 + 48);
    v17 = *(char **)(a3 + 48);
    if ( v16 )
    {
      if ( v17 )
      {
        src.m128i_i64[0] = (__int64)(v17 + 72);
        do
        {
          v18 = v16;
          v19 = (__int64)v17;
          v16 += 3;
          v17 += 24;
          sub_21CE3D0(v19, v18);
        }
        while ( (char *)src.m128i_i64[0] != v17 );
      }
      else
      {
        v34 = *(__int64 **)(v9 + 48);
        v49 = v9;
        v48 = operator new(0x48u);
        v35 = v48;
        v50 = v3;
        src.m128i_i64[1] = v48 + 72;
        v51 = v5;
        v52 = a3;
        do
        {
          v36 = v34[1] - *v34;
          v37 = 0;
          *(_OWORD *)v35 = 0;
          *(_QWORD *)(v35 + 16) = 0;
          v38 = 0xAAAAAAAAAAAAAAABLL * (v36 >> 3);
          if ( v38 )
          {
            if ( v38 > 0xAAAAAAAAAAAAAAALL )
LABEL_52:
              std::__throw_bad_alloc();
            v37 = operator new(v36);
          }
          src.m128i_i64[0] = v37;
          v39 = _mm_loadl_epi64(&src);
          *(_QWORD *)(v35 + 16) = v37 + v36;
          *(__m128i *)v35 = _mm_unpacklo_epi64(v39, v39);
          v40 = v34[1];
          if ( v40 != *v34 )
          {
            v41 = *v34;
            do
            {
              v45 = *(_QWORD *)(v41 + 8) - *(_QWORD *)v41;
              *(_QWORD *)(v37 + 16) = 0;
              *(_OWORD *)v37 = 0;
              if ( v45 >> 4 )
              {
                if ( (unsigned __int64)(v45 >> 4) > 0xFFFFFFFFFFFFFFFLL )
                  goto LABEL_52;
                v42 = (char *)operator new(v45);
              }
              else
              {
                v42 = nullptr;
              }
              src.m128i_i64[0] = (__int64)v42;
              v43 = _mm_loadl_epi64(&src);
              *(_QWORD *)(v37 + 16) = &v42[v45];
              *(__m128i *)v37 = _mm_unpacklo_epi64(v43, v43);
              v44 = *(_QWORD *)(v41 + 8) - *(_QWORD *)v41;
              if ( *(_QWORD *)(v41 + 8) != *(_QWORD *)v41 )
                v42 = (char *)memmove(v42, *(const void **)v41, *(_QWORD *)(v41 + 8) - *(_QWORD *)v41);
              v41 += 24;
              v37 += 24;
              *(_QWORD *)(v37 - 16) = &v42[v44];
            }
            while ( v40 != v41 );
          }
          *(_QWORD *)(v35 + 8) = v37;
          v34 += 3;
          v35 += 24;
        }
        while ( src.m128i_i64[1] != v35 );
        a3 = v52;
        v9 = v49;
        v3 = v50;
        v46 = *(char **)(v52 + 48);
        v5 = v51;
        *(_QWORD *)(v52 + 48) = v48;
        if ( v46 )
          sub_21C94C0(v46);
      }
    }
    else
    {
      *(_QWORD *)(a3 + 48) = 0;
      if ( v17 )
        sub_21C94C0(v17);
    }
    v20 = *(_QWORD *)(v9 + 72);
    *(__m128i *)(a3 + 56) = _mm_loadu_si128((const __m128i *)(v9 + 56));
    *(_QWORD *)(a3 + 72) = v20;
    if ( *(unsigned int *)(v5 + 504) >= v55 )
    {
      v21 = *(_QWORD **)(v5 + 128);
      v22 = *(void (**)(void))(*v21 + 32LL);
      if ( (char *)v22 == (char *)sub_21C9810 )
      {
        v23 = v21[3];
        v24 = (unsigned __int16 *)v21[2];
        if ( !v23 )
        {
          v23 = *v24++;
          v21[3] = v23;
        }
        v21[2] = v24 + 4;
        v25 = *((_QWORD *)v24 + 1);
        v21[2] = v24 + 8;
        v26 = (__int64)v24 + *((_QWORD *)v24 + 2) + v25 + 24;
        --v21[4];
        v21[2] = v26;
        v21[3] = v23 - 1;
      }
      else
      {
        v22();
      }
      *(_DWORD *)(v5 + 504) = 0;
    }
    sub_21CCDD0(v3, v5);
  }
  if ( v53 )
    (*(void (__fastcall **)(_QWORD *))(*v53 + 8LL))(v53);
  return v3;
}
